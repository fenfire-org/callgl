include ../rules.mk

sources = calltest.cxx

all: calltest

calltest: calltest.o
	$(CXX) calltest.o ../src/callgl.o ../src/glwrapper/GL_wrapper.o -lglut -o calltest
