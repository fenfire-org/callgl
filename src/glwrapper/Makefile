include ../../rules.mk

sources = GL_wrapper.cxx 

all: GL_wrapper.o

include $(sources:.cxx=.dep)

gl.h:
	# To regenerate the wrapper files (GL_wrapper.cxx, GL/gl.h)
	# copy a source gl.h file to current directory and run
	#     make regenerate_wrapper
	# Note: the source file needs to be in a certain format
	exit 1

#XXX: document the expected format
regenerate_wrapper: gl.h
	touch GL_wrapper.hxx
	./wrapper.pl
	mv GL_wrapper.hxx ../../include/glwrapper/GL/gl.h
