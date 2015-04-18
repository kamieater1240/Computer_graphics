#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>

#include <GL/glew.h>
#include <freeglut/glut.h>
#include "textfile.h"
#include "GLM.h"

#define NO_UPDATE 0

extern GLfloat aMVP[];
extern GLfloat x_center, y_center, z_center;
extern GLfloat scale;

void print_aMVP();
void update_center(GLfloat A[]);
void transMatrix(GLfloat *A);
void copyMatrix(GLfloat *A, const GLfloat B[][4]);
void multiMatrix(GLfloat A[][4], GLfloat *B);
void scaleAll();
void scaling(GLfloat x, GLfloat y, GLfloat z);
void transport(GLfloat x, GLfloat y, GLfloat z);
void transport(GLfloat x, GLfloat y, GLfloat z, bool no_update);
void rotate(GLfloat x, GLfloat y, GLfloat z);
void matrixInit();