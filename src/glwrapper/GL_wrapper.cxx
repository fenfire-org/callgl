
/*
 * THIS FILE HAS BEEN AUTOMATICALLY GENERATED, PLEASE DO NOT EDIT
 */
#include <iostream>
#include "/usr/include/GL/gl.h"

#ifdef __cplusplus
extern "C" {
   extern void (*glXGetProcAddressARB(const GLubyte *procname))(void);
}
#endif

//namespace GL_wrapper {

/* 
 * getProcAddresss
 * ===============
 */

void (* getExtendedProcAddress(const char * c))(void);

/*
 * GLX implementation 
 */


void (* getExtendedProcAddress(const char * c))(void) {
    return glXGetProcAddressARB( (const GLubyte *)(c) );
}

/*
 * AGL .. 
 * WGL etc.. 
 *   please select suitable for you ;) 
 */


/* 
 * Error_messages
 * ==============
 */

void GL_kludge_error_void(const char * c) {
   std::cerr << "ERROR: from indirect OpenGL call:"
             << c <<" not properly defined by your gfx-driver\n";
}
GLboolean GL_kludge_error_GLboolean(const char * c) {
   std::cerr << "ERROR: from indirect OpenGL call:"
             << c <<" not properly defined by your gfx-driver\n";
   return false;
}
GLenum GL_kludge_error_GLenum(const char * c) {
   std::cerr << "ERROR: from indirect OpenGL call:"
             << c <<" not properly defined by your gfx-driver\n";
   return 0;
}
GLuint GL_kludge_error_GLuint(const char * c) {
   std::cerr << "ERROR: from indirect OpenGL call:"
             << c <<" not properly defined by your gfx-driver\n";
   return 0;
}
GLvoid* GL_kludge_error_GLvoid_p_(const char * c) {
   std::cerr << "ERROR: from indirect OpenGL call:"
             << c <<" not properly defined by your gfx-driver\n";
   return NULL;
}
GLint GL_kludge_error_GLint(const char * c) {
   std::cerr << "ERROR: from indirect OpenGL call:"
             << c <<" not properly defined by your gfx-driver\n";
   return -1;
}


/* 
 * Stub functions
 * ==============
 */

void stub_glActiveStencilFaceEXT(GLenum face);
void (* _glActiveStencilFaceEXT)(GLenum face) = &stub_glActiveStencilFaceEXT;
void stub_glActiveStencilFaceEXT(GLenum face) {
   if (getExtendedProcAddress("glActiveStencilFaceEXT") == NULL) {
      return GL_kludge_error_void("glActiveStencilFaceEXT");
   }
   _glActiveStencilFaceEXT = (void (*)(GLenum))getExtendedProcAddress("glActiveStencilFaceEXT");
   return _glActiveStencilFaceEXT(face);
}

void stub_glActiveTextureARB(GLenum texture);
void (* _glActiveTextureARB)(GLenum texture) = &stub_glActiveTextureARB;
void stub_glActiveTextureARB(GLenum texture) {
   if (getExtendedProcAddress("glActiveTextureARB") == NULL) {
      return GL_kludge_error_void("glActiveTextureARB");
   }
   _glActiveTextureARB = (void (*)(GLenum))getExtendedProcAddress("glActiveTextureARB");
   return _glActiveTextureARB(texture);
}

void stub_glAddSwapHintRectWIN(GLint x, GLint y, GLsizei width, GLsizei height);
void (* _glAddSwapHintRectWIN)(GLint x, GLint y, GLsizei width, GLsizei height) = &stub_glAddSwapHintRectWIN;
void stub_glAddSwapHintRectWIN(GLint x, GLint y, GLsizei width, GLsizei height) {
   if (getExtendedProcAddress("glAddSwapHintRectWIN") == NULL) {
      return GL_kludge_error_void("glAddSwapHintRectWIN");
   }
   _glAddSwapHintRectWIN = (void (*)(GLint , GLint , GLsizei , GLsizei))getExtendedProcAddress("glAddSwapHintRectWIN");
   return _glAddSwapHintRectWIN(x , y , width , height);
}

GLboolean stub_glAreProgramsResidentNV(GLsizei n, const GLuint *programs, GLboolean *residences);
GLboolean (* _glAreProgramsResidentNV)(GLsizei n, const GLuint *programs, GLboolean *residences) = &stub_glAreProgramsResidentNV;
GLboolean stub_glAreProgramsResidentNV(GLsizei n, const GLuint *programs, GLboolean *residences) {
   if (getExtendedProcAddress("glAreProgramsResidentNV") == NULL) {
      return GL_kludge_error_GLboolean("glAreProgramsResidentNV");
   }
   _glAreProgramsResidentNV = (GLboolean (*)(GLsizei , const GLuint * , GLboolean *))getExtendedProcAddress("glAreProgramsResidentNV");
   return _glAreProgramsResidentNV(n , programs , residences);
}

GLboolean stub_glAreTexturesResidentEXT(GLsizei n, const GLuint *textures, GLboolean *residences);
GLboolean (* _glAreTexturesResidentEXT)(GLsizei n, const GLuint *textures, GLboolean *residences) = &stub_glAreTexturesResidentEXT;
GLboolean stub_glAreTexturesResidentEXT(GLsizei n, const GLuint *textures, GLboolean *residences) {
   if (getExtendedProcAddress("glAreTexturesResidentEXT") == NULL) {
      return GL_kludge_error_GLboolean("glAreTexturesResidentEXT");
   }
   _glAreTexturesResidentEXT = (GLboolean (*)(GLsizei , const GLuint * , GLboolean *))getExtendedProcAddress("glAreTexturesResidentEXT");
   return _glAreTexturesResidentEXT(n , textures , residences);
}

void stub_glArrayElementEXT(GLint i);
void (* _glArrayElementEXT)(GLint i) = &stub_glArrayElementEXT;
void stub_glArrayElementEXT(GLint i) {
   if (getExtendedProcAddress("glArrayElementEXT") == NULL) {
      return GL_kludge_error_void("glArrayElementEXT");
   }
   _glArrayElementEXT = (void (*)(GLint))getExtendedProcAddress("glArrayElementEXT");
   return _glArrayElementEXT(i);
}

void stub_glBeginOcclusionQueryNV(GLuint id);
void (* _glBeginOcclusionQueryNV)(GLuint id) = &stub_glBeginOcclusionQueryNV;
void stub_glBeginOcclusionQueryNV(GLuint id) {
   if (getExtendedProcAddress("glBeginOcclusionQueryNV") == NULL) {
      return GL_kludge_error_void("glBeginOcclusionQueryNV");
   }
   _glBeginOcclusionQueryNV = (void (*)(GLuint))getExtendedProcAddress("glBeginOcclusionQueryNV");
   return _glBeginOcclusionQueryNV(id);
}

void stub_glBindProgramARB(GLenum target, GLuint program);
void (* _glBindProgramARB)(GLenum target, GLuint program) = &stub_glBindProgramARB;
void stub_glBindProgramARB(GLenum target, GLuint program) {
   if (getExtendedProcAddress("glBindProgramARB") == NULL) {
      return GL_kludge_error_void("glBindProgramARB");
   }
   _glBindProgramARB = (void (*)(GLenum , GLuint))getExtendedProcAddress("glBindProgramARB");
   return _glBindProgramARB(target , program);
}

void stub_glBindProgramNV(GLenum target, GLuint id);
void (* _glBindProgramNV)(GLenum target, GLuint id) = &stub_glBindProgramNV;
void stub_glBindProgramNV(GLenum target, GLuint id) {
   if (getExtendedProcAddress("glBindProgramNV") == NULL) {
      return GL_kludge_error_void("glBindProgramNV");
   }
   _glBindProgramNV = (void (*)(GLenum , GLuint))getExtendedProcAddress("glBindProgramNV");
   return _glBindProgramNV(target , id);
}

void stub_glBindTextureEXT(GLenum target, GLuint texture);
void (* _glBindTextureEXT)(GLenum target, GLuint texture) = &stub_glBindTextureEXT;
void stub_glBindTextureEXT(GLenum target, GLuint texture) {
   if (getExtendedProcAddress("glBindTextureEXT") == NULL) {
      return GL_kludge_error_void("glBindTextureEXT");
   }
   _glBindTextureEXT = (void (*)(GLenum , GLuint))getExtendedProcAddress("glBindTextureEXT");
   return _glBindTextureEXT(target , texture);
}

void stub_glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void (* _glBlendColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) = &stub_glBlendColor;
void stub_glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
   if (getExtendedProcAddress("glBlendColor") == NULL) {
      return GL_kludge_error_void("glBlendColor");
   }
   _glBlendColor = (void (*)(GLclampf , GLclampf , GLclampf , GLclampf))getExtendedProcAddress("glBlendColor");
   return _glBlendColor(red , green , blue , alpha);
}

void stub_glBlendColorEXT(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void (* _glBlendColorEXT)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) = &stub_glBlendColorEXT;
void stub_glBlendColorEXT(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
   if (getExtendedProcAddress("glBlendColorEXT") == NULL) {
      return GL_kludge_error_void("glBlendColorEXT");
   }
   _glBlendColorEXT = (void (*)(GLclampf , GLclampf , GLclampf , GLclampf))getExtendedProcAddress("glBlendColorEXT");
   return _glBlendColorEXT(red , green , blue , alpha);
}

void stub_glBlendEquation(GLenum mode);
void (* _glBlendEquation)(GLenum mode) = &stub_glBlendEquation;
void stub_glBlendEquation(GLenum mode) {
   if (getExtendedProcAddress("glBlendEquation") == NULL) {
      return GL_kludge_error_void("glBlendEquation");
   }
   _glBlendEquation = (void (*)(GLenum))getExtendedProcAddress("glBlendEquation");
   return _glBlendEquation(mode);
}

void stub_glBlendEquationEXT(GLenum mode);
void (* _glBlendEquationEXT)(GLenum mode) = &stub_glBlendEquationEXT;
void stub_glBlendEquationEXT(GLenum mode) {
   if (getExtendedProcAddress("glBlendEquationEXT") == NULL) {
      return GL_kludge_error_void("glBlendEquationEXT");
   }
   _glBlendEquationEXT = (void (*)(GLenum))getExtendedProcAddress("glBlendEquationEXT");
   return _glBlendEquationEXT(mode);
}

void stub_glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
void (* _glBlendFuncSeparate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) = &stub_glBlendFuncSeparate;
void stub_glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
   if (getExtendedProcAddress("glBlendFuncSeparate") == NULL) {
      return GL_kludge_error_void("glBlendFuncSeparate");
   }
   _glBlendFuncSeparate = (void (*)(GLenum , GLenum , GLenum , GLenum))getExtendedProcAddress("glBlendFuncSeparate");
   return _glBlendFuncSeparate(sfactorRGB , dfactorRGB , sfactorAlpha , dfactorAlpha);
}

void stub_glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
void (* _glBlendFuncSeparateEXT)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) = &stub_glBlendFuncSeparateEXT;
void stub_glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
   if (getExtendedProcAddress("glBlendFuncSeparateEXT") == NULL) {
      return GL_kludge_error_void("glBlendFuncSeparateEXT");
   }
   _glBlendFuncSeparateEXT = (void (*)(GLenum , GLenum , GLenum , GLenum))getExtendedProcAddress("glBlendFuncSeparateEXT");
   return _glBlendFuncSeparateEXT(sfactorRGB , dfactorRGB , sfactorAlpha , dfactorAlpha);
}

void stub_glClientActiveTextureARB(GLenum texture);
void (* _glClientActiveTextureARB)(GLenum texture) = &stub_glClientActiveTextureARB;
void stub_glClientActiveTextureARB(GLenum texture) {
   if (getExtendedProcAddress("glClientActiveTextureARB") == NULL) {
      return GL_kludge_error_void("glClientActiveTextureARB");
   }
   _glClientActiveTextureARB = (void (*)(GLenum))getExtendedProcAddress("glClientActiveTextureARB");
   return _glClientActiveTextureARB(texture);
}

void stub_glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
void (* _glColorPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) = &stub_glColorPointerEXT;
void stub_glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) {
   if (getExtendedProcAddress("glColorPointerEXT") == NULL) {
      return GL_kludge_error_void("glColorPointerEXT");
   }
   _glColorPointerEXT = (void (*)(GLint , GLenum , GLsizei , GLsizei , const GLvoid *))getExtendedProcAddress("glColorPointerEXT");
   return _glColorPointerEXT(size , type , stride , count , pointer);
}

void stub_glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data);
void (* _glColorSubTable)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data) = &stub_glColorSubTable;
void stub_glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data) {
   if (getExtendedProcAddress("glColorSubTable") == NULL) {
      return GL_kludge_error_void("glColorSubTable");
   }
   _glColorSubTable = (void (*)(GLenum , GLsizei , GLsizei , GLenum , GLenum , const GLvoid *))getExtendedProcAddress("glColorSubTable");
   return _glColorSubTable(target , start , count , format , type , data);
}

void stub_glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *table);
void (* _glColorSubTableEXT)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *table) = &stub_glColorSubTableEXT;
void stub_glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *table) {
   if (getExtendedProcAddress("glColorSubTableEXT") == NULL) {
      return GL_kludge_error_void("glColorSubTableEXT");
   }
   _glColorSubTableEXT = (void (*)(GLenum , GLsizei , GLsizei , GLenum , GLenum , const GLvoid *))getExtendedProcAddress("glColorSubTableEXT");
   return _glColorSubTableEXT(target , start , count , format , type , table);
}

void stub_glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
void (* _glColorTable)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table) = &stub_glColorTable;
void stub_glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table) {
   if (getExtendedProcAddress("glColorTable") == NULL) {
      return GL_kludge_error_void("glColorTable");
   }
   _glColorTable = (void (*)(GLenum , GLenum , GLsizei , GLenum , GLenum , const GLvoid *))getExtendedProcAddress("glColorTable");
   return _glColorTable(target , internalformat , width , format , type , table);
}

void stub_glColorTableEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
void (* _glColorTableEXT)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table) = &stub_glColorTableEXT;
void stub_glColorTableEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table) {
   if (getExtendedProcAddress("glColorTableEXT") == NULL) {
      return GL_kludge_error_void("glColorTableEXT");
   }
   _glColorTableEXT = (void (*)(GLenum , GLenum , GLsizei , GLenum , GLenum , const GLvoid *))getExtendedProcAddress("glColorTableEXT");
   return _glColorTableEXT(target , internalformat , width , format , type , table);
}

void stub_glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat *params);
void (* _glColorTableParameterfv)(GLenum target, GLenum pname, const GLfloat *params) = &stub_glColorTableParameterfv;
void stub_glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat *params) {
   if (getExtendedProcAddress("glColorTableParameterfv") == NULL) {
      return GL_kludge_error_void("glColorTableParameterfv");
   }
   _glColorTableParameterfv = (void (*)(GLenum , GLenum , const GLfloat *))getExtendedProcAddress("glColorTableParameterfv");
   return _glColorTableParameterfv(target , pname , params);
}

void stub_glColorTableParameteriv(GLenum target, GLenum pname, const GLint *params);
void (* _glColorTableParameteriv)(GLenum target, GLenum pname, const GLint *params) = &stub_glColorTableParameteriv;
void stub_glColorTableParameteriv(GLenum target, GLenum pname, const GLint *params) {
   if (getExtendedProcAddress("glColorTableParameteriv") == NULL) {
      return GL_kludge_error_void("glColorTableParameteriv");
   }
   _glColorTableParameteriv = (void (*)(GLenum , GLenum , const GLint *))getExtendedProcAddress("glColorTableParameteriv");
   return _glColorTableParameteriv(target , pname , params);
}

void stub_glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
void (* _glCombinerInputNV)(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) = &stub_glCombinerInputNV;
void stub_glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) {
   if (getExtendedProcAddress("glCombinerInputNV") == NULL) {
      return GL_kludge_error_void("glCombinerInputNV");
   }
   _glCombinerInputNV = (void (*)(GLenum , GLenum , GLenum , GLenum , GLenum , GLenum))getExtendedProcAddress("glCombinerInputNV");
   return _glCombinerInputNV(stage , portion , variable , input , mapping , componentUsage);
}

void stub_glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
void (* _glCombinerOutputNV)(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum) = &stub_glCombinerOutputNV;
void stub_glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum) {
   if (getExtendedProcAddress("glCombinerOutputNV") == NULL) {
      return GL_kludge_error_void("glCombinerOutputNV");
   }
   _glCombinerOutputNV = (void (*)(GLenum , GLenum , GLenum , GLenum , GLenum , GLenum , GLenum , GLboolean , GLboolean , GLboolean))getExtendedProcAddress("glCombinerOutputNV");
   return _glCombinerOutputNV(stage , portion , abOutput , cdOutput , sumOutput , scale , bias , abDotProduct , cdDotProduct , muxSum);
}

void stub_glCombinerParameterfNV(GLenum pname, GLfloat param);
void (* _glCombinerParameterfNV)(GLenum pname, GLfloat param) = &stub_glCombinerParameterfNV;
void stub_glCombinerParameterfNV(GLenum pname, GLfloat param) {
   if (getExtendedProcAddress("glCombinerParameterfNV") == NULL) {
      return GL_kludge_error_void("glCombinerParameterfNV");
   }
   _glCombinerParameterfNV = (void (*)(GLenum , GLfloat))getExtendedProcAddress("glCombinerParameterfNV");
   return _glCombinerParameterfNV(pname , param);
}

void stub_glCombinerParameterfvNV(GLenum pname, const GLfloat *params);
void (* _glCombinerParameterfvNV)(GLenum pname, const GLfloat *params) = &stub_glCombinerParameterfvNV;
void stub_glCombinerParameterfvNV(GLenum pname, const GLfloat *params) {
   if (getExtendedProcAddress("glCombinerParameterfvNV") == NULL) {
      return GL_kludge_error_void("glCombinerParameterfvNV");
   }
   _glCombinerParameterfvNV = (void (*)(GLenum , const GLfloat *))getExtendedProcAddress("glCombinerParameterfvNV");
   return _glCombinerParameterfvNV(pname , params);
}

void stub_glCombinerParameteriNV(GLenum pname, GLint param);
void (* _glCombinerParameteriNV)(GLenum pname, GLint param) = &stub_glCombinerParameteriNV;
void stub_glCombinerParameteriNV(GLenum pname, GLint param) {
   if (getExtendedProcAddress("glCombinerParameteriNV") == NULL) {
      return GL_kludge_error_void("glCombinerParameteriNV");
   }
   _glCombinerParameteriNV = (void (*)(GLenum , GLint))getExtendedProcAddress("glCombinerParameteriNV");
   return _glCombinerParameteriNV(pname , param);
}

void stub_glCombinerParameterivNV(GLenum pname, const GLint *params);
void (* _glCombinerParameterivNV)(GLenum pname, const GLint *params) = &stub_glCombinerParameterivNV;
void stub_glCombinerParameterivNV(GLenum pname, const GLint *params) {
   if (getExtendedProcAddress("glCombinerParameterivNV") == NULL) {
      return GL_kludge_error_void("glCombinerParameterivNV");
   }
   _glCombinerParameterivNV = (void (*)(GLenum , const GLint *))getExtendedProcAddress("glCombinerParameterivNV");
   return _glCombinerParameterivNV(pname , params);
}

void stub_glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat *params);
void (* _glCombinerStageParameterfvNV)(GLenum stage, GLenum pname, const GLfloat *params) = &stub_glCombinerStageParameterfvNV;
void stub_glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat *params) {
   if (getExtendedProcAddress("glCombinerStageParameterfvNV") == NULL) {
      return GL_kludge_error_void("glCombinerStageParameterfvNV");
   }
   _glCombinerStageParameterfvNV = (void (*)(GLenum , GLenum , const GLfloat *))getExtendedProcAddress("glCombinerStageParameterfvNV");
   return _glCombinerStageParameterfvNV(stage , pname , params);
}

void stub_glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
void (* _glCompressedTexImage1DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data) = &stub_glCompressedTexImage1DARB;
void stub_glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data) {
   if (getExtendedProcAddress("glCompressedTexImage1DARB") == NULL) {
      return GL_kludge_error_void("glCompressedTexImage1DARB");
   }
   _glCompressedTexImage1DARB = (void (*)(GLenum , GLint , GLenum , GLsizei , GLint , GLsizei , const GLvoid *))getExtendedProcAddress("glCompressedTexImage1DARB");
   return _glCompressedTexImage1DARB(target , level , internalformat , width , border , imageSize , data);
}

void stub_glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
void (* _glCompressedTexImage2DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data) = &stub_glCompressedTexImage2DARB;
void stub_glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data) {
   if (getExtendedProcAddress("glCompressedTexImage2DARB") == NULL) {
      return GL_kludge_error_void("glCompressedTexImage2DARB");
   }
   _glCompressedTexImage2DARB = (void (*)(GLenum , GLint , GLenum , GLsizei , GLsizei , GLint , GLsizei , const GLvoid *))getExtendedProcAddress("glCompressedTexImage2DARB");
   return _glCompressedTexImage2DARB(target , level , internalformat , width , height , border , imageSize , data);
}

void stub_glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
void (* _glCompressedTexImage3DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data) = &stub_glCompressedTexImage3DARB;
void stub_glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data) {
   if (getExtendedProcAddress("glCompressedTexImage3DARB") == NULL) {
      return GL_kludge_error_void("glCompressedTexImage3DARB");
   }
   _glCompressedTexImage3DARB = (void (*)(GLenum , GLint , GLenum , GLsizei , GLsizei , GLsizei , GLint , GLsizei , const GLvoid *))getExtendedProcAddress("glCompressedTexImage3DARB");
   return _glCompressedTexImage3DARB(target , level , internalformat , width , height , depth , border , imageSize , data);
}

void stub_glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
void (* _glCompressedTexSubImage1DARB)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data) = &stub_glCompressedTexSubImage1DARB;
void stub_glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data) {
   if (getExtendedProcAddress("glCompressedTexSubImage1DARB") == NULL) {
      return GL_kludge_error_void("glCompressedTexSubImage1DARB");
   }
   _glCompressedTexSubImage1DARB = (void (*)(GLenum , GLint , GLint , GLsizei , GLenum , GLsizei , const GLvoid *))getExtendedProcAddress("glCompressedTexSubImage1DARB");
   return _glCompressedTexSubImage1DARB(target , level , xoffset , width , format , imageSize , data);
}

void stub_glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
void (* _glCompressedTexSubImage2DARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data) = &stub_glCompressedTexSubImage2DARB;
void stub_glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data) {
   if (getExtendedProcAddress("glCompressedTexSubImage2DARB") == NULL) {
      return GL_kludge_error_void("glCompressedTexSubImage2DARB");
   }
   _glCompressedTexSubImage2DARB = (void (*)(GLenum , GLint , GLint , GLint , GLsizei , GLsizei , GLenum , GLsizei , const GLvoid *))getExtendedProcAddress("glCompressedTexSubImage2DARB");
   return _glCompressedTexSubImage2DARB(target , level , xoffset , yoffset , width , height , format , imageSize , data);
}

void stub_glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
void (* _glCompressedTexSubImage3DARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data) = &stub_glCompressedTexSubImage3DARB;
void stub_glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data) {
   if (getExtendedProcAddress("glCompressedTexSubImage3DARB") == NULL) {
      return GL_kludge_error_void("glCompressedTexSubImage3DARB");
   }
   _glCompressedTexSubImage3DARB = (void (*)(GLenum , GLint , GLint , GLint , GLint , GLsizei , GLsizei , GLsizei , GLenum , GLsizei , const GLvoid *))getExtendedProcAddress("glCompressedTexSubImage3DARB");
   return _glCompressedTexSubImage3DARB(target , level , xoffset , yoffset , zoffset , width , height , depth , format , imageSize , data);
}

void stub_glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image);
void (* _glConvolutionFilter1D)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image) = &stub_glConvolutionFilter1D;
void stub_glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image) {
   if (getExtendedProcAddress("glConvolutionFilter1D") == NULL) {
      return GL_kludge_error_void("glConvolutionFilter1D");
   }
   _glConvolutionFilter1D = (void (*)(GLenum , GLenum , GLsizei , GLenum , GLenum , const GLvoid *))getExtendedProcAddress("glConvolutionFilter1D");
   return _glConvolutionFilter1D(target , internalformat , width , format , type , image);
}

void stub_glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image);
void (* _glConvolutionFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image) = &stub_glConvolutionFilter2D;
void stub_glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image) {
   if (getExtendedProcAddress("glConvolutionFilter2D") == NULL) {
      return GL_kludge_error_void("glConvolutionFilter2D");
   }
   _glConvolutionFilter2D = (void (*)(GLenum , GLenum , GLsizei , GLsizei , GLenum , GLenum , const GLvoid *))getExtendedProcAddress("glConvolutionFilter2D");
   return _glConvolutionFilter2D(target , internalformat , width , height , format , type , image);
}

void stub_glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params);
void (* _glConvolutionParameterf)(GLenum target, GLenum pname, GLfloat params) = &stub_glConvolutionParameterf;
void stub_glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params) {
   if (getExtendedProcAddress("glConvolutionParameterf") == NULL) {
      return GL_kludge_error_void("glConvolutionParameterf");
   }
   _glConvolutionParameterf = (void (*)(GLenum , GLenum , GLfloat))getExtendedProcAddress("glConvolutionParameterf");
   return _glConvolutionParameterf(target , pname , params);
}

void stub_glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat *params);
void (* _glConvolutionParameterfv)(GLenum target, GLenum pname, const GLfloat *params) = &stub_glConvolutionParameterfv;
void stub_glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat *params) {
   if (getExtendedProcAddress("glConvolutionParameterfv") == NULL) {
      return GL_kludge_error_void("glConvolutionParameterfv");
   }
   _glConvolutionParameterfv = (void (*)(GLenum , GLenum , const GLfloat *))getExtendedProcAddress("glConvolutionParameterfv");
   return _glConvolutionParameterfv(target , pname , params);
}

void stub_glConvolutionParameteri(GLenum target, GLenum pname, GLint params);
void (* _glConvolutionParameteri)(GLenum target, GLenum pname, GLint params) = &stub_glConvolutionParameteri;
void stub_glConvolutionParameteri(GLenum target, GLenum pname, GLint params) {
   if (getExtendedProcAddress("glConvolutionParameteri") == NULL) {
      return GL_kludge_error_void("glConvolutionParameteri");
   }
   _glConvolutionParameteri = (void (*)(GLenum , GLenum , GLint))getExtendedProcAddress("glConvolutionParameteri");
   return _glConvolutionParameteri(target , pname , params);
}

void stub_glConvolutionParameteriv(GLenum target, GLenum pname, const GLint *params);
void (* _glConvolutionParameteriv)(GLenum target, GLenum pname, const GLint *params) = &stub_glConvolutionParameteriv;
void stub_glConvolutionParameteriv(GLenum target, GLenum pname, const GLint *params) {
   if (getExtendedProcAddress("glConvolutionParameteriv") == NULL) {
      return GL_kludge_error_void("glConvolutionParameteriv");
   }
   _glConvolutionParameteriv = (void (*)(GLenum , GLenum , const GLint *))getExtendedProcAddress("glConvolutionParameteriv");
   return _glConvolutionParameteriv(target , pname , params);
}

void stub_glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
void (* _glCopyColorSubTable)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) = &stub_glCopyColorSubTable;
void stub_glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) {
   if (getExtendedProcAddress("glCopyColorSubTable") == NULL) {
      return GL_kludge_error_void("glCopyColorSubTable");
   }
   _glCopyColorSubTable = (void (*)(GLenum , GLsizei , GLint , GLint , GLsizei))getExtendedProcAddress("glCopyColorSubTable");
   return _glCopyColorSubTable(target , start , x , y , width);
}

void stub_glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
void (* _glCopyColorTable)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) = &stub_glCopyColorTable;
void stub_glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) {
   if (getExtendedProcAddress("glCopyColorTable") == NULL) {
      return GL_kludge_error_void("glCopyColorTable");
   }
   _glCopyColorTable = (void (*)(GLenum , GLenum , GLint , GLint , GLsizei))getExtendedProcAddress("glCopyColorTable");
   return _glCopyColorTable(target , internalformat , x , y , width);
}

void stub_glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
void (* _glCopyConvolutionFilter1D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) = &stub_glCopyConvolutionFilter1D;
void stub_glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) {
   if (getExtendedProcAddress("glCopyConvolutionFilter1D") == NULL) {
      return GL_kludge_error_void("glCopyConvolutionFilter1D");
   }
   _glCopyConvolutionFilter1D = (void (*)(GLenum , GLenum , GLint , GLint , GLsizei))getExtendedProcAddress("glCopyConvolutionFilter1D");
   return _glCopyConvolutionFilter1D(target , internalformat , x , y , width);
}

void stub_glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
void (* _glCopyConvolutionFilter2D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height) = &stub_glCopyConvolutionFilter2D;
void stub_glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height) {
   if (getExtendedProcAddress("glCopyConvolutionFilter2D") == NULL) {
      return GL_kludge_error_void("glCopyConvolutionFilter2D");
   }
   _glCopyConvolutionFilter2D = (void (*)(GLenum , GLenum , GLint , GLint , GLsizei , GLsizei))getExtendedProcAddress("glCopyConvolutionFilter2D");
   return _glCopyConvolutionFilter2D(target , internalformat , x , y , width , height);
}

void stub_glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void (* _glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) = &stub_glCopyTexSubImage3D;
void stub_glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
   if (getExtendedProcAddress("glCopyTexSubImage3D") == NULL) {
      return GL_kludge_error_void("glCopyTexSubImage3D");
   }
   _glCopyTexSubImage3D = (void (*)(GLenum , GLint , GLint , GLint , GLint , GLint , GLint , GLsizei , GLsizei))getExtendedProcAddress("glCopyTexSubImage3D");
   return _glCopyTexSubImage3D(target , level , xoffset , yoffset , zoffset , x , y , width , height);
}

void stub_glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void (* _glCopyTexSubImage3DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) = &stub_glCopyTexSubImage3DEXT;
void stub_glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
   if (getExtendedProcAddress("glCopyTexSubImage3DEXT") == NULL) {
      return GL_kludge_error_void("glCopyTexSubImage3DEXT");
   }
   _glCopyTexSubImage3DEXT = (void (*)(GLenum , GLint , GLint , GLint , GLint , GLint , GLint , GLsizei , GLsizei))getExtendedProcAddress("glCopyTexSubImage3DEXT");
   return _glCopyTexSubImage3DEXT(target , level , xoffset , yoffset , zoffset , x , y , width , height);
}

void stub_glDeleteFencesNV(GLsizei n, const GLuint *fences);
void (* _glDeleteFencesNV)(GLsizei n, const GLuint *fences) = &stub_glDeleteFencesNV;
void stub_glDeleteFencesNV(GLsizei n, const GLuint *fences) {
   if (getExtendedProcAddress("glDeleteFencesNV") == NULL) {
      return GL_kludge_error_void("glDeleteFencesNV");
   }
   _glDeleteFencesNV = (void (*)(GLsizei , const GLuint *))getExtendedProcAddress("glDeleteFencesNV");
   return _glDeleteFencesNV(n , fences);
}

void stub_glDeleteOcclusionQueriesNV(GLsizei n, const GLuint *ids);
void (* _glDeleteOcclusionQueriesNV)(GLsizei n, const GLuint *ids) = &stub_glDeleteOcclusionQueriesNV;
void stub_glDeleteOcclusionQueriesNV(GLsizei n, const GLuint *ids) {
   if (getExtendedProcAddress("glDeleteOcclusionQueriesNV") == NULL) {
      return GL_kludge_error_void("glDeleteOcclusionQueriesNV");
   }
   _glDeleteOcclusionQueriesNV = (void (*)(GLsizei , const GLuint *))getExtendedProcAddress("glDeleteOcclusionQueriesNV");
   return _glDeleteOcclusionQueriesNV(n , ids);
}

void stub_glDeleteProgramsARB(GLsizei n, const GLuint *programs);
void (* _glDeleteProgramsARB)(GLsizei n, const GLuint *programs) = &stub_glDeleteProgramsARB;
void stub_glDeleteProgramsARB(GLsizei n, const GLuint *programs) {
   if (getExtendedProcAddress("glDeleteProgramsARB") == NULL) {
      return GL_kludge_error_void("glDeleteProgramsARB");
   }
   _glDeleteProgramsARB = (void (*)(GLsizei , const GLuint *))getExtendedProcAddress("glDeleteProgramsARB");
   return _glDeleteProgramsARB(n , programs);
}

void stub_glDeleteProgramsNV(GLsizei n, const GLuint *programs);
void (* _glDeleteProgramsNV)(GLsizei n, const GLuint *programs) = &stub_glDeleteProgramsNV;
void stub_glDeleteProgramsNV(GLsizei n, const GLuint *programs) {
   if (getExtendedProcAddress("glDeleteProgramsNV") == NULL) {
      return GL_kludge_error_void("glDeleteProgramsNV");
   }
   _glDeleteProgramsNV = (void (*)(GLsizei , const GLuint *))getExtendedProcAddress("glDeleteProgramsNV");
   return _glDeleteProgramsNV(n , programs);
}

void stub_glDeleteTexturesEXT(GLsizei n, const GLuint *textures);
void (* _glDeleteTexturesEXT)(GLsizei n, const GLuint *textures) = &stub_glDeleteTexturesEXT;
void stub_glDeleteTexturesEXT(GLsizei n, const GLuint *textures) {
   if (getExtendedProcAddress("glDeleteTexturesEXT") == NULL) {
      return GL_kludge_error_void("glDeleteTexturesEXT");
   }
   _glDeleteTexturesEXT = (void (*)(GLsizei , const GLuint *))getExtendedProcAddress("glDeleteTexturesEXT");
   return _glDeleteTexturesEXT(n , textures);
}

void stub_glDepthBoundsNV(GLclampd zmin, GLclampd zmax);
void (* _glDepthBoundsNV)(GLclampd zmin, GLclampd zmax) = &stub_glDepthBoundsNV;
void stub_glDepthBoundsNV(GLclampd zmin, GLclampd zmax) {
   if (getExtendedProcAddress("glDepthBoundsNV") == NULL) {
      return GL_kludge_error_void("glDepthBoundsNV");
   }
   _glDepthBoundsNV = (void (*)(GLclampd , GLclampd))getExtendedProcAddress("glDepthBoundsNV");
   return _glDepthBoundsNV(zmin , zmax);
}

void stub_glDisableVertexAttribArrayARB(GLuint index);
void (* _glDisableVertexAttribArrayARB)(GLuint index) = &stub_glDisableVertexAttribArrayARB;
void stub_glDisableVertexAttribArrayARB(GLuint index) {
   if (getExtendedProcAddress("glDisableVertexAttribArrayARB") == NULL) {
      return GL_kludge_error_void("glDisableVertexAttribArrayARB");
   }
   _glDisableVertexAttribArrayARB = (void (*)(GLuint))getExtendedProcAddress("glDisableVertexAttribArrayARB");
   return _glDisableVertexAttribArrayARB(index);
}

void stub_glDrawArraysEXT(GLenum mode, GLint first, GLsizei count);
void (* _glDrawArraysEXT)(GLenum mode, GLint first, GLsizei count) = &stub_glDrawArraysEXT;
void stub_glDrawArraysEXT(GLenum mode, GLint first, GLsizei count) {
   if (getExtendedProcAddress("glDrawArraysEXT") == NULL) {
      return GL_kludge_error_void("glDrawArraysEXT");
   }
   _glDrawArraysEXT = (void (*)(GLenum , GLint , GLsizei))getExtendedProcAddress("glDrawArraysEXT");
   return _glDrawArraysEXT(mode , first , count);
}

void stub_glDrawMeshNV(GLenum mode, GLsizei count, GLenum type, GLsizei stride, const GLvoid *indicesTexCoord, const GLvoid *indicesNormal, const GLvoid *indicesVertex);
void (* _glDrawMeshNV)(GLenum mode, GLsizei count, GLenum type, GLsizei stride, const GLvoid *indicesTexCoord, const GLvoid *indicesNormal, const GLvoid *indicesVertex) = &stub_glDrawMeshNV;
void stub_glDrawMeshNV(GLenum mode, GLsizei count, GLenum type, GLsizei stride, const GLvoid *indicesTexCoord, const GLvoid *indicesNormal, const GLvoid *indicesVertex) {
   if (getExtendedProcAddress("glDrawMeshNV") == NULL) {
      return GL_kludge_error_void("glDrawMeshNV");
   }
   _glDrawMeshNV = (void (*)(GLenum , GLsizei , GLenum , GLsizei , const GLvoid * , const GLvoid * , const GLvoid *))getExtendedProcAddress("glDrawMeshNV");
   return _glDrawMeshNV(mode , count , type , stride , indicesTexCoord , indicesNormal , indicesVertex);
}

void stub_glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
void (* _glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices) = &stub_glDrawRangeElements;
void stub_glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices) {
   if (getExtendedProcAddress("glDrawRangeElements") == NULL) {
      return GL_kludge_error_void("glDrawRangeElements");
   }
   _glDrawRangeElements = (void (*)(GLenum , GLuint , GLuint , GLsizei , GLenum , const GLvoid *))getExtendedProcAddress("glDrawRangeElements");
   return _glDrawRangeElements(mode , start , end , count , type , indices);
}

void stub_glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
void (* _glDrawRangeElementsEXT)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices) = &stub_glDrawRangeElementsEXT;
void stub_glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices) {
   if (getExtendedProcAddress("glDrawRangeElementsEXT") == NULL) {
      return GL_kludge_error_void("glDrawRangeElementsEXT");
   }
   _glDrawRangeElementsEXT = (void (*)(GLenum , GLuint , GLuint , GLsizei , GLenum , const GLvoid *))getExtendedProcAddress("glDrawRangeElementsEXT");
   return _glDrawRangeElementsEXT(mode , start , end , count , type , indices);
}

void stub_glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean *pointer);
void (* _glEdgeFlagPointerEXT)(GLsizei stride, GLsizei count, const GLboolean *pointer) = &stub_glEdgeFlagPointerEXT;
void stub_glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean *pointer) {
   if (getExtendedProcAddress("glEdgeFlagPointerEXT") == NULL) {
      return GL_kludge_error_void("glEdgeFlagPointerEXT");
   }
   _glEdgeFlagPointerEXT = (void (*)(GLsizei , GLsizei , const GLboolean *))getExtendedProcAddress("glEdgeFlagPointerEXT");
   return _glEdgeFlagPointerEXT(stride , count , pointer);
}

void stub_glEnableVertexAttribArrayARB(GLuint index);
void (* _glEnableVertexAttribArrayARB)(GLuint index) = &stub_glEnableVertexAttribArrayARB;
void stub_glEnableVertexAttribArrayARB(GLuint index) {
   if (getExtendedProcAddress("glEnableVertexAttribArrayARB") == NULL) {
      return GL_kludge_error_void("glEnableVertexAttribArrayARB");
   }
   _glEnableVertexAttribArrayARB = (void (*)(GLuint))getExtendedProcAddress("glEnableVertexAttribArrayARB");
   return _glEnableVertexAttribArrayARB(index);
}

void stub_glEndOcclusionQueryNV(void);
void (* _glEndOcclusionQueryNV)(void) = &stub_glEndOcclusionQueryNV;
void stub_glEndOcclusionQueryNV(void) {
   if (getExtendedProcAddress("glEndOcclusionQueryNV") == NULL) {
      return GL_kludge_error_void("glEndOcclusionQueryNV");
   }
   _glEndOcclusionQueryNV = (void (*)())getExtendedProcAddress("glEndOcclusionQueryNV");
   return _glEndOcclusionQueryNV();
}

void stub_glExecuteProgramNV(GLenum target, GLuint id, const GLfloat *params);
void (* _glExecuteProgramNV)(GLenum target, GLuint id, const GLfloat *params) = &stub_glExecuteProgramNV;
void stub_glExecuteProgramNV(GLenum target, GLuint id, const GLfloat *params) {
   if (getExtendedProcAddress("glExecuteProgramNV") == NULL) {
      return GL_kludge_error_void("glExecuteProgramNV");
   }
   _glExecuteProgramNV = (void (*)(GLenum , GLuint , const GLfloat *))getExtendedProcAddress("glExecuteProgramNV");
   return _glExecuteProgramNV(target , id , params);
}

void stub_glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
void (* _glFinalCombinerInputNV)(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) = &stub_glFinalCombinerInputNV;
void stub_glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) {
   if (getExtendedProcAddress("glFinalCombinerInputNV") == NULL) {
      return GL_kludge_error_void("glFinalCombinerInputNV");
   }
   _glFinalCombinerInputNV = (void (*)(GLenum , GLenum , GLenum , GLenum))getExtendedProcAddress("glFinalCombinerInputNV");
   return _glFinalCombinerInputNV(variable , input , mapping , componentUsage);
}

void stub_glFinishFenceNV(GLuint fence);
void (* _glFinishFenceNV)(GLuint fence) = &stub_glFinishFenceNV;
void stub_glFinishFenceNV(GLuint fence) {
   if (getExtendedProcAddress("glFinishFenceNV") == NULL) {
      return GL_kludge_error_void("glFinishFenceNV");
   }
   _glFinishFenceNV = (void (*)(GLuint))getExtendedProcAddress("glFinishFenceNV");
   return _glFinishFenceNV(fence);
}

GLuint stub_glFlushHold(void);
GLuint (* _glFlushHold)(void) = &stub_glFlushHold;
GLuint stub_glFlushHold(void) {
   if (getExtendedProcAddress("glFlushHold") == NULL) {
      return GL_kludge_error_GLuint("glFlushHold");
   }
   _glFlushHold = (GLuint (*)())getExtendedProcAddress("glFlushHold");
   return _glFlushHold();
}

void stub_glFlushPixelDataRangeNV(GLenum target);
void (* _glFlushPixelDataRangeNV)(GLenum target) = &stub_glFlushPixelDataRangeNV;
void stub_glFlushPixelDataRangeNV(GLenum target) {
   if (getExtendedProcAddress("glFlushPixelDataRangeNV") == NULL) {
      return GL_kludge_error_void("glFlushPixelDataRangeNV");
   }
   _glFlushPixelDataRangeNV = (void (*)(GLenum))getExtendedProcAddress("glFlushPixelDataRangeNV");
   return _glFlushPixelDataRangeNV(target);
}

void stub_glFlushVertexArrayRangeNV(void);
void (* _glFlushVertexArrayRangeNV)(void) = &stub_glFlushVertexArrayRangeNV;
void stub_glFlushVertexArrayRangeNV(void) {
   if (getExtendedProcAddress("glFlushVertexArrayRangeNV") == NULL) {
      return GL_kludge_error_void("glFlushVertexArrayRangeNV");
   }
   _glFlushVertexArrayRangeNV = (void (*)())getExtendedProcAddress("glFlushVertexArrayRangeNV");
   return _glFlushVertexArrayRangeNV();
}

void stub_glFogCoordPointer(GLenum type, GLsizei stride, const GLvoid *pointer);
void (* _glFogCoordPointer)(GLenum type, GLsizei stride, const GLvoid *pointer) = &stub_glFogCoordPointer;
void stub_glFogCoordPointer(GLenum type, GLsizei stride, const GLvoid *pointer) {
   if (getExtendedProcAddress("glFogCoordPointer") == NULL) {
      return GL_kludge_error_void("glFogCoordPointer");
   }
   _glFogCoordPointer = (void (*)(GLenum , GLsizei , const GLvoid *))getExtendedProcAddress("glFogCoordPointer");
   return _glFogCoordPointer(type , stride , pointer);
}

void stub_glFogCoordPointerEXT(GLenum type, GLsizei stride, const GLvoid *pointer);
void (* _glFogCoordPointerEXT)(GLenum type, GLsizei stride, const GLvoid *pointer) = &stub_glFogCoordPointerEXT;
void stub_glFogCoordPointerEXT(GLenum type, GLsizei stride, const GLvoid *pointer) {
   if (getExtendedProcAddress("glFogCoordPointerEXT") == NULL) {
      return GL_kludge_error_void("glFogCoordPointerEXT");
   }
   _glFogCoordPointerEXT = (void (*)(GLenum , GLsizei , const GLvoid *))getExtendedProcAddress("glFogCoordPointerEXT");
   return _glFogCoordPointerEXT(type , stride , pointer);
}

void stub_glFogCoordd(GLdouble fog);
void (* _glFogCoordd)(GLdouble fog) = &stub_glFogCoordd;
void stub_glFogCoordd(GLdouble fog) {
   if (getExtendedProcAddress("glFogCoordd") == NULL) {
      return GL_kludge_error_void("glFogCoordd");
   }
   _glFogCoordd = (void (*)(GLdouble))getExtendedProcAddress("glFogCoordd");
   return _glFogCoordd(fog);
}

void stub_glFogCoorddEXT(GLdouble fog);
void (* _glFogCoorddEXT)(GLdouble fog) = &stub_glFogCoorddEXT;
void stub_glFogCoorddEXT(GLdouble fog) {
   if (getExtendedProcAddress("glFogCoorddEXT") == NULL) {
      return GL_kludge_error_void("glFogCoorddEXT");
   }
   _glFogCoorddEXT = (void (*)(GLdouble))getExtendedProcAddress("glFogCoorddEXT");
   return _glFogCoorddEXT(fog);
}

void stub_glFogCoorddv(const GLdouble *fog);
void (* _glFogCoorddv)(const GLdouble *fog) = &stub_glFogCoorddv;
void stub_glFogCoorddv(const GLdouble *fog) {
   if (getExtendedProcAddress("glFogCoorddv") == NULL) {
      return GL_kludge_error_void("glFogCoorddv");
   }
   _glFogCoorddv = (void (*)(const GLdouble *))getExtendedProcAddress("glFogCoorddv");
   return _glFogCoorddv(fog);
}

void stub_glFogCoorddvEXT(const GLdouble *fog);
void (* _glFogCoorddvEXT)(const GLdouble *fog) = &stub_glFogCoorddvEXT;
void stub_glFogCoorddvEXT(const GLdouble *fog) {
   if (getExtendedProcAddress("glFogCoorddvEXT") == NULL) {
      return GL_kludge_error_void("glFogCoorddvEXT");
   }
   _glFogCoorddvEXT = (void (*)(const GLdouble *))getExtendedProcAddress("glFogCoorddvEXT");
   return _glFogCoorddvEXT(fog);
}

void stub_glFogCoordf(GLfloat fog);
void (* _glFogCoordf)(GLfloat fog) = &stub_glFogCoordf;
void stub_glFogCoordf(GLfloat fog) {
   if (getExtendedProcAddress("glFogCoordf") == NULL) {
      return GL_kludge_error_void("glFogCoordf");
   }
   _glFogCoordf = (void (*)(GLfloat))getExtendedProcAddress("glFogCoordf");
   return _glFogCoordf(fog);
}

void stub_glFogCoordfEXT(GLfloat fog);
void (* _glFogCoordfEXT)(GLfloat fog) = &stub_glFogCoordfEXT;
void stub_glFogCoordfEXT(GLfloat fog) {
   if (getExtendedProcAddress("glFogCoordfEXT") == NULL) {
      return GL_kludge_error_void("glFogCoordfEXT");
   }
   _glFogCoordfEXT = (void (*)(GLfloat))getExtendedProcAddress("glFogCoordfEXT");
   return _glFogCoordfEXT(fog);
}

void stub_glFogCoordfv(const GLfloat *fog);
void (* _glFogCoordfv)(const GLfloat *fog) = &stub_glFogCoordfv;
void stub_glFogCoordfv(const GLfloat *fog) {
   if (getExtendedProcAddress("glFogCoordfv") == NULL) {
      return GL_kludge_error_void("glFogCoordfv");
   }
   _glFogCoordfv = (void (*)(const GLfloat *))getExtendedProcAddress("glFogCoordfv");
   return _glFogCoordfv(fog);
}

void stub_glFogCoordfvEXT(const GLfloat *fog);
void (* _glFogCoordfvEXT)(const GLfloat *fog) = &stub_glFogCoordfvEXT;
void stub_glFogCoordfvEXT(const GLfloat *fog) {
   if (getExtendedProcAddress("glFogCoordfvEXT") == NULL) {
      return GL_kludge_error_void("glFogCoordfvEXT");
   }
   _glFogCoordfvEXT = (void (*)(const GLfloat *))getExtendedProcAddress("glFogCoordfvEXT");
   return _glFogCoordfvEXT(fog);
}

void stub_glGenFencesNV(GLsizei n, GLuint *fences);
void (* _glGenFencesNV)(GLsizei n, GLuint *fences) = &stub_glGenFencesNV;
void stub_glGenFencesNV(GLsizei n, GLuint *fences) {
   if (getExtendedProcAddress("glGenFencesNV") == NULL) {
      return GL_kludge_error_void("glGenFencesNV");
   }
   _glGenFencesNV = (void (*)(GLsizei , GLuint *))getExtendedProcAddress("glGenFencesNV");
   return _glGenFencesNV(n , fences);
}

void stub_glGenOcclusionQueriesNV(GLsizei n, GLuint *ids);
void (* _glGenOcclusionQueriesNV)(GLsizei n, GLuint *ids) = &stub_glGenOcclusionQueriesNV;
void stub_glGenOcclusionQueriesNV(GLsizei n, GLuint *ids) {
   if (getExtendedProcAddress("glGenOcclusionQueriesNV") == NULL) {
      return GL_kludge_error_void("glGenOcclusionQueriesNV");
   }
   _glGenOcclusionQueriesNV = (void (*)(GLsizei , GLuint *))getExtendedProcAddress("glGenOcclusionQueriesNV");
   return _glGenOcclusionQueriesNV(n , ids);
}

void stub_glGenProgramsARB(GLsizei n, GLuint *programs);
void (* _glGenProgramsARB)(GLsizei n, GLuint *programs) = &stub_glGenProgramsARB;
void stub_glGenProgramsARB(GLsizei n, GLuint *programs) {
   if (getExtendedProcAddress("glGenProgramsARB") == NULL) {
      return GL_kludge_error_void("glGenProgramsARB");
   }
   _glGenProgramsARB = (void (*)(GLsizei , GLuint *))getExtendedProcAddress("glGenProgramsARB");
   return _glGenProgramsARB(n , programs);
}

void stub_glGenProgramsNV(GLsizei n, GLuint *programs);
void (* _glGenProgramsNV)(GLsizei n, GLuint *programs) = &stub_glGenProgramsNV;
void stub_glGenProgramsNV(GLsizei n, GLuint *programs) {
   if (getExtendedProcAddress("glGenProgramsNV") == NULL) {
      return GL_kludge_error_void("glGenProgramsNV");
   }
   _glGenProgramsNV = (void (*)(GLsizei , GLuint *))getExtendedProcAddress("glGenProgramsNV");
   return _glGenProgramsNV(n , programs);
}

void stub_glGenTexturesEXT(GLsizei n, GLuint *textures);
void (* _glGenTexturesEXT)(GLsizei n, GLuint *textures) = &stub_glGenTexturesEXT;
void stub_glGenTexturesEXT(GLsizei n, GLuint *textures) {
   if (getExtendedProcAddress("glGenTexturesEXT") == NULL) {
      return GL_kludge_error_void("glGenTexturesEXT");
   }
   _glGenTexturesEXT = (void (*)(GLsizei , GLuint *))getExtendedProcAddress("glGenTexturesEXT");
   return _glGenTexturesEXT(n , textures);
}

void stub_glGetColorTable(GLenum target, GLenum format, GLenum type, GLvoid *table);
void (* _glGetColorTable)(GLenum target, GLenum format, GLenum type, GLvoid *table) = &stub_glGetColorTable;
void stub_glGetColorTable(GLenum target, GLenum format, GLenum type, GLvoid *table) {
   if (getExtendedProcAddress("glGetColorTable") == NULL) {
      return GL_kludge_error_void("glGetColorTable");
   }
   _glGetColorTable = (void (*)(GLenum , GLenum , GLenum , GLvoid *))getExtendedProcAddress("glGetColorTable");
   return _glGetColorTable(target , format , type , table);
}

void stub_glGetColorTableEXT(GLenum target, GLenum format, GLenum type, GLvoid *table);
void (* _glGetColorTableEXT)(GLenum target, GLenum format, GLenum type, GLvoid *table) = &stub_glGetColorTableEXT;
void stub_glGetColorTableEXT(GLenum target, GLenum format, GLenum type, GLvoid *table) {
   if (getExtendedProcAddress("glGetColorTableEXT") == NULL) {
      return GL_kludge_error_void("glGetColorTableEXT");
   }
   _glGetColorTableEXT = (void (*)(GLenum , GLenum , GLenum , GLvoid *))getExtendedProcAddress("glGetColorTableEXT");
   return _glGetColorTableEXT(target , format , type , table);
}

void stub_glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat *params);
void (* _glGetColorTableParameterfv)(GLenum target, GLenum pname, GLfloat *params) = &stub_glGetColorTableParameterfv;
void stub_glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat *params) {
   if (getExtendedProcAddress("glGetColorTableParameterfv") == NULL) {
      return GL_kludge_error_void("glGetColorTableParameterfv");
   }
   _glGetColorTableParameterfv = (void (*)(GLenum , GLenum , GLfloat *))getExtendedProcAddress("glGetColorTableParameterfv");
   return _glGetColorTableParameterfv(target , pname , params);
}

void stub_glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat *params);
void (* _glGetColorTableParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params) = &stub_glGetColorTableParameterfvEXT;
void stub_glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat *params) {
   if (getExtendedProcAddress("glGetColorTableParameterfvEXT") == NULL) {
      return GL_kludge_error_void("glGetColorTableParameterfvEXT");
   }
   _glGetColorTableParameterfvEXT = (void (*)(GLenum , GLenum , GLfloat *))getExtendedProcAddress("glGetColorTableParameterfvEXT");
   return _glGetColorTableParameterfvEXT(target , pname , params);
}

void stub_glGetColorTableParameteriv(GLenum target, GLenum pname, GLint *params);
void (* _glGetColorTableParameteriv)(GLenum target, GLenum pname, GLint *params) = &stub_glGetColorTableParameteriv;
void stub_glGetColorTableParameteriv(GLenum target, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetColorTableParameteriv") == NULL) {
      return GL_kludge_error_void("glGetColorTableParameteriv");
   }
   _glGetColorTableParameteriv = (void (*)(GLenum , GLenum , GLint *))getExtendedProcAddress("glGetColorTableParameteriv");
   return _glGetColorTableParameteriv(target , pname , params);
}

void stub_glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint *params);
void (* _glGetColorTableParameterivEXT)(GLenum target, GLenum pname, GLint *params) = &stub_glGetColorTableParameterivEXT;
void stub_glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetColorTableParameterivEXT") == NULL) {
      return GL_kludge_error_void("glGetColorTableParameterivEXT");
   }
   _glGetColorTableParameterivEXT = (void (*)(GLenum , GLenum , GLint *))getExtendedProcAddress("glGetColorTableParameterivEXT");
   return _glGetColorTableParameterivEXT(target , pname , params);
}

void stub_glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params);
void (* _glGetCombinerInputParameterfvNV)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params) = &stub_glGetCombinerInputParameterfvNV;
void stub_glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params) {
   if (getExtendedProcAddress("glGetCombinerInputParameterfvNV") == NULL) {
      return GL_kludge_error_void("glGetCombinerInputParameterfvNV");
   }
   _glGetCombinerInputParameterfvNV = (void (*)(GLenum , GLenum , GLenum , GLenum , GLfloat *))getExtendedProcAddress("glGetCombinerInputParameterfvNV");
   return _glGetCombinerInputParameterfvNV(stage , portion , variable , pname , params);
}

void stub_glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params);
void (* _glGetCombinerInputParameterivNV)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params) = &stub_glGetCombinerInputParameterivNV;
void stub_glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetCombinerInputParameterivNV") == NULL) {
      return GL_kludge_error_void("glGetCombinerInputParameterivNV");
   }
   _glGetCombinerInputParameterivNV = (void (*)(GLenum , GLenum , GLenum , GLenum , GLint *))getExtendedProcAddress("glGetCombinerInputParameterivNV");
   return _glGetCombinerInputParameterivNV(stage , portion , variable , pname , params);
}

void stub_glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat *params);
void (* _glGetCombinerOutputParameterfvNV)(GLenum stage, GLenum portion, GLenum pname, GLfloat *params) = &stub_glGetCombinerOutputParameterfvNV;
void stub_glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat *params) {
   if (getExtendedProcAddress("glGetCombinerOutputParameterfvNV") == NULL) {
      return GL_kludge_error_void("glGetCombinerOutputParameterfvNV");
   }
   _glGetCombinerOutputParameterfvNV = (void (*)(GLenum , GLenum , GLenum , GLfloat *))getExtendedProcAddress("glGetCombinerOutputParameterfvNV");
   return _glGetCombinerOutputParameterfvNV(stage , portion , pname , params);
}

void stub_glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint *params);
void (* _glGetCombinerOutputParameterivNV)(GLenum stage, GLenum portion, GLenum pname, GLint *params) = &stub_glGetCombinerOutputParameterivNV;
void stub_glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetCombinerOutputParameterivNV") == NULL) {
      return GL_kludge_error_void("glGetCombinerOutputParameterivNV");
   }
   _glGetCombinerOutputParameterivNV = (void (*)(GLenum , GLenum , GLenum , GLint *))getExtendedProcAddress("glGetCombinerOutputParameterivNV");
   return _glGetCombinerOutputParameterivNV(stage , portion , pname , params);
}

void stub_glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat *params);
void (* _glGetCombinerStageParameterfvNV)(GLenum stage, GLenum pname, GLfloat *params) = &stub_glGetCombinerStageParameterfvNV;
void stub_glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat *params) {
   if (getExtendedProcAddress("glGetCombinerStageParameterfvNV") == NULL) {
      return GL_kludge_error_void("glGetCombinerStageParameterfvNV");
   }
   _glGetCombinerStageParameterfvNV = (void (*)(GLenum , GLenum , GLfloat *))getExtendedProcAddress("glGetCombinerStageParameterfvNV");
   return _glGetCombinerStageParameterfvNV(stage , pname , params);
}

