#include <stdio.h>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<iostream>
using namespace std;

const double PI = 3.141592654;

int frameNumber = 0;




void drawDisk(double radius) {
	int d;
	glBegin(GL_POLYGON);
	for (d = 0; d < 32; d++) {
		double angle = 2*PI/32 * d;
		glVertex2d( radius*cos(angle), radius*sin(angle));
	}
	glEnd();
}



void drawWindmill() {
	int i;
	glColor3f(255,255,255);// Windmill er  lathi
	glBegin(GL_POLYGON);
	glVertex2f(-0.05f, 0);
	glVertex2f(0.05f, 0);
	glVertex2f(0.05f, 3);
	glVertex2f(-0.05f, 3);
	glEnd();

	glTranslatef(0, 3, 0);
 glRotated(frameNumber * (360.0/96), 0, 0, 1);
	//blate er pakha
	glColor3ub(0,0,0);

	for (i = 0; i < 3; i++) {//blade er pakha no
		glRotated(120, 0, 0, 1);  // blader er pakha space
		glBegin(GL_POLYGON);
		glVertex2f(0,0);              //blader shape
		glVertex2f(0.5f, 0.1f);
		glVertex2f(1.5f,0);
		glVertex2f(0.5f, -0.1f);
		glEnd();
	}

}

void Windmaill()
{
int i;
    glPushMatrix();
    glTranslated(3.5,0.8,0);


    glScaled(0.7,0.7,1);
    drawWindmill();
    glPopMatrix();
    i+=0.1f;

}

void display() {

	glClear(GL_COLOR_BUFFER_BIT);//color clear
	glColor3ub(150,224,255);// Fills the scene with bluef.
	glLoadIdentity();

    Windmaill();
	glPushMatrix();
	glTranslated(5.8,3,0);

	glScaled(0.3,0.3,1);
	glPopMatrix();
	glutSwapBuffers();

}  // end display



void init() {
	glClearColor(0.5f, 0.5f, 1, 1);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 8, -1, 4, -1, 1);
	glMatrixMode(GL_MODELVIEW);
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(1200,600);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Natural view with Windmill");
    init();

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
