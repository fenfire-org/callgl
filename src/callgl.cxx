/*
callgl.cxx
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

#include <string>
#include <vector>
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "callgl.hxx"

#include <vector>
using std::vector;

#define DBG(cname) if(!cname);else (std::cout << "CallGL: ")

namespace CallGL {
    bool dbg;

    using std::string;
    using std::vector;

    using std::cerr;

    static bool Begin = false;

    int getToken(string tok);
    double getTokenf(string tok);


    /* Understands whitespaces: ' ' and '\t' (tabulator)
     *
     *  string foo = "abcd efg";
     *  string bar = separate(foo);
     *    -> foo = "efg"
     *    -> bar = "abcd"                                        
     *
     *  bar = separate(foo);
     *    -> foo = ""
     *    -> bar = "efg"
     */   
    string separate(string & str) {
        string::size_type position_space = str.find(' ');
        string::size_type position_tab = str.find('\t');
        string first_part;

        if (position_space != string::npos ||
            position_tab != string::npos ) 
        {
            if (position_space < position_tab) {
               first_part = str.substr(0, position_space);
               str = str.substr(position_space + 1, str.length() );
            } else {
               first_part = str.substr(0, position_tab);
               str = str.substr(position_tab + 1, str.length() );
            }
        } else {
            first_part = str; 
            str = "";
        }
        return first_part;
    }



    /* vector<string> v = split("  foo   #  bar ");
     * 0: foo
     * 1: #
     * 2: bar
     */ 
    vector<string> split(string str) {
        string tmp;
        vector<string> v;

        while (str != "") {
            tmp = separate(str);
            if (tmp != "") v.push_back(tmp);
        }
        return v;
    }

    vector<GLfloat> getfv(vector<string> v, unsigned i, int reserve = 0) {
      vector<GLfloat> u;
      u.reserve(reserve);
      for (; i < v.size(); i++)
	u.insert(u.end(), (GLfloat)getTokenf(v[i]));
      return u;
    }

    vector<GLdouble> getdv(vector<string> v, unsigned i, int reserve = 0) {
      vector<GLdouble> u;
      u.reserve(reserve);
      for (; i < v.size(); i++)
	u.insert(u.end(), (GLdouble)getTokenf(v[i]));
      return u;
    }

    template<class Int> vector<Int> getiv(vector<string> v, unsigned i, int reserve = 0) {
      vector<Int> u;
      u.reserve(reserve);
      for (; i < v.size(); i++)
	u.insert(u.end(), (GLint)getToken(v[i]));
      return u;
    }

    bool checkfunc(vector<string> &v, char *func, 
		   unsigned numargs, bool extra_args = false) {
      if (v[0].compare(func) != 0) return false;
      if (v.size()-1 < numargs || 
	  (!extra_args && v.size()-1 > numargs)) {
	cerr << "Illegal number of arguments to " << v[0] << ": expected " 
	     << numargs << ", got " << v.size()-1 << "\n"; 
	for(unsigned i=0; i<v.size(); i++)
	    cerr << v[i] << " ";
	cerr <<"\n";
	return false;
      }
      return true;
    }
  
    bool callGLop(string s) {
        DBG(dbg) << "callGLop(\"" << s << "\")\n";

	// Substring comment out -- if '#' found 
        string::size_type position = s.find('#');
        if (position != string::npos) s = s.substr(0, position);
        
	vector<string> v = split(s);
	
	if (v.size() < 1) return true;

	if (checkfunc(v, "Enable", 1)) {
	  glEnable(getToken(v[1]));
	} else if (checkfunc(v, "Disable", 1)) {
	  glDisable(getToken(v[1]));
	} else if (checkfunc(v, "EnableVertexAttribArray", 1)) {
	  glEnableVertexAttribArrayARB(getToken(v[1]));
	} else if (checkfunc(v, "DisableVertexAttribArray", 1)) {
	  glDisableVertexAttribArrayARB(getToken(v[1]));
	} else if (checkfunc(v, "Hint", 2)) {
	  glHint(getToken(v[1]), getToken(v[2]));
	} else if (checkfunc(v, "ReadBuffer", 1)) {
	  glReadBuffer(getToken(v[1]));
	} else if (checkfunc(v, "DrawBuffer", 1)) {
	  glDrawBuffer(getToken(v[1]));
	} else if (checkfunc(v, "CallList", 1)) {
	  glCallList(getToken(v[1]));
	} else if (checkfunc(v, "MatrixMode", 1)) {
	  glMatrixMode(getToken(v[1]));
	} else if (checkfunc(v, "PushMatrix", 0)) {
	  glPushMatrix();
	} else if (checkfunc(v, "PopMatrix", 0)) {
	  glPopMatrix();
	} else if (checkfunc(v, "LoadIdentity", 0)) {
	  glLoadIdentity();
	} else if (checkfunc(v, "LoadMatrix", 16)) {
	  vector<GLdouble> params = getdv(v, 1, 16);
	  glLoadMatrixd(&params[0]);
	} else if (checkfunc(v, "MultMatrix", 16)) {
	  vector<GLdouble> params = getdv(v, 1, 16);
	  glMultMatrixd(&params[0]);
	} else if (checkfunc(v, "Rotate", 4)) {
	  glRotated(getTokenf(v[1]), getTokenf(v[2]), 
		    getTokenf(v[3]), getTokenf(v[4]));
	} else if (checkfunc(v, "Scale", 3)) {
	  glScaled(getTokenf(v[1]), getTokenf(v[2]), 
		   getTokenf(v[3]));
	} else if (checkfunc(v, "Translate", 3)) {
	  glTranslated(getTokenf(v[1]), getTokenf(v[2]), 
		       getTokenf(v[3]));
	} else if (checkfunc(v, "Ortho", 6)) {
	  glOrtho(getTokenf(v[1]), getTokenf(v[2]), getTokenf(v[3]),
		  getTokenf(v[4]), getTokenf(v[5]), getTokenf(v[6]));
	} else if (checkfunc(v, "Frustum", 6)) {
	  glFrustum(getTokenf(v[1]), getTokenf(v[2]), getTokenf(v[3]),
		    getTokenf(v[4]), getTokenf(v[5]), getTokenf(v[6]));
	} else if (checkfunc(v, "uLookAt", 9)) { // [gl]uLookAt
	  gluLookAt(getTokenf(v[1]), getTokenf(v[2]), getTokenf(v[3]),
		    getTokenf(v[4]), getTokenf(v[5]), getTokenf(v[6]),
		    getTokenf(v[7]), getTokenf(v[8]), getTokenf(v[9]));
	} else if (checkfunc(v, "BindTexture", 2)) {
	  glBindTexture(getToken(v[1]), (GLuint)getToken(v[2]));
	} else if (checkfunc(v, "DeleteTextures", 0, true)) {
	  vector<GLuint> textures = getiv<GLuint>(v, 1);
	  glDeleteTextures(v.size(), &(textures[0]));
	} else if (checkfunc(v, "DepthMask", 1)) {
	  glDepthMask(getToken(v[1]));
	} else if (checkfunc(v, "ColorMask", 4)) {
	  glColorMask(getToken(v[1]),
		      getToken(v[2]),
		      getToken(v[3]),
		      getToken(v[4])
		    );
	} else if (checkfunc(v, "AlphaFunc", 2)) {
	  glAlphaFunc(getToken(v[1]), getTokenf(v[2]));
	} else if (checkfunc(v, "DepthFunc", 1)) {
	  glDepthFunc(getToken(v[1]));
	} else if (checkfunc(v, "BlendFunc", 2)) {
	  glBlendFunc(getToken(v[1]), getToken(v[2]));
	} else if (checkfunc(v, "StencilFunc", 3)) {
	  glStencilFunc(getToken(v[1]), getToken(v[2]), getToken(v[3]));
	} else if (checkfunc(v, "StencilOp", 3)) {
	  glStencilOp(getToken(v[1]), getToken(v[2]), getToken(v[3]));
	} else if (checkfunc(v, "StencilMask", 1)) {
	  glStencilMask(getToken(v[1]));
	} else if (checkfunc(v, "PolygonOffset", 2)) {
	  glPolygonOffset(getTokenf(v[1]), getTokenf(v[2]));
	} else if (checkfunc(v, "PolygonMode", 2)) {
	  glPolygonMode(getToken(v[1]), getToken(v[2]));
	} else if (checkfunc(v, "ShadeModel", 1)) {
	  glShadeModel(getToken(v[1]));
	} else if (checkfunc(v, "BlendEquation", 1)) {
	  glBlendEquation(getToken(v[1]));
	} else if (checkfunc(v, "BlendColor", 4)) {
	  glBlendColor(getTokenf(v[1]), getTokenf(v[2]), 
		       getTokenf(v[3]), getTokenf(v[4]));
	} else if (checkfunc(v, "SecondaryColorEXT", 3)) {
#ifdef GL_EXT_secondary_color
	  glSecondaryColor3dEXT(getTokenf(v[1]), getTokenf(v[2]), 
		       getTokenf(v[3]));
#else
	  cerr << "Warning: SecondaryColorEXT attempted but support\n"
	      "was not compiled in because GL_EXT_secondary_color\n"
	      "was not defined!!!\n";
#endif
	} else if (checkfunc(v, "Fog", 2, true)) {
	  if (v.size() > 3) {
	    vector<GLfloat> params = getfv(v, 2, 4);
	    glFogfv(getToken(v[1]), &params[0]);
	  } else {
	    glFogf(getToken(v[1]), getTokenf(v[2]));
	  }
	} else if (checkfunc(v, "TexSubImage2D", 8, true)) {
	  int w = getToken(v[5]);
	  int h = getToken(v[6]);
	  vector<GLfloat> pixels = getfv(v, 8, w * h);
	  if (pixels.size() % (unsigned)(w * h)) {
	    cerr << "TexSubImage2D dimensions " << w << "x" << h << " do not match the size " << pixels.size() << " of data\n";
	    return false; 
	  }
	  glTexSubImage2D(getToken(v[1]), getToken(v[2]), getToken(v[3]),
			getToken(v[4]),
		       w, h, getToken(v[7]), 
		       GL_FLOAT, &pixels[0]);
	} else if (checkfunc(v, "TexImage2D", 8, true)) {
	  int w = getToken(v[4]);
	  int h = getToken(v[5]);
	  vector<GLfloat> pixels = getfv(v, 8, w * h);
	  if (pixels.size() % (unsigned)(w * h)) {
	    cerr << "TexImage2D dimensions " << w << "x" << h << " do not match the size " << pixels.size() << " of data\n";
	    return false; 
	  }
	  glTexImage2D(getToken(v[1]), getToken(v[2]), getToken(v[3]),
		       w, h, getToken(v[6]), getToken(v[7]),
		       GL_FLOAT, &pixels[0]);
	} else if (checkfunc(v, "TexImage2D_ushort", 8, true)) {
	  int w = getToken(v[4]);
	  int h = getToken(v[5]);
	  vector<GLushort> pixels = getiv<GLushort>(v, 8, w * h);
	  if (pixels.size() % (unsigned)(w * h)) {
	    cerr << "TexImage2D dimensions " << w << "x" << h << " do not match the size " << pixels.size() << " of data\n";
	    return false; 
	  }
	  glTexImage2D(getToken(v[1]), getToken(v[2]), getToken(v[3]),
		       w, h, getToken(v[6]), getToken(v[7]),
		       GL_UNSIGNED_SHORT, &pixels[0]);
	} else if (checkfunc(v, "CopyTexImage2D", 8)) {
	    glCopyTexImage2D(
			getToken(v[1]),
			getToken(v[2]),
			getToken(v[3]),
			getToken(v[4]),
			getToken(v[5]),
			getToken(v[6]),
			getToken(v[7]),
			getToken(v[8]));
	} else if (checkfunc(v, "CopyTexSubImage2D", 8)) {
	    glCopyTexSubImage2D(
			getToken(v[1]),
			getToken(v[2]),
			getToken(v[3]),
			getToken(v[4]),
			getToken(v[5]),
			getToken(v[6]),
			getToken(v[7]),
			getToken(v[8]));
	} else if (checkfunc(v, "ColorTable", 5, true) ||
		    checkfunc(v, "ColorTableEXT", 5, true)
		 ) {
	  vector<GLfloat> pixels = getfv(v, 5);
	  glColorTableEXT(
		    getToken(v[1]), getToken(v[2]),
		    getToken(v[3]), 
		    getToken(v[4]),
		    GL_FLOAT, &pixels[0]);
	} else if (checkfunc(v, "SeparableFilter2D", 6, true)) {
	    vector<GLfloat> filters = getfv(v, 6);
	    int w = getToken(v[3]);
	    int h = getToken(v[4]);

	    glSeparableFilter2D(
		    getToken(v[1]),
		    getToken(v[2]),
		    w, h,
		    getToken(v[5]),
		    GL_FLOAT,
		    &(filters[0]),
		    &(filters[w]));

	} else if (checkfunc(v, "ConvolutionFilter2D", 6, true)) {
	    vector<GLfloat> filters = getfv(v, 6);
	    int w = getToken(v[3]);
	    int h = getToken(v[4]);

	    glConvolutionFilter2D(
		    getToken(v[1]),
		    getToken(v[2]),
		    w, h,
		    getToken(v[5]),
		    GL_FLOAT,
		    &(filters[0]));
	    
	} else if (checkfunc(v, "ConvolutionParameter", 3, true)) {
	  if (v.size() > 4) {
	    vector<GLfloat> params = getfv(v, 3, 4);
	    glConvolutionParameterfv(getToken(v[1]), getToken(v[2]), &params[0]);
	  } else {
	    glConvolutionParameterf(getToken(v[1]), getToken(v[2]), getTokenf(v[3]));
	  }

	} else if (checkfunc(v, "PixelTransfer", 2)) {
	    glPixelTransferf(getToken(v[1]), getTokenf(v[2]));

	} else if (checkfunc(v, "TexEnv", 3, true)) {
	  if (v.size() > 4) {
	    vector<GLfloat> params = getfv(v, 3, 4);
	    glTexEnvfv(getToken(v[1]), getToken(v[2]), &params[0]);
	  } else {
	    glTexEnvf(getToken(v[1]), getToken(v[2]), getTokenf(v[3]));
	  }
	} else if (checkfunc(v, "TexParameter", 3, true)) {
	  if (v.size() > 4) {
	    vector<GLfloat> params = getfv(v, 3, 4);
	    glTexParameterfv(getToken(v[1]), getToken(v[2]), &params[0]);
	  } else {
	    glTexParameterf(getToken(v[1]), getToken(v[2]), getTokenf(v[3]));
	  }
	} else if (checkfunc(v, "TexGen", 3, true)) {
	  if (v.size() > 4) {
	    vector<GLdouble> params = getdv(v, 3, 4);
	    glTexGendv(getToken(v[1]), getToken(v[2]), &params[0]);
	  } else {
	    glTexGend(getToken(v[1]), getToken(v[2]), getTokenf(v[3]));
	  }
	} else if (checkfunc(v, "PushAttrib", 0, true)) {
	  GLbitfield mask = 0;
	  for (unsigned i = 1; i < v.size(); i++)
	    mask |= getToken(v[i]);
	  glPushAttrib(mask);
	} else if (checkfunc(v, "PopAttrib", 0)) {
	  glPopAttrib();
	} else if (checkfunc(v, "PushClientAttrib", 0, true)) {
	  GLbitfield mask = 0;
	  for (unsigned i = 1; i < v.size(); i++)
	    mask |= getToken(v[i]);
	  glPushClientAttrib(mask);
	} else if (checkfunc(v, "PopClientAttrib", 0)) {
	  glPopClientAttrib();
	} else if (checkfunc(v, "Clear", 0, true)) {
	  GLbitfield mask = 0;
	  for (unsigned i = 1; i < v.size(); i++)
	    mask |= getToken(v[i]);
	  glClear(mask);
	} else if (checkfunc(v, "ClearDepth", 1)) {
	  glClearDepth(getTokenf(v[1]));
	} else if (checkfunc(v, "ClearColor", 4)) {
	  glClearColor(getTokenf(v[1]),
		       getTokenf(v[2]),
		       getTokenf(v[3]),
		       getTokenf(v[4]));
	} else if (checkfunc(v, "ActiveTextureARB", 1) ||
		    checkfunc(v, "ActiveTexture", 1) ) {
	  glActiveTextureARB(getToken(v[1]));
	} else if (checkfunc(v, "Begin", 1)) {
	  glBegin(getToken(v[1]));
	  Begin = true;
	} else if (checkfunc(v, "End", 0)) {
	  glEnd();
	  Begin = false;
	} else if (checkfunc(v, "Vertex", 2, true)) {
	  switch (v.size()) {
	  case 3: glVertex2d(getTokenf(v[1]), 
			     getTokenf(v[2])); break;
	  case 4: glVertex3d(getTokenf(v[1]), 
			     getTokenf(v[2]), 
			     getTokenf(v[3])); break;
	  default:
	    cerr << "Ignoring extra arguments to Vertex\n";
	  case 5: glVertex4d(getTokenf(v[1]), 
			     getTokenf(v[2]), 
			     getTokenf(v[3]), 
			     getTokenf(v[4])); break;
	  }
	} else if (checkfunc(v, "TexCoord", 1, true)) {
	  switch (v.size()) {
	  case 2: glTexCoord1d(getTokenf(v[1])); break;
	  case 3: glTexCoord2d(getTokenf(v[1]), 
			       getTokenf(v[2])); break;
	  case 4: glTexCoord3d(getTokenf(v[1]), 
			       getTokenf(v[2]), 
			       getTokenf(v[3])); break;
	  default:
	    cerr << "Ignoring extra arguments to TexCoord\n";
	  case 5: glTexCoord4d(getTokenf(v[1]), 
			       getTokenf(v[2]), 
			       getTokenf(v[3]), 
			       getTokenf(v[4])); break;
	  }
	} else if (checkfunc(v, "MultiTexCoord", 2, true)) {
	  GLenum tex = getToken(v[1]);
	  switch (v.size()) {
	  case 3: glMultiTexCoord1d(tex, getTokenf(v[2])); break;
	  case 4: glMultiTexCoord2d(tex, 
				    getTokenf(v[2]), 
				    getTokenf(v[3])); break;
	  case 5: glMultiTexCoord3d(tex, 
				    getTokenf(v[2]), 
				    getTokenf(v[3]), 
				    getTokenf(v[4])); break;
	  default:
	    cerr << "Ignoring extra arguments to MultiTexCoord\n";
	  case 6: glMultiTexCoord4d(tex, 
				    getTokenf(v[2]), 
				    getTokenf(v[3]), 
				    getTokenf(v[4]), 
				    getTokenf(v[5])); break;
	  }
	} else if (checkfunc(v, "Color", 3, true)) {
	  switch (v.size()) {
	  case 4: glColor3d(getTokenf(v[1]), 
			    getTokenf(v[2]), 
			    getTokenf(v[3])); break;
	  default:
	    cerr << "Ignoring extra arguments to Color\n";
	  case 5: glColor4d(getTokenf(v[1]), 
			    getTokenf(v[2]), 
			    getTokenf(v[3]), 
			    getTokenf(v[4])); break;
	  }
	} else if (checkfunc(v, "Normal", 3)) {
	  glNormal3d(getTokenf(v[1]), 
		     getTokenf(v[2]), 
		     getTokenf(v[3])); 
	} else if (checkfunc(v, "LineWidth", 1)) {
	  glLineWidth(getTokenf(v[1]));
	} else if (checkfunc(v, "PointSize", 1)) {
	  glPointSize(getTokenf(v[1]));

#ifdef GL_REGISTER_COMBINERS_NV

	} else if (checkfunc(v, "CombinerParameterNV", 2, true)) {
	    GLenum pname = getToken(v[1]);
	    if(pname == GL_CONSTANT_COLOR0_NV || pname == GL_CONSTANT_COLOR1_NV) {
		    // Need 4 params
		    if(v.size() != 6) {
			cerr << "Inv num params CombinerParameterNV\n";
			return false;
		    }
		    vector<GLfloat> params = getfv(v, 2, 4);
		    glCombinerParameterfvNV(pname, &params[0]);

	    } else if(pname == GL_NUM_GENERAL_COMBINERS_NV ||
			pname == GL_COLOR_SUM_CLAMP_NV) {
		    if(v.size() != 3) {
			cerr << "Inv num params CombinerParameterNV\n";
			return false;
		    }
		    glCombinerParameterfNV(pname, getTokenf(v[2]));
	    } else {
		cerr << "Invalid CombinerParameterNV first param: "<<pname<<"\n";
		return false;
	    }
#ifdef GL_PER_STAGE_CONSTANTS_NV
	} else if (checkfunc(v, "CombinerStageParameterNV", 6, true)) {
	    vector<GLfloat> params = getfv(v, 3, 4);
	    glCombinerStageParameterfvNV(
			getToken(v[1]),
			getToken(v[2]),
			&params[0]);
#endif
	} else if (checkfunc(v, "CombinerInputNV", 6)) {
	    glCombinerInputNV(
			getToken(v[1]),
			getToken(v[2]),
			getToken(v[3]),
			getToken(v[4]),
			getToken(v[5]),
			getToken(v[6]));
	} else if (checkfunc(v, "CombinerOutputNV", 10)) {

	    glCombinerOutputNV(
			getToken(v[1]),
			getToken(v[2]),
			getToken(v[3]),
			getToken(v[4]),
			getToken(v[5]),
			getToken(v[6]),
			getToken(v[7]),
			getToken(v[8]),
			getToken(v[9]),
			getToken(v[10])
			);

	} else if (checkfunc(v, "FinalCombinerInputNV", 4)) {
	    glFinalCombinerInputNV(
			getToken(v[1]),
			getToken(v[2]),
			getToken(v[3]),
			getToken(v[4]));

#endif /* GL_REGISTER_COMBINERS_NV */
#ifdef GL_VERTEX_PROGRAM_ARB
	} else if (checkfunc(v, "BindProgram", 2) ||
		    checkfunc(v, "BindProgramARB", 2)
		) {
	  glBindProgramARB(getToken(v[1]), (GLuint)getToken(v[2]));
	} else if (checkfunc(v, "ProgramLocalParameter", 6) ||
		    checkfunc(v, "ProgramLocalParameterARB", 6)
		) {
	    glProgramLocalParameter4fARB(
		    getToken(v[1]),
		    getToken(v[2]),
		    getTokenf(v[3]),
		    getTokenf(v[4]),
		    getTokenf(v[5]),
		    getTokenf(v[6]));
	} else if (checkfunc(v, "ProgramEnvParameter", 6) ||
		    checkfunc(v, "ProgramEnvParameterARB", 6)
		) {
	    glProgramEnvParameter4fARB(
		    getToken(v[1]),
		    getToken(v[2]),
		    getTokenf(v[3]),
		    getTokenf(v[4]),
		    getTokenf(v[5]),
		    getTokenf(v[6]));

#endif

#ifdef GL_VERTEX_PROGRAM_NV
	} else if (checkfunc(v, "BindProgramNV", 2)) {
	  glBindProgramNV(getToken(v[1]), (GLuint)getToken(v[2]));
	} else if (checkfunc(v, "TrackMatrixNV", 4)) {
	  glTrackMatrixNV(getToken(v[1]),
		    getToken(v[2]),
		    getToken(v[3]),
		    getToken(v[4]));
	} else if (checkfunc(v, "ProgramParameterNV", 6)) {
	    glProgramParameter4fNV(
		    getToken(v[1]),
		    getToken(v[2]),
		    getTokenf(v[3]),
		    getTokenf(v[4]),
		    getTokenf(v[5]),
		    getTokenf(v[6]));

#endif

	} else {
	  cerr << "Unknown function \"" << v[0] << "\" with " 
	       << v.size() - 1 << " arguments\n";
	  return false;
	}

	if (!Begin) {
	  int er = glGetError(); 
	  if (er != GL_NO_ERROR)
	    {
	      cerr << "OPENGL ERROR " <<gluErrorString(er)
		   <<" while executing " << s << "\n";
	      return false;
	    }
	}
	return true;
    }

    struct gltoken {
      char *name;
      GLenum value;
    };

    gltoken tokenarr[] = {
#include "gltokens.c"
      {NULL, 0}
    };

    int cmptoken(const void *key, const void *token) {
      return strcmp((const char *)key, ((gltoken*)token)->name);
    }
  
    /** Get the value of an OpenGL token.
     * For example: getToken("BLEND") == 0x0BE2
     */
    int getToken(string tok) {
      const char *str = tok.c_str();
      char *end;
      int val = strtol(str, &end, 0);
      if (end != str) {
	if (*end != 0) 
	  cerr << "Ignoring \"" << end << "\" at the end of token\n";
	return val;
      } 

      gltoken *t = (gltoken*)bsearch(str, tokenarr, sizeof(tokenarr)/sizeof(tokenarr[0])-1, sizeof(tokenarr[0]), cmptoken);
      if (t == NULL) {
	cerr << "Unknown token \"" << tok << "\"\n";
	return 0;
      }
      //cout << "getToken(\"" << tok << "\") = " << t->value << "\n";
      return t->value;
    }

    GLenum getTokenValue(const char *str) {
	string s(str);
	return getToken(s);
    }
    const char *getTokenString(GLenum value) {
	for(int i=0; tokenarr[i].name != NULL; i++) {
	    if(tokenarr[i].value == value) 
		return tokenarr[i].name;
	}
	return "unknown";
    }

    double getTokenf(string tok) {
      const char *str = tok.c_str();
      char *end;
      double val = strtod(str, &end);
      if (str == end) return (double)getToken(tok);
      if (*end != 0) 
	cerr << "Ignoring \"" << end << "\" at the end of token\n";
      return val;
    }

    void callGL(const char *str) {
	DBG(dbg) << "CallGL\n";

	int er = glGetError(); 
	if (er != GL_NO_ERROR)
	  {
	    cerr << "OPENGL ERROR " <<gluErrorString(er)<<" before executing " 
		 << str << "\n";
	    return;
	  }

	const char *cur = str;
	const char *next;
	while((next=strchr(cur, '\n')) != 0) {
	    if (!callGLop(string(cur, next))) goto out;
	    cur = next+1;
	}
	if(strlen(cur) != 0)
	    callGLop(string(cur));
    out:
        er = glGetError(); 
        if (er != GL_NO_ERROR)
	  {
	    cerr << "OPENGL ERROR " <<gluErrorString(er)
	       <<" after executing " << str << "\n";
	    return ;
	  }
	return;
    }

    void compileGL(const char *str, GLuint intoList) {
	DBG(dbg) << "CallGL\n";

	int er = glGetError(); 
	if (er != GL_NO_ERROR)
	  {
	    cerr << "OPENGL ERROR " <<gluErrorString(er)<<" before executing " 
		 << str << "\n";
	    return;
	  }

	glNewList(intoList, GL_COMPILE);

	callGL(str);

	glEndList();

        er = glGetError(); 
        if (er != GL_NO_ERROR)
	  {
	    cerr << "OPENGL ERROR " <<gluErrorString(er)
	       <<" after compiling " << str << "\n";
	    return ;
	  }
	return;
    }

    const char* getString(const char *name) { 
        return (const char *)glGetString(getTokenValue(name)); 
    }

    template<class T, class C>const vector<float> getFloat_impl(const char *name, C &c) {
        static T vec0[100];
	static T vec1[100];
	static int init;
	if (!init) {
	    for (int i = 0; i < 100; i++) {
	        vec0[i] = 0;
	        vec1[i] = 1;
	    }
	}

	GLenum e = getTokenValue(name);

	int er = glGetError(); 
	if (er != GL_NO_ERROR) {
	  cerr << "OPENGL ERROR " <<gluErrorString(er)<<" before getFloat(" 
		 << name << ")\n";
	}

	int n = 0;
	vector<float> r;
	c(e, vec0);
	c(e, vec1);

	er = glGetError(); 
	if (er != GL_NO_ERROR) {
	  cerr << "WARNING: " <<gluErrorString(er)<<" after getFloat(" 
	       << name << ")\n";
	}	
	
	for (n = 0; n < 100; n++) {
	    if (vec0[n] == 0 && vec1[n] == 1) break;
	    r.insert(r.end(), vec0[n]);
	    vec0[n] = 0;
	    vec1[n] = 0;
	}
	
	return r;
    }

    std::vector<float> getFloat(const char *name) {
	return getFloat_impl<float>(name, glGetFloatv);
    }

    struct X0 { GLuint target;
	void operator()(GLenum e, float *vec) {
	    glGetTexParameterfv(target, e,vec);
	}
    } ;
    std::vector<float> getTexParameterFloat(const char *target, GLuint tex, const char *name) {
	GLenum e = getTokenValue(target);
	glBindTexture(e, tex);
	X0 x;
	x.target = e;
	vector<float> res = getFloat_impl<float>(name, x);
	glBindTexture(e, 0);
	return res;
    }

    struct X1 { GLuint target; GLuint level;
	void operator()(GLenum e, float *vec) {
	    glGetTexLevelParameterfv(target, level, e, vec);
	}
    } ;
    std::vector<float> getTexLevelParameterFloat(const char *target, GLuint tex, GLuint level, const char *name) {
	GLenum e = getTokenValue(target);
	glBindTexture(e, tex);
	X1 x;
	x.target = e;
	x.level = level;
	vector<float> res = getFloat_impl<float>(name, x);
	glBindTexture(e, 0);
	return res;
    }

    struct X2 { GLuint target;
	void operator()(GLenum e, int *vec) {
	    glGetProgramivARB(target, e,vec);
	}
    } ;

    std::vector<float> getProgram(const char *target, const char *name) {
	X2 x;
	x.target = getTokenValue(target);
	return getFloat_impl<int>(name, x);
    }

    bool loadProgram(GLuint id, const string source) {
#ifdef GL_VERTEX_PROGRAM_NV
	if (source.compare(0, 4, "!!VP") == 0)
	    return loadNVProg(GL_VERTEX_PROGRAM_NV, id, source);
	else if (source.compare(0, 5, "!!VSP") == 0) 
	    return loadNVProg(GL_VERTEX_STATE_PROGRAM_NV, id, source);
#endif
#ifdef GL_FRAGMENT_PROGRAM_NV
	else if (source.compare(0, 4, "!!FP") == 0)
	    return loadNVProg(GL_FRAGMENT_PROGRAM_NV, id, source);
#endif
#ifdef GL_VERTEX_PROGRAM_ARB
	else if (source.compare(0, 7, "!!ARBvp") == 0)
	    return loadARBProg(GL_VERTEX_PROGRAM_ARB, id, source);
#endif
#ifdef GL_FRAGMENT_PROGRAM_ARB
	else if (source.compare(0, 7, "!!ARBfp") == 0)
	    return loadARBProg(GL_FRAGMENT_PROGRAM_ARB, id, source);
#endif
	cerr << "loadProgram: unknown program type: " << source << "\n";
	return false;
    }

    bool loadNVProg(GLuint TARGET, GLuint id, const string source) {
	int er = glGetError(); 
	if (er != GL_NO_ERROR)
	  cerr << "Warning: OPENGL ERROR " 
	       << gluErrorString(er)
	       << " before loading " 
	       << getTokenString(TARGET) 
	       << " program\n"; 

#ifdef GL_NV_vertex_program // XXX: how to test support for any program type?
 	glLoadProgramNV(TARGET, id, source.length(), (GLubyte*)source.data());
	
	er = glGetError(); 
	if (er != GL_NO_ERROR) {
	    GLint errpos;
	    
	    cerr << "OPENGL ERROR " 
		 << gluErrorString(er)
		 << " when loading " 
		 << getTokenString(TARGET) 
		 << " program\n"; 
	    
	    glGetIntegerv(GL_PROGRAM_ERROR_POSITION_NV, &errpos);
	    if (errpos >= 0 && (unsigned)errpos <= source.length()) {
		std::cerr << "Program error at position " << errpos << ":\n";
		std::cerr << source.substr(0, errpos) 
			  << "<ERROR HERE>" 
			  << source.substr(errpos, source.length())
			  << "\n";
	    }
	    return false;
	}
#endif
	return true;
    }
    
    bool loadARBProg(GLuint TARGET, GLuint id, const string source) {
	int er = glGetError(); 
	if (er != GL_NO_ERROR)
	    cerr << "Warning: OPENGL ERROR " 
		 << gluErrorString(er)
		 << " before loading " 
		 << getTokenString(TARGET) 
		 << " program\n"; 

#ifdef GL_PROGRAM_ERROR_STRING_ARB // XXX: how to test support?
	glBindProgramARB(TARGET, id);
	glProgramStringARB(TARGET, GL_PROGRAM_FORMAT_ASCII_ARB, 
			   source.length(), (GLubyte*)source.data());
	er = glGetError(); 
	if (er != GL_NO_ERROR) {
	    GLint errpos;
	  
	    cerr << "OPENGL ERROR " 
		 << gluErrorString(er)
		 << " when loading " 
		 << getTokenString(TARGET) 
		 << " program\n"; 

	    glGetIntegerv(GL_PROGRAM_ERROR_POSITION_ARB, &errpos);
	    if (errpos >= 0 && (unsigned)errpos <= source.length()) {
		std::cerr << "PRGORAM ERROR: " 
			  << glGetString(GL_PROGRAM_ERROR_STRING_ARB)
			  << " at position " << errpos << ":\n";
		std::cerr << "Program error at position " << errpos << ":\n";
		std::cerr << source.substr(0, errpos) 
			  << "<ERROR HERE>" 
			  << source.substr(errpos, source.length()) 
			  << "\n";
	  }
	  return false;
	}
#endif
	return true;
    }
}
