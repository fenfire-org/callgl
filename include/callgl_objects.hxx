/*
callgl.hxx
 *    
 *    Copyright (c) 2003, Janne Kujala and Tuomas J. Lukka
 *    
 *    This file is part of Gzz.
 *    
 *    Gzz is free software; you can redistribute it and/or modify it under
 *    the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *    
 *    Gzz is distributed in the hope that it will be useful, but WITHOUT
 *    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 *    or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
 *    Public License for more details.
 *    
 *    You should have received a copy of the GNU General
 *    Public License along with Gzz; if not, write to the Free
 *    Software Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 *    MA  02111-1307  USA
 *    
 *    
 */
/*
 * Written by Janne Kujala and Tuomas J. Lukka
 */



#ifndef GZZ_CALLGL_OBJECTS_HXX
#define GZZ_CALLGL_OBJECTS_HXX

#include "callgl.hxx"

namespace CallGL {

    /** A simple automatic display list object.
     * Allocates a new display list name when created
     * and deletes the name when destroyed.
     * No assignment or copying is allowed; 
     * use a boost shared_ptr<DisplayList> for proper value semantics.
     */
    class DisplayList {
      DisplayList(const DisplayList&) { }
      void operator=(const DisplayList&) { }
    public:
      GLuint name;
      DisplayList(GLuint name) : name(name) {}
      DisplayList() { name = glGenLists(1); }
      ~DisplayList() { if (name) glDeleteLists(name, 1); }
    };

    /** An instance of CallGL code compiled into a display list.
     * The CallGLCode objects are immutable with value semantics.
     * Example:
     * 		CallGLCode setup("PushMatrix");
     * 		CallGLCode teardown("PopMatrix");
     * 		setup();
     *          //...
     * 		teardown();
     */
    class CallGLCode {
    public:
      CallGLCode() { }
      CallGLCode(const char *source) : source(source) { compile(); }
      std::string getSource() const { return source; }
      void operator () (void) const {
	//cout << "Calling list " << displist->name << "\n";
	if (displist.get()) glCallList(displist->name);  
      }
      GLuint getListName() const { return displist.get() ? displist->name : 0; }

    protected:
      void compile() { 
	displist = boost::shared_ptr<DisplayList>(new DisplayList);
	compileGL(source.c_str(), displist->name);
      }
      std::string source;
      boost::shared_ptr<DisplayList> displist;
    };


#ifdef GL_ARB_vertex_program

    /** A simple automatic NVIDIA program id object.
     * Allocates a new program name when created
     * and deletes the name when destroyed.
     * No assignment or copying is allowed; 
     * use shared_ptr<NVProgID> for proper value semantics.
     */
    class ProgID {
    public:
      GLuint name;
      ProgID(GLuint name) : name(name) {}
      ProgID() { glGenProgramsARB(1, &name); }
      ~ProgID() { glDeleteProgramsARB(1, &name); }
    };

    /** An instance of a GL program (e.g. vertex or fragment program)
     * loaded into the driver.
     * The Program objects are immutable with value semantics.
     * Example:
     * 		NVProg<GL_VERTEX_PROGRAM_NV> code("!!VP1.0 MOV o[HPOS],v[OPOS];END");
     */
    template <GLuint TARGET>
    class Program {
    public:
	Program() { }
	Program(const char *source) : source(source) { compile(); }
	std::string getSource() const { return source; }
	GLuint getProgId() const { return progid.get() ? progid->name : 0; }
	void bind(void) const {
	    glBindProgramNV(TARGET, getProgId());
	}
	void operator () (const float *params) const {
	    glExecuteProgramNV(TARGET, getProgId(), params);
	}
	
    protected:
	void compile() {
	    progid = boost::shared_ptr<ProgID>(new ProgID);
	    loadNVProg(TARGET, progid->name, source);
	}
	std::string source;
	boost::shared_ptr<ProgID> progid;
    };


#ifdef GL_NV_vertex_program
    typedef Program<GL_VERTEX_PROGRAM_NV> NVVertexProgram;
    typedef Program<GL_VERTEX_STATE_PROGRAM_NV> NVVertexStateProgram;
#endif
#ifdef GL_NV_fragment_program
    typedef Program<GL_FRAGMENT_PROGRAM_NV> NVFragmentProgram;
#endif
#ifdef GL_ARB_fragment_program
    typedef Program<GL_FRAGMENT_PROGRAM_ARB> ARBFragmentProgram;
#endif
#ifdef GL_ARB_vertex_program
    typedef Program<GL_VERTEX_PROGRAM_ARB> ARBVertexProgram;
#endif

#endif


}

#endif