void stub_glGetCompressedTexImageARB(GLenum target, GLint lod, GLvoid *img);
void (* _glGetCompressedTexImageARB)(GLenum target, GLint lod, GLvoid *img) = &stub_glGetCompressedTexImageARB;
void stub_glGetCompressedTexImageARB(GLenum target, GLint lod, GLvoid *img) {
   if (getExtendedProcAddress("glGetCompressedTexImageARB") == NULL) {
      return GL_kludge_error_void("glGetCompressedTexImageARB");
   }
   _glGetCompressedTexImageARB = (void (*)(GLenum , GLint , GLvoid *))getExtendedProcAddress("glGetCompressedTexImageARB");
   return _glGetCompressedTexImageARB(target , lod , img);
}

void stub_glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, GLvoid *image);
void (* _glGetConvolutionFilter)(GLenum target, GLenum format, GLenum type, GLvoid *image) = &stub_glGetConvolutionFilter;
void stub_glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, GLvoid *image) {
   if (getExtendedProcAddress("glGetConvolutionFilter") == NULL) {
      return GL_kludge_error_void("glGetConvolutionFilter");
   }
   _glGetConvolutionFilter = (void (*)(GLenum , GLenum , GLenum , GLvoid *))getExtendedProcAddress("glGetConvolutionFilter");
   return _glGetConvolutionFilter(target , format , type , image);
}

void stub_glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat *params);
void (* _glGetConvolutionParameterfv)(GLenum target, GLenum pname, GLfloat *params) = &stub_glGetConvolutionParameterfv;
void stub_glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat *params) {
   if (getExtendedProcAddress("glGetConvolutionParameterfv") == NULL) {
      return GL_kludge_error_void("glGetConvolutionParameterfv");
   }
   _glGetConvolutionParameterfv = (void (*)(GLenum , GLenum , GLfloat *))getExtendedProcAddress("glGetConvolutionParameterfv");
   return _glGetConvolutionParameterfv(target , pname , params);
}

void stub_glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint *params);
void (* _glGetConvolutionParameteriv)(GLenum target, GLenum pname, GLint *params) = &stub_glGetConvolutionParameteriv;
void stub_glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetConvolutionParameteriv") == NULL) {
      return GL_kludge_error_void("glGetConvolutionParameteriv");
   }
   _glGetConvolutionParameteriv = (void (*)(GLenum , GLenum , GLint *))getExtendedProcAddress("glGetConvolutionParameteriv");
   return _glGetConvolutionParameteriv(target , pname , params);
}

void stub_glGetFenceivNV(GLuint fence, GLenum pname, GLint *params);
void (* _glGetFenceivNV)(GLuint fence, GLenum pname, GLint *params) = &stub_glGetFenceivNV;
void stub_glGetFenceivNV(GLuint fence, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetFenceivNV") == NULL) {
      return GL_kludge_error_void("glGetFenceivNV");
   }
   _glGetFenceivNV = (void (*)(GLuint , GLenum , GLint *))getExtendedProcAddress("glGetFenceivNV");
   return _glGetFenceivNV(fence , pname , params);
}

void stub_glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat *params);
void (* _glGetFinalCombinerInputParameterfvNV)(GLenum variable, GLenum pname, GLfloat *params) = &stub_glGetFinalCombinerInputParameterfvNV;
void stub_glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat *params) {
   if (getExtendedProcAddress("glGetFinalCombinerInputParameterfvNV") == NULL) {
      return GL_kludge_error_void("glGetFinalCombinerInputParameterfvNV");
   }
   _glGetFinalCombinerInputParameterfvNV = (void (*)(GLenum , GLenum , GLfloat *))getExtendedProcAddress("glGetFinalCombinerInputParameterfvNV");
   return _glGetFinalCombinerInputParameterfvNV(variable , pname , params);
}

void stub_glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint *params);
void (* _glGetFinalCombinerInputParameterivNV)(GLenum variable, GLenum pname, GLint *params) = &stub_glGetFinalCombinerInputParameterivNV;
void stub_glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetFinalCombinerInputParameterivNV") == NULL) {
      return GL_kludge_error_void("glGetFinalCombinerInputParameterivNV");
   }
   _glGetFinalCombinerInputParameterivNV = (void (*)(GLenum , GLenum , GLint *))getExtendedProcAddress("glGetFinalCombinerInputParameterivNV");
   return _glGetFinalCombinerInputParameterivNV(variable , pname , params);
}

void stub_glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
void (* _glGetHistogram)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values) = &stub_glGetHistogram;
void stub_glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values) {
   if (getExtendedProcAddress("glGetHistogram") == NULL) {
      return GL_kludge_error_void("glGetHistogram");
   }
   _glGetHistogram = (void (*)(GLenum , GLboolean , GLenum , GLenum , GLvoid *))getExtendedProcAddress("glGetHistogram");
   return _glGetHistogram(target , reset , format , type , values);
}

void stub_glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat *params);
void (* _glGetHistogramParameterfv)(GLenum target, GLenum pname, GLfloat *params) = &stub_glGetHistogramParameterfv;
void stub_glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat *params) {
   if (getExtendedProcAddress("glGetHistogramParameterfv") == NULL) {
      return GL_kludge_error_void("glGetHistogramParameterfv");
   }
   _glGetHistogramParameterfv = (void (*)(GLenum , GLenum , GLfloat *))getExtendedProcAddress("glGetHistogramParameterfv");
   return _glGetHistogramParameterfv(target , pname , params);
}

void stub_glGetHistogramParameteriv(GLenum target, GLenum pname, GLint *params);
void (* _glGetHistogramParameteriv)(GLenum target, GLenum pname, GLint *params) = &stub_glGetHistogramParameteriv;
void stub_glGetHistogramParameteriv(GLenum target, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetHistogramParameteriv") == NULL) {
      return GL_kludge_error_void("glGetHistogramParameteriv");
   }
   _glGetHistogramParameteriv = (void (*)(GLenum , GLenum , GLint *))getExtendedProcAddress("glGetHistogramParameteriv");
   return _glGetHistogramParameteriv(target , pname , params);
}

void stub_glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
void (* _glGetMinmax)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values) = &stub_glGetMinmax;
void stub_glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values) {
   if (getExtendedProcAddress("glGetMinmax") == NULL) {
      return GL_kludge_error_void("glGetMinmax");
   }
   _glGetMinmax = (void (*)(GLenum , GLboolean , GLenum , GLenum , GLvoid *))getExtendedProcAddress("glGetMinmax");
   return _glGetMinmax(target , reset , format , type , values);
}

void stub_glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat *params);
void (* _glGetMinmaxParameterfv)(GLenum target, GLenum pname, GLfloat *params) = &stub_glGetMinmaxParameterfv;
void stub_glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat *params) {
   if (getExtendedProcAddress("glGetMinmaxParameterfv") == NULL) {
      return GL_kludge_error_void("glGetMinmaxParameterfv");
   }
   _glGetMinmaxParameterfv = (void (*)(GLenum , GLenum , GLfloat *))getExtendedProcAddress("glGetMinmaxParameterfv");
   return _glGetMinmaxParameterfv(target , pname , params);
}

void stub_glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint *params);
void (* _glGetMinmaxParameteriv)(GLenum target, GLenum pname, GLint *params) = &stub_glGetMinmaxParameteriv;
void stub_glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetMinmaxParameteriv") == NULL) {
      return GL_kludge_error_void("glGetMinmaxParameteriv");
   }
   _glGetMinmaxParameteriv = (void (*)(GLenum , GLenum , GLint *))getExtendedProcAddress("glGetMinmaxParameteriv");
   return _glGetMinmaxParameteriv(target , pname , params);
}

void stub_glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint *params);
void (* _glGetOcclusionQueryivNV)(GLuint id, GLenum pname, GLint *params) = &stub_glGetOcclusionQueryivNV;
void stub_glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetOcclusionQueryivNV") == NULL) {
      return GL_kludge_error_void("glGetOcclusionQueryivNV");
   }
   _glGetOcclusionQueryivNV = (void (*)(GLuint , GLenum , GLint *))getExtendedProcAddress("glGetOcclusionQueryivNV");
   return _glGetOcclusionQueryivNV(id , pname , params);
}

void stub_glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint *params);
void (* _glGetOcclusionQueryuivNV)(GLuint id, GLenum pname, GLuint *params) = &stub_glGetOcclusionQueryuivNV;
void stub_glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint *params) {
   if (getExtendedProcAddress("glGetOcclusionQueryuivNV") == NULL) {
      return GL_kludge_error_void("glGetOcclusionQueryuivNV");
   }
   _glGetOcclusionQueryuivNV = (void (*)(GLuint , GLenum , GLuint *))getExtendedProcAddress("glGetOcclusionQueryuivNV");
   return _glGetOcclusionQueryuivNV(id , pname , params);
}

void stub_glGetPointervEXT(GLenum pname, GLvoid* *params);
void (* _glGetPointervEXT)(GLenum pname, GLvoid* *params) = &stub_glGetPointervEXT;
void stub_glGetPointervEXT(GLenum pname, GLvoid* *params) {
   if (getExtendedProcAddress("glGetPointervEXT") == NULL) {
      return GL_kludge_error_void("glGetPointervEXT");
   }
   _glGetPointervEXT = (void (*)(GLenum , GLvoid * *))getExtendedProcAddress("glGetPointervEXT");
   return _glGetPointervEXT(pname , params);
}

void stub_glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble *params);
void (* _glGetProgramEnvParameterdvARB)(GLenum target, GLuint index, GLdouble *params) = &stub_glGetProgramEnvParameterdvARB;
void stub_glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble *params) {
   if (getExtendedProcAddress("glGetProgramEnvParameterdvARB") == NULL) {
      return GL_kludge_error_void("glGetProgramEnvParameterdvARB");
   }
   _glGetProgramEnvParameterdvARB = (void (*)(GLenum , GLuint , GLdouble *))getExtendedProcAddress("glGetProgramEnvParameterdvARB");
   return _glGetProgramEnvParameterdvARB(target , index , params);
}

void stub_glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat *params);
void (* _glGetProgramEnvParameterfvARB)(GLenum target, GLuint index, GLfloat *params) = &stub_glGetProgramEnvParameterfvARB;
void stub_glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat *params) {
   if (getExtendedProcAddress("glGetProgramEnvParameterfvARB") == NULL) {
      return GL_kludge_error_void("glGetProgramEnvParameterfvARB");
   }
   _glGetProgramEnvParameterfvARB = (void (*)(GLenum , GLuint , GLfloat *))getExtendedProcAddress("glGetProgramEnvParameterfvARB");
   return _glGetProgramEnvParameterfvARB(target , index , params);
}

void stub_glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble *params);
void (* _glGetProgramLocalParameterdvARB)(GLenum target, GLuint index, GLdouble *params) = &stub_glGetProgramLocalParameterdvARB;
void stub_glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble *params) {
   if (getExtendedProcAddress("glGetProgramLocalParameterdvARB") == NULL) {
      return GL_kludge_error_void("glGetProgramLocalParameterdvARB");
   }
   _glGetProgramLocalParameterdvARB = (void (*)(GLenum , GLuint , GLdouble *))getExtendedProcAddress("glGetProgramLocalParameterdvARB");
   return _glGetProgramLocalParameterdvARB(target , index , params);
}

void stub_glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat *params);
void (* _glGetProgramLocalParameterfvARB)(GLenum target, GLuint index, GLfloat *params) = &stub_glGetProgramLocalParameterfvARB;
void stub_glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat *params) {
   if (getExtendedProcAddress("glGetProgramLocalParameterfvARB") == NULL) {
      return GL_kludge_error_void("glGetProgramLocalParameterfvARB");
   }
   _glGetProgramLocalParameterfvARB = (void (*)(GLenum , GLuint , GLfloat *))getExtendedProcAddress("glGetProgramLocalParameterfvARB");
   return _glGetProgramLocalParameterfvARB(target , index , params);
}

void stub_glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte *name, GLdouble *params);
void (* _glGetProgramNamedParameterdvNV)(GLuint id, GLsizei len, const GLubyte *name, GLdouble *params) = &stub_glGetProgramNamedParameterdvNV;
void stub_glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte *name, GLdouble *params) {
   if (getExtendedProcAddress("glGetProgramNamedParameterdvNV") == NULL) {
      return GL_kludge_error_void("glGetProgramNamedParameterdvNV");
   }
   _glGetProgramNamedParameterdvNV = (void (*)(GLuint , GLsizei , const GLubyte * , GLdouble *))getExtendedProcAddress("glGetProgramNamedParameterdvNV");
   return _glGetProgramNamedParameterdvNV(id , len , name , params);
}

void stub_glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte *name, GLfloat *params);
void (* _glGetProgramNamedParameterfvNV)(GLuint id, GLsizei len, const GLubyte *name, GLfloat *params) = &stub_glGetProgramNamedParameterfvNV;
void stub_glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte *name, GLfloat *params) {
   if (getExtendedProcAddress("glGetProgramNamedParameterfvNV") == NULL) {
      return GL_kludge_error_void("glGetProgramNamedParameterfvNV");
   }
   _glGetProgramNamedParameterfvNV = (void (*)(GLuint , GLsizei , const GLubyte * , GLfloat *))getExtendedProcAddress("glGetProgramNamedParameterfvNV");
   return _glGetProgramNamedParameterfvNV(id , len , name , params);
}

void stub_glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble *params);
void (* _glGetProgramParameterdvNV)(GLenum target, GLuint index, GLenum pname, GLdouble *params) = &stub_glGetProgramParameterdvNV;
void stub_glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble *params) {
   if (getExtendedProcAddress("glGetProgramParameterdvNV") == NULL) {
      return GL_kludge_error_void("glGetProgramParameterdvNV");
   }
   _glGetProgramParameterdvNV = (void (*)(GLenum , GLuint , GLenum , GLdouble *))getExtendedProcAddress("glGetProgramParameterdvNV");
   return _glGetProgramParameterdvNV(target , index , pname , params);
}

void stub_glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat *params);
void (* _glGetProgramParameterfvNV)(GLenum target, GLuint index, GLenum pname, GLfloat *params) = &stub_glGetProgramParameterfvNV;
void stub_glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat *params) {
   if (getExtendedProcAddress("glGetProgramParameterfvNV") == NULL) {
      return GL_kludge_error_void("glGetProgramParameterfvNV");
   }
   _glGetProgramParameterfvNV = (void (*)(GLenum , GLuint , GLenum , GLfloat *))getExtendedProcAddress("glGetProgramParameterfvNV");
   return _glGetProgramParameterfvNV(target , index , pname , params);
}

void stub_glGetProgramStringARB(GLenum target, GLenum pname, GLvoid *string);
void (* _glGetProgramStringARB)(GLenum target, GLenum pname, GLvoid *string) = &stub_glGetProgramStringARB;
void stub_glGetProgramStringARB(GLenum target, GLenum pname, GLvoid *string) {
   if (getExtendedProcAddress("glGetProgramStringARB") == NULL) {
      return GL_kludge_error_void("glGetProgramStringARB");
   }
   _glGetProgramStringARB = (void (*)(GLenum , GLenum , GLvoid *))getExtendedProcAddress("glGetProgramStringARB");
   return _glGetProgramStringARB(target , pname , string);
}

void stub_glGetProgramStringNV(GLuint id, GLenum pname, GLubyte *program);
void (* _glGetProgramStringNV)(GLuint id, GLenum pname, GLubyte *program) = &stub_glGetProgramStringNV;
void stub_glGetProgramStringNV(GLuint id, GLenum pname, GLubyte *program) {
   if (getExtendedProcAddress("glGetProgramStringNV") == NULL) {
      return GL_kludge_error_void("glGetProgramStringNV");
   }
   _glGetProgramStringNV = (void (*)(GLuint , GLenum , GLubyte *))getExtendedProcAddress("glGetProgramStringNV");
   return _glGetProgramStringNV(id , pname , program);
}

void stub_glGetProgramivARB(GLenum target, GLenum pname, GLint *params);
void (* _glGetProgramivARB)(GLenum target, GLenum pname, GLint *params) = &stub_glGetProgramivARB;
void stub_glGetProgramivARB(GLenum target, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetProgramivARB") == NULL) {
      return GL_kludge_error_void("glGetProgramivARB");
   }
   _glGetProgramivARB = (void (*)(GLenum , GLenum , GLint *))getExtendedProcAddress("glGetProgramivARB");
   return _glGetProgramivARB(target , pname , params);
}

void stub_glGetProgramivNV(GLuint id, GLenum pname, GLint *params);
void (* _glGetProgramivNV)(GLuint id, GLenum pname, GLint *params) = &stub_glGetProgramivNV;
void stub_glGetProgramivNV(GLuint id, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetProgramivNV") == NULL) {
      return GL_kludge_error_void("glGetProgramivNV");
   }
   _glGetProgramivNV = (void (*)(GLuint , GLenum , GLint *))getExtendedProcAddress("glGetProgramivNV");
   return _glGetProgramivNV(id , pname , params);
}

void stub_glGetSeparableFilter(GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span);
void (* _glGetSeparableFilter)(GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span) = &stub_glGetSeparableFilter;
void stub_glGetSeparableFilter(GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span) {
   if (getExtendedProcAddress("glGetSeparableFilter") == NULL) {
      return GL_kludge_error_void("glGetSeparableFilter");
   }
   _glGetSeparableFilter = (void (*)(GLenum , GLenum , GLenum , GLvoid * , GLvoid * , GLvoid *))getExtendedProcAddress("glGetSeparableFilter");
   return _glGetSeparableFilter(target , format , type , row , column , span);
}

void stub_glGetTexGendv(GLenum coord, GLenum pname, GLdouble *params);
void (* _glGetTexGendv)(GLenum coord, GLenum pname, GLdouble *params) = &stub_glGetTexGendv;
void stub_glGetTexGendv(GLenum coord, GLenum pname, GLdouble *params) {
   if (getExtendedProcAddress("glGetTexGendv") == NULL) {
      return GL_kludge_error_void("glGetTexGendv");
   }
   _glGetTexGendv = (void (*)(GLenum , GLenum , GLdouble *))getExtendedProcAddress("glGetTexGendv");
   return _glGetTexGendv(coord , pname , params);
}

void stub_glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint *params);
void (* _glGetTrackMatrixivNV)(GLenum target, GLuint address, GLenum pname, GLint *params) = &stub_glGetTrackMatrixivNV;
void stub_glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetTrackMatrixivNV") == NULL) {
      return GL_kludge_error_void("glGetTrackMatrixivNV");
   }
   _glGetTrackMatrixivNV = (void (*)(GLenum , GLuint , GLenum , GLint *))getExtendedProcAddress("glGetTrackMatrixivNV");
   return _glGetTrackMatrixivNV(target , address , pname , params);
}

void stub_glGetVertexAttribPointervARB(GLuint index, GLenum pname, GLvoid* *pointer);
void (* _glGetVertexAttribPointervARB)(GLuint index, GLenum pname, GLvoid* *pointer) = &stub_glGetVertexAttribPointervARB;
void stub_glGetVertexAttribPointervARB(GLuint index, GLenum pname, GLvoid* *pointer) {
   if (getExtendedProcAddress("glGetVertexAttribPointervARB") == NULL) {
      return GL_kludge_error_void("glGetVertexAttribPointervARB");
   }
   _glGetVertexAttribPointervARB = (void (*)(GLuint , GLenum , GLvoid * *))getExtendedProcAddress("glGetVertexAttribPointervARB");
   return _glGetVertexAttribPointervARB(index , pname , pointer);
}

void stub_glGetVertexAttribPointervNV(GLuint index, GLenum pname, GLvoid* *pointer);
void (* _glGetVertexAttribPointervNV)(GLuint index, GLenum pname, GLvoid* *pointer) = &stub_glGetVertexAttribPointervNV;
void stub_glGetVertexAttribPointervNV(GLuint index, GLenum pname, GLvoid* *pointer) {
   if (getExtendedProcAddress("glGetVertexAttribPointervNV") == NULL) {
      return GL_kludge_error_void("glGetVertexAttribPointervNV");
   }
   _glGetVertexAttribPointervNV = (void (*)(GLuint , GLenum , GLvoid * *))getExtendedProcAddress("glGetVertexAttribPointervNV");
   return _glGetVertexAttribPointervNV(index , pname , pointer);
}

void stub_glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble *params);
void (* _glGetVertexAttribdvARB)(GLuint index, GLenum pname, GLdouble *params) = &stub_glGetVertexAttribdvARB;
void stub_glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble *params) {
   if (getExtendedProcAddress("glGetVertexAttribdvARB") == NULL) {
      return GL_kludge_error_void("glGetVertexAttribdvARB");
   }
   _glGetVertexAttribdvARB = (void (*)(GLuint , GLenum , GLdouble *))getExtendedProcAddress("glGetVertexAttribdvARB");
   return _glGetVertexAttribdvARB(index , pname , params);
}

void stub_glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble *params);
void (* _glGetVertexAttribdvNV)(GLuint index, GLenum pname, GLdouble *params) = &stub_glGetVertexAttribdvNV;
void stub_glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble *params) {
   if (getExtendedProcAddress("glGetVertexAttribdvNV") == NULL) {
      return GL_kludge_error_void("glGetVertexAttribdvNV");
   }
   _glGetVertexAttribdvNV = (void (*)(GLuint , GLenum , GLdouble *))getExtendedProcAddress("glGetVertexAttribdvNV");
   return _glGetVertexAttribdvNV(index , pname , params);
}

void stub_glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat *params);
void (* _glGetVertexAttribfvARB)(GLuint index, GLenum pname, GLfloat *params) = &stub_glGetVertexAttribfvARB;
void stub_glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat *params) {
   if (getExtendedProcAddress("glGetVertexAttribfvARB") == NULL) {
      return GL_kludge_error_void("glGetVertexAttribfvARB");
   }
   _glGetVertexAttribfvARB = (void (*)(GLuint , GLenum , GLfloat *))getExtendedProcAddress("glGetVertexAttribfvARB");
   return _glGetVertexAttribfvARB(index , pname , params);
}

void stub_glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat *params);
void (* _glGetVertexAttribfvNV)(GLuint index, GLenum pname, GLfloat *params) = &stub_glGetVertexAttribfvNV;
void stub_glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat *params) {
   if (getExtendedProcAddress("glGetVertexAttribfvNV") == NULL) {
      return GL_kludge_error_void("glGetVertexAttribfvNV");
   }
   _glGetVertexAttribfvNV = (void (*)(GLuint , GLenum , GLfloat *))getExtendedProcAddress("glGetVertexAttribfvNV");
   return _glGetVertexAttribfvNV(index , pname , params);
}

void stub_glGetVertexAttribivARB(GLuint index, GLenum pname, GLint *params);
void (* _glGetVertexAttribivARB)(GLuint index, GLenum pname, GLint *params) = &stub_glGetVertexAttribivARB;
void stub_glGetVertexAttribivARB(GLuint index, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetVertexAttribivARB") == NULL) {
      return GL_kludge_error_void("glGetVertexAttribivARB");
   }
   _glGetVertexAttribivARB = (void (*)(GLuint , GLenum , GLint *))getExtendedProcAddress("glGetVertexAttribivARB");
   return _glGetVertexAttribivARB(index , pname , params);
}

void stub_glGetVertexAttribivNV(GLuint index, GLenum pname, GLint *params);
void (* _glGetVertexAttribivNV)(GLuint index, GLenum pname, GLint *params) = &stub_glGetVertexAttribivNV;
void stub_glGetVertexAttribivNV(GLuint index, GLenum pname, GLint *params) {
   if (getExtendedProcAddress("glGetVertexAttribivNV") == NULL) {
      return GL_kludge_error_void("glGetVertexAttribivNV");
   }
   _glGetVertexAttribivNV = (void (*)(GLuint , GLenum , GLint *))getExtendedProcAddress("glGetVertexAttribivNV");
   return _glGetVertexAttribivNV(index , pname , params);
}

void stub_glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
void (* _glHistogram)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink) = &stub_glHistogram;
void stub_glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink) {
   if (getExtendedProcAddress("glHistogram") == NULL) {
      return GL_kludge_error_void("glHistogram");
   }
   _glHistogram = (void (*)(GLenum , GLsizei , GLenum , GLboolean))getExtendedProcAddress("glHistogram");
   return _glHistogram(target , width , internalformat , sink);
}

void stub_glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
void (* _glIndexPointerEXT)(GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) = &stub_glIndexPointerEXT;
void stub_glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) {
   if (getExtendedProcAddress("glIndexPointerEXT") == NULL) {
      return GL_kludge_error_void("glIndexPointerEXT");
   }
   _glIndexPointerEXT = (void (*)(GLenum , GLsizei , GLsizei , const GLvoid *))getExtendedProcAddress("glIndexPointerEXT");
   return _glIndexPointerEXT(type , stride , count , pointer);
}

GLboolean stub_glIsFenceNV(GLuint fence);
GLboolean (* _glIsFenceNV)(GLuint fence) = &stub_glIsFenceNV;
GLboolean stub_glIsFenceNV(GLuint fence) {
   if (getExtendedProcAddress("glIsFenceNV") == NULL) {
      return GL_kludge_error_GLboolean("glIsFenceNV");
   }
   _glIsFenceNV = (GLboolean (*)(GLuint))getExtendedProcAddress("glIsFenceNV");
   return _glIsFenceNV(fence);
}

GLboolean stub_glIsOcclusionQueryNV(GLuint id);
GLboolean (* _glIsOcclusionQueryNV)(GLuint id) = &stub_glIsOcclusionQueryNV;
GLboolean stub_glIsOcclusionQueryNV(GLuint id) {
   if (getExtendedProcAddress("glIsOcclusionQueryNV") == NULL) {
      return GL_kludge_error_GLboolean("glIsOcclusionQueryNV");
   }
   _glIsOcclusionQueryNV = (GLboolean (*)(GLuint))getExtendedProcAddress("glIsOcclusionQueryNV");
   return _glIsOcclusionQueryNV(id);
}

GLboolean stub_glIsProgramARB(GLuint program);
GLboolean (* _glIsProgramARB)(GLuint program) = &stub_glIsProgramARB;
GLboolean stub_glIsProgramARB(GLuint program) {
   if (getExtendedProcAddress("glIsProgramARB") == NULL) {
      return GL_kludge_error_GLboolean("glIsProgramARB");
   }
   _glIsProgramARB = (GLboolean (*)(GLuint))getExtendedProcAddress("glIsProgramARB");
   return _glIsProgramARB(program);
}

GLboolean stub_glIsProgramNV(GLuint id);
GLboolean (* _glIsProgramNV)(GLuint id) = &stub_glIsProgramNV;
GLboolean stub_glIsProgramNV(GLuint id) {
   if (getExtendedProcAddress("glIsProgramNV") == NULL) {
      return GL_kludge_error_GLboolean("glIsProgramNV");
   }
   _glIsProgramNV = (GLboolean (*)(GLuint))getExtendedProcAddress("glIsProgramNV");
   return _glIsProgramNV(id);
}

GLboolean stub_glIsTextureEXT(GLuint texture);
GLboolean (* _glIsTextureEXT)(GLuint texture) = &stub_glIsTextureEXT;
GLboolean stub_glIsTextureEXT(GLuint texture) {
   if (getExtendedProcAddress("glIsTextureEXT") == NULL) {
      return GL_kludge_error_GLboolean("glIsTextureEXT");
   }
   _glIsTextureEXT = (GLboolean (*)(GLuint))getExtendedProcAddress("glIsTextureEXT");
   return _glIsTextureEXT(texture);
}

void stub_glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte *program);
void (* _glLoadProgramNV)(GLenum target, GLuint id, GLsizei len, const GLubyte *program) = &stub_glLoadProgramNV;
void stub_glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte *program) {
   if (getExtendedProcAddress("glLoadProgramNV") == NULL) {
      return GL_kludge_error_void("glLoadProgramNV");
   }
   _glLoadProgramNV = (void (*)(GLenum , GLuint , GLsizei , const GLubyte *))getExtendedProcAddress("glLoadProgramNV");
   return _glLoadProgramNV(target , id , len , program);
}

void stub_glLoadTransposeMatrixdARB(const GLdouble *m);
void (* _glLoadTransposeMatrixdARB)(const GLdouble *m) = &stub_glLoadTransposeMatrixdARB;
void stub_glLoadTransposeMatrixdARB(const GLdouble *m) {
   if (getExtendedProcAddress("glLoadTransposeMatrixdARB") == NULL) {
      return GL_kludge_error_void("glLoadTransposeMatrixdARB");
   }
   _glLoadTransposeMatrixdARB = (void (*)(const GLdouble *))getExtendedProcAddress("glLoadTransposeMatrixdARB");
   return _glLoadTransposeMatrixdARB(m);
}

void stub_glLoadTransposeMatrixfARB(const GLfloat *m);
void (* _glLoadTransposeMatrixfARB)(const GLfloat *m) = &stub_glLoadTransposeMatrixfARB;
void stub_glLoadTransposeMatrixfARB(const GLfloat *m) {
   if (getExtendedProcAddress("glLoadTransposeMatrixfARB") == NULL) {
      return GL_kludge_error_void("glLoadTransposeMatrixfARB");
   }
   _glLoadTransposeMatrixfARB = (void (*)(const GLfloat *))getExtendedProcAddress("glLoadTransposeMatrixfARB");
   return _glLoadTransposeMatrixfARB(m);
}

