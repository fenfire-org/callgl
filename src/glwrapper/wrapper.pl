#!/usr/bin/perl
# 
# Copyright (c) 2003, Matti Katila
# 
# This file is part of Gzz.
# 
# Gzz is free software; you can redistribute it and/or modify it under
# the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
# 
# Gzz is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
# or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
# Public License for more details.
# 
# You should have received a copy of the GNU General
# Public License along with Gzz; if not, write to the Free
# Software Foundation, Inc., 59 Temple Place, Suite 330, Boston,
# MA  02111-1307  USA
# 
# 


use strict;

my $header_file = "gl.h";

my $kludge_file_name="GL_wrapper";
my $spec_1_1_funcs_file_name= "gl_1_1_funcs";

my @GL_1_1_funcs = ();
my @GL_1_1_funcs_checked = ();


sub check_if_ARB_exist {
    my ($ptr, $check_func) = @_;

    $check_func =~ s/ //g;

#    print "  \'$check_func\'\n";

    $check_func = "${check_func}ARB";

    my @file = @{$ptr};

    foreach(@file) {
	my ($return_type, $rest) = split / /, $_, 2;
	my ($func, $args) = split /\(/, $rest, 2;
	chop $func;

	if ($func eq $check_func) { 
#	    print "find: \'$func\'\n";
	    return "true"; 
	}
    }
    return "false";
}

sub remove {
    my ($ptr, $func_to_remove) = @_;
    $func_to_remove =~ s/ //g;

#    print " removed unARB: \'$func_to_remove\'\n";

    my @file = @{$ptr};

    for(my $i=0; $i<@file; $i++) {
	my ($return_type, $rest) = split / /, $file[$i], 2;
	my ($func, $args) = split /\(/, $rest, 2;
	chop $func;

#	print "    \'$func\' - \'$func_to_remove\'\n";

	if ($func eq $func_to_remove) {
#	    print " found : $func\n";
	    splice (@file, $i, 1);
	    $i--;
	}
    }
    return @file;
}


sub check_if_1_1_func_name {
    my $check_func = "@_";
    $check_func =~ s/^gl//;

    for( my $i=0; $i<@GL_1_1_funcs; $i++) {
	if ( $check_func eq $GL_1_1_funcs[$i] ) {
	    #print"CHECK: $GL_1_1_funcs[$i] vs. $check_func\n";
	    push(@GL_1_1_funcs_checked, $GL_1_1_funcs[$i]);
	    return "true";
	}
    }
    return "false";
}

sub getTokens {
    my @file = ();
    
    if ( -e $header_file ) {

	local *FILE_T;
	open(FILE_T, "$header_file");
	local $/ = "\n";
	while (<FILE_T>) {
	    chop;

	    # collect file to one line
	    if (/^\#define/ && ! /__/) {

		# remove '  '->' '
		s/  / /g while ("$_" =~ /  /);
		push(@file, $_);
	    }
	}
	sort(@file);
	
	# header file
	# ===========
	open(GL_TOKENS, ">>$kludge_file_name.hxx") 
	    or die;

	foreach(@file) {
	    my ($def, $token, $b_trash) = split / /, $_, 3;
	    print GL_TOKENS "\#ifndef $token\n";
	    print GL_TOKENS "\#define $token $b_trash\n";
	    print GL_TOKENS "\#endif\n\n";
	}
	close GL_TOKENS;


    } else {
	print "header file: $header_file not found.\n";
	exit(1);
    }
}



sub makeWrapper {

    system("rm $kludge_file_name.hxx");
    system("rm $kludge_file_name.cxx");

    open(GL_CXX, ">$kludge_file_name.cxx") 
	or die;
    print GL_CXX 
"\
/*\
 * THIS FILE HAS BEEN AUTOMATICALLY GENERATED, PLEASE DO NOT EDIT\
 */\
\#include <iostream>\
\#include \"/usr/include/GL/gl.h\"\
\
#ifdef __cplusplus\
extern \"C\" {\
   extern void (*glXGetProcAddressARB(const GLubyte *procname))(void);\
}\
#endif\
\
//namespace GL_wrapper {\
\
/* \
 * getProcAddresss
 * ===============
 */\
\
void (* getExtendedProcAddress(const char * c))(void);\
\
/*\
 * GLX implementation \
 */\
\
void (* getExtendedProcAddress(const char * c))(void) {\
    return glXGetProcAddressARB( (const GLubyte *)(c) );\
}\
\
/*\
 * AGL .. \
 * WGL etc..\ 
 *   please select suitable for you ;) \
 */\
\
\
/* \
 * Error_messages
 * ==============
 */\
\
void GL_kludge_error_void(const char * c) {\
   std::cerr << \"ERROR: from indirect OpenGL call:\"\
             << c <<\" not properly defined by your gfx-driver\\n\";\
}\
GLboolean GL_kludge_error_GLboolean(const char * c) {\
   std::cerr << \"ERROR: from indirect OpenGL call:\"\
             << c <<\" not properly defined by your gfx-driver\\n\";\
   return false;\
}\
GLenum GL_kludge_error_GLenum(const char * c) {\
   std::cerr << \"ERROR: from indirect OpenGL call:\"\
             << c <<\" not properly defined by your gfx-driver\\n\";\
   return 0;\
}\
GLuint GL_kludge_error_GLuint(const char * c) {\
   std::cerr << \"ERROR: from indirect OpenGL call:\"\
             << c <<\" not properly defined by your gfx-driver\\n\";\
   return 0;\
}\
GLvoid* GL_kludge_error_GLvoid_p_(const char * c) {\
   std::cerr << \"ERROR: from indirect OpenGL call:\"\
             << c <<\" not properly defined by your gfx-driver\\n\";\
   return NULL;\
}\
GLint GL_kludge_error_GLint(const char * c) {\
   std::cerr << \"ERROR: from indirect OpenGL call:\"\
             << c <<\" not properly defined by your gfx-driver\\n\";\
   return -1;\
}\
\
\
/* \
 * Stub functions
 * ==============
 */\
";
    close GL_CXX;


    open(GL_HEADER, ">$kludge_file_name.hxx") 
	or die;

    print GL_HEADER 
"\
/*\
 * THIS FILE HAS BEEN AUTOMATICALLY GENERATED, PLEASE DO NOT EDIT\
 */\
\
#ifndef GL_WRAPPER_HEADER\
#define GL_WRAPPER_HEADER\
\
#include \"/usr/include/GL/gl.h\"\
\n";
    close GL_HEADER;

    getTokens();

    # Get OpenGL 1.1 function names from file
    # syntax: void func ( ..) ;
    if ( -e $spec_1_1_funcs_file_name ) {

	my @tmp_lines = ();

	local *GL_FUNCS;
	open(GL_FUNCS, "$spec_1_1_funcs_file_name") 
	    or die;
	local $/ = "\n";
	while (<GL_FUNCS>) {
	    chop;
	    # remove pointter stars
	    s/\*//;
	    my ($tmp, $func_name);
	    ($tmp, $func_name) = split / /, $_,2;
	    ($func_name, $tmp) = split /\(/, $func_name,2;

	    push(@GL_1_1_funcs, $func_name);
	}
	close GL_FUNCS;
    } else {
	print "Error with opening $spec_1_1_funcs_file_name.\n";
	exit(1);
    }

    sort(@GL_1_1_funcs);
   
    my @file = ();
    
    if ( -e $header_file ) {

	my @tmp_lines = ();

	local *FILE;
	open(FILE, "$header_file");
	local $/ = "\n";
	while (<FILE>) {
	    chop;

	    # collect file to one line
	    push(@tmp_lines, $_);
	    if ("@tmp_lines" =~ /\;/) {
		# GLhalf is in then newest NV header, but
		# not in standard headers.
		# Avoid blowing up by ignoring.

		if ( ("@tmp_lines" =~ /^void/ 
		     or "@tmp_lines" =~ /^GL/)
		     and not "@tmp_lines" =~ /GLhalf/
		     ) {

		    # remove '  '->' '
		    s/  / /g while ("$_" =~ /  /);

		    my ($trash,$func, $trashh) = split / /, $_,3;
		    if(check_if_1_1_func_name($func) eq "false") {
			push(@file, $_);
		    }
		}
		@tmp_lines = ();
	    }
	}
	sort(@file);
	
	# header file
	# ===========
	open(GL_HEADER, ">>$kludge_file_name.hxx") 
	    or die;
	for(my $i=0; $i<@file; $i++ ) {
	    my ($return_type, $rest) = split / /, $file[$i], 2;
	    my ($func, $args) = split /\(/, $rest, 2;
	    $func =~ s/ //g;
	    
	    if ( check_if_ARB_exist(\@file, $func) eq "true") {
		print GL_HEADER "\#define $func _${func}ARB\n";

		# we don't need stub_function to it anymore so
		@file = remove(\@file, $func);
		$i--;
	    } else {
		#print "    \'$func\'\n";
		print GL_HEADER "extern $return_type (* _$func)($args\n";
		print GL_HEADER "\#define $func _$func\n";
	    }
	}
	close GL_HEADER;


	# C -file
	# =======
	open(GL_CXX, ">>$kludge_file_name.cxx") 
	    or die;

	foreach(@file) {
	    my ($return_type, $rest) = split / /, $_, 2;
	    my $return_type_p = $return_type;
	    $return_type_p =~ s/\*/_p_/g;
	    my ($func, $args) = split /\(/, $rest, 2;
	    chop $args;
	    chop $func;

	    # argss...
	    my @arg_list = ();
	    my $tmp_args = $args;
	    $tmp_args =~ s/\*//g;
	    $tmp_args =~ s/\,/ , /g;
	    $tmp_args =~ s/\)//;
	    $tmp_args =~ s/;//;
	    while ( $tmp_args ne '') {
		my ($word, $rest) = split / /, $tmp_args, 2;

		if ( $word eq '') {
		} elsif ($word =~ /const/ ) { 
		} elsif ($word =~ /^GL/ ) {
		} else {
		    push(@arg_list, $word);
		}
		$tmp_args = $rest;
	    }

	    my @arg_type_list = ();
	    $tmp_args = $args;
	    $tmp_args =~ s/\*/ * /g;
	    $tmp_args =~ s/\,/ , /g;
	    $tmp_args =~ s/\)//;
	    $tmp_args =~ s/;//;

	    while ( $tmp_args ne '') {
		my ($word, $rest) = split / /, $tmp_args, 2;

		if ( $word eq '') {
		} elsif ($word eq '*') {
		    push(@arg_type_list, '*');
		} elsif ($word eq 'const' ) { 
		    push(@arg_type_list, $word);
		} elsif ($word =~ /^GL/ ) {
		    push(@arg_type_list, $word);
		} else {
		    if ($word eq ',') {
			push(@arg_type_list, ',');
		    } else {
			# nothing
		    }
		}
		$tmp_args = $rest;
	    }

	    @arg_list = () if (@arg_list == 1 && $arg_list[0] eq 'void');


	    print GL_CXX 
		"\
$return_type stub_$func($args;\
$return_type (* _$func)($args = &stub_$func;\
$return_type stub_$func($args {\
   if (getExtendedProcAddress(\"$func\") == NULL) {\
      return GL_kludge_error_$return_type_p(\"$func\");\
   }\
   _$func = ($return_type (*)(@arg_type_list))getExtendedProcAddress(\"$func\");\
   return _$func(@arg_list);\
}\n";
	}
	print GL_CXX "\n //} end of namespace \n\n";
	close GL_CXX;

	open(GL_HEADER, ">>$kludge_file_name.hxx") 
	    or die;
	print GL_HEADER "\n\#endif\n";
	close GL_HEADER;

    } else {
	print "header file: $header_file not found.\n";
    }
}

makeWrapper();


###########
# unit test
###########
foreach(@GL_1_1_funcs) {

    my $func_name = $_;
    for(my $i=0; $i<@GL_1_1_funcs_checked; $i++) {
	if ( $func_name eq $GL_1_1_funcs_checked[$i] ) {
	    splice(@GL_1_1_funcs_checked, $i, 1);
	}
    }
}

foreach(@GL_1_1_funcs_checked) {
    print "Still here.. $_\n";
}
