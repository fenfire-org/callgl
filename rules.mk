GCCVER=3.2

CXX=g++-$(GCCVER)
CXXLINK=gcc-$(GCCVER)

# Choose architecture
ARCH=-march=pentium4 -mfpmath=sse -msse2

# OPTIMIZE =  -O3 -ffast-math $(ARCH) -fomit-frame-pointer -foptimize-sibling-calls
OPTIMIZE = -O0

CPPFLAGS = -I../include -I../include/glwrapper
CXXFLAGS = -g -Wall $(OPTIMIZE) $(CPPFLAGS) 
CCFLAGS = -g -Wall

SHARED = -shared

%.dep: %.cxx
	$(SHELL) -ec '$(CXX) -M $(CPPFLAGS) $< \
                      | sed '\''s/\($*\)\.o[ :]*/\1.o $@ : /g'\'' > $@; \
                      [ -s $@ ] || rm -f $@'

%.o: %.cxx
	$(CXX) -c $(CXXFLAGS) -o $@ $<