void stub_glLockArraysEXT(GLint first, GLsizei count);
void (* _glLockArraysEXT)(GLint first, GLsizei count) = &stub_glLockArraysEXT;
void stub_glLockArraysEXT(GLint first, GLsizei count) {
   if (getExtendedProcAddress("glLockArraysEXT") == NULL) {
      return GL_kludge_error_void("glLockArraysEXT");
   }
   _glLockArraysEXT = (void (*)(GLint , GLsizei))getExtendedProcAddress("glLockArraysEXT");
   return _glLockArraysEXT(first , count);
}

void stub_glMinmax(GLenum target, GLenum internalformat, GLboolean sink);
void (* _glMinmax)(GLenum target, GLenum internalformat, GLboolean sink) = &stub_glMinmax;
void stub_glMinmax(GLenum target, GLenum internalformat, GLboolean sink) {
   if (getExtendedProcAddress("glMinmax") == NULL) {
      return GL_kludge_error_void("glMinmax");
   }
   _glMinmax = (void (*)(GLenum , GLenum , GLboolean))getExtendedProcAddress("glMinmax");
   return _glMinmax(target , internalformat , sink);
}

void stub_glMultTransposeMatrixdARB(const GLdouble *m);
void (* _glMultTransposeMatrixdARB)(const GLdouble *m) = &stub_glMultTransposeMatrixdARB;
void stub_glMultTransposeMatrixdARB(const GLdouble *m) {
   if (getExtendedProcAddress("glMultTransposeMatrixdARB") == NULL) {
      return GL_kludge_error_void("glMultTransposeMatrixdARB");
   }
   _glMultTransposeMatrixdARB = (void (*)(const GLdouble *))getExtendedProcAddress("glMultTransposeMatrixdARB");
   return _glMultTransposeMatrixdARB(m);
}

void stub_glMultTransposeMatrixfARB(const GLfloat *m);
void (* _glMultTransposeMatrixfARB)(const GLfloat *m) = &stub_glMultTransposeMatrixfARB;
void stub_glMultTransposeMatrixfARB(const GLfloat *m) {
   if (getExtendedProcAddress("glMultTransposeMatrixfARB") == NULL) {
      return GL_kludge_error_void("glMultTransposeMatrixfARB");
   }
   _glMultTransposeMatrixfARB = (void (*)(const GLfloat *))getExtendedProcAddress("glMultTransposeMatrixfARB");
   return _glMultTransposeMatrixfARB(m);
}

void stub_glMultiDrawArrays(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
void (* _glMultiDrawArrays)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount) = &stub_glMultiDrawArrays;
void stub_glMultiDrawArrays(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount) {
   if (getExtendedProcAddress("glMultiDrawArrays") == NULL) {
      return GL_kludge_error_void("glMultiDrawArrays");
   }
   _glMultiDrawArrays = (void (*)(GLenum , const GLint * , const GLsizei * , GLsizei))getExtendedProcAddress("glMultiDrawArrays");
   return _glMultiDrawArrays(mode , first , count , primcount);
}

void stub_glMultiDrawArraysEXT(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
void (* _glMultiDrawArraysEXT)(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount) = &stub_glMultiDrawArraysEXT;
void stub_glMultiDrawArraysEXT(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount) {
   if (getExtendedProcAddress("glMultiDrawArraysEXT") == NULL) {
      return GL_kludge_error_void("glMultiDrawArraysEXT");
   }
   _glMultiDrawArraysEXT = (void (*)(GLenum , const GLint * , const GLsizei * , GLsizei))getExtendedProcAddress("glMultiDrawArraysEXT");
   return _glMultiDrawArraysEXT(mode , first , count , primcount);
}

void stub_glMultiDrawElements(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount);
void (* _glMultiDrawElements)(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount) = &stub_glMultiDrawElements;
void stub_glMultiDrawElements(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount) {
   if (getExtendedProcAddress("glMultiDrawElements") == NULL) {
      return GL_kludge_error_void("glMultiDrawElements");
   }
   _glMultiDrawElements = (void (*)(GLenum , const GLsizei * , GLenum , const GLvoid * * , GLsizei))getExtendedProcAddress("glMultiDrawElements");
   return _glMultiDrawElements(mode , count , type , indices , primcount);
}

void stub_glMultiDrawElementsEXT(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount);
void (* _glMultiDrawElementsEXT)(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount) = &stub_glMultiDrawElementsEXT;
void stub_glMultiDrawElementsEXT(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount) {
   if (getExtendedProcAddress("glMultiDrawElementsEXT") == NULL) {
      return GL_kludge_error_void("glMultiDrawElementsEXT");
   }
   _glMultiDrawElementsEXT = (void (*)(GLenum , const GLsizei * , GLenum , const GLvoid * * , GLsizei))getExtendedProcAddress("glMultiDrawElementsEXT");
   return _glMultiDrawElementsEXT(mode , count , type , indices , primcount);
}

void stub_glMultiTexCoord1dARB(GLenum target, GLdouble s);
void (* _glMultiTexCoord1dARB)(GLenum target, GLdouble s) = &stub_glMultiTexCoord1dARB;
void stub_glMultiTexCoord1dARB(GLenum target, GLdouble s) {
   if (getExtendedProcAddress("glMultiTexCoord1dARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1dARB");
   }
   _glMultiTexCoord1dARB = (void (*)(GLenum , GLdouble))getExtendedProcAddress("glMultiTexCoord1dARB");
   return _glMultiTexCoord1dARB(target , s);
}

void stub_glMultiTexCoord1dSGIS(GLenum target, GLdouble s);
void (* _glMultiTexCoord1dSGIS)(GLenum target, GLdouble s) = &stub_glMultiTexCoord1dSGIS;
void stub_glMultiTexCoord1dSGIS(GLenum target, GLdouble s) {
   if (getExtendedProcAddress("glMultiTexCoord1dSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1dSGIS");
   }
   _glMultiTexCoord1dSGIS = (void (*)(GLenum , GLdouble))getExtendedProcAddress("glMultiTexCoord1dSGIS");
   return _glMultiTexCoord1dSGIS(target , s);
}

void stub_glMultiTexCoord1dvARB(GLenum target, const GLdouble *v);
void (* _glMultiTexCoord1dvARB)(GLenum target, const GLdouble *v) = &stub_glMultiTexCoord1dvARB;
void stub_glMultiTexCoord1dvARB(GLenum target, const GLdouble *v) {
   if (getExtendedProcAddress("glMultiTexCoord1dvARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1dvARB");
   }
   _glMultiTexCoord1dvARB = (void (*)(GLenum , const GLdouble *))getExtendedProcAddress("glMultiTexCoord1dvARB");
   return _glMultiTexCoord1dvARB(target , v);
}

void stub_glMultiTexCoord1dvSGIS(GLenum target, const GLdouble *v);
void (* _glMultiTexCoord1dvSGIS)(GLenum target, const GLdouble *v) = &stub_glMultiTexCoord1dvSGIS;
void stub_glMultiTexCoord1dvSGIS(GLenum target, const GLdouble *v) {
   if (getExtendedProcAddress("glMultiTexCoord1dvSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1dvSGIS");
   }
   _glMultiTexCoord1dvSGIS = (void (*)(GLenum , const GLdouble *))getExtendedProcAddress("glMultiTexCoord1dvSGIS");
   return _glMultiTexCoord1dvSGIS(target , v);
}

void stub_glMultiTexCoord1fARB(GLenum target, GLfloat s);
void (* _glMultiTexCoord1fARB)(GLenum target, GLfloat s) = &stub_glMultiTexCoord1fARB;
void stub_glMultiTexCoord1fARB(GLenum target, GLfloat s) {
   if (getExtendedProcAddress("glMultiTexCoord1fARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1fARB");
   }
   _glMultiTexCoord1fARB = (void (*)(GLenum , GLfloat))getExtendedProcAddress("glMultiTexCoord1fARB");
   return _glMultiTexCoord1fARB(target , s);
}

void stub_glMultiTexCoord1fSGIS(GLenum target, GLfloat s);
void (* _glMultiTexCoord1fSGIS)(GLenum target, GLfloat s) = &stub_glMultiTexCoord1fSGIS;
void stub_glMultiTexCoord1fSGIS(GLenum target, GLfloat s) {
   if (getExtendedProcAddress("glMultiTexCoord1fSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1fSGIS");
   }
   _glMultiTexCoord1fSGIS = (void (*)(GLenum , GLfloat))getExtendedProcAddress("glMultiTexCoord1fSGIS");
   return _glMultiTexCoord1fSGIS(target , s);
}

void stub_glMultiTexCoord1fvARB(GLenum target, const GLfloat *v);
void (* _glMultiTexCoord1fvARB)(GLenum target, const GLfloat *v) = &stub_glMultiTexCoord1fvARB;
void stub_glMultiTexCoord1fvARB(GLenum target, const GLfloat *v) {
   if (getExtendedProcAddress("glMultiTexCoord1fvARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1fvARB");
   }
   _glMultiTexCoord1fvARB = (void (*)(GLenum , const GLfloat *))getExtendedProcAddress("glMultiTexCoord1fvARB");
   return _glMultiTexCoord1fvARB(target , v);
}

void stub_glMultiTexCoord1fvSGIS(GLenum target, const GLfloat *v);
void (* _glMultiTexCoord1fvSGIS)(GLenum target, const GLfloat *v) = &stub_glMultiTexCoord1fvSGIS;
void stub_glMultiTexCoord1fvSGIS(GLenum target, const GLfloat *v) {
   if (getExtendedProcAddress("glMultiTexCoord1fvSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1fvSGIS");
   }
   _glMultiTexCoord1fvSGIS = (void (*)(GLenum , const GLfloat *))getExtendedProcAddress("glMultiTexCoord1fvSGIS");
   return _glMultiTexCoord1fvSGIS(target , v);
}

void stub_glMultiTexCoord1iARB(GLenum target, GLint s);
void (* _glMultiTexCoord1iARB)(GLenum target, GLint s) = &stub_glMultiTexCoord1iARB;
void stub_glMultiTexCoord1iARB(GLenum target, GLint s) {
   if (getExtendedProcAddress("glMultiTexCoord1iARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1iARB");
   }
   _glMultiTexCoord1iARB = (void (*)(GLenum , GLint))getExtendedProcAddress("glMultiTexCoord1iARB");
   return _glMultiTexCoord1iARB(target , s);
}

void stub_glMultiTexCoord1iSGIS(GLenum target, GLint s);
void (* _glMultiTexCoord1iSGIS)(GLenum target, GLint s) = &stub_glMultiTexCoord1iSGIS;
void stub_glMultiTexCoord1iSGIS(GLenum target, GLint s) {
   if (getExtendedProcAddress("glMultiTexCoord1iSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1iSGIS");
   }
   _glMultiTexCoord1iSGIS = (void (*)(GLenum , GLint))getExtendedProcAddress("glMultiTexCoord1iSGIS");
   return _glMultiTexCoord1iSGIS(target , s);
}

void stub_glMultiTexCoord1ivARB(GLenum target, const GLint *v);
void (* _glMultiTexCoord1ivARB)(GLenum target, const GLint *v) = &stub_glMultiTexCoord1ivARB;
void stub_glMultiTexCoord1ivARB(GLenum target, const GLint *v) {
   if (getExtendedProcAddress("glMultiTexCoord1ivARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1ivARB");
   }
   _glMultiTexCoord1ivARB = (void (*)(GLenum , const GLint *))getExtendedProcAddress("glMultiTexCoord1ivARB");
   return _glMultiTexCoord1ivARB(target , v);
}

void stub_glMultiTexCoord1ivSGIS(GLenum target, const GLint *v);
void (* _glMultiTexCoord1ivSGIS)(GLenum target, const GLint *v) = &stub_glMultiTexCoord1ivSGIS;
void stub_glMultiTexCoord1ivSGIS(GLenum target, const GLint *v) {
   if (getExtendedProcAddress("glMultiTexCoord1ivSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1ivSGIS");
   }
   _glMultiTexCoord1ivSGIS = (void (*)(GLenum , const GLint *))getExtendedProcAddress("glMultiTexCoord1ivSGIS");
   return _glMultiTexCoord1ivSGIS(target , v);
}

void stub_glMultiTexCoord1sARB(GLenum target, GLshort s);
void (* _glMultiTexCoord1sARB)(GLenum target, GLshort s) = &stub_glMultiTexCoord1sARB;
void stub_glMultiTexCoord1sARB(GLenum target, GLshort s) {
   if (getExtendedProcAddress("glMultiTexCoord1sARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1sARB");
   }
   _glMultiTexCoord1sARB = (void (*)(GLenum , GLshort))getExtendedProcAddress("glMultiTexCoord1sARB");
   return _glMultiTexCoord1sARB(target , s);
}

void stub_glMultiTexCoord1sSGIS(GLenum target, GLshort s);
void (* _glMultiTexCoord1sSGIS)(GLenum target, GLshort s) = &stub_glMultiTexCoord1sSGIS;
void stub_glMultiTexCoord1sSGIS(GLenum target, GLshort s) {
   if (getExtendedProcAddress("glMultiTexCoord1sSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1sSGIS");
   }
   _glMultiTexCoord1sSGIS = (void (*)(GLenum , GLshort))getExtendedProcAddress("glMultiTexCoord1sSGIS");
   return _glMultiTexCoord1sSGIS(target , s);
}

void stub_glMultiTexCoord1svARB(GLenum target, const GLshort *v);
void (* _glMultiTexCoord1svARB)(GLenum target, const GLshort *v) = &stub_glMultiTexCoord1svARB;
void stub_glMultiTexCoord1svARB(GLenum target, const GLshort *v) {
   if (getExtendedProcAddress("glMultiTexCoord1svARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1svARB");
   }
   _glMultiTexCoord1svARB = (void (*)(GLenum , const GLshort *))getExtendedProcAddress("glMultiTexCoord1svARB");
   return _glMultiTexCoord1svARB(target , v);
}

void stub_glMultiTexCoord1svSGIS(GLenum target, const GLshort *v);
void (* _glMultiTexCoord1svSGIS)(GLenum target, const GLshort *v) = &stub_glMultiTexCoord1svSGIS;
void stub_glMultiTexCoord1svSGIS(GLenum target, const GLshort *v) {
   if (getExtendedProcAddress("glMultiTexCoord1svSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord1svSGIS");
   }
   _glMultiTexCoord1svSGIS = (void (*)(GLenum , const GLshort *))getExtendedProcAddress("glMultiTexCoord1svSGIS");
   return _glMultiTexCoord1svSGIS(target , v);
}

void stub_glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t);
void (* _glMultiTexCoord2dARB)(GLenum target, GLdouble s, GLdouble t) = &stub_glMultiTexCoord2dARB;
void stub_glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t) {
   if (getExtendedProcAddress("glMultiTexCoord2dARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2dARB");
   }
   _glMultiTexCoord2dARB = (void (*)(GLenum , GLdouble , GLdouble))getExtendedProcAddress("glMultiTexCoord2dARB");
   return _glMultiTexCoord2dARB(target , s , t);
}

void stub_glMultiTexCoord2dSGIS(GLenum target, GLdouble s, GLdouble t);
void (* _glMultiTexCoord2dSGIS)(GLenum target, GLdouble s, GLdouble t) = &stub_glMultiTexCoord2dSGIS;
void stub_glMultiTexCoord2dSGIS(GLenum target, GLdouble s, GLdouble t) {
   if (getExtendedProcAddress("glMultiTexCoord2dSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2dSGIS");
   }
   _glMultiTexCoord2dSGIS = (void (*)(GLenum , GLdouble , GLdouble))getExtendedProcAddress("glMultiTexCoord2dSGIS");
   return _glMultiTexCoord2dSGIS(target , s , t);
}

void stub_glMultiTexCoord2dvARB(GLenum target, const GLdouble *v);
void (* _glMultiTexCoord2dvARB)(GLenum target, const GLdouble *v) = &stub_glMultiTexCoord2dvARB;
void stub_glMultiTexCoord2dvARB(GLenum target, const GLdouble *v) {
   if (getExtendedProcAddress("glMultiTexCoord2dvARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2dvARB");
   }
   _glMultiTexCoord2dvARB = (void (*)(GLenum , const GLdouble *))getExtendedProcAddress("glMultiTexCoord2dvARB");
   return _glMultiTexCoord2dvARB(target , v);
}

void stub_glMultiTexCoord2dvSGIS(GLenum target, const GLdouble *v);
void (* _glMultiTexCoord2dvSGIS)(GLenum target, const GLdouble *v) = &stub_glMultiTexCoord2dvSGIS;
void stub_glMultiTexCoord2dvSGIS(GLenum target, const GLdouble *v) {
   if (getExtendedProcAddress("glMultiTexCoord2dvSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2dvSGIS");
   }
   _glMultiTexCoord2dvSGIS = (void (*)(GLenum , const GLdouble *))getExtendedProcAddress("glMultiTexCoord2dvSGIS");
   return _glMultiTexCoord2dvSGIS(target , v);
}

void stub_glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t);
void (* _glMultiTexCoord2fARB)(GLenum target, GLfloat s, GLfloat t) = &stub_glMultiTexCoord2fARB;
void stub_glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t) {
   if (getExtendedProcAddress("glMultiTexCoord2fARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2fARB");
   }
   _glMultiTexCoord2fARB = (void (*)(GLenum , GLfloat , GLfloat))getExtendedProcAddress("glMultiTexCoord2fARB");
   return _glMultiTexCoord2fARB(target , s , t);
}

void stub_glMultiTexCoord2fSGIS(GLenum target, GLfloat s, GLfloat t);
void (* _glMultiTexCoord2fSGIS)(GLenum target, GLfloat s, GLfloat t) = &stub_glMultiTexCoord2fSGIS;
void stub_glMultiTexCoord2fSGIS(GLenum target, GLfloat s, GLfloat t) {
   if (getExtendedProcAddress("glMultiTexCoord2fSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2fSGIS");
   }
   _glMultiTexCoord2fSGIS = (void (*)(GLenum , GLfloat , GLfloat))getExtendedProcAddress("glMultiTexCoord2fSGIS");
   return _glMultiTexCoord2fSGIS(target , s , t);
}

void stub_glMultiTexCoord2fvARB(GLenum target, const GLfloat *v);
void (* _glMultiTexCoord2fvARB)(GLenum target, const GLfloat *v) = &stub_glMultiTexCoord2fvARB;
void stub_glMultiTexCoord2fvARB(GLenum target, const GLfloat *v) {
   if (getExtendedProcAddress("glMultiTexCoord2fvARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2fvARB");
   }
   _glMultiTexCoord2fvARB = (void (*)(GLenum , const GLfloat *))getExtendedProcAddress("glMultiTexCoord2fvARB");
   return _glMultiTexCoord2fvARB(target , v);
}

void stub_glMultiTexCoord2fvSGIS(GLenum target, const GLfloat *v);
void (* _glMultiTexCoord2fvSGIS)(GLenum target, const GLfloat *v) = &stub_glMultiTexCoord2fvSGIS;
void stub_glMultiTexCoord2fvSGIS(GLenum target, const GLfloat *v) {
   if (getExtendedProcAddress("glMultiTexCoord2fvSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2fvSGIS");
   }
   _glMultiTexCoord2fvSGIS = (void (*)(GLenum , const GLfloat *))getExtendedProcAddress("glMultiTexCoord2fvSGIS");
   return _glMultiTexCoord2fvSGIS(target , v);
}

void stub_glMultiTexCoord2iARB(GLenum target, GLint s, GLint t);
void (* _glMultiTexCoord2iARB)(GLenum target, GLint s, GLint t) = &stub_glMultiTexCoord2iARB;
void stub_glMultiTexCoord2iARB(GLenum target, GLint s, GLint t) {
   if (getExtendedProcAddress("glMultiTexCoord2iARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2iARB");
   }
   _glMultiTexCoord2iARB = (void (*)(GLenum , GLint , GLint))getExtendedProcAddress("glMultiTexCoord2iARB");
   return _glMultiTexCoord2iARB(target , s , t);
}

void stub_glMultiTexCoord2iSGIS(GLenum target, GLint s, GLint t);
void (* _glMultiTexCoord2iSGIS)(GLenum target, GLint s, GLint t) = &stub_glMultiTexCoord2iSGIS;
void stub_glMultiTexCoord2iSGIS(GLenum target, GLint s, GLint t) {
   if (getExtendedProcAddress("glMultiTexCoord2iSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2iSGIS");
   }
   _glMultiTexCoord2iSGIS = (void (*)(GLenum , GLint , GLint))getExtendedProcAddress("glMultiTexCoord2iSGIS");
   return _glMultiTexCoord2iSGIS(target , s , t);
}

void stub_glMultiTexCoord2ivARB(GLenum target, const GLint *v);
void (* _glMultiTexCoord2ivARB)(GLenum target, const GLint *v) = &stub_glMultiTexCoord2ivARB;
void stub_glMultiTexCoord2ivARB(GLenum target, const GLint *v) {
   if (getExtendedProcAddress("glMultiTexCoord2ivARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2ivARB");
   }
   _glMultiTexCoord2ivARB = (void (*)(GLenum , const GLint *))getExtendedProcAddress("glMultiTexCoord2ivARB");
   return _glMultiTexCoord2ivARB(target , v);
}

void stub_glMultiTexCoord2ivSGIS(GLenum target, const GLint *v);
void (* _glMultiTexCoord2ivSGIS)(GLenum target, const GLint *v) = &stub_glMultiTexCoord2ivSGIS;
void stub_glMultiTexCoord2ivSGIS(GLenum target, const GLint *v) {
   if (getExtendedProcAddress("glMultiTexCoord2ivSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2ivSGIS");
   }
   _glMultiTexCoord2ivSGIS = (void (*)(GLenum , const GLint *))getExtendedProcAddress("glMultiTexCoord2ivSGIS");
   return _glMultiTexCoord2ivSGIS(target , v);
}

void stub_glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t);
void (* _glMultiTexCoord2sARB)(GLenum target, GLshort s, GLshort t) = &stub_glMultiTexCoord2sARB;
void stub_glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t) {
   if (getExtendedProcAddress("glMultiTexCoord2sARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2sARB");
   }
   _glMultiTexCoord2sARB = (void (*)(GLenum , GLshort , GLshort))getExtendedProcAddress("glMultiTexCoord2sARB");
   return _glMultiTexCoord2sARB(target , s , t);
}

void stub_glMultiTexCoord2sSGIS(GLenum target, GLshort s, GLshort t);
void (* _glMultiTexCoord2sSGIS)(GLenum target, GLshort s, GLshort t) = &stub_glMultiTexCoord2sSGIS;
void stub_glMultiTexCoord2sSGIS(GLenum target, GLshort s, GLshort t) {
   if (getExtendedProcAddress("glMultiTexCoord2sSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2sSGIS");
   }
   _glMultiTexCoord2sSGIS = (void (*)(GLenum , GLshort , GLshort))getExtendedProcAddress("glMultiTexCoord2sSGIS");
   return _glMultiTexCoord2sSGIS(target , s , t);
}

void stub_glMultiTexCoord2svARB(GLenum target, const GLshort *v);
void (* _glMultiTexCoord2svARB)(GLenum target, const GLshort *v) = &stub_glMultiTexCoord2svARB;
void stub_glMultiTexCoord2svARB(GLenum target, const GLshort *v) {
   if (getExtendedProcAddress("glMultiTexCoord2svARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2svARB");
   }
   _glMultiTexCoord2svARB = (void (*)(GLenum , const GLshort *))getExtendedProcAddress("glMultiTexCoord2svARB");
   return _glMultiTexCoord2svARB(target , v);
}

void stub_glMultiTexCoord2svSGIS(GLenum target, const GLshort *v);
void (* _glMultiTexCoord2svSGIS)(GLenum target, const GLshort *v) = &stub_glMultiTexCoord2svSGIS;
void stub_glMultiTexCoord2svSGIS(GLenum target, const GLshort *v) {
   if (getExtendedProcAddress("glMultiTexCoord2svSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord2svSGIS");
   }
   _glMultiTexCoord2svSGIS = (void (*)(GLenum , const GLshort *))getExtendedProcAddress("glMultiTexCoord2svSGIS");
   return _glMultiTexCoord2svSGIS(target , v);
}

