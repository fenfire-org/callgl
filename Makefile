include rules.mk

SUBDIRS = src src/glwrapper examples

.PHONY: subdirs $(SUBDIRS)

subdirs: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

examples: src


clean:
	find -name "*.dep" | xargs rm -f
	find -name "*.o" | xargs rm -f


# gltokens.c is currently in cvs to prevent potential problems 
# with different OpenGL headers.
# To enable automatic gltokens.c regeneration, remove the XXX_ below 
# and check that CPPFLAGS specifies the correct OpenGL include directories.
XXX_gltokens.c:
	echo '#include <GL/gl.h>' | \
	$(CXX) -E $(CPPFLAGS) -DGL_GLEXT_PROTOTYPES - -dM | \
	grep -h '#define GL_\w\+[[:space:]]\+\w\+' | \
	grep -v 'OFFSET_TEXTURE_2D_[BMS]' | cut -c12- | \
	awk '{print "{\"" $$1 "\", " $$2 "},"}' | \
	LC_COLLATE=C sort | uniq > gltokens.c

gltokens.dep:
	echo '#include <GL/gl.h>' | \
	$(CXX) -E $(CPPFLAGS) -DGL_GLEXT_PROTOTYPES - -M | \
	sed -e 's/^-/gltokens.c gltokens.dep/' > gltokens.dep

include gltokens.dep

##########################################################################
# General documentation targets
docs:   docxx navidoc navilink

docxx:
	doc++  -a --before-group --before-class --no-java-graphs --trivial-graphs  -H -F -d doc/docxx -u `find . -name "*.hxx"`
##########################################################################
# Navidoc documentation targets
navidoc: # Compiles reST into HTML
	make -C "../navidoc/" html DBG="$(DBG)" RST="../callgl/doc/"

navilink: # Bi-directional linking using imagemaps
	make -C "../navidoc/" imagemap HTML="../callgl/doc/"

naviloop: # Compiles, links, loops
	make -C "../navidoc/" html-loop DBG="--imagemap $(DBG)" RST="../callgl/$(RST)"

peg: # Creates a new PEG, uses python for quick use
	make -C "../navidoc/" new-peg PEGDIR="../callgl/doc/pegboard"

pegs:   # Compiles only pegboard
	make -C "../navidoc/" html DBG="$(DBG)" RST="../callgl/doc/pegboard/"

html: # Compiles reST into HTML, directories are processed recursively
	make -C "../navidoc/" html DBG="$(DBG)" RST="../callgl/$(RST)"

html-loop: # Loop version for quick recompiling
	make -C "../navidoc/" html-loop DBG="$(DBG)" RST="../callgl/$(RST)"

latex: # Compiles reST into LaTeX, directories are processed recursively
	make -C "../navidoc/" latex DBG="$(DBG)" RST="../callgl/$(RST)"

latex-loop: # Loop version for quick recompiling
	make -C "../navidoc/" latex-loop DBG="$(DBG)" RST="../callgl/$(RST)"
