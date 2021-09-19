#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI 3.14159265358979323846

void upperpart(){

glBegin(GL_POLYGON);
glColor3ub(61, 79, 84);
glVertex2f(0.535f,0.75f);
glVertex2f(0.4f,0.78f);
glVertex2f(-0.4f,0.78f);
glVertex2f(-0.535f,0.75f);
glVertex2f(-0.63f,0.6f);
glVertex2f(-0.4f,0.63f);
glVertex2f(0.4f,0.63f);
glVertex2f(0.63f,0.6f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(61, 79, 84);
glVertex2f(0.685f,0.45f);
glVertex2f(0.4f,0.48f);
glVertex2f(-0.4f,0.48f);
glVertex2f(-0.685f,0.45f);
glVertex2f(-0.7f,0.3f);
glVertex2f(-0.4f,0.33f);
glVertex2f(0.4f,0.33f);
glVertex2f(0.7f,0.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(61, 79, 84);
glVertex2f(0.685f,0.15f);
glVertex2f(0.4f,0.18f);
glVertex2f(-0.4f,0.18f);
glVertex2f(-0.685f,0.15f);
glVertex2f(-0.63f,0.0f);
glVertex2f(-0.4f,0.03f);
glVertex2f(0.4f,0.03f);
glVertex2f(0.63f,0.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(61, 79, 84);
glVertex2f(0.535f,-0.15f);
glVertex2f(0.3f,-0.12f);
glVertex2f(-0.3f,-0.12f);
glVertex2f(-0.535f,-0.15f);
glVertex2f(-0.36f,-0.3f);
glVertex2f(-0.36f,-0.3f);
glVertex2f(0.36f,-0.3f);
glVertex2f(0.36f,-0.3f);
glEnd();
glFlush();

}
void Middlepart(){

glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(184, 184, 184);
int i;
GLfloat x=.0f; GLfloat y=.3f; GLfloat radius =.7f;
int triangleAmount = 30;

GLfloat twicePi = 2.0f * PI;
glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f
        (
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
glEnd();
}

void bottompart(){


glBegin(GL_QUADS);
glColor3ub(184, 184, 184);
glVertex2f(0.36f,-0.3f);
glVertex2f(-0.36f,-0.3f);
glVertex2f(-0.36f,-0.6f);
glVertex2f(0.36f,-0.6f);
glEnd();



}
void aiubdim() {

Middlepart();
bottompart();
upperpart();




}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Aiublibrary");
	glutInitWindowSize(300, 300);

	 glutInitWindowPosition (100, 150);
	glutDisplayFunc(aiubdim);
	glutMainLoop();
//	myInit();
	return 0;
}