void stub_glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r);
void (* _glMultiTexCoord3dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r) = &stub_glMultiTexCoord3dARB;
void stub_glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r) {
   if (getExtendedProcAddress("glMultiTexCoord3dARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3dARB");
   }
   _glMultiTexCoord3dARB = (void (*)(GLenum , GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glMultiTexCoord3dARB");
   return _glMultiTexCoord3dARB(target , s , t , r);
}

void stub_glMultiTexCoord3dSGIS(GLenum target, GLdouble s, GLdouble t, GLdouble r);
void (* _glMultiTexCoord3dSGIS)(GLenum target, GLdouble s, GLdouble t, GLdouble r) = &stub_glMultiTexCoord3dSGIS;
void stub_glMultiTexCoord3dSGIS(GLenum target, GLdouble s, GLdouble t, GLdouble r) {
   if (getExtendedProcAddress("glMultiTexCoord3dSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3dSGIS");
   }
   _glMultiTexCoord3dSGIS = (void (*)(GLenum , GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glMultiTexCoord3dSGIS");
   return _glMultiTexCoord3dSGIS(target , s , t , r);
}

void stub_glMultiTexCoord3dvARB(GLenum target, const GLdouble *v);
void (* _glMultiTexCoord3dvARB)(GLenum target, const GLdouble *v) = &stub_glMultiTexCoord3dvARB;
void stub_glMultiTexCoord3dvARB(GLenum target, const GLdouble *v) {
   if (getExtendedProcAddress("glMultiTexCoord3dvARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3dvARB");
   }
   _glMultiTexCoord3dvARB = (void (*)(GLenum , const GLdouble *))getExtendedProcAddress("glMultiTexCoord3dvARB");
   return _glMultiTexCoord3dvARB(target , v);
}

void stub_glMultiTexCoord3dvSGIS(GLenum target, const GLdouble *v);
void (* _glMultiTexCoord3dvSGIS)(GLenum target, const GLdouble *v) = &stub_glMultiTexCoord3dvSGIS;
void stub_glMultiTexCoord3dvSGIS(GLenum target, const GLdouble *v) {
   if (getExtendedProcAddress("glMultiTexCoord3dvSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3dvSGIS");
   }
   _glMultiTexCoord3dvSGIS = (void (*)(GLenum , const GLdouble *))getExtendedProcAddress("glMultiTexCoord3dvSGIS");
   return _glMultiTexCoord3dvSGIS(target , v);
}

void stub_glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r);
void (* _glMultiTexCoord3fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r) = &stub_glMultiTexCoord3fARB;
void stub_glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r) {
   if (getExtendedProcAddress("glMultiTexCoord3fARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3fARB");
   }
   _glMultiTexCoord3fARB = (void (*)(GLenum , GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glMultiTexCoord3fARB");
   return _glMultiTexCoord3fARB(target , s , t , r);
}

void stub_glMultiTexCoord3fSGIS(GLenum target, GLfloat s, GLfloat t, GLfloat r);
void (* _glMultiTexCoord3fSGIS)(GLenum target, GLfloat s, GLfloat t, GLfloat r) = &stub_glMultiTexCoord3fSGIS;
void stub_glMultiTexCoord3fSGIS(GLenum target, GLfloat s, GLfloat t, GLfloat r) {
   if (getExtendedProcAddress("glMultiTexCoord3fSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3fSGIS");
   }
   _glMultiTexCoord3fSGIS = (void (*)(GLenum , GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glMultiTexCoord3fSGIS");
   return _glMultiTexCoord3fSGIS(target , s , t , r);
}

void stub_glMultiTexCoord3fvARB(GLenum target, const GLfloat *v);
void (* _glMultiTexCoord3fvARB)(GLenum target, const GLfloat *v) = &stub_glMultiTexCoord3fvARB;
void stub_glMultiTexCoord3fvARB(GLenum target, const GLfloat *v) {
   if (getExtendedProcAddress("glMultiTexCoord3fvARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3fvARB");
   }
   _glMultiTexCoord3fvARB = (void (*)(GLenum , const GLfloat *))getExtendedProcAddress("glMultiTexCoord3fvARB");
   return _glMultiTexCoord3fvARB(target , v);
}

void stub_glMultiTexCoord3fvSGIS(GLenum target, const GLfloat *v);
void (* _glMultiTexCoord3fvSGIS)(GLenum target, const GLfloat *v) = &stub_glMultiTexCoord3fvSGIS;
void stub_glMultiTexCoord3fvSGIS(GLenum target, const GLfloat *v) {
   if (getExtendedProcAddress("glMultiTexCoord3fvSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3fvSGIS");
   }
   _glMultiTexCoord3fvSGIS = (void (*)(GLenum , const GLfloat *))getExtendedProcAddress("glMultiTexCoord3fvSGIS");
   return _glMultiTexCoord3fvSGIS(target , v);
}

void stub_glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r);
void (* _glMultiTexCoord3iARB)(GLenum target, GLint s, GLint t, GLint r) = &stub_glMultiTexCoord3iARB;
void stub_glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r) {
   if (getExtendedProcAddress("glMultiTexCoord3iARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3iARB");
   }
   _glMultiTexCoord3iARB = (void (*)(GLenum , GLint , GLint , GLint))getExtendedProcAddress("glMultiTexCoord3iARB");
   return _glMultiTexCoord3iARB(target , s , t , r);
}

void stub_glMultiTexCoord3iSGIS(GLenum target, GLint s, GLint t, GLint r);
void (* _glMultiTexCoord3iSGIS)(GLenum target, GLint s, GLint t, GLint r) = &stub_glMultiTexCoord3iSGIS;
void stub_glMultiTexCoord3iSGIS(GLenum target, GLint s, GLint t, GLint r) {
   if (getExtendedProcAddress("glMultiTexCoord3iSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3iSGIS");
   }
   _glMultiTexCoord3iSGIS = (void (*)(GLenum , GLint , GLint , GLint))getExtendedProcAddress("glMultiTexCoord3iSGIS");
   return _glMultiTexCoord3iSGIS(target , s , t , r);
}

void stub_glMultiTexCoord3ivARB(GLenum target, const GLint *v);
void (* _glMultiTexCoord3ivARB)(GLenum target, const GLint *v) = &stub_glMultiTexCoord3ivARB;
void stub_glMultiTexCoord3ivARB(GLenum target, const GLint *v) {
   if (getExtendedProcAddress("glMultiTexCoord3ivARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3ivARB");
   }
   _glMultiTexCoord3ivARB = (void (*)(GLenum , const GLint *))getExtendedProcAddress("glMultiTexCoord3ivARB");
   return _glMultiTexCoord3ivARB(target , v);
}

void stub_glMultiTexCoord3ivSGIS(GLenum target, const GLint *v);
void (* _glMultiTexCoord3ivSGIS)(GLenum target, const GLint *v) = &stub_glMultiTexCoord3ivSGIS;
void stub_glMultiTexCoord3ivSGIS(GLenum target, const GLint *v) {
   if (getExtendedProcAddress("glMultiTexCoord3ivSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3ivSGIS");
   }
   _glMultiTexCoord3ivSGIS = (void (*)(GLenum , const GLint *))getExtendedProcAddress("glMultiTexCoord3ivSGIS");
   return _glMultiTexCoord3ivSGIS(target , v);
}

void stub_glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r);
void (* _glMultiTexCoord3sARB)(GLenum target, GLshort s, GLshort t, GLshort r) = &stub_glMultiTexCoord3sARB;
void stub_glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r) {
   if (getExtendedProcAddress("glMultiTexCoord3sARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3sARB");
   }
   _glMultiTexCoord3sARB = (void (*)(GLenum , GLshort , GLshort , GLshort))getExtendedProcAddress("glMultiTexCoord3sARB");
   return _glMultiTexCoord3sARB(target , s , t , r);
}

void stub_glMultiTexCoord3sSGIS(GLenum target, GLshort s, GLshort t, GLshort r);
void (* _glMultiTexCoord3sSGIS)(GLenum target, GLshort s, GLshort t, GLshort r) = &stub_glMultiTexCoord3sSGIS;
void stub_glMultiTexCoord3sSGIS(GLenum target, GLshort s, GLshort t, GLshort r) {
   if (getExtendedProcAddress("glMultiTexCoord3sSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3sSGIS");
   }
   _glMultiTexCoord3sSGIS = (void (*)(GLenum , GLshort , GLshort , GLshort))getExtendedProcAddress("glMultiTexCoord3sSGIS");
   return _glMultiTexCoord3sSGIS(target , s , t , r);
}

void stub_glMultiTexCoord3svARB(GLenum target, const GLshort *v);
void (* _glMultiTexCoord3svARB)(GLenum target, const GLshort *v) = &stub_glMultiTexCoord3svARB;
void stub_glMultiTexCoord3svARB(GLenum target, const GLshort *v) {
   if (getExtendedProcAddress("glMultiTexCoord3svARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3svARB");
   }
   _glMultiTexCoord3svARB = (void (*)(GLenum , const GLshort *))getExtendedProcAddress("glMultiTexCoord3svARB");
   return _glMultiTexCoord3svARB(target , v);
}

void stub_glMultiTexCoord3svSGIS(GLenum target, const GLshort *v);
void (* _glMultiTexCoord3svSGIS)(GLenum target, const GLshort *v) = &stub_glMultiTexCoord3svSGIS;
void stub_glMultiTexCoord3svSGIS(GLenum target, const GLshort *v) {
   if (getExtendedProcAddress("glMultiTexCoord3svSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord3svSGIS");
   }
   _glMultiTexCoord3svSGIS = (void (*)(GLenum , const GLshort *))getExtendedProcAddress("glMultiTexCoord3svSGIS");
   return _glMultiTexCoord3svSGIS(target , v);
}

void stub_glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void (* _glMultiTexCoord4dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) = &stub_glMultiTexCoord4dARB;
void stub_glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) {
   if (getExtendedProcAddress("glMultiTexCoord4dARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4dARB");
   }
   _glMultiTexCoord4dARB = (void (*)(GLenum , GLdouble , GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glMultiTexCoord4dARB");
   return _glMultiTexCoord4dARB(target , s , t , r , q);
}

void stub_glMultiTexCoord4dSGIS(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void (* _glMultiTexCoord4dSGIS)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) = &stub_glMultiTexCoord4dSGIS;
void stub_glMultiTexCoord4dSGIS(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) {
   if (getExtendedProcAddress("glMultiTexCoord4dSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4dSGIS");
   }
   _glMultiTexCoord4dSGIS = (void (*)(GLenum , GLdouble , GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glMultiTexCoord4dSGIS");
   return _glMultiTexCoord4dSGIS(target , s , t , r , q);
}

void stub_glMultiTexCoord4dvARB(GLenum target, const GLdouble *v);
void (* _glMultiTexCoord4dvARB)(GLenum target, const GLdouble *v) = &stub_glMultiTexCoord4dvARB;
void stub_glMultiTexCoord4dvARB(GLenum target, const GLdouble *v) {
   if (getExtendedProcAddress("glMultiTexCoord4dvARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4dvARB");
   }
   _glMultiTexCoord4dvARB = (void (*)(GLenum , const GLdouble *))getExtendedProcAddress("glMultiTexCoord4dvARB");
   return _glMultiTexCoord4dvARB(target , v);
}

void stub_glMultiTexCoord4dvSGIS(GLenum target, const GLdouble *v);
void (* _glMultiTexCoord4dvSGIS)(GLenum target, const GLdouble *v) = &stub_glMultiTexCoord4dvSGIS;
void stub_glMultiTexCoord4dvSGIS(GLenum target, const GLdouble *v) {
   if (getExtendedProcAddress("glMultiTexCoord4dvSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4dvSGIS");
   }
   _glMultiTexCoord4dvSGIS = (void (*)(GLenum , const GLdouble *))getExtendedProcAddress("glMultiTexCoord4dvSGIS");
   return _glMultiTexCoord4dvSGIS(target , v);
}

void stub_glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void (* _glMultiTexCoord4fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) = &stub_glMultiTexCoord4fARB;
void stub_glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
   if (getExtendedProcAddress("glMultiTexCoord4fARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4fARB");
   }
   _glMultiTexCoord4fARB = (void (*)(GLenum , GLfloat , GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glMultiTexCoord4fARB");
   return _glMultiTexCoord4fARB(target , s , t , r , q);
}

void stub_glMultiTexCoord4fSGIS(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void (* _glMultiTexCoord4fSGIS)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) = &stub_glMultiTexCoord4fSGIS;
void stub_glMultiTexCoord4fSGIS(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
   if (getExtendedProcAddress("glMultiTexCoord4fSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4fSGIS");
   }
   _glMultiTexCoord4fSGIS = (void (*)(GLenum , GLfloat , GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glMultiTexCoord4fSGIS");
   return _glMultiTexCoord4fSGIS(target , s , t , r , q);
}

void stub_glMultiTexCoord4fvARB(GLenum target, const GLfloat *v);
void (* _glMultiTexCoord4fvARB)(GLenum target, const GLfloat *v) = &stub_glMultiTexCoord4fvARB;
void stub_glMultiTexCoord4fvARB(GLenum target, const GLfloat *v) {
   if (getExtendedProcAddress("glMultiTexCoord4fvARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4fvARB");
   }
   _glMultiTexCoord4fvARB = (void (*)(GLenum , const GLfloat *))getExtendedProcAddress("glMultiTexCoord4fvARB");
   return _glMultiTexCoord4fvARB(target , v);
}

void stub_glMultiTexCoord4fvSGIS(GLenum target, const GLfloat *v);
void (* _glMultiTexCoord4fvSGIS)(GLenum target, const GLfloat *v) = &stub_glMultiTexCoord4fvSGIS;
void stub_glMultiTexCoord4fvSGIS(GLenum target, const GLfloat *v) {
   if (getExtendedProcAddress("glMultiTexCoord4fvSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4fvSGIS");
   }
   _glMultiTexCoord4fvSGIS = (void (*)(GLenum , const GLfloat *))getExtendedProcAddress("glMultiTexCoord4fvSGIS");
   return _glMultiTexCoord4fvSGIS(target , v);
}

void stub_glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q);
void (* _glMultiTexCoord4iARB)(GLenum target, GLint s, GLint t, GLint r, GLint q) = &stub_glMultiTexCoord4iARB;
void stub_glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q) {
   if (getExtendedProcAddress("glMultiTexCoord4iARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4iARB");
   }
   _glMultiTexCoord4iARB = (void (*)(GLenum , GLint , GLint , GLint , GLint))getExtendedProcAddress("glMultiTexCoord4iARB");
   return _glMultiTexCoord4iARB(target , s , t , r , q);
}

void stub_glMultiTexCoord4iSGIS(GLenum target, GLint s, GLint t, GLint r, GLint q);
void (* _glMultiTexCoord4iSGIS)(GLenum target, GLint s, GLint t, GLint r, GLint q) = &stub_glMultiTexCoord4iSGIS;
void stub_glMultiTexCoord4iSGIS(GLenum target, GLint s, GLint t, GLint r, GLint q) {
   if (getExtendedProcAddress("glMultiTexCoord4iSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4iSGIS");
   }
   _glMultiTexCoord4iSGIS = (void (*)(GLenum , GLint , GLint , GLint , GLint))getExtendedProcAddress("glMultiTexCoord4iSGIS");
   return _glMultiTexCoord4iSGIS(target , s , t , r , q);
}

void stub_glMultiTexCoord4ivARB(GLenum target, const GLint *v);
void (* _glMultiTexCoord4ivARB)(GLenum target, const GLint *v) = &stub_glMultiTexCoord4ivARB;
void stub_glMultiTexCoord4ivARB(GLenum target, const GLint *v) {
   if (getExtendedProcAddress("glMultiTexCoord4ivARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4ivARB");
   }
   _glMultiTexCoord4ivARB = (void (*)(GLenum , const GLint *))getExtendedProcAddress("glMultiTexCoord4ivARB");
   return _glMultiTexCoord4ivARB(target , v);
}

void stub_glMultiTexCoord4ivSGIS(GLenum target, const GLint *v);
void (* _glMultiTexCoord4ivSGIS)(GLenum target, const GLint *v) = &stub_glMultiTexCoord4ivSGIS;
void stub_glMultiTexCoord4ivSGIS(GLenum target, const GLint *v) {
   if (getExtendedProcAddress("glMultiTexCoord4ivSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4ivSGIS");
   }
   _glMultiTexCoord4ivSGIS = (void (*)(GLenum , const GLint *))getExtendedProcAddress("glMultiTexCoord4ivSGIS");
   return _glMultiTexCoord4ivSGIS(target , v);
}

void stub_glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
void (* _glMultiTexCoord4sARB)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) = &stub_glMultiTexCoord4sARB;
void stub_glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) {
   if (getExtendedProcAddress("glMultiTexCoord4sARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4sARB");
   }
   _glMultiTexCoord4sARB = (void (*)(GLenum , GLshort , GLshort , GLshort , GLshort))getExtendedProcAddress("glMultiTexCoord4sARB");
   return _glMultiTexCoord4sARB(target , s , t , r , q);
}

void stub_glMultiTexCoord4sSGIS(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
void (* _glMultiTexCoord4sSGIS)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) = &stub_glMultiTexCoord4sSGIS;
void stub_glMultiTexCoord4sSGIS(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) {
   if (getExtendedProcAddress("glMultiTexCoord4sSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4sSGIS");
   }
   _glMultiTexCoord4sSGIS = (void (*)(GLenum , GLshort , GLshort , GLshort , GLshort))getExtendedProcAddress("glMultiTexCoord4sSGIS");
   return _glMultiTexCoord4sSGIS(target , s , t , r , q);
}

void stub_glMultiTexCoord4svARB(GLenum target, const GLshort *v);
void (* _glMultiTexCoord4svARB)(GLenum target, const GLshort *v) = &stub_glMultiTexCoord4svARB;
void stub_glMultiTexCoord4svARB(GLenum target, const GLshort *v) {
   if (getExtendedProcAddress("glMultiTexCoord4svARB") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4svARB");
   }
   _glMultiTexCoord4svARB = (void (*)(GLenum , const GLshort *))getExtendedProcAddress("glMultiTexCoord4svARB");
   return _glMultiTexCoord4svARB(target , v);
}

void stub_glMultiTexCoord4svSGIS(GLenum target, const GLshort *v);
void (* _glMultiTexCoord4svSGIS)(GLenum target, const GLshort *v) = &stub_glMultiTexCoord4svSGIS;
void stub_glMultiTexCoord4svSGIS(GLenum target, const GLshort *v) {
   if (getExtendedProcAddress("glMultiTexCoord4svSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoord4svSGIS");
   }
   _glMultiTexCoord4svSGIS = (void (*)(GLenum , const GLshort *))getExtendedProcAddress("glMultiTexCoord4svSGIS");
   return _glMultiTexCoord4svSGIS(target , v);
}

void stub_glMultiTexCoordPointerSGIS(GLenum target, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
void (* _glMultiTexCoordPointerSGIS)(GLenum target, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) = &stub_glMultiTexCoordPointerSGIS;
void stub_glMultiTexCoordPointerSGIS(GLenum target, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
   if (getExtendedProcAddress("glMultiTexCoordPointerSGIS") == NULL) {
      return GL_kludge_error_void("glMultiTexCoordPointerSGIS");
   }
   _glMultiTexCoordPointerSGIS = (void (*)(GLenum , GLint , GLenum , GLsizei , const GLvoid *))getExtendedProcAddress("glMultiTexCoordPointerSGIS");
   return _glMultiTexCoordPointerSGIS(target , size , type , stride , pointer);
}

void stub_glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
void (* _glNormalPointerEXT)(GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) = &stub_glNormalPointerEXT;
void stub_glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) {
   if (getExtendedProcAddress("glNormalPointerEXT") == NULL) {
      return GL_kludge_error_void("glNormalPointerEXT");
   }
   _glNormalPointerEXT = (void (*)(GLenum , GLsizei , GLsizei , const GLvoid *))getExtendedProcAddress("glNormalPointerEXT");
   return _glNormalPointerEXT(type , stride , count , pointer);
}

void stub_glPixelDataRangeNV(GLenum target, GLsizei size, const GLvoid *pointer);
void (* _glPixelDataRangeNV)(GLenum target, GLsizei size, const GLvoid *pointer) = &stub_glPixelDataRangeNV;
void stub_glPixelDataRangeNV(GLenum target, GLsizei size, const GLvoid *pointer) {
   if (getExtendedProcAddress("glPixelDataRangeNV") == NULL) {
      return GL_kludge_error_void("glPixelDataRangeNV");
   }
   _glPixelDataRangeNV = (void (*)(GLenum , GLsizei , const GLvoid *))getExtendedProcAddress("glPixelDataRangeNV");
   return _glPixelDataRangeNV(target , size , pointer);
}

void stub_glPointParameterfARB(GLenum pname, GLfloat param);
void (* _glPointParameterfARB)(GLenum pname, GLfloat param) = &stub_glPointParameterfARB;
void stub_glPointParameterfARB(GLenum pname, GLfloat param) {
   if (getExtendedProcAddress("glPointParameterfARB") == NULL) {
      return GL_kludge_error_void("glPointParameterfARB");
   }
   _glPointParameterfARB = (void (*)(GLenum , GLfloat))getExtendedProcAddress("glPointParameterfARB");
   return _glPointParameterfARB(pname , param);
}

void stub_glPointParameterfEXT(GLenum pname, GLfloat param);
void (* _glPointParameterfEXT)(GLenum pname, GLfloat param) = &stub_glPointParameterfEXT;
void stub_glPointParameterfEXT(GLenum pname, GLfloat param) {
   if (getExtendedProcAddress("glPointParameterfEXT") == NULL) {
      return GL_kludge_error_void("glPointParameterfEXT");
   }
   _glPointParameterfEXT = (void (*)(GLenum , GLfloat))getExtendedProcAddress("glPointParameterfEXT");
   return _glPointParameterfEXT(pname , param);
}

void stub_glPointParameterfvARB(GLenum pname, const GLfloat *params);
void (* _glPointParameterfvARB)(GLenum pname, const GLfloat *params) = &stub_glPointParameterfvARB;
void stub_glPointParameterfvARB(GLenum pname, const GLfloat *params) {
   if (getExtendedProcAddress("glPointParameterfvARB") == NULL) {
      return GL_kludge_error_void("glPointParameterfvARB");
   }
   _glPointParameterfvARB = (void (*)(GLenum , const GLfloat *))getExtendedProcAddress("glPointParameterfvARB");
   return _glPointParameterfvARB(pname , params);
}

void stub_glPointParameterfvEXT(GLenum pname, const GLfloat *params);
void (* _glPointParameterfvEXT)(GLenum pname, const GLfloat *params) = &stub_glPointParameterfvEXT;
void stub_glPointParameterfvEXT(GLenum pname, const GLfloat *params) {
   if (getExtendedProcAddress("glPointParameterfvEXT") == NULL) {
      return GL_kludge_error_void("glPointParameterfvEXT");
   }
   _glPointParameterfvEXT = (void (*)(GLenum , const GLfloat *))getExtendedProcAddress("glPointParameterfvEXT");
   return _glPointParameterfvEXT(pname , params);
}

void stub_glPointParameteri(GLenum pname, GLint param);
void (* _glPointParameteri)(GLenum pname, GLint param) = &stub_glPointParameteri;
void stub_glPointParameteri(GLenum pname, GLint param) {
   if (getExtendedProcAddress("glPointParameteri") == NULL) {
      return GL_kludge_error_void("glPointParameteri");
   }
   _glPointParameteri = (void (*)(GLenum , GLint))getExtendedProcAddress("glPointParameteri");
   return _glPointParameteri(pname , param);
}

void stub_glPointParameteriNV(GLenum pname, GLint param);
void (* _glPointParameteriNV)(GLenum pname, GLint param) = &stub_glPointParameteriNV;
void stub_glPointParameteriNV(GLenum pname, GLint param) {
   if (getExtendedProcAddress("glPointParameteriNV") == NULL) {
      return GL_kludge_error_void("glPointParameteriNV");
   }
   _glPointParameteriNV = (void (*)(GLenum , GLint))getExtendedProcAddress("glPointParameteriNV");
   return _glPointParameteriNV(pname , param);
}

void stub_glPointParameteriv(GLenum pname, const GLint *params);
void (* _glPointParameteriv)(GLenum pname, const GLint *params) = &stub_glPointParameteriv;
void stub_glPointParameteriv(GLenum pname, const GLint *params) {
   if (getExtendedProcAddress("glPointParameteriv") == NULL) {
      return GL_kludge_error_void("glPointParameteriv");
   }
   _glPointParameteriv = (void (*)(GLenum , const GLint *))getExtendedProcAddress("glPointParameteriv");
   return _glPointParameteriv(pname , params);
}

void stub_glPointParameterivNV(GLenum pname, const GLint *params);
void (* _glPointParameterivNV)(GLenum pname, const GLint *params) = &stub_glPointParameterivNV;
void stub_glPointParameterivNV(GLenum pname, const GLint *params) {
   if (getExtendedProcAddress("glPointParameterivNV") == NULL) {
      return GL_kludge_error_void("glPointParameterivNV");
   }
   _glPointParameterivNV = (void (*)(GLenum , const GLint *))getExtendedProcAddress("glPointParameterivNV");
   return _glPointParameterivNV(pname , params);
}

void stub_glPrimitiveRestartIndexNV(GLuint index);
void (* _glPrimitiveRestartIndexNV)(GLuint index) = &stub_glPrimitiveRestartIndexNV;
void stub_glPrimitiveRestartIndexNV(GLuint index) {
   if (getExtendedProcAddress("glPrimitiveRestartIndexNV") == NULL) {
      return GL_kludge_error_void("glPrimitiveRestartIndexNV");
   }
   _glPrimitiveRestartIndexNV = (void (*)(GLuint))getExtendedProcAddress("glPrimitiveRestartIndexNV");
   return _glPrimitiveRestartIndexNV(index);
}

void stub_glPrimitiveRestartNV(void);
void (* _glPrimitiveRestartNV)(void) = &stub_glPrimitiveRestartNV;
void stub_glPrimitiveRestartNV(void) {
   if (getExtendedProcAddress("glPrimitiveRestartNV") == NULL) {
      return GL_kludge_error_void("glPrimitiveRestartNV");
   }
   _glPrimitiveRestartNV = (void (*)())getExtendedProcAddress("glPrimitiveRestartNV");
   return _glPrimitiveRestartNV();
}

void stub_glPrioritizeTexturesEXT(GLsizei n, const GLuint *textures, const GLclampf *priorities);
void (* _glPrioritizeTexturesEXT)(GLsizei n, const GLuint *textures, const GLclampf *priorities) = &stub_glPrioritizeTexturesEXT;
void stub_glPrioritizeTexturesEXT(GLsizei n, const GLuint *textures, const GLclampf *priorities) {
   if (getExtendedProcAddress("glPrioritizeTexturesEXT") == NULL) {
      return GL_kludge_error_void("glPrioritizeTexturesEXT");
   }
   _glPrioritizeTexturesEXT = (void (*)(GLsizei , const GLuint * , const GLclampf *))getExtendedProcAddress("glPrioritizeTexturesEXT");
   return _glPrioritizeTexturesEXT(n , textures , priorities);
}

void stub_glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void (* _glProgramEnvParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = &stub_glProgramEnvParameter4dARB;
void stub_glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
   if (getExtendedProcAddress("glProgramEnvParameter4dARB") == NULL) {
      return GL_kludge_error_void("glProgramEnvParameter4dARB");
   }
   _glProgramEnvParameter4dARB = (void (*)(GLenum , GLuint , GLdouble , GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glProgramEnvParameter4dARB");
   return _glProgramEnvParameter4dARB(target , index , x , y , z , w);
}

void stub_glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble *params);
void (* _glProgramEnvParameter4dvARB)(GLenum target, GLuint index, const GLdouble *params) = &stub_glProgramEnvParameter4dvARB;
void stub_glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble *params) {
   if (getExtendedProcAddress("glProgramEnvParameter4dvARB") == NULL) {
      return GL_kludge_error_void("glProgramEnvParameter4dvARB");
   }
   _glProgramEnvParameter4dvARB = (void (*)(GLenum , GLuint , const GLdouble *))getExtendedProcAddress("glProgramEnvParameter4dvARB");
   return _glProgramEnvParameter4dvARB(target , index , params);
}

void stub_glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (* _glProgramEnvParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = &stub_glProgramEnvParameter4fARB;
void stub_glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
   if (getExtendedProcAddress("glProgramEnvParameter4fARB") == NULL) {
      return GL_kludge_error_void("glProgramEnvParameter4fARB");
   }
   _glProgramEnvParameter4fARB = (void (*)(GLenum , GLuint , GLfloat , GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glProgramEnvParameter4fARB");
   return _glProgramEnvParameter4fARB(target , index , x , y , z , w);
}

void stub_glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat *params);
void (* _glProgramEnvParameter4fvARB)(GLenum target, GLuint index, const GLfloat *params) = &stub_glProgramEnvParameter4fvARB;
void stub_glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat *params) {
   if (getExtendedProcAddress("glProgramEnvParameter4fvARB") == NULL) {
      return GL_kludge_error_void("glProgramEnvParameter4fvARB");
   }
   _glProgramEnvParameter4fvARB = (void (*)(GLenum , GLuint , const GLfloat *))getExtendedProcAddress("glProgramEnvParameter4fvARB");
   return _glProgramEnvParameter4fvARB(target , index , params);
}

void stub_glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void (* _glProgramLocalParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = &stub_glProgramLocalParameter4dARB;
void stub_glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
   if (getExtendedProcAddress("glProgramLocalParameter4dARB") == NULL) {
      return GL_kludge_error_void("glProgramLocalParameter4dARB");
   }
   _glProgramLocalParameter4dARB = (void (*)(GLenum , GLuint , GLdouble , GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glProgramLocalParameter4dARB");
   return _glProgramLocalParameter4dARB(target , index , x , y , z , w);
}

void stub_glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble *params);
void (* _glProgramLocalParameter4dvARB)(GLenum target, GLuint index, const GLdouble *params) = &stub_glProgramLocalParameter4dvARB;
void stub_glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble *params) {
   if (getExtendedProcAddress("glProgramLocalParameter4dvARB") == NULL) {
      return GL_kludge_error_void("glProgramLocalParameter4dvARB");
   }
   _glProgramLocalParameter4dvARB = (void (*)(GLenum , GLuint , const GLdouble *))getExtendedProcAddress("glProgramLocalParameter4dvARB");
   return _glProgramLocalParameter4dvARB(target , index , params);
}

void stub_glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (* _glProgramLocalParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = &stub_glProgramLocalParameter4fARB;
void stub_glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
   if (getExtendedProcAddress("glProgramLocalParameter4fARB") == NULL) {
      return GL_kludge_error_void("glProgramLocalParameter4fARB");
   }
   _glProgramLocalParameter4fARB = (void (*)(GLenum , GLuint , GLfloat , GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glProgramLocalParameter4fARB");
   return _glProgramLocalParameter4fARB(target , index , x , y , z , w);
}

void stub_glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat *params);
void (* _glProgramLocalParameter4fvARB)(GLenum target, GLuint index, const GLfloat *params) = &stub_glProgramLocalParameter4fvARB;
void stub_glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat *params) {
   if (getExtendedProcAddress("glProgramLocalParameter4fvARB") == NULL) {
      return GL_kludge_error_void("glProgramLocalParameter4fvARB");
   }
   _glProgramLocalParameter4fvARB = (void (*)(GLenum , GLuint , const GLfloat *))getExtendedProcAddress("glProgramLocalParameter4fvARB");
   return _glProgramLocalParameter4fvARB(target , index , params);
}

void stub_glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void (* _glProgramNamedParameter4dNV)(GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = &stub_glProgramNamedParameter4dNV;
void stub_glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
   if (getExtendedProcAddress("glProgramNamedParameter4dNV") == NULL) {
      return GL_kludge_error_void("glProgramNamedParameter4dNV");
   }
   _glProgramNamedParameter4dNV = (void (*)(GLuint , GLsizei , const GLubyte * , GLdouble , GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glProgramNamedParameter4dNV");
   return _glProgramNamedParameter4dNV(id , len , name , x , y , z , w);
}

void stub_glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v);
void (* _glProgramNamedParameter4dvNV)(GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v) = &stub_glProgramNamedParameter4dvNV;
void stub_glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v) {
   if (getExtendedProcAddress("glProgramNamedParameter4dvNV") == NULL) {
      return GL_kludge_error_void("glProgramNamedParameter4dvNV");
   }
   _glProgramNamedParameter4dvNV = (void (*)(GLuint , GLsizei , const GLubyte * , const GLdouble *))getExtendedProcAddress("glProgramNamedParameter4dvNV");
   return _glProgramNamedParameter4dvNV(id , len , name , v);
}

void stub_glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (* _glProgramNamedParameter4fNV)(GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = &stub_glProgramNamedParameter4fNV;
void stub_glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
   if (getExtendedProcAddress("glProgramNamedParameter4fNV") == NULL) {
      return GL_kludge_error_void("glProgramNamedParameter4fNV");
   }
   _glProgramNamedParameter4fNV = (void (*)(GLuint , GLsizei , const GLubyte * , GLfloat , GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glProgramNamedParameter4fNV");
   return _glProgramNamedParameter4fNV(id , len , name , x , y , z , w);
}

void stub_glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v);
void (* _glProgramNamedParameter4fvNV)(GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v) = &stub_glProgramNamedParameter4fvNV;
void stub_glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v) {
   if (getExtendedProcAddress("glProgramNamedParameter4fvNV") == NULL) {
      return GL_kludge_error_void("glProgramNamedParameter4fvNV");
   }
   _glProgramNamedParameter4fvNV = (void (*)(GLuint , GLsizei , const GLubyte * , const GLfloat *))getExtendedProcAddress("glProgramNamedParameter4fvNV");
   return _glProgramNamedParameter4fvNV(id , len , name , v);
}

void stub_glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void (* _glProgramParameter4dNV)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = &stub_glProgramParameter4dNV;
void stub_glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
   if (getExtendedProcAddress("glProgramParameter4dNV") == NULL) {
      return GL_kludge_error_void("glProgramParameter4dNV");
   }
   _glProgramParameter4dNV = (void (*)(GLenum , GLuint , GLdouble , GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glProgramParameter4dNV");
   return _glProgramParameter4dNV(target , index , x , y , z , w);
}

void stub_glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble *v);
void (* _glProgramParameter4dvNV)(GLenum target, GLuint index, const GLdouble *v) = &stub_glProgramParameter4dvNV;
void stub_glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble *v) {
   if (getExtendedProcAddress("glProgramParameter4dvNV") == NULL) {
      return GL_kludge_error_void("glProgramParameter4dvNV");
   }
   _glProgramParameter4dvNV = (void (*)(GLenum , GLuint , const GLdouble *))getExtendedProcAddress("glProgramParameter4dvNV");
   return _glProgramParameter4dvNV(target , index , v);
}

void stub_glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (* _glProgramParameter4fNV)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = &stub_glProgramParameter4fNV;
void stub_glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
   if (getExtendedProcAddress("glProgramParameter4fNV") == NULL) {
      return GL_kludge_error_void("glProgramParameter4fNV");
   }
   _glProgramParameter4fNV = (void (*)(GLenum , GLuint , GLfloat , GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glProgramParameter4fNV");
   return _glProgramParameter4fNV(target , index , x , y , z , w);
}

void stub_glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat *v);
void (* _glProgramParameter4fvNV)(GLenum target, GLuint index, const GLfloat *v) = &stub_glProgramParameter4fvNV;
void stub_glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat *v) {
   if (getExtendedProcAddress("glProgramParameter4fvNV") == NULL) {
      return GL_kludge_error_void("glProgramParameter4fvNV");
   }
   _glProgramParameter4fvNV = (void (*)(GLenum , GLuint , const GLfloat *))getExtendedProcAddress("glProgramParameter4fvNV");
   return _glProgramParameter4fvNV(target , index , v);
}

void stub_glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble *v);
void (* _glProgramParameters4dvNV)(GLenum target, GLuint index, GLsizei count, const GLdouble *v) = &stub_glProgramParameters4dvNV;
void stub_glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble *v) {
   if (getExtendedProcAddress("glProgramParameters4dvNV") == NULL) {
      return GL_kludge_error_void("glProgramParameters4dvNV");
   }
   _glProgramParameters4dvNV = (void (*)(GLenum , GLuint , GLsizei , const GLdouble *))getExtendedProcAddress("glProgramParameters4dvNV");
   return _glProgramParameters4dvNV(target , index , count , v);
}

