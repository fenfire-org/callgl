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

#ifndef GZZ_CALLGL_HXX
#define GZZ_CALLGL_HXX

#include <GL/gl.h>

#include <string>
#include <vector>
#include <map>

#include <boost/shared_ptr.hpp>

/**CallGL allows dynamic execution of OpenGL commands from strings.
 */
namespace CallGL {
    /** Set to true for debug output from CallGL.
     */
    extern bool dbg;

    /** Execute OpenGL commands.
     * The overall function that executes a number of
     * OpenGL commands in the given string.
     * <p>
     *
     * The string is of the form
     * <pre>
     * 		TexEnv TEXTURE_ENV TEXTURE_ENV_MODE BLEND
     * 		TexEnv TEXTURE_ENV TEXTURE_ENV_COLOR 1 0.5 0.5 0.2
     * 		Enable BLEND
     * 	</pre>	
     * i.e. the gl, GL_ etc prefixes are omitted. 
     * Also, for ARB extensions, the ARB suffix on function names
     * (but not on tokens!) can be omitted:
     * <pre>
     * 		BindProgramARB VERTEX_PROGRAM_ARB 4
     * 		BindProgram VERTEX_PROGRAM_ARB 4
     * 		BindProgram VERTEX_PROGRAM 4 # --- ILLEGAL
     * </pre>
     * <p>
     * In the first stage,
     * the functions
     * <pre>
     * 		TexEnv
     * 		BindTexture
     * 		TexParameter
     * 		Enable
     * 		Disable
     * 		BlendColor
     * 		BlendEquation
     * 		BlendFunc
     * 		TexGen
     * 		ClearStencil
     * 		StencilFunc
     * 		StencilMask
     * 		StencilOp
     * 		Clear
     * 		DepthFunc
     * 		DepthMask
     * 		DepthRange
     * 		ColorMask
     * 		ClipPlane
     * 		ClearColor
     *
     * 		CombinerParameterNV
     * 		CombinerInputNV
     * 		CombinerOutputNV
     * 		FinalCombinerInputNV
     *
     * 		BindProgramNV
     * 		LoadProgramNV
     * 		ProgramParameterNV
     * 		TrackMatrixNV
     * </pre>
     * shall be supported. (there are now much more; document XXX !!!)
     * <p>
     *
     */
    void callGL(const char *string);

    /** Convenience: compile the given callGL string into
     * the display list given as parameter.
     * @param intoList the display list id.
     */
    void compileGL(const char *string, GLuint intoList);

    /** Get an OpenGL token value for the given string.
     * The token must be provided without the GL_ prefix.
     * For example, 
     * 	
     * 		getTokenValue("AMBIENT_AND_DIFFUSE");
     *
     * 	returns 0x1602
     */
    GLenum getTokenValue(const char *string);

    /** Get (if available) an OpenGL token name for the
     * given value. Not all numbers have associated token
     * values; the string "unknown" is returned in that case.
     * The strings are static, and should not be modified
     * by the user. This function is intended for producing
     * human-readable strings from values returned by glGet.
     */
    const char *getTokenString(GLenum value);

    /** Equivalent to glGetString() but with a token string argument.
     * @args name one of "VENDOR", "RENDERER", "VERSION", "EXTENSIONS"
     */
    const char* getString(const char *name);

    /** Equivalent to glGetFloatv() but with strings
     */
    std::vector<float> getFloat(const char *pname);
    /** Equivalent to glGetFProgram() but with strings
     */
    std::vector<float> getProgram(const char *target, const char *name);
    /** Equivalent to glGetTexParameterfv() but with strings
     */
    std::vector<float> getTexParameterFloat(const char *target, GLuint tex, const char *pname);
    /** Equivalent to glGetTexLevelParameterfv() but with strings
     */
    std::vector<float> getTexLevelParameterFloat(const char *target, GLuint tex, GLuint level, const char *pname);


    /** Load an OpenGL program into the driver.
     * Target type (GL_NV_VERTEX_PROGRAM, ...) and loading method 
     * (LoadProgramNV, ProgramStringARB, ...) is determined from the 
     * "!!..." program header.
     */
    bool loadProgram(GLuint id, const std::string source);

    bool loadARBProg(GLuint TARGET, GLuint id, const std::string source);

    bool loadNVProg(GLuint TARGET, GLuint id, const std::string source);

}

#endif // GZZ CALLGL HXX

