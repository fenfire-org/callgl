/*
calltest.cxx
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

#include <iostream>
#include <fstream>
#include <vector>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

#include "callgl.hxx"

#include <sstream>

using namespace CallGL;

using std::vector;
using std::string;
using std::ifstream;
using std::cerr;
using std::cout;


int listname;
vector<bool> compiled;
vector<string> code;
int code_ind = 0;

float scale = .8f;
float rotate[4] = {1,0,0,0};


void quatmul(float a[], float b[], float c[]) {
  float x = a[0]*b[0] - a[1]*b[1] - a[2]*b[2] - a[3]*b[3];
  float y = a[0]*b[1] + a[1]*b[0] + a[2]*b[3] - a[3]*b[2];
  float z = a[0]*b[2] - a[1]*b[3] + a[2]*b[0] + a[3]*b[1];
  float w = a[0]*b[3] + a[1]*b[2] - a[2]*b[1] + a[3]*b[0];
  c[0] = x;
  c[1] = y;
  c[2] = z;
  c[3] = w;
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
    glScalef(scale, scale, scale);

    // Compute rotation matrix from the quaternion 

    float aa = rotate[0]*rotate[0];
    float ab = rotate[0]*rotate[1];
    float ac = rotate[0]*rotate[2];
    float ad = rotate[0]*rotate[3];

    float bb = rotate[1]*rotate[1];
    float bc = rotate[1]*rotate[2];
    float bd = rotate[1]*rotate[3];

    float cc = rotate[2]*rotate[2];
    float cd = rotate[2]*rotate[3];

    float dd = rotate[3]*rotate[3];

    float m = 1. / (aa + bb + cc + dd);

    float mat[16] = { 
      m*(aa+bb-cc-dd), m*2*(ad+bc), m*2*(-ac+bd), 0,
      m*2*(-ad+bc), m*(aa-bb+cc-dd), m*2*(ab+cd), 0,
      m*2*(ac+bd), m*2*(-ab+cd), m*(aa-bb-cc+dd), 0,
      0, 0, 0, 1
    };
    glMultMatrixf(mat);


    glColor3f(1, 1, 1);

    if (!compiled[code_ind]) {
      cout << "Callgl "<<code_ind<<"\n";
      compileGL(code[code_ind].c_str(), listname + code_ind);
      cout << "Called Callgl "<<code_ind<<"\n";
      compiled[code_ind] = true;
    }
    glCallList(listname + code_ind);

    glPopMatrix();

    glutSwapBuffers();
    glFlush();

    glFinish();
}

string slurp(const char *filename) {
  string s;
  ifstream f(filename);
  while(!f.eof()) {
      string l;
      getline(f, l);
      l += "\n";
      s += l;
  }
  return s;
}

void keypress(unsigned char key, int x, int y) {
  switch (key) {
  case '+': code_ind = (code_ind + 1) % code.size(); break;
  case '-': code_ind = (code_ind - 1) % code.size(); break;
  case 'q': exit(0); 
  }
  glutPostRedisplay();
}

bool buttons[3] = {0,0,0};
float buttonx[3] = {0,0,0};
float buttony[3] = {0,0,0};

void mouse(int button, int state, int x, int y) {
  if (button > 2) return;
  buttonx[button] = x;
  buttony[button] = y;
  buttons[button] = (state == GLUT_DOWN);
}

void motion(int x, int y) {
  if (buttons[0]) {
    float a = .01*(buttonx[0] - x);
    float b = .01*(buttony[0] - y);
    buttonx[0] = x;
    buttony[0] = y;

    float q0[4] = { cos(.5*a), 0, sin(.5*a), 0 };
    float q1[4] = { cos(.5*b), sin(.5*b), 0, 0 };

    quatmul(q0, rotate, rotate);
    quatmul(q1, rotate, rotate);

    /*
    cerr << "rot=" 
	 << rotate[0] << "," 
	 << rotate[1] << "," 
	 << rotate[2] << "," 
	 << rotate[3] << "\n";
    */
  }
  if (buttons[2]) {
    float cx = .5 * glutGet(GLUT_WINDOW_WIDTH);
    float cy = .5 * glutGet(GLUT_WINDOW_HEIGHT);

    float a = atan2(x-cx, y-cy) - atan2(buttonx[2]-cx, buttony[2]-cy);

    buttonx[2] = x;
    buttony[2] = y;
    float q0[4] = { cos(.5*a), 0, 0, sin(.5*a) };
    quatmul(q0, rotate, rotate);
  }
  if (buttons[1]) {
    scale *= exp(.01 * (y - buttony[1]));
    buttonx[1] = x;
    buttony[1] = y;

    cerr << "scale=" << scale << "\n";
  }
  glutPostRedisplay();
}

template <class T>
string join(T p, string sep = " ") {
  std::ostringstream s;
  bool first = true;
  for (typename T::iterator i = p.begin(); i != p.end(); ++i) {
    if (first) first = false; else s << sep;
    s << *i;
  }
  return s.str();
}


int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    
    code.resize(argc-1);
    compiled.resize(argc - 1);
    for (int i = 0; i < argc-1; i++)
      {
	cout << "Slurp "<<argv[i+1]<<"\n";
	code[i] = slurp(argv[i + 1]);
	cout << "Slurped "<<argv[i+1]<<"\n";
	compiled[i] = false;
      }

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutCreateWindow("callgltest");

    glClearColor(0, 0, 0, 0);

    cout << "Vendor: " << getString("VENDOR") << "\n";
    cout << "Renderer: " << getString("RENDERER") << "\n";
    cout << "Version: " << getString("VERSION") << "\n";
    cout << "Extensions: " << getString("EXTENSIONS") << "\n";

    cout << "max viewport dims: " << join(getFloat("MAX_VIEWPORT_DIMS")) << "\n";
    cout << "\n";

    if (code.size() < 1) {
      cerr << "Usage: calltest file.callgl ...\n";
      return 1;
    }



    listname = glGenLists(code.size());

    glutDisplayFunc(display);
    glutKeyboardFunc(keypress);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutMainLoop();
    return 0;
}