void stub_glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat *v);
void (* _glProgramParameters4fvNV)(GLenum target, GLuint index, GLsizei count, const GLfloat *v) = &stub_glProgramParameters4fvNV;
void stub_glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat *v) {
   if (getExtendedProcAddress("glProgramParameters4fvNV") == NULL) {
      return GL_kludge_error_void("glProgramParameters4fvNV");
   }
   _glProgramParameters4fvNV = (void (*)(GLenum , GLuint , GLsizei , const GLfloat *))getExtendedProcAddress("glProgramParameters4fvNV");
   return _glProgramParameters4fvNV(target , index , count , v);
}

void stub_glProgramStringARB(GLenum target, GLenum format, GLsizei len, const GLvoid *string);
void (* _glProgramStringARB)(GLenum target, GLenum format, GLsizei len, const GLvoid *string) = &stub_glProgramStringARB;
void stub_glProgramStringARB(GLenum target, GLenum format, GLsizei len, const GLvoid *string) {
   if (getExtendedProcAddress("glProgramStringARB") == NULL) {
      return GL_kludge_error_void("glProgramStringARB");
   }
   _glProgramStringARB = (void (*)(GLenum , GLenum , GLsizei , const GLvoid *))getExtendedProcAddress("glProgramStringARB");
   return _glProgramStringARB(target , format , len , string);
}

GLenum stub_glReleaseFlushHold(GLuint id);
GLenum (* _glReleaseFlushHold)(GLuint id) = &stub_glReleaseFlushHold;
GLenum stub_glReleaseFlushHold(GLuint id) {
   if (getExtendedProcAddress("glReleaseFlushHold") == NULL) {
      return GL_kludge_error_GLenum("glReleaseFlushHold");
   }
   _glReleaseFlushHold = (GLenum (*)(GLuint))getExtendedProcAddress("glReleaseFlushHold");
   return _glReleaseFlushHold(id);
}

void stub_glRequestResidentProgramsNV(GLsizei n, const GLuint *programs);
void (* _glRequestResidentProgramsNV)(GLsizei n, const GLuint *programs) = &stub_glRequestResidentProgramsNV;
void stub_glRequestResidentProgramsNV(GLsizei n, const GLuint *programs) {
   if (getExtendedProcAddress("glRequestResidentProgramsNV") == NULL) {
      return GL_kludge_error_void("glRequestResidentProgramsNV");
   }
   _glRequestResidentProgramsNV = (void (*)(GLsizei , const GLuint *))getExtendedProcAddress("glRequestResidentProgramsNV");
   return _glRequestResidentProgramsNV(n , programs);
}

void stub_glResetHistogram(GLenum target);
void (* _glResetHistogram)(GLenum target) = &stub_glResetHistogram;
void stub_glResetHistogram(GLenum target) {
   if (getExtendedProcAddress("glResetHistogram") == NULL) {
      return GL_kludge_error_void("glResetHistogram");
   }
   _glResetHistogram = (void (*)(GLenum))getExtendedProcAddress("glResetHistogram");
   return _glResetHistogram(target);
}

void stub_glResetMinmax(GLenum target);
void (* _glResetMinmax)(GLenum target) = &stub_glResetMinmax;
void stub_glResetMinmax(GLenum target) {
   if (getExtendedProcAddress("glResetMinmax") == NULL) {
      return GL_kludge_error_void("glResetMinmax");
   }
   _glResetMinmax = (void (*)(GLenum))getExtendedProcAddress("glResetMinmax");
   return _glResetMinmax(target);
}

void stub_glSampleCoverageARB(GLclampf value, GLboolean invert);
void (* _glSampleCoverageARB)(GLclampf value, GLboolean invert) = &stub_glSampleCoverageARB;
void stub_glSampleCoverageARB(GLclampf value, GLboolean invert) {
   if (getExtendedProcAddress("glSampleCoverageARB") == NULL) {
      return GL_kludge_error_void("glSampleCoverageARB");
   }
   _glSampleCoverageARB = (void (*)(GLclampf , GLboolean))getExtendedProcAddress("glSampleCoverageARB");
   return _glSampleCoverageARB(value , invert);
}

void stub_glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue);
void (* _glSecondaryColor3b)(GLbyte red, GLbyte green, GLbyte blue) = &stub_glSecondaryColor3b;
void stub_glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue) {
   if (getExtendedProcAddress("glSecondaryColor3b") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3b");
   }
   _glSecondaryColor3b = (void (*)(GLbyte , GLbyte , GLbyte))getExtendedProcAddress("glSecondaryColor3b");
   return _glSecondaryColor3b(red , green , blue);
}

void stub_glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue);
void (* _glSecondaryColor3bEXT)(GLbyte red, GLbyte green, GLbyte blue) = &stub_glSecondaryColor3bEXT;
void stub_glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue) {
   if (getExtendedProcAddress("glSecondaryColor3bEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3bEXT");
   }
   _glSecondaryColor3bEXT = (void (*)(GLbyte , GLbyte , GLbyte))getExtendedProcAddress("glSecondaryColor3bEXT");
   return _glSecondaryColor3bEXT(red , green , blue);
}

void stub_glSecondaryColor3bv(const GLbyte *v);
void (* _glSecondaryColor3bv)(const GLbyte *v) = &stub_glSecondaryColor3bv;
void stub_glSecondaryColor3bv(const GLbyte *v) {
   if (getExtendedProcAddress("glSecondaryColor3bv") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3bv");
   }
   _glSecondaryColor3bv = (void (*)(const GLbyte *))getExtendedProcAddress("glSecondaryColor3bv");
   return _glSecondaryColor3bv(v);
}

void stub_glSecondaryColor3bvEXT(const GLbyte *v);
void (* _glSecondaryColor3bvEXT)(const GLbyte *v) = &stub_glSecondaryColor3bvEXT;
void stub_glSecondaryColor3bvEXT(const GLbyte *v) {
   if (getExtendedProcAddress("glSecondaryColor3bvEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3bvEXT");
   }
   _glSecondaryColor3bvEXT = (void (*)(const GLbyte *))getExtendedProcAddress("glSecondaryColor3bvEXT");
   return _glSecondaryColor3bvEXT(v);
}

void stub_glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue);
void (* _glSecondaryColor3d)(GLdouble red, GLdouble green, GLdouble blue) = &stub_glSecondaryColor3d;
void stub_glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue) {
   if (getExtendedProcAddress("glSecondaryColor3d") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3d");
   }
   _glSecondaryColor3d = (void (*)(GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glSecondaryColor3d");
   return _glSecondaryColor3d(red , green , blue);
}

void stub_glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue);
void (* _glSecondaryColor3dEXT)(GLdouble red, GLdouble green, GLdouble blue) = &stub_glSecondaryColor3dEXT;
void stub_glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue) {
   if (getExtendedProcAddress("glSecondaryColor3dEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3dEXT");
   }
   _glSecondaryColor3dEXT = (void (*)(GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glSecondaryColor3dEXT");
   return _glSecondaryColor3dEXT(red , green , blue);
}

void stub_glSecondaryColor3dv(const GLdouble *v);
void (* _glSecondaryColor3dv)(const GLdouble *v) = &stub_glSecondaryColor3dv;
void stub_glSecondaryColor3dv(const GLdouble *v) {
   if (getExtendedProcAddress("glSecondaryColor3dv") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3dv");
   }
   _glSecondaryColor3dv = (void (*)(const GLdouble *))getExtendedProcAddress("glSecondaryColor3dv");
   return _glSecondaryColor3dv(v);
}

void stub_glSecondaryColor3dvEXT(const GLdouble *v);
void (* _glSecondaryColor3dvEXT)(const GLdouble *v) = &stub_glSecondaryColor3dvEXT;
void stub_glSecondaryColor3dvEXT(const GLdouble *v) {
   if (getExtendedProcAddress("glSecondaryColor3dvEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3dvEXT");
   }
   _glSecondaryColor3dvEXT = (void (*)(const GLdouble *))getExtendedProcAddress("glSecondaryColor3dvEXT");
   return _glSecondaryColor3dvEXT(v);
}

void stub_glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue);
void (* _glSecondaryColor3f)(GLfloat red, GLfloat green, GLfloat blue) = &stub_glSecondaryColor3f;
void stub_glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue) {
   if (getExtendedProcAddress("glSecondaryColor3f") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3f");
   }
   _glSecondaryColor3f = (void (*)(GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glSecondaryColor3f");
   return _glSecondaryColor3f(red , green , blue);
}

void stub_glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue);
void (* _glSecondaryColor3fEXT)(GLfloat red, GLfloat green, GLfloat blue) = &stub_glSecondaryColor3fEXT;
void stub_glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue) {
   if (getExtendedProcAddress("glSecondaryColor3fEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3fEXT");
   }
   _glSecondaryColor3fEXT = (void (*)(GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glSecondaryColor3fEXT");
   return _glSecondaryColor3fEXT(red , green , blue);
}

void stub_glSecondaryColor3fv(const GLfloat *v);
void (* _glSecondaryColor3fv)(const GLfloat *v) = &stub_glSecondaryColor3fv;
void stub_glSecondaryColor3fv(const GLfloat *v) {
   if (getExtendedProcAddress("glSecondaryColor3fv") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3fv");
   }
   _glSecondaryColor3fv = (void (*)(const GLfloat *))getExtendedProcAddress("glSecondaryColor3fv");
   return _glSecondaryColor3fv(v);
}

void stub_glSecondaryColor3fvEXT(const GLfloat *v);
void (* _glSecondaryColor3fvEXT)(const GLfloat *v) = &stub_glSecondaryColor3fvEXT;
void stub_glSecondaryColor3fvEXT(const GLfloat *v) {
   if (getExtendedProcAddress("glSecondaryColor3fvEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3fvEXT");
   }
   _glSecondaryColor3fvEXT = (void (*)(const GLfloat *))getExtendedProcAddress("glSecondaryColor3fvEXT");
   return _glSecondaryColor3fvEXT(v);
}

void stub_glSecondaryColor3i(GLint red, GLint green, GLint blue);
void (* _glSecondaryColor3i)(GLint red, GLint green, GLint blue) = &stub_glSecondaryColor3i;
void stub_glSecondaryColor3i(GLint red, GLint green, GLint blue) {
   if (getExtendedProcAddress("glSecondaryColor3i") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3i");
   }
   _glSecondaryColor3i = (void (*)(GLint , GLint , GLint))getExtendedProcAddress("glSecondaryColor3i");
   return _glSecondaryColor3i(red , green , blue);
}

void stub_glSecondaryColor3iEXT(GLint red, GLint green, GLint blue);
void (* _glSecondaryColor3iEXT)(GLint red, GLint green, GLint blue) = &stub_glSecondaryColor3iEXT;
void stub_glSecondaryColor3iEXT(GLint red, GLint green, GLint blue) {
   if (getExtendedProcAddress("glSecondaryColor3iEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3iEXT");
   }
   _glSecondaryColor3iEXT = (void (*)(GLint , GLint , GLint))getExtendedProcAddress("glSecondaryColor3iEXT");
   return _glSecondaryColor3iEXT(red , green , blue);
}

void stub_glSecondaryColor3iv(const GLint *v);
void (* _glSecondaryColor3iv)(const GLint *v) = &stub_glSecondaryColor3iv;
void stub_glSecondaryColor3iv(const GLint *v) {
   if (getExtendedProcAddress("glSecondaryColor3iv") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3iv");
   }
   _glSecondaryColor3iv = (void (*)(const GLint *))getExtendedProcAddress("glSecondaryColor3iv");
   return _glSecondaryColor3iv(v);
}

void stub_glSecondaryColor3ivEXT(const GLint *v);
void (* _glSecondaryColor3ivEXT)(const GLint *v) = &stub_glSecondaryColor3ivEXT;
void stub_glSecondaryColor3ivEXT(const GLint *v) {
   if (getExtendedProcAddress("glSecondaryColor3ivEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3ivEXT");
   }
   _glSecondaryColor3ivEXT = (void (*)(const GLint *))getExtendedProcAddress("glSecondaryColor3ivEXT");
   return _glSecondaryColor3ivEXT(v);
}

void stub_glSecondaryColor3s(GLshort red, GLshort green, GLshort blue);
void (* _glSecondaryColor3s)(GLshort red, GLshort green, GLshort blue) = &stub_glSecondaryColor3s;
void stub_glSecondaryColor3s(GLshort red, GLshort green, GLshort blue) {
   if (getExtendedProcAddress("glSecondaryColor3s") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3s");
   }
   _glSecondaryColor3s = (void (*)(GLshort , GLshort , GLshort))getExtendedProcAddress("glSecondaryColor3s");
   return _glSecondaryColor3s(red , green , blue);
}

void stub_glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue);
void (* _glSecondaryColor3sEXT)(GLshort red, GLshort green, GLshort blue) = &stub_glSecondaryColor3sEXT;
void stub_glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue) {
   if (getExtendedProcAddress("glSecondaryColor3sEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3sEXT");
   }
   _glSecondaryColor3sEXT = (void (*)(GLshort , GLshort , GLshort))getExtendedProcAddress("glSecondaryColor3sEXT");
   return _glSecondaryColor3sEXT(red , green , blue);
}

void stub_glSecondaryColor3sv(const GLshort *v);
void (* _glSecondaryColor3sv)(const GLshort *v) = &stub_glSecondaryColor3sv;
void stub_glSecondaryColor3sv(const GLshort *v) {
   if (getExtendedProcAddress("glSecondaryColor3sv") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3sv");
   }
   _glSecondaryColor3sv = (void (*)(const GLshort *))getExtendedProcAddress("glSecondaryColor3sv");
   return _glSecondaryColor3sv(v);
}

void stub_glSecondaryColor3svEXT(const GLshort *v);
void (* _glSecondaryColor3svEXT)(const GLshort *v) = &stub_glSecondaryColor3svEXT;
void stub_glSecondaryColor3svEXT(const GLshort *v) {
   if (getExtendedProcAddress("glSecondaryColor3svEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3svEXT");
   }
   _glSecondaryColor3svEXT = (void (*)(const GLshort *))getExtendedProcAddress("glSecondaryColor3svEXT");
   return _glSecondaryColor3svEXT(v);
}

void stub_glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue);
void (* _glSecondaryColor3ub)(GLubyte red, GLubyte green, GLubyte blue) = &stub_glSecondaryColor3ub;
void stub_glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue) {
   if (getExtendedProcAddress("glSecondaryColor3ub") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3ub");
   }
   _glSecondaryColor3ub = (void (*)(GLubyte , GLubyte , GLubyte))getExtendedProcAddress("glSecondaryColor3ub");
   return _glSecondaryColor3ub(red , green , blue);
}

void stub_glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue);
void (* _glSecondaryColor3ubEXT)(GLubyte red, GLubyte green, GLubyte blue) = &stub_glSecondaryColor3ubEXT;
void stub_glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue) {
   if (getExtendedProcAddress("glSecondaryColor3ubEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3ubEXT");
   }
   _glSecondaryColor3ubEXT = (void (*)(GLubyte , GLubyte , GLubyte))getExtendedProcAddress("glSecondaryColor3ubEXT");
   return _glSecondaryColor3ubEXT(red , green , blue);
}

void stub_glSecondaryColor3ubv(const GLubyte *v);
void (* _glSecondaryColor3ubv)(const GLubyte *v) = &stub_glSecondaryColor3ubv;
void stub_glSecondaryColor3ubv(const GLubyte *v) {
   if (getExtendedProcAddress("glSecondaryColor3ubv") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3ubv");
   }
   _glSecondaryColor3ubv = (void (*)(const GLubyte *))getExtendedProcAddress("glSecondaryColor3ubv");
   return _glSecondaryColor3ubv(v);
}

void stub_glSecondaryColor3ubvEXT(const GLubyte *v);
void (* _glSecondaryColor3ubvEXT)(const GLubyte *v) = &stub_glSecondaryColor3ubvEXT;
void stub_glSecondaryColor3ubvEXT(const GLubyte *v) {
   if (getExtendedProcAddress("glSecondaryColor3ubvEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3ubvEXT");
   }
   _glSecondaryColor3ubvEXT = (void (*)(const GLubyte *))getExtendedProcAddress("glSecondaryColor3ubvEXT");
   return _glSecondaryColor3ubvEXT(v);
}

void stub_glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue);
void (* _glSecondaryColor3ui)(GLuint red, GLuint green, GLuint blue) = &stub_glSecondaryColor3ui;
void stub_glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue) {
   if (getExtendedProcAddress("glSecondaryColor3ui") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3ui");
   }
   _glSecondaryColor3ui = (void (*)(GLuint , GLuint , GLuint))getExtendedProcAddress("glSecondaryColor3ui");
   return _glSecondaryColor3ui(red , green , blue);
}

void stub_glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue);
void (* _glSecondaryColor3uiEXT)(GLuint red, GLuint green, GLuint blue) = &stub_glSecondaryColor3uiEXT;
void stub_glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue) {
   if (getExtendedProcAddress("glSecondaryColor3uiEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3uiEXT");
   }
   _glSecondaryColor3uiEXT = (void (*)(GLuint , GLuint , GLuint))getExtendedProcAddress("glSecondaryColor3uiEXT");
   return _glSecondaryColor3uiEXT(red , green , blue);
}

void stub_glSecondaryColor3uiv(const GLuint *v);
void (* _glSecondaryColor3uiv)(const GLuint *v) = &stub_glSecondaryColor3uiv;
void stub_glSecondaryColor3uiv(const GLuint *v) {
   if (getExtendedProcAddress("glSecondaryColor3uiv") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3uiv");
   }
   _glSecondaryColor3uiv = (void (*)(const GLuint *))getExtendedProcAddress("glSecondaryColor3uiv");
   return _glSecondaryColor3uiv(v);
}

void stub_glSecondaryColor3uivEXT(const GLuint *v);
void (* _glSecondaryColor3uivEXT)(const GLuint *v) = &stub_glSecondaryColor3uivEXT;
void stub_glSecondaryColor3uivEXT(const GLuint *v) {
   if (getExtendedProcAddress("glSecondaryColor3uivEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3uivEXT");
   }
   _glSecondaryColor3uivEXT = (void (*)(const GLuint *))getExtendedProcAddress("glSecondaryColor3uivEXT");
   return _glSecondaryColor3uivEXT(v);
}

void stub_glSecondaryColor3us(GLushort red, GLushort green, GLushort blue);
void (* _glSecondaryColor3us)(GLushort red, GLushort green, GLushort blue) = &stub_glSecondaryColor3us;
void stub_glSecondaryColor3us(GLushort red, GLushort green, GLushort blue) {
   if (getExtendedProcAddress("glSecondaryColor3us") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3us");
   }
   _glSecondaryColor3us = (void (*)(GLushort , GLushort , GLushort))getExtendedProcAddress("glSecondaryColor3us");
   return _glSecondaryColor3us(red , green , blue);
}

void stub_glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue);
void (* _glSecondaryColor3usEXT)(GLushort red, GLushort green, GLushort blue) = &stub_glSecondaryColor3usEXT;
void stub_glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue) {
   if (getExtendedProcAddress("glSecondaryColor3usEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3usEXT");
   }
   _glSecondaryColor3usEXT = (void (*)(GLushort , GLushort , GLushort))getExtendedProcAddress("glSecondaryColor3usEXT");
   return _glSecondaryColor3usEXT(red , green , blue);
}

void stub_glSecondaryColor3usv(const GLushort *v);
void (* _glSecondaryColor3usv)(const GLushort *v) = &stub_glSecondaryColor3usv;
void stub_glSecondaryColor3usv(const GLushort *v) {
   if (getExtendedProcAddress("glSecondaryColor3usv") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3usv");
   }
   _glSecondaryColor3usv = (void (*)(const GLushort *))getExtendedProcAddress("glSecondaryColor3usv");
   return _glSecondaryColor3usv(v);
}

void stub_glSecondaryColor3usvEXT(const GLushort *v);
void (* _glSecondaryColor3usvEXT)(const GLushort *v) = &stub_glSecondaryColor3usvEXT;
void stub_glSecondaryColor3usvEXT(const GLushort *v) {
   if (getExtendedProcAddress("glSecondaryColor3usvEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColor3usvEXT");
   }
   _glSecondaryColor3usvEXT = (void (*)(const GLushort *))getExtendedProcAddress("glSecondaryColor3usvEXT");
   return _glSecondaryColor3usvEXT(v);
}

void stub_glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
void (* _glSecondaryColorPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) = &stub_glSecondaryColorPointer;
void stub_glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
   if (getExtendedProcAddress("glSecondaryColorPointer") == NULL) {
      return GL_kludge_error_void("glSecondaryColorPointer");
   }
   _glSecondaryColorPointer = (void (*)(GLint , GLenum , GLsizei , const GLvoid *))getExtendedProcAddress("glSecondaryColorPointer");
   return _glSecondaryColorPointer(size , type , stride , pointer);
}

void stub_glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
void (* _glSecondaryColorPointerEXT)(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) = &stub_glSecondaryColorPointerEXT;
void stub_glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
   if (getExtendedProcAddress("glSecondaryColorPointerEXT") == NULL) {
      return GL_kludge_error_void("glSecondaryColorPointerEXT");
   }
   _glSecondaryColorPointerEXT = (void (*)(GLint , GLenum , GLsizei , const GLvoid *))getExtendedProcAddress("glSecondaryColorPointerEXT");
   return _glSecondaryColorPointerEXT(size , type , stride , pointer);
}

void stub_glSelectTextureCoordSetSGIS(GLenum target);
void (* _glSelectTextureCoordSetSGIS)(GLenum target) = &stub_glSelectTextureCoordSetSGIS;
void stub_glSelectTextureCoordSetSGIS(GLenum target) {
   if (getExtendedProcAddress("glSelectTextureCoordSetSGIS") == NULL) {
      return GL_kludge_error_void("glSelectTextureCoordSetSGIS");
   }
   _glSelectTextureCoordSetSGIS = (void (*)(GLenum))getExtendedProcAddress("glSelectTextureCoordSetSGIS");
   return _glSelectTextureCoordSetSGIS(target);
}

void stub_glSelectTextureSGIS(GLenum target);
void (* _glSelectTextureSGIS)(GLenum target) = &stub_glSelectTextureSGIS;
void stub_glSelectTextureSGIS(GLenum target) {
   if (getExtendedProcAddress("glSelectTextureSGIS") == NULL) {
      return GL_kludge_error_void("glSelectTextureSGIS");
   }
   _glSelectTextureSGIS = (void (*)(GLenum))getExtendedProcAddress("glSelectTextureSGIS");
   return _glSelectTextureSGIS(target);
}

void stub_glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column);
void (* _glSeparableFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column) = &stub_glSeparableFilter2D;
void stub_glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column) {
   if (getExtendedProcAddress("glSeparableFilter2D") == NULL) {
      return GL_kludge_error_void("glSeparableFilter2D");
   }
   _glSeparableFilter2D = (void (*)(GLenum , GLenum , GLsizei , GLsizei , GLenum , GLenum , const GLvoid * , const GLvoid *))getExtendedProcAddress("glSeparableFilter2D");
   return _glSeparableFilter2D(target , internalformat , width , height , format , type , row , column);
}

void stub_glSetFenceNV(GLuint fence, GLenum condition);
void (* _glSetFenceNV)(GLuint fence, GLenum condition) = &stub_glSetFenceNV;
void stub_glSetFenceNV(GLuint fence, GLenum condition) {
   if (getExtendedProcAddress("glSetFenceNV") == NULL) {
      return GL_kludge_error_void("glSetFenceNV");
   }
   _glSetFenceNV = (void (*)(GLuint , GLenum))getExtendedProcAddress("glSetFenceNV");
   return _glSetFenceNV(fence , condition);
}

void stub_glSetWindowStereoModeNV(GLboolean displayMode);
void (* _glSetWindowStereoModeNV)(GLboolean displayMode) = &stub_glSetWindowStereoModeNV;
void stub_glSetWindowStereoModeNV(GLboolean displayMode) {
   if (getExtendedProcAddress("glSetWindowStereoModeNV") == NULL) {
      return GL_kludge_error_void("glSetWindowStereoModeNV");
   }
   _glSetWindowStereoModeNV = (void (*)(GLboolean))getExtendedProcAddress("glSetWindowStereoModeNV");
   return _glSetWindowStereoModeNV(displayMode);
}

void stub_glTbufferMask3DFX(GLuint mask);
void (* _glTbufferMask3DFX)(GLuint mask) = &stub_glTbufferMask3DFX;
void stub_glTbufferMask3DFX(GLuint mask) {
   if (getExtendedProcAddress("glTbufferMask3DFX") == NULL) {
      return GL_kludge_error_void("glTbufferMask3DFX");
   }
   _glTbufferMask3DFX = (void (*)(GLuint))getExtendedProcAddress("glTbufferMask3DFX");
   return _glTbufferMask3DFX(mask);
}

GLboolean stub_glTestFenceNV(GLuint fence);
GLboolean (* _glTestFenceNV)(GLuint fence) = &stub_glTestFenceNV;
GLboolean stub_glTestFenceNV(GLuint fence) {
   if (getExtendedProcAddress("glTestFenceNV") == NULL) {
      return GL_kludge_error_GLboolean("glTestFenceNV");
   }
   _glTestFenceNV = (GLboolean (*)(GLuint))getExtendedProcAddress("glTestFenceNV");
   return _glTestFenceNV(fence);
}

void stub_glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
void (* _glTexCoordPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) = &stub_glTexCoordPointerEXT;
void stub_glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) {
   if (getExtendedProcAddress("glTexCoordPointerEXT") == NULL) {
      return GL_kludge_error_void("glTexCoordPointerEXT");
   }
   _glTexCoordPointerEXT = (void (*)(GLint , GLenum , GLsizei , GLsizei , const GLvoid *))getExtendedProcAddress("glTexCoordPointerEXT");
   return _glTexCoordPointerEXT(size , type , stride , count , pointer);
}

void stub_glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
void (* _glTexImage3D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels) = &stub_glTexImage3D;
void stub_glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels) {
   if (getExtendedProcAddress("glTexImage3D") == NULL) {
      return GL_kludge_error_void("glTexImage3D");
   }
   _glTexImage3D = (void (*)(GLenum , GLint , GLint , GLsizei , GLsizei , GLsizei , GLint , GLenum , GLenum , const GLvoid *))getExtendedProcAddress("glTexImage3D");
   return _glTexImage3D(target , level , internalformat , width , height , depth , border , format , type , pixels);
}

void stub_glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
void (* _glTexImage3DEXT)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels) = &stub_glTexImage3DEXT;
void stub_glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels) {
   if (getExtendedProcAddress("glTexImage3DEXT") == NULL) {
      return GL_kludge_error_void("glTexImage3DEXT");
   }
   _glTexImage3DEXT = (void (*)(GLenum , GLint , GLenum , GLsizei , GLsizei , GLsizei , GLint , GLenum , GLenum , const GLvoid *))getExtendedProcAddress("glTexImage3DEXT");
   return _glTexImage3DEXT(target , level , internalformat , width , height , depth , border , format , type , pixels);
}

void stub_glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
void (* _glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels) = &stub_glTexSubImage3D;
void stub_glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels) {
   if (getExtendedProcAddress("glTexSubImage3D") == NULL) {
      return GL_kludge_error_void("glTexSubImage3D");
   }
   _glTexSubImage3D = (void (*)(GLenum , GLint , GLint , GLint , GLint , GLsizei , GLsizei , GLsizei , GLenum , GLenum , const GLvoid *))getExtendedProcAddress("glTexSubImage3D");
   return _glTexSubImage3D(target , level , xoffset , yoffset , zoffset , width , height , depth , format , type , pixels);
}

void stub_glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
void (* _glTexSubImage3DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels) = &stub_glTexSubImage3DEXT;
void stub_glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels) {
   if (getExtendedProcAddress("glTexSubImage3DEXT") == NULL) {
      return GL_kludge_error_void("glTexSubImage3DEXT");
   }
   _glTexSubImage3DEXT = (void (*)(GLenum , GLint , GLint , GLint , GLint , GLsizei , GLsizei , GLsizei , GLenum , GLenum , const GLvoid *))getExtendedProcAddress("glTexSubImage3DEXT");
   return _glTexSubImage3DEXT(target , level , xoffset , yoffset , zoffset , width , height , depth , format , type , pixels);
}

void stub_glTextureColorMaskSGIS(GLboolean r, GLboolean g, GLboolean b, GLboolean a);
void (* _glTextureColorMaskSGIS)(GLboolean r, GLboolean g, GLboolean b, GLboolean a) = &stub_glTextureColorMaskSGIS;
void stub_glTextureColorMaskSGIS(GLboolean r, GLboolean g, GLboolean b, GLboolean a) {
   if (getExtendedProcAddress("glTextureColorMaskSGIS") == NULL) {
      return GL_kludge_error_void("glTextureColorMaskSGIS");
   }
   _glTextureColorMaskSGIS = (void (*)(GLboolean , GLboolean , GLboolean , GLboolean))getExtendedProcAddress("glTextureColorMaskSGIS");
   return _glTextureColorMaskSGIS(r , g , b , a);
}

void stub_glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform);
void (* _glTrackMatrixNV)(GLenum target, GLuint address, GLenum matrix, GLenum transform) = &stub_glTrackMatrixNV;
void stub_glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform) {
   if (getExtendedProcAddress("glTrackMatrixNV") == NULL) {
      return GL_kludge_error_void("glTrackMatrixNV");
   }
   _glTrackMatrixNV = (void (*)(GLenum , GLuint , GLenum , GLenum))getExtendedProcAddress("glTrackMatrixNV");
   return _glTrackMatrixNV(target , address , matrix , transform);
}

void stub_glUnlockArraysEXT(void);
void (* _glUnlockArraysEXT)(void) = &stub_glUnlockArraysEXT;
void stub_glUnlockArraysEXT(void) {
   if (getExtendedProcAddress("glUnlockArraysEXT") == NULL) {
      return GL_kludge_error_void("glUnlockArraysEXT");
   }
   _glUnlockArraysEXT = (void (*)())getExtendedProcAddress("glUnlockArraysEXT");
   return _glUnlockArraysEXT();
}

GLboolean stub_glValidBackBufferHintAutodesk(GLint x, GLint y, GLsizei width, GLsizei height);
GLboolean (* _glValidBackBufferHintAutodesk)(GLint x, GLint y, GLsizei width, GLsizei height) = &stub_glValidBackBufferHintAutodesk;
GLboolean stub_glValidBackBufferHintAutodesk(GLint x, GLint y, GLsizei width, GLsizei height) {
   if (getExtendedProcAddress("glValidBackBufferHintAutodesk") == NULL) {
      return GL_kludge_error_GLboolean("glValidBackBufferHintAutodesk");
   }
   _glValidBackBufferHintAutodesk = (GLboolean (*)(GLint , GLint , GLsizei , GLsizei))getExtendedProcAddress("glValidBackBufferHintAutodesk");
   return _glValidBackBufferHintAutodesk(x , y , width , height);
}

void stub_glVertexArrayRangeNV(GLsizei size, const GLvoid *pointer);
void (* _glVertexArrayRangeNV)(GLsizei size, const GLvoid *pointer) = &stub_glVertexArrayRangeNV;
void stub_glVertexArrayRangeNV(GLsizei size, const GLvoid *pointer) {
   if (getExtendedProcAddress("glVertexArrayRangeNV") == NULL) {
      return GL_kludge_error_void("glVertexArrayRangeNV");
   }
   _glVertexArrayRangeNV = (void (*)(GLsizei , const GLvoid *))getExtendedProcAddress("glVertexArrayRangeNV");
   return _glVertexArrayRangeNV(size , pointer);
}

void stub_glVertexAttrib1dARB(GLuint index, GLdouble x);
void (* _glVertexAttrib1dARB)(GLuint index, GLdouble x) = &stub_glVertexAttrib1dARB;
void stub_glVertexAttrib1dARB(GLuint index, GLdouble x) {
   if (getExtendedProcAddress("glVertexAttrib1dARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib1dARB");
   }
   _glVertexAttrib1dARB = (void (*)(GLuint , GLdouble))getExtendedProcAddress("glVertexAttrib1dARB");
   return _glVertexAttrib1dARB(index , x);
}

void stub_glVertexAttrib1dNV(GLuint index, GLdouble x);
void (* _glVertexAttrib1dNV)(GLuint index, GLdouble x) = &stub_glVertexAttrib1dNV;
void stub_glVertexAttrib1dNV(GLuint index, GLdouble x) {
   if (getExtendedProcAddress("glVertexAttrib1dNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib1dNV");
   }
   _glVertexAttrib1dNV = (void (*)(GLuint , GLdouble))getExtendedProcAddress("glVertexAttrib1dNV");
   return _glVertexAttrib1dNV(index , x);
}

void stub_glVertexAttrib1dvARB(GLuint index, const GLdouble *v);
void (* _glVertexAttrib1dvARB)(GLuint index, const GLdouble *v) = &stub_glVertexAttrib1dvARB;
void stub_glVertexAttrib1dvARB(GLuint index, const GLdouble *v) {
   if (getExtendedProcAddress("glVertexAttrib1dvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib1dvARB");
   }
   _glVertexAttrib1dvARB = (void (*)(GLuint , const GLdouble *))getExtendedProcAddress("glVertexAttrib1dvARB");
   return _glVertexAttrib1dvARB(index , v);
}

void stub_glVertexAttrib1dvNV(GLuint index, const GLdouble *v);
void (* _glVertexAttrib1dvNV)(GLuint index, const GLdouble *v) = &stub_glVertexAttrib1dvNV;
void stub_glVertexAttrib1dvNV(GLuint index, const GLdouble *v) {
   if (getExtendedProcAddress("glVertexAttrib1dvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib1dvNV");
   }
   _glVertexAttrib1dvNV = (void (*)(GLuint , const GLdouble *))getExtendedProcAddress("glVertexAttrib1dvNV");
   return _glVertexAttrib1dvNV(index , v);
}

void stub_glVertexAttrib1fARB(GLuint index, GLfloat x);
void (* _glVertexAttrib1fARB)(GLuint index, GLfloat x) = &stub_glVertexAttrib1fARB;
void stub_glVertexAttrib1fARB(GLuint index, GLfloat x) {
   if (getExtendedProcAddress("glVertexAttrib1fARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib1fARB");
   }
   _glVertexAttrib1fARB = (void (*)(GLuint , GLfloat))getExtendedProcAddress("glVertexAttrib1fARB");
   return _glVertexAttrib1fARB(index , x);
}

void stub_glVertexAttrib1fNV(GLuint index, GLfloat x);
void (* _glVertexAttrib1fNV)(GLuint index, GLfloat x) = &stub_glVertexAttrib1fNV;
void stub_glVertexAttrib1fNV(GLuint index, GLfloat x) {
   if (getExtendedProcAddress("glVertexAttrib1fNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib1fNV");
   }
   _glVertexAttrib1fNV = (void (*)(GLuint , GLfloat))getExtendedProcAddress("glVertexAttrib1fNV");
   return _glVertexAttrib1fNV(index , x);
}

void stub_glVertexAttrib1fvARB(GLuint index, const GLfloat *v);
void (* _glVertexAttrib1fvARB)(GLuint index, const GLfloat *v) = &stub_glVertexAttrib1fvARB;
void stub_glVertexAttrib1fvARB(GLuint index, const GLfloat *v) {
   if (getExtendedProcAddress("glVertexAttrib1fvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib1fvARB");
   }
   _glVertexAttrib1fvARB = (void (*)(GLuint , const GLfloat *))getExtendedProcAddress("glVertexAttrib1fvARB");
   return _glVertexAttrib1fvARB(index , v);
}

void stub_glVertexAttrib1fvNV(GLuint index, const GLfloat *v);
void (* _glVertexAttrib1fvNV)(GLuint index, const GLfloat *v) = &stub_glVertexAttrib1fvNV;
void stub_glVertexAttrib1fvNV(GLuint index, const GLfloat *v) {
   if (getExtendedProcAddress("glVertexAttrib1fvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib1fvNV");
   }
   _glVertexAttrib1fvNV = (void (*)(GLuint , const GLfloat *))getExtendedProcAddress("glVertexAttrib1fvNV");
   return _glVertexAttrib1fvNV(index , v);
}

void stub_glVertexAttrib1sARB(GLuint index, GLshort x);
void (* _glVertexAttrib1sARB)(GLuint index, GLshort x) = &stub_glVertexAttrib1sARB;
void stub_glVertexAttrib1sARB(GLuint index, GLshort x) {
   if (getExtendedProcAddress("glVertexAttrib1sARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib1sARB");
   }
   _glVertexAttrib1sARB = (void (*)(GLuint , GLshort))getExtendedProcAddress("glVertexAttrib1sARB");
   return _glVertexAttrib1sARB(index , x);
}

void stub_glVertexAttrib1sNV(GLuint index, GLshort x);
void (* _glVertexAttrib1sNV)(GLuint index, GLshort x) = &stub_glVertexAttrib1sNV;
void stub_glVertexAttrib1sNV(GLuint index, GLshort x) {
   if (getExtendedProcAddress("glVertexAttrib1sNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib1sNV");
   }
   _glVertexAttrib1sNV = (void (*)(GLuint , GLshort))getExtendedProcAddress("glVertexAttrib1sNV");
   return _glVertexAttrib1sNV(index , x);
}

void stub_glVertexAttrib1svARB(GLuint index, const GLshort *v);
void (* _glVertexAttrib1svARB)(GLuint index, const GLshort *v) = &stub_glVertexAttrib1svARB;
void stub_glVertexAttrib1svARB(GLuint index, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttrib1svARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib1svARB");
   }
   _glVertexAttrib1svARB = (void (*)(GLuint , const GLshort *))getExtendedProcAddress("glVertexAttrib1svARB");
   return _glVertexAttrib1svARB(index , v);
}

void stub_glVertexAttrib1svNV(GLuint index, const GLshort *v);
void (* _glVertexAttrib1svNV)(GLuint index, const GLshort *v) = &stub_glVertexAttrib1svNV;
void stub_glVertexAttrib1svNV(GLuint index, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttrib1svNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib1svNV");
   }
   _glVertexAttrib1svNV = (void (*)(GLuint , const GLshort *))getExtendedProcAddress("glVertexAttrib1svNV");
   return _glVertexAttrib1svNV(index , v);
}

void stub_glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y);
void (* _glVertexAttrib2dARB)(GLuint index, GLdouble x, GLdouble y) = &stub_glVertexAttrib2dARB;
void stub_glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y) {
   if (getExtendedProcAddress("glVertexAttrib2dARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib2dARB");
   }
   _glVertexAttrib2dARB = (void (*)(GLuint , GLdouble , GLdouble))getExtendedProcAddress("glVertexAttrib2dARB");
   return _glVertexAttrib2dARB(index , x , y);
}

void stub_glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y);
void (* _glVertexAttrib2dNV)(GLuint index, GLdouble x, GLdouble y) = &stub_glVertexAttrib2dNV;
void stub_glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y) {
   if (getExtendedProcAddress("glVertexAttrib2dNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib2dNV");
   }
   _glVertexAttrib2dNV = (void (*)(GLuint , GLdouble , GLdouble))getExtendedProcAddress("glVertexAttrib2dNV");
   return _glVertexAttrib2dNV(index , x , y);
}

void stub_glVertexAttrib2dvARB(GLuint index, const GLdouble *v);
void (* _glVertexAttrib2dvARB)(GLuint index, const GLdouble *v) = &stub_glVertexAttrib2dvARB;
void stub_glVertexAttrib2dvARB(GLuint index, const GLdouble *v) {
   if (getExtendedProcAddress("glVertexAttrib2dvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib2dvARB");
   }
   _glVertexAttrib2dvARB = (void (*)(GLuint , const GLdouble *))getExtendedProcAddress("glVertexAttrib2dvARB");
   return _glVertexAttrib2dvARB(index , v);
}

void stub_glVertexAttrib2dvNV(GLuint index, const GLdouble *v);
void (* _glVertexAttrib2dvNV)(GLuint index, const GLdouble *v) = &stub_glVertexAttrib2dvNV;
void stub_glVertexAttrib2dvNV(GLuint index, const GLdouble *v) {
   if (getExtendedProcAddress("glVertexAttrib2dvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib2dvNV");
   }
   _glVertexAttrib2dvNV = (void (*)(GLuint , const GLdouble *))getExtendedProcAddress("glVertexAttrib2dvNV");
   return _glVertexAttrib2dvNV(index , v);
}

void stub_glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y);
void (* _glVertexAttrib2fARB)(GLuint index, GLfloat x, GLfloat y) = &stub_glVertexAttrib2fARB;
void stub_glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y) {
   if (getExtendedProcAddress("glVertexAttrib2fARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib2fARB");
   }
   _glVertexAttrib2fARB = (void (*)(GLuint , GLfloat , GLfloat))getExtendedProcAddress("glVertexAttrib2fARB");
   return _glVertexAttrib2fARB(index , x , y);
}

void stub_glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y);
void (* _glVertexAttrib2fNV)(GLuint index, GLfloat x, GLfloat y) = &stub_glVertexAttrib2fNV;
void stub_glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y) {
   if (getExtendedProcAddress("glVertexAttrib2fNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib2fNV");
   }
   _glVertexAttrib2fNV = (void (*)(GLuint , GLfloat , GLfloat))getExtendedProcAddress("glVertexAttrib2fNV");
   return _glVertexAttrib2fNV(index , x , y);
}

void stub_glVertexAttrib2fvARB(GLuint index, const GLfloat *v);
void (* _glVertexAttrib2fvARB)(GLuint index, const GLfloat *v) = &stub_glVertexAttrib2fvARB;
void stub_glVertexAttrib2fvARB(GLuint index, const GLfloat *v) {
   if (getExtendedProcAddress("glVertexAttrib2fvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib2fvARB");
   }
   _glVertexAttrib2fvARB = (void (*)(GLuint , const GLfloat *))getExtendedProcAddress("glVertexAttrib2fvARB");
   return _glVertexAttrib2fvARB(index , v);
}

void stub_glVertexAttrib2fvNV(GLuint index, const GLfloat *v);
void (* _glVertexAttrib2fvNV)(GLuint index, const GLfloat *v) = &stub_glVertexAttrib2fvNV;
void stub_glVertexAttrib2fvNV(GLuint index, const GLfloat *v) {
   if (getExtendedProcAddress("glVertexAttrib2fvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib2fvNV");
   }
   _glVertexAttrib2fvNV = (void (*)(GLuint , const GLfloat *))getExtendedProcAddress("glVertexAttrib2fvNV");
   return _glVertexAttrib2fvNV(index , v);
}

void stub_glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y);
void (* _glVertexAttrib2sARB)(GLuint index, GLshort x, GLshort y) = &stub_glVertexAttrib2sARB;
void stub_glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y) {
   if (getExtendedProcAddress("glVertexAttrib2sARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib2sARB");
   }
   _glVertexAttrib2sARB = (void (*)(GLuint , GLshort , GLshort))getExtendedProcAddress("glVertexAttrib2sARB");
   return _glVertexAttrib2sARB(index , x , y);
}

void stub_glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y);
void (* _glVertexAttrib2sNV)(GLuint index, GLshort x, GLshort y) = &stub_glVertexAttrib2sNV;
void stub_glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y) {
   if (getExtendedProcAddress("glVertexAttrib2sNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib2sNV");
   }
   _glVertexAttrib2sNV = (void (*)(GLuint , GLshort , GLshort))getExtendedProcAddress("glVertexAttrib2sNV");
   return _glVertexAttrib2sNV(index , x , y);
}

void stub_glVertexAttrib2svARB(GLuint index, const GLshort *v);
void (* _glVertexAttrib2svARB)(GLuint index, const GLshort *v) = &stub_glVertexAttrib2svARB;
void stub_glVertexAttrib2svARB(GLuint index, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttrib2svARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib2svARB");
   }
   _glVertexAttrib2svARB = (void (*)(GLuint , const GLshort *))getExtendedProcAddress("glVertexAttrib2svARB");
   return _glVertexAttrib2svARB(index , v);
}

void stub_glVertexAttrib2svNV(GLuint index, const GLshort *v);
void (* _glVertexAttrib2svNV)(GLuint index, const GLshort *v) = &stub_glVertexAttrib2svNV;
void stub_glVertexAttrib2svNV(GLuint index, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttrib2svNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib2svNV");
   }
   _glVertexAttrib2svNV = (void (*)(GLuint , const GLshort *))getExtendedProcAddress("glVertexAttrib2svNV");
   return _glVertexAttrib2svNV(index , v);
}

void stub_glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z);
void (* _glVertexAttrib3dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z) = &stub_glVertexAttrib3dARB;
void stub_glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z) {
   if (getExtendedProcAddress("glVertexAttrib3dARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib3dARB");
   }
   _glVertexAttrib3dARB = (void (*)(GLuint , GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glVertexAttrib3dARB");
   return _glVertexAttrib3dARB(index , x , y , z);
}

void stub_glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z);
void (* _glVertexAttrib3dNV)(GLuint index, GLdouble x, GLdouble y, GLdouble z) = &stub_glVertexAttrib3dNV;
void stub_glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z) {
   if (getExtendedProcAddress("glVertexAttrib3dNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib3dNV");
   }
   _glVertexAttrib3dNV = (void (*)(GLuint , GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glVertexAttrib3dNV");
   return _glVertexAttrib3dNV(index , x , y , z);
}

void stub_glVertexAttrib3dvARB(GLuint index, const GLdouble *v);
void (* _glVertexAttrib3dvARB)(GLuint index, const GLdouble *v) = &stub_glVertexAttrib3dvARB;
void stub_glVertexAttrib3dvARB(GLuint index, const GLdouble *v) {
   if (getExtendedProcAddress("glVertexAttrib3dvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib3dvARB");
   }
   _glVertexAttrib3dvARB = (void (*)(GLuint , const GLdouble *))getExtendedProcAddress("glVertexAttrib3dvARB");
   return _glVertexAttrib3dvARB(index , v);
}

void stub_glVertexAttrib3dvNV(GLuint index, const GLdouble *v);
void (* _glVertexAttrib3dvNV)(GLuint index, const GLdouble *v) = &stub_glVertexAttrib3dvNV;
void stub_glVertexAttrib3dvNV(GLuint index, const GLdouble *v) {
   if (getExtendedProcAddress("glVertexAttrib3dvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib3dvNV");
   }
   _glVertexAttrib3dvNV = (void (*)(GLuint , const GLdouble *))getExtendedProcAddress("glVertexAttrib3dvNV");
   return _glVertexAttrib3dvNV(index , v);
}

void stub_glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z);
void (* _glVertexAttrib3fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z) = &stub_glVertexAttrib3fARB;
void stub_glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z) {
   if (getExtendedProcAddress("glVertexAttrib3fARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib3fARB");
   }
   _glVertexAttrib3fARB = (void (*)(GLuint , GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glVertexAttrib3fARB");
   return _glVertexAttrib3fARB(index , x , y , z);
}

void stub_glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z);
void (* _glVertexAttrib3fNV)(GLuint index, GLfloat x, GLfloat y, GLfloat z) = &stub_glVertexAttrib3fNV;
void stub_glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z) {
   if (getExtendedProcAddress("glVertexAttrib3fNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib3fNV");
   }
   _glVertexAttrib3fNV = (void (*)(GLuint , GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glVertexAttrib3fNV");
   return _glVertexAttrib3fNV(index , x , y , z);
}

void stub_glVertexAttrib3fvARB(GLuint index, const GLfloat *v);
void (* _glVertexAttrib3fvARB)(GLuint index, const GLfloat *v) = &stub_glVertexAttrib3fvARB;
void stub_glVertexAttrib3fvARB(GLuint index, const GLfloat *v) {
   if (getExtendedProcAddress("glVertexAttrib3fvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib3fvARB");
   }
   _glVertexAttrib3fvARB = (void (*)(GLuint , const GLfloat *))getExtendedProcAddress("glVertexAttrib3fvARB");
   return _glVertexAttrib3fvARB(index , v);
}

void stub_glVertexAttrib3fvNV(GLuint index, const GLfloat *v);
void (* _glVertexAttrib3fvNV)(GLuint index, const GLfloat *v) = &stub_glVertexAttrib3fvNV;
void stub_glVertexAttrib3fvNV(GLuint index, const GLfloat *v) {
   if (getExtendedProcAddress("glVertexAttrib3fvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib3fvNV");
   }
   _glVertexAttrib3fvNV = (void (*)(GLuint , const GLfloat *))getExtendedProcAddress("glVertexAttrib3fvNV");
   return _glVertexAttrib3fvNV(index , v);
}

void stub_glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z);
void (* _glVertexAttrib3sARB)(GLuint index, GLshort x, GLshort y, GLshort z) = &stub_glVertexAttrib3sARB;
void stub_glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z) {
   if (getExtendedProcAddress("glVertexAttrib3sARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib3sARB");
   }
   _glVertexAttrib3sARB = (void (*)(GLuint , GLshort , GLshort , GLshort))getExtendedProcAddress("glVertexAttrib3sARB");
   return _glVertexAttrib3sARB(index , x , y , z);
}

void stub_glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z);
void (* _glVertexAttrib3sNV)(GLuint index, GLshort x, GLshort y, GLshort z) = &stub_glVertexAttrib3sNV;
void stub_glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z) {
   if (getExtendedProcAddress("glVertexAttrib3sNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib3sNV");
   }
   _glVertexAttrib3sNV = (void (*)(GLuint , GLshort , GLshort , GLshort))getExtendedProcAddress("glVertexAttrib3sNV");
   return _glVertexAttrib3sNV(index , x , y , z);
}

void stub_glVertexAttrib3svARB(GLuint index, const GLshort *v);
void (* _glVertexAttrib3svARB)(GLuint index, const GLshort *v) = &stub_glVertexAttrib3svARB;
void stub_glVertexAttrib3svARB(GLuint index, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttrib3svARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib3svARB");
   }
   _glVertexAttrib3svARB = (void (*)(GLuint , const GLshort *))getExtendedProcAddress("glVertexAttrib3svARB");
   return _glVertexAttrib3svARB(index , v);
}

void stub_glVertexAttrib3svNV(GLuint index, const GLshort *v);
void (* _glVertexAttrib3svNV)(GLuint index, const GLshort *v) = &stub_glVertexAttrib3svNV;
void stub_glVertexAttrib3svNV(GLuint index, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttrib3svNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib3svNV");
   }
   _glVertexAttrib3svNV = (void (*)(GLuint , const GLshort *))getExtendedProcAddress("glVertexAttrib3svNV");
   return _glVertexAttrib3svNV(index , v);
}

void stub_glVertexAttrib4NbvARB(GLuint index, const GLbyte *v);
void (* _glVertexAttrib4NbvARB)(GLuint index, const GLbyte *v) = &stub_glVertexAttrib4NbvARB;
void stub_glVertexAttrib4NbvARB(GLuint index, const GLbyte *v) {
   if (getExtendedProcAddress("glVertexAttrib4NbvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4NbvARB");
   }
   _glVertexAttrib4NbvARB = (void (*)(GLuint , const GLbyte *))getExtendedProcAddress("glVertexAttrib4NbvARB");
   return _glVertexAttrib4NbvARB(index , v);
}

void stub_glVertexAttrib4NivARB(GLuint index, const GLint *v);
void (* _glVertexAttrib4NivARB)(GLuint index, const GLint *v) = &stub_glVertexAttrib4NivARB;
void stub_glVertexAttrib4NivARB(GLuint index, const GLint *v) {
   if (getExtendedProcAddress("glVertexAttrib4NivARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4NivARB");
   }
   _glVertexAttrib4NivARB = (void (*)(GLuint , const GLint *))getExtendedProcAddress("glVertexAttrib4NivARB");
   return _glVertexAttrib4NivARB(index , v);
}

void stub_glVertexAttrib4NsvARB(GLuint index, const GLshort *v);
void (* _glVertexAttrib4NsvARB)(GLuint index, const GLshort *v) = &stub_glVertexAttrib4NsvARB;
void stub_glVertexAttrib4NsvARB(GLuint index, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttrib4NsvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4NsvARB");
   }
   _glVertexAttrib4NsvARB = (void (*)(GLuint , const GLshort *))getExtendedProcAddress("glVertexAttrib4NsvARB");
   return _glVertexAttrib4NsvARB(index , v);
}

void stub_glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
void (* _glVertexAttrib4NubARB)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) = &stub_glVertexAttrib4NubARB;
void stub_glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) {
   if (getExtendedProcAddress("glVertexAttrib4NubARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4NubARB");
   }
   _glVertexAttrib4NubARB = (void (*)(GLuint , GLubyte , GLubyte , GLubyte , GLubyte))getExtendedProcAddress("glVertexAttrib4NubARB");
   return _glVertexAttrib4NubARB(index , x , y , z , w);
}

void stub_glVertexAttrib4NubvARB(GLuint index, const GLubyte *v);
void (* _glVertexAttrib4NubvARB)(GLuint index, const GLubyte *v) = &stub_glVertexAttrib4NubvARB;
void stub_glVertexAttrib4NubvARB(GLuint index, const GLubyte *v) {
   if (getExtendedProcAddress("glVertexAttrib4NubvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4NubvARB");
   }
   _glVertexAttrib4NubvARB = (void (*)(GLuint , const GLubyte *))getExtendedProcAddress("glVertexAttrib4NubvARB");
   return _glVertexAttrib4NubvARB(index , v);
}

void stub_glVertexAttrib4NuivARB(GLuint index, const GLuint *v);
void (* _glVertexAttrib4NuivARB)(GLuint index, const GLuint *v) = &stub_glVertexAttrib4NuivARB;
void stub_glVertexAttrib4NuivARB(GLuint index, const GLuint *v) {
   if (getExtendedProcAddress("glVertexAttrib4NuivARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4NuivARB");
   }
   _glVertexAttrib4NuivARB = (void (*)(GLuint , const GLuint *))getExtendedProcAddress("glVertexAttrib4NuivARB");
   return _glVertexAttrib4NuivARB(index , v);
}

void stub_glVertexAttrib4NusvARB(GLuint index, const GLushort *v);
void (* _glVertexAttrib4NusvARB)(GLuint index, const GLushort *v) = &stub_glVertexAttrib4NusvARB;
void stub_glVertexAttrib4NusvARB(GLuint index, const GLushort *v) {
   if (getExtendedProcAddress("glVertexAttrib4NusvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4NusvARB");
   }
   _glVertexAttrib4NusvARB = (void (*)(GLuint , const GLushort *))getExtendedProcAddress("glVertexAttrib4NusvARB");
   return _glVertexAttrib4NusvARB(index , v);
}

void stub_glVertexAttrib4bvARB(GLuint index, const GLbyte *v);
void (* _glVertexAttrib4bvARB)(GLuint index, const GLbyte *v) = &stub_glVertexAttrib4bvARB;
void stub_glVertexAttrib4bvARB(GLuint index, const GLbyte *v) {
   if (getExtendedProcAddress("glVertexAttrib4bvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4bvARB");
   }
   _glVertexAttrib4bvARB = (void (*)(GLuint , const GLbyte *))getExtendedProcAddress("glVertexAttrib4bvARB");
   return _glVertexAttrib4bvARB(index , v);
}

void stub_glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void (* _glVertexAttrib4dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = &stub_glVertexAttrib4dARB;
void stub_glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
   if (getExtendedProcAddress("glVertexAttrib4dARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4dARB");
   }
   _glVertexAttrib4dARB = (void (*)(GLuint , GLdouble , GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glVertexAttrib4dARB");
   return _glVertexAttrib4dARB(index , x , y , z , w);
}

void stub_glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void (* _glVertexAttrib4dNV)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = &stub_glVertexAttrib4dNV;
void stub_glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
   if (getExtendedProcAddress("glVertexAttrib4dNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4dNV");
   }
   _glVertexAttrib4dNV = (void (*)(GLuint , GLdouble , GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glVertexAttrib4dNV");
   return _glVertexAttrib4dNV(index , x , y , z , w);
}

void stub_glVertexAttrib4dvARB(GLuint index, const GLdouble *v);
void (* _glVertexAttrib4dvARB)(GLuint index, const GLdouble *v) = &stub_glVertexAttrib4dvARB;
void stub_glVertexAttrib4dvARB(GLuint index, const GLdouble *v) {
   if (getExtendedProcAddress("glVertexAttrib4dvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4dvARB");
   }
   _glVertexAttrib4dvARB = (void (*)(GLuint , const GLdouble *))getExtendedProcAddress("glVertexAttrib4dvARB");
   return _glVertexAttrib4dvARB(index , v);
}

void stub_glVertexAttrib4dvNV(GLuint index, const GLdouble *v);
void (* _glVertexAttrib4dvNV)(GLuint index, const GLdouble *v) = &stub_glVertexAttrib4dvNV;
void stub_glVertexAttrib4dvNV(GLuint index, const GLdouble *v) {
   if (getExtendedProcAddress("glVertexAttrib4dvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4dvNV");
   }
   _glVertexAttrib4dvNV = (void (*)(GLuint , const GLdouble *))getExtendedProcAddress("glVertexAttrib4dvNV");
   return _glVertexAttrib4dvNV(index , v);
}

void stub_glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (* _glVertexAttrib4fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = &stub_glVertexAttrib4fARB;
void stub_glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
   if (getExtendedProcAddress("glVertexAttrib4fARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4fARB");
   }
   _glVertexAttrib4fARB = (void (*)(GLuint , GLfloat , GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glVertexAttrib4fARB");
   return _glVertexAttrib4fARB(index , x , y , z , w);
}

void stub_glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (* _glVertexAttrib4fNV)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = &stub_glVertexAttrib4fNV;
void stub_glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
   if (getExtendedProcAddress("glVertexAttrib4fNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4fNV");
   }
   _glVertexAttrib4fNV = (void (*)(GLuint , GLfloat , GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glVertexAttrib4fNV");
   return _glVertexAttrib4fNV(index , x , y , z , w);
}

void stub_glVertexAttrib4fvARB(GLuint index, const GLfloat *v);
void (* _glVertexAttrib4fvARB)(GLuint index, const GLfloat *v) = &stub_glVertexAttrib4fvARB;
void stub_glVertexAttrib4fvARB(GLuint index, const GLfloat *v) {
   if (getExtendedProcAddress("glVertexAttrib4fvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4fvARB");
   }
   _glVertexAttrib4fvARB = (void (*)(GLuint , const GLfloat *))getExtendedProcAddress("glVertexAttrib4fvARB");
   return _glVertexAttrib4fvARB(index , v);
}

void stub_glVertexAttrib4fvNV(GLuint index, const GLfloat *v);
void (* _glVertexAttrib4fvNV)(GLuint index, const GLfloat *v) = &stub_glVertexAttrib4fvNV;
void stub_glVertexAttrib4fvNV(GLuint index, const GLfloat *v) {
   if (getExtendedProcAddress("glVertexAttrib4fvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4fvNV");
   }
   _glVertexAttrib4fvNV = (void (*)(GLuint , const GLfloat *))getExtendedProcAddress("glVertexAttrib4fvNV");
   return _glVertexAttrib4fvNV(index , v);
}

void stub_glVertexAttrib4ivARB(GLuint index, const GLint *v);
void (* _glVertexAttrib4ivARB)(GLuint index, const GLint *v) = &stub_glVertexAttrib4ivARB;
void stub_glVertexAttrib4ivARB(GLuint index, const GLint *v) {
   if (getExtendedProcAddress("glVertexAttrib4ivARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4ivARB");
   }
   _glVertexAttrib4ivARB = (void (*)(GLuint , const GLint *))getExtendedProcAddress("glVertexAttrib4ivARB");
   return _glVertexAttrib4ivARB(index , v);
}

void stub_glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
void (* _glVertexAttrib4sARB)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) = &stub_glVertexAttrib4sARB;
void stub_glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) {
   if (getExtendedProcAddress("glVertexAttrib4sARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4sARB");
   }
   _glVertexAttrib4sARB = (void (*)(GLuint , GLshort , GLshort , GLshort , GLshort))getExtendedProcAddress("glVertexAttrib4sARB");
   return _glVertexAttrib4sARB(index , x , y , z , w);
}

void stub_glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
void (* _glVertexAttrib4sNV)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) = &stub_glVertexAttrib4sNV;
void stub_glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) {
   if (getExtendedProcAddress("glVertexAttrib4sNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4sNV");
   }
   _glVertexAttrib4sNV = (void (*)(GLuint , GLshort , GLshort , GLshort , GLshort))getExtendedProcAddress("glVertexAttrib4sNV");
   return _glVertexAttrib4sNV(index , x , y , z , w);
}

void stub_glVertexAttrib4svARB(GLuint index, const GLshort *v);
void (* _glVertexAttrib4svARB)(GLuint index, const GLshort *v) = &stub_glVertexAttrib4svARB;
void stub_glVertexAttrib4svARB(GLuint index, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttrib4svARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4svARB");
   }
   _glVertexAttrib4svARB = (void (*)(GLuint , const GLshort *))getExtendedProcAddress("glVertexAttrib4svARB");
   return _glVertexAttrib4svARB(index , v);
}

void stub_glVertexAttrib4svNV(GLuint index, const GLshort *v);
void (* _glVertexAttrib4svNV)(GLuint index, const GLshort *v) = &stub_glVertexAttrib4svNV;
void stub_glVertexAttrib4svNV(GLuint index, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttrib4svNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4svNV");
   }
   _glVertexAttrib4svNV = (void (*)(GLuint , const GLshort *))getExtendedProcAddress("glVertexAttrib4svNV");
   return _glVertexAttrib4svNV(index , v);
}

void stub_glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
void (* _glVertexAttrib4ubNV)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) = &stub_glVertexAttrib4ubNV;
void stub_glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) {
   if (getExtendedProcAddress("glVertexAttrib4ubNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4ubNV");
   }
   _glVertexAttrib4ubNV = (void (*)(GLuint , GLubyte , GLubyte , GLubyte , GLubyte))getExtendedProcAddress("glVertexAttrib4ubNV");
   return _glVertexAttrib4ubNV(index , x , y , z , w);
}

void stub_glVertexAttrib4ubvARB(GLuint index, const GLubyte *v);
void (* _glVertexAttrib4ubvARB)(GLuint index, const GLubyte *v) = &stub_glVertexAttrib4ubvARB;
void stub_glVertexAttrib4ubvARB(GLuint index, const GLubyte *v) {
   if (getExtendedProcAddress("glVertexAttrib4ubvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4ubvARB");
   }
   _glVertexAttrib4ubvARB = (void (*)(GLuint , const GLubyte *))getExtendedProcAddress("glVertexAttrib4ubvARB");
   return _glVertexAttrib4ubvARB(index , v);
}

void stub_glVertexAttrib4ubvNV(GLuint index, const GLubyte *v);
void (* _glVertexAttrib4ubvNV)(GLuint index, const GLubyte *v) = &stub_glVertexAttrib4ubvNV;
void stub_glVertexAttrib4ubvNV(GLuint index, const GLubyte *v) {
   if (getExtendedProcAddress("glVertexAttrib4ubvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4ubvNV");
   }
   _glVertexAttrib4ubvNV = (void (*)(GLuint , const GLubyte *))getExtendedProcAddress("glVertexAttrib4ubvNV");
   return _glVertexAttrib4ubvNV(index , v);
}

void stub_glVertexAttrib4uivARB(GLuint index, const GLuint *v);
void (* _glVertexAttrib4uivARB)(GLuint index, const GLuint *v) = &stub_glVertexAttrib4uivARB;
void stub_glVertexAttrib4uivARB(GLuint index, const GLuint *v) {
   if (getExtendedProcAddress("glVertexAttrib4uivARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4uivARB");
   }
   _glVertexAttrib4uivARB = (void (*)(GLuint , const GLuint *))getExtendedProcAddress("glVertexAttrib4uivARB");
   return _glVertexAttrib4uivARB(index , v);
}

void stub_glVertexAttrib4usvARB(GLuint index, const GLushort *v);
void (* _glVertexAttrib4usvARB)(GLuint index, const GLushort *v) = &stub_glVertexAttrib4usvARB;
void stub_glVertexAttrib4usvARB(GLuint index, const GLushort *v) {
   if (getExtendedProcAddress("glVertexAttrib4usvARB") == NULL) {
      return GL_kludge_error_void("glVertexAttrib4usvARB");
   }
   _glVertexAttrib4usvARB = (void (*)(GLuint , const GLushort *))getExtendedProcAddress("glVertexAttrib4usvARB");
   return _glVertexAttrib4usvARB(index , v);
}

void stub_glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);
void (* _glVertexAttribPointerARB)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer) = &stub_glVertexAttribPointerARB;
void stub_glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer) {
   if (getExtendedProcAddress("glVertexAttribPointerARB") == NULL) {
      return GL_kludge_error_void("glVertexAttribPointerARB");
   }
   _glVertexAttribPointerARB = (void (*)(GLuint , GLint , GLenum , GLboolean , GLsizei , const GLvoid *))getExtendedProcAddress("glVertexAttribPointerARB");
   return _glVertexAttribPointerARB(index , size , type , normalized , stride , pointer);
}

void stub_glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer);
void (* _glVertexAttribPointerNV)(GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer) = &stub_glVertexAttribPointerNV;
void stub_glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer) {
   if (getExtendedProcAddress("glVertexAttribPointerNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribPointerNV");
   }
   _glVertexAttribPointerNV = (void (*)(GLuint , GLint , GLenum , GLsizei , const GLvoid *))getExtendedProcAddress("glVertexAttribPointerNV");
   return _glVertexAttribPointerNV(index , fsize , type , stride , pointer);
}

void stub_glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble *v);
void (* _glVertexAttribs1dvNV)(GLuint index, GLsizei count, const GLdouble *v) = &stub_glVertexAttribs1dvNV;
void stub_glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble *v) {
   if (getExtendedProcAddress("glVertexAttribs1dvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs1dvNV");
   }
   _glVertexAttribs1dvNV = (void (*)(GLuint , GLsizei , const GLdouble *))getExtendedProcAddress("glVertexAttribs1dvNV");
   return _glVertexAttribs1dvNV(index , count , v);
}

void stub_glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat *v);
void (* _glVertexAttribs1fvNV)(GLuint index, GLsizei count, const GLfloat *v) = &stub_glVertexAttribs1fvNV;
void stub_glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat *v) {
   if (getExtendedProcAddress("glVertexAttribs1fvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs1fvNV");
   }
   _glVertexAttribs1fvNV = (void (*)(GLuint , GLsizei , const GLfloat *))getExtendedProcAddress("glVertexAttribs1fvNV");
   return _glVertexAttribs1fvNV(index , count , v);
}

void stub_glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort *v);
void (* _glVertexAttribs1svNV)(GLuint index, GLsizei count, const GLshort *v) = &stub_glVertexAttribs1svNV;
void stub_glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttribs1svNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs1svNV");
   }
   _glVertexAttribs1svNV = (void (*)(GLuint , GLsizei , const GLshort *))getExtendedProcAddress("glVertexAttribs1svNV");
   return _glVertexAttribs1svNV(index , count , v);
}

void stub_glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble *v);
void (* _glVertexAttribs2dvNV)(GLuint index, GLsizei count, const GLdouble *v) = &stub_glVertexAttribs2dvNV;
void stub_glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble *v) {
   if (getExtendedProcAddress("glVertexAttribs2dvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs2dvNV");
   }
   _glVertexAttribs2dvNV = (void (*)(GLuint , GLsizei , const GLdouble *))getExtendedProcAddress("glVertexAttribs2dvNV");
   return _glVertexAttribs2dvNV(index , count , v);
}

void stub_glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat *v);
void (* _glVertexAttribs2fvNV)(GLuint index, GLsizei count, const GLfloat *v) = &stub_glVertexAttribs2fvNV;
void stub_glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat *v) {
   if (getExtendedProcAddress("glVertexAttribs2fvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs2fvNV");
   }
   _glVertexAttribs2fvNV = (void (*)(GLuint , GLsizei , const GLfloat *))getExtendedProcAddress("glVertexAttribs2fvNV");
   return _glVertexAttribs2fvNV(index , count , v);
}

void stub_glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort *v);
void (* _glVertexAttribs2svNV)(GLuint index, GLsizei count, const GLshort *v) = &stub_glVertexAttribs2svNV;
void stub_glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttribs2svNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs2svNV");
   }
   _glVertexAttribs2svNV = (void (*)(GLuint , GLsizei , const GLshort *))getExtendedProcAddress("glVertexAttribs2svNV");
   return _glVertexAttribs2svNV(index , count , v);
}

void stub_glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble *v);
void (* _glVertexAttribs3dvNV)(GLuint index, GLsizei count, const GLdouble *v) = &stub_glVertexAttribs3dvNV;
void stub_glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble *v) {
   if (getExtendedProcAddress("glVertexAttribs3dvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs3dvNV");
   }
   _glVertexAttribs3dvNV = (void (*)(GLuint , GLsizei , const GLdouble *))getExtendedProcAddress("glVertexAttribs3dvNV");
   return _glVertexAttribs3dvNV(index , count , v);
}

void stub_glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat *v);
void (* _glVertexAttribs3fvNV)(GLuint index, GLsizei count, const GLfloat *v) = &stub_glVertexAttribs3fvNV;
void stub_glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat *v) {
   if (getExtendedProcAddress("glVertexAttribs3fvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs3fvNV");
   }
   _glVertexAttribs3fvNV = (void (*)(GLuint , GLsizei , const GLfloat *))getExtendedProcAddress("glVertexAttribs3fvNV");
   return _glVertexAttribs3fvNV(index , count , v);
}

void stub_glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort *v);
void (* _glVertexAttribs3svNV)(GLuint index, GLsizei count, const GLshort *v) = &stub_glVertexAttribs3svNV;
void stub_glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttribs3svNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs3svNV");
   }
   _glVertexAttribs3svNV = (void (*)(GLuint , GLsizei , const GLshort *))getExtendedProcAddress("glVertexAttribs3svNV");
   return _glVertexAttribs3svNV(index , count , v);
}

void stub_glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble *v);
void (* _glVertexAttribs4dvNV)(GLuint index, GLsizei count, const GLdouble *v) = &stub_glVertexAttribs4dvNV;
void stub_glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble *v) {
   if (getExtendedProcAddress("glVertexAttribs4dvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs4dvNV");
   }
   _glVertexAttribs4dvNV = (void (*)(GLuint , GLsizei , const GLdouble *))getExtendedProcAddress("glVertexAttribs4dvNV");
   return _glVertexAttribs4dvNV(index , count , v);
}

void stub_glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat *v);
void (* _glVertexAttribs4fvNV)(GLuint index, GLsizei count, const GLfloat *v) = &stub_glVertexAttribs4fvNV;
void stub_glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat *v) {
   if (getExtendedProcAddress("glVertexAttribs4fvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs4fvNV");
   }
   _glVertexAttribs4fvNV = (void (*)(GLuint , GLsizei , const GLfloat *))getExtendedProcAddress("glVertexAttribs4fvNV");
   return _glVertexAttribs4fvNV(index , count , v);
}

void stub_glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort *v);
void (* _glVertexAttribs4svNV)(GLuint index, GLsizei count, const GLshort *v) = &stub_glVertexAttribs4svNV;
void stub_glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort *v) {
   if (getExtendedProcAddress("glVertexAttribs4svNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs4svNV");
   }
   _glVertexAttribs4svNV = (void (*)(GLuint , GLsizei , const GLshort *))getExtendedProcAddress("glVertexAttribs4svNV");
   return _glVertexAttribs4svNV(index , count , v);
}

void stub_glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte *v);
void (* _glVertexAttribs4ubvNV)(GLuint index, GLsizei count, const GLubyte *v) = &stub_glVertexAttribs4ubvNV;
void stub_glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte *v) {
   if (getExtendedProcAddress("glVertexAttribs4ubvNV") == NULL) {
      return GL_kludge_error_void("glVertexAttribs4ubvNV");
   }
   _glVertexAttribs4ubvNV = (void (*)(GLuint , GLsizei , const GLubyte *))getExtendedProcAddress("glVertexAttribs4ubvNV");
   return _glVertexAttribs4ubvNV(index , count , v);
}

void stub_glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
void (* _glVertexPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) = &stub_glVertexPointerEXT;
void stub_glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) {
   if (getExtendedProcAddress("glVertexPointerEXT") == NULL) {
      return GL_kludge_error_void("glVertexPointerEXT");
   }
   _glVertexPointerEXT = (void (*)(GLint , GLenum , GLsizei , GLsizei , const GLvoid *))getExtendedProcAddress("glVertexPointerEXT");
   return _glVertexPointerEXT(size , type , stride , count , pointer);
}

void stub_glVertexWeightPointerEXT(GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer);
void (* _glVertexWeightPointerEXT)(GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer) = &stub_glVertexWeightPointerEXT;
void stub_glVertexWeightPointerEXT(GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer) {
   if (getExtendedProcAddress("glVertexWeightPointerEXT") == NULL) {
      return GL_kludge_error_void("glVertexWeightPointerEXT");
   }
   _glVertexWeightPointerEXT = (void (*)(GLsizei , GLenum , GLsizei , const GLvoid *))getExtendedProcAddress("glVertexWeightPointerEXT");
   return _glVertexWeightPointerEXT(size , type , stride , pointer);
}

void stub_glVertexWeightfEXT(GLfloat weight);
void (* _glVertexWeightfEXT)(GLfloat weight) = &stub_glVertexWeightfEXT;
void stub_glVertexWeightfEXT(GLfloat weight) {
   if (getExtendedProcAddress("glVertexWeightfEXT") == NULL) {
      return GL_kludge_error_void("glVertexWeightfEXT");
   }
   _glVertexWeightfEXT = (void (*)(GLfloat))getExtendedProcAddress("glVertexWeightfEXT");
   return _glVertexWeightfEXT(weight);
}

void stub_glVertexWeightfvEXT(const GLfloat *weight);
void (* _glVertexWeightfvEXT)(const GLfloat *weight) = &stub_glVertexWeightfvEXT;
void stub_glVertexWeightfvEXT(const GLfloat *weight) {
   if (getExtendedProcAddress("glVertexWeightfvEXT") == NULL) {
      return GL_kludge_error_void("glVertexWeightfvEXT");
   }
   _glVertexWeightfvEXT = (void (*)(const GLfloat *))getExtendedProcAddress("glVertexWeightfvEXT");
   return _glVertexWeightfvEXT(weight);
}

void stub_glWindowBackBufferHintAutodesk(void);
void (* _glWindowBackBufferHintAutodesk)(void) = &stub_glWindowBackBufferHintAutodesk;
void stub_glWindowBackBufferHintAutodesk(void) {
   if (getExtendedProcAddress("glWindowBackBufferHintAutodesk") == NULL) {
      return GL_kludge_error_void("glWindowBackBufferHintAutodesk");
   }
   _glWindowBackBufferHintAutodesk = (void (*)())getExtendedProcAddress("glWindowBackBufferHintAutodesk");
   return _glWindowBackBufferHintAutodesk();
}

void stub_glWindowPos2dARB(GLdouble x, GLdouble y);
void (* _glWindowPos2dARB)(GLdouble x, GLdouble y) = &stub_glWindowPos2dARB;
void stub_glWindowPos2dARB(GLdouble x, GLdouble y) {
   if (getExtendedProcAddress("glWindowPos2dARB") == NULL) {
      return GL_kludge_error_void("glWindowPos2dARB");
   }
   _glWindowPos2dARB = (void (*)(GLdouble , GLdouble))getExtendedProcAddress("glWindowPos2dARB");
   return _glWindowPos2dARB(x , y);
}

void stub_glWindowPos2dvARB(const GLdouble *p);
void (* _glWindowPos2dvARB)(const GLdouble *p) = &stub_glWindowPos2dvARB;
void stub_glWindowPos2dvARB(const GLdouble *p) {
   if (getExtendedProcAddress("glWindowPos2dvARB") == NULL) {
      return GL_kludge_error_void("glWindowPos2dvARB");
   }
   _glWindowPos2dvARB = (void (*)(const GLdouble *))getExtendedProcAddress("glWindowPos2dvARB");
   return _glWindowPos2dvARB(p);
}

void stub_glWindowPos2fARB(GLfloat x, GLfloat y);
void (* _glWindowPos2fARB)(GLfloat x, GLfloat y) = &stub_glWindowPos2fARB;
void stub_glWindowPos2fARB(GLfloat x, GLfloat y) {
   if (getExtendedProcAddress("glWindowPos2fARB") == NULL) {
      return GL_kludge_error_void("glWindowPos2fARB");
   }
   _glWindowPos2fARB = (void (*)(GLfloat , GLfloat))getExtendedProcAddress("glWindowPos2fARB");
   return _glWindowPos2fARB(x , y);
}

void stub_glWindowPos2fvARB(const GLfloat *p);
void (* _glWindowPos2fvARB)(const GLfloat *p) = &stub_glWindowPos2fvARB;
void stub_glWindowPos2fvARB(const GLfloat *p) {
   if (getExtendedProcAddress("glWindowPos2fvARB") == NULL) {
      return GL_kludge_error_void("glWindowPos2fvARB");
   }
   _glWindowPos2fvARB = (void (*)(const GLfloat *))getExtendedProcAddress("glWindowPos2fvARB");
   return _glWindowPos2fvARB(p);
}

void stub_glWindowPos2iARB(GLint x, GLint y);
void (* _glWindowPos2iARB)(GLint x, GLint y) = &stub_glWindowPos2iARB;
void stub_glWindowPos2iARB(GLint x, GLint y) {
   if (getExtendedProcAddress("glWindowPos2iARB") == NULL) {
      return GL_kludge_error_void("glWindowPos2iARB");
   }
   _glWindowPos2iARB = (void (*)(GLint , GLint))getExtendedProcAddress("glWindowPos2iARB");
   return _glWindowPos2iARB(x , y);
}

void stub_glWindowPos2ivARB(const GLint *p);
void (* _glWindowPos2ivARB)(const GLint *p) = &stub_glWindowPos2ivARB;
void stub_glWindowPos2ivARB(const GLint *p) {
   if (getExtendedProcAddress("glWindowPos2ivARB") == NULL) {
      return GL_kludge_error_void("glWindowPos2ivARB");
   }
   _glWindowPos2ivARB = (void (*)(const GLint *))getExtendedProcAddress("glWindowPos2ivARB");
   return _glWindowPos2ivARB(p);
}

void stub_glWindowPos2sARB(GLshort x, GLshort y);
void (* _glWindowPos2sARB)(GLshort x, GLshort y) = &stub_glWindowPos2sARB;
void stub_glWindowPos2sARB(GLshort x, GLshort y) {
   if (getExtendedProcAddress("glWindowPos2sARB") == NULL) {
      return GL_kludge_error_void("glWindowPos2sARB");
   }
   _glWindowPos2sARB = (void (*)(GLshort , GLshort))getExtendedProcAddress("glWindowPos2sARB");
   return _glWindowPos2sARB(x , y);
}

void stub_glWindowPos2svARB(const GLshort *p);
void (* _glWindowPos2svARB)(const GLshort *p) = &stub_glWindowPos2svARB;
void stub_glWindowPos2svARB(const GLshort *p) {
   if (getExtendedProcAddress("glWindowPos2svARB") == NULL) {
      return GL_kludge_error_void("glWindowPos2svARB");
   }
   _glWindowPos2svARB = (void (*)(const GLshort *))getExtendedProcAddress("glWindowPos2svARB");
   return _glWindowPos2svARB(p);
}

void stub_glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z);
void (* _glWindowPos3dARB)(GLdouble x, GLdouble y, GLdouble z) = &stub_glWindowPos3dARB;
void stub_glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z) {
   if (getExtendedProcAddress("glWindowPos3dARB") == NULL) {
      return GL_kludge_error_void("glWindowPos3dARB");
   }
   _glWindowPos3dARB = (void (*)(GLdouble , GLdouble , GLdouble))getExtendedProcAddress("glWindowPos3dARB");
   return _glWindowPos3dARB(x , y , z);
}

void stub_glWindowPos3dvARB(const GLdouble *p);
void (* _glWindowPos3dvARB)(const GLdouble *p) = &stub_glWindowPos3dvARB;
void stub_glWindowPos3dvARB(const GLdouble *p) {
   if (getExtendedProcAddress("glWindowPos3dvARB") == NULL) {
      return GL_kludge_error_void("glWindowPos3dvARB");
   }
   _glWindowPos3dvARB = (void (*)(const GLdouble *))getExtendedProcAddress("glWindowPos3dvARB");
   return _glWindowPos3dvARB(p);
}

void stub_glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z);
void (* _glWindowPos3fARB)(GLfloat x, GLfloat y, GLfloat z) = &stub_glWindowPos3fARB;
void stub_glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z) {
   if (getExtendedProcAddress("glWindowPos3fARB") == NULL) {
      return GL_kludge_error_void("glWindowPos3fARB");
   }
   _glWindowPos3fARB = (void (*)(GLfloat , GLfloat , GLfloat))getExtendedProcAddress("glWindowPos3fARB");
   return _glWindowPos3fARB(x , y , z);
}

void stub_glWindowPos3fvARB(const GLfloat *p);
void (* _glWindowPos3fvARB)(const GLfloat *p) = &stub_glWindowPos3fvARB;
void stub_glWindowPos3fvARB(const GLfloat *p) {
   if (getExtendedProcAddress("glWindowPos3fvARB") == NULL) {
      return GL_kludge_error_void("glWindowPos3fvARB");
   }
   _glWindowPos3fvARB = (void (*)(const GLfloat *))getExtendedProcAddress("glWindowPos3fvARB");
   return _glWindowPos3fvARB(p);
}

void stub_glWindowPos3iARB(GLint x, GLint y, GLint z);
void (* _glWindowPos3iARB)(GLint x, GLint y, GLint z) = &stub_glWindowPos3iARB;
void stub_glWindowPos3iARB(GLint x, GLint y, GLint z) {
   if (getExtendedProcAddress("glWindowPos3iARB") == NULL) {
      return GL_kludge_error_void("glWindowPos3iARB");
   }
   _glWindowPos3iARB = (void (*)(GLint , GLint , GLint))getExtendedProcAddress("glWindowPos3iARB");
   return _glWindowPos3iARB(x , y , z);
}

void stub_glWindowPos3ivARB(const GLint *p);
void (* _glWindowPos3ivARB)(const GLint *p) = &stub_glWindowPos3ivARB;
void stub_glWindowPos3ivARB(const GLint *p) {
   if (getExtendedProcAddress("glWindowPos3ivARB") == NULL) {
      return GL_kludge_error_void("glWindowPos3ivARB");
   }
   _glWindowPos3ivARB = (void (*)(const GLint *))getExtendedProcAddress("glWindowPos3ivARB");
   return _glWindowPos3ivARB(p);
}

void stub_glWindowPos3sARB(GLshort x, GLshort y, GLshort z);
void (* _glWindowPos3sARB)(GLshort x, GLshort y, GLshort z) = &stub_glWindowPos3sARB;
void stub_glWindowPos3sARB(GLshort x, GLshort y, GLshort z) {
   if (getExtendedProcAddress("glWindowPos3sARB") == NULL) {
      return GL_kludge_error_void("glWindowPos3sARB");
   }
   _glWindowPos3sARB = (void (*)(GLshort , GLshort , GLshort))getExtendedProcAddress("glWindowPos3sARB");
   return _glWindowPos3sARB(x , y , z);
}

void stub_glWindowPos3svARB(const GLshort *p);
void (* _glWindowPos3svARB)(const GLshort *p) = &stub_glWindowPos3svARB;
void stub_glWindowPos3svARB(const GLshort *p) {
   if (getExtendedProcAddress("glWindowPos3svARB") == NULL) {
      return GL_kludge_error_void("glWindowPos3svARB");
   }
   _glWindowPos3svARB = (void (*)(const GLshort *))getExtendedProcAddress("glWindowPos3svARB");
   return _glWindowPos3svARB(p);
}

 //} end of namespace 

