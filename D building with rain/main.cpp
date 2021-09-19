#include<cstdio>

#include <GL/gl.h>
#include <windows.h>
#include <GL/glut.h>


void ortho()
{
    gluOrtho2D(-2,2,-2,2);
}
GLfloat position = 0.0f;
GLfloat speed = 0.2f;


void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void Display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


     /*Sky*/
     glBegin(GL_QUADS);
     glColor3ub(160,200,255);
     glVertex2f(-2.0f,2.0f);
     glVertex2f(-2.0f,-2.0f);
     glVertex2f(2.0f,-2.0f);
     glVertex2f(2.0f,2.0f);
     glEnd();

     /*Grass*/
     glBegin(GL_QUADS);
     glColor3ub(0,150,0);
     glVertex2f(-2.0f,-0.5f);
     glVertex2f(-2.0f,-2.0f);
     glVertex2f(2.0f,-2.0f);
     glVertex2f(2.0f,-0.5f);
     glEnd();

     /*Building*/

               glBegin(GL_QUADS);
    glColor3ub(163, 160, 155);
    glVertex2f(0.8f, 0.8f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.6f, -0.5f);
    glVertex2f(0.8f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 103, 134);
    glVertex2f(0.7f, -0.2f);
    glVertex2f(0.7f, -0.1f);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.5f, -0.2f);


    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.7f, 0.1f);
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.5f, 0.0f);


    glVertex2f(0.7f, 0.2f);
    glVertex2f(0.7f, 0.3f);
    glVertex2f(-0.5f, 0.3f);
    glVertex2f(-0.5f, 0.2f);


    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.7f, 0.5f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-0.5f, 0.4f);


    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.7f, 0.7f);
    glVertex2f(-0.5f, 0.7f);
    glVertex2f(-0.5f, 0.6f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 103, 134);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.8f, -0.5f);
    glVertex2f(-0.6f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(18, 25, 31);
    glVertex2f(0.7f, -0.5f);
    glVertex2f(0.7f, -0.25f);
    glVertex2f(-0.5f, -0.25f);
    glVertex2f(-0.5f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(193, 193, 193);

    glVertex2f(0.65f, -0.5f);
    glVertex2f(0.65f, -0.25f);
    glVertex2f(0.45f, -0.25f);
    glVertex2f(0.45f, -0.5f);

    glVertex2f(0.15f, -0.5f);
    glVertex2f(0.15f, -0.25f);
    glVertex2f(0.35f, -0.25f);
    glVertex2f(0.35f, -0.5f);

    glVertex2f(0.05f, -0.5f);
    glVertex2f(0.05f, -0.25f);
    glVertex2f(-0.15f, -0.25f);
    glVertex2f(-0.15f, -0.5f);

    glVertex2f(-0.25f, -0.5f);
    glVertex2f(-0.25f, -0.25f);
    glVertex2f(-0.45f, -0.25f);
    glVertex2f(-0.45f, -0.5f);

    glEnd();
     glFlush();
}


void Rain() {
	glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


     /*Sky*/
     glBegin(GL_QUADS);
     glColor3ub(0,200,255);
     glVertex2f(-2.0f,2.0f);
     glVertex2f(-2.0f,-2.0f);
     glVertex2f(2.0f,-2.0f);
     glVertex2f(2.0f,2.0f);
     glEnd();

     /*Grass*/
     glBegin(GL_QUADS);
     glColor3ub(0,150,0);
     glVertex2f(-2.0f,-0.5f);
     glVertex2f(-2.0f,-2.0f);
     glVertex2f(2.0f,-2.0f);
     glVertex2f(2.0f,-0.5f);
     glEnd();

     /*Building*/

               glBegin(GL_QUADS);
    glColor3ub(163, 160, 155);
    glVertex2f(0.8f, 0.8f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.6f, -0.5f);
    glVertex2f(0.8f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 103, 134);
    glVertex2f(0.7f, -0.2f);
    glVertex2f(0.7f, -0.1f);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.5f, -0.2f);


    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.7f, 0.1f);
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.5f, 0.0f);


    glVertex2f(0.7f, 0.2f);
    glVertex2f(0.7f, 0.3f);
    glVertex2f(-0.5f, 0.3f);
    glVertex2f(-0.5f, 0.2f);


    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.7f, 0.5f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-0.5f, 0.4f);


    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.7f, 0.7f);
    glVertex2f(-0.5f, 0.7f);
    glVertex2f(-0.5f, 0.6f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 103, 134);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.8f, -0.5f);
    glVertex2f(-0.6f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(18, 25, 31);
    glVertex2f(0.7f, -0.5f);
    glVertex2f(0.7f, -0.25f);
    glVertex2f(-0.5f, -0.25f);
    glVertex2f(-0.5f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(193, 193, 193);

    glVertex2f(0.65f, -0.5f);
    glVertex2f(0.65f, -0.25f);
    glVertex2f(0.45f, -0.25f);
    glVertex2f(0.45f, -0.5f);

    glVertex2f(0.15f, -0.5f);
    glVertex2f(0.15f, -0.25f);
    glVertex2f(0.35f, -0.25f);
    glVertex2f(0.35f, -0.5f);

    glVertex2f(0.05f, -0.5f);
    glVertex2f(0.05f, -0.25f);
    glVertex2f(-0.15f, -0.25f);
    glVertex2f(-0.15f, -0.5f);

    glVertex2f(-0.25f, -0.5f);
    glVertex2f(-0.25f, -0.25f);
    glVertex2f(-0.45f, -0.25f);
    glVertex2f(-0.45f, -0.5f);

    glEnd();


   /*Rain*/
   glPushMatrix();
   glTranslatef(0.0f,position,0.0f);


     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.9f,2.0f);
     glVertex2f(-1.8,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.7f,2.0f);
     glVertex2f(-1.6,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.5f,2.0f);
     glVertex2f(-1.4,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.3f,2.0f);
     glVertex2f(-1.2,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.1f,2.0f);
     glVertex2f(-1.0,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.9f,2.0f);
     glVertex2f(-0.8,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.7f,2.0f);
     glVertex2f(-0.6,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.5f,2.0f);
     glVertex2f(-0.4,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.3f,2.0f);
     glVertex2f(-0.2,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.1f,2.0f);
     glVertex2f(-0.0,1.8f);
     glEnd();
      glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.1f,2.0f);
     glVertex2f(0.2,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.3f,2.0f);
     glVertex2f(0.4,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.5f,2.0f);
     glVertex2f(0.6,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.7f,2.0f);
     glVertex2f(0.8,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.9f,2.0f);
     glVertex2f(1.0,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.1f,2.0f);
     glVertex2f(1.2,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.3f,2.0f);
     glVertex2f(1.4,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.5f,2.0f);
     glVertex2f(1.6,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.7f,2.0f);
     glVertex2f(1.8,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.9f,2.0f);
     glVertex2f(2.0,1.8f);
     glEnd();

     glTranslatef(0.0f,-0.8f,0.0f);
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.9f,2.0f);
     glVertex2f(-1.8,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.7f,2.0f);
     glVertex2f(-1.6,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.5f,2.0f);
     glVertex2f(-1.4,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.3f,2.0f);
     glVertex2f(-1.2,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.1f,2.0f);
     glVertex2f(-1.0,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.9f,2.0f);
     glVertex2f(-0.8,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.7f,2.0f);
     glVertex2f(-0.6,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.5f,2.0f);
     glVertex2f(-0.4,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.3f,2.0f);
     glVertex2f(-0.2,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.1f,2.0f);
     glVertex2f(-0.0,1.8f);
     glEnd();
      glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.1f,2.0f);
     glVertex2f(0.2,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.3f,2.0f);
     glVertex2f(0.4,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.5f,2.0f);
     glVertex2f(0.6,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.7f,2.0f);
     glVertex2f(0.8,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.9f,2.0f);
     glVertex2f(1.0,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.1f,2.0f);
     glVertex2f(1.2,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.3f,2.0f);
     glVertex2f(1.4,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.5f,2.0f);
     glVertex2f(1.6,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.7f,2.0f);
     glVertex2f(1.8,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.9f,2.0f);
     glVertex2f(2.0,1.8f);
     glEnd();
      glTranslatef(0.0f,-1.2f,0.0f);
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.9f,2.0f);
     glVertex2f(-1.8,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.7f,2.0f);
     glVertex2f(-1.6,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.5f,2.0f);
     glVertex2f(-1.4,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.3f,2.0f);
     glVertex2f(-1.2,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.1f,2.0f);
     glVertex2f(-1.0,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.9f,2.0f);
     glVertex2f(-0.8,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.7f,2.0f);
     glVertex2f(-0.6,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.5f,2.0f);
     glVertex2f(-0.4,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.3f,2.0f);
     glVertex2f(-0.2,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.1f,2.0f);
     glVertex2f(-0.0,1.8f);
     glEnd();
      glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.1f,2.0f);
     glVertex2f(0.2,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.3f,2.0f);
     glVertex2f(0.4,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.5f,2.0f);
     glVertex2f(0.6,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.7f,2.0f);
     glVertex2f(0.8,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.9f,2.0f);
     glVertex2f(1.0,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.1f,2.0f);
     glVertex2f(1.2,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.3f,2.0f);
     glVertex2f(1.4,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.5f,2.0f);
     glVertex2f(1.6,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.7f,2.0f);
     glVertex2f(1.8,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.9f,2.0f);
     glVertex2f(2.0,1.8f);
     glEnd();
           glTranslatef(0.0f,-1.2f,0.0f);
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.9f,2.0f);
     glVertex2f(-1.8,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.7f,2.0f);
     glVertex2f(-1.6,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.5f,2.0f);
     glVertex2f(-1.4,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.3f,2.0f);
     glVertex2f(-1.2,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1.1f,2.0f);
     glVertex2f(-1.0,1.8f);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.9f,2.0f);
     glVertex2f(-0.8,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.7f,2.0f);
     glVertex2f(-0.6,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.5f,2.0f);
     glVertex2f(-0.4,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.3f,2.0f);
     glVertex2f(-0.2,1.8f);
     glEnd();
               glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-0.1f,2.0f);
     glVertex2f(-0.0,1.8f);
     glEnd();
      glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.1f,2.0f);
     glVertex2f(0.2,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.3f,2.0f);
     glVertex2f(0.4,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.5f,2.0f);
     glVertex2f(0.6,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.7f,2.0f);
     glVertex2f(0.8,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0.9f,2.0f);
     glVertex2f(1.0,1.8f);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.1f,2.0f);
     glVertex2f(1.2,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.3f,2.0f);
     glVertex2f(1.4,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.5f,2.0f);
     glVertex2f(1.6,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.7f,2.0f);
     glVertex2f(1.8,1.8f);
     glEnd();
                glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(1.9f,2.0f);
     glVertex2f(2.0,1.8f);
     glEnd();

     glLoadIdentity();
     glPopMatrix();







     glFlush();
}
void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'n':


   glutDisplayFunc(Display);
   glutPostRedisplay();

    break;
case 'r':
   glutDisplayFunc(Rain);
glutPostRedisplay();
    break;


	}
}




     int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("D Building");
   ortho();
        glutKeyboardFunc(handleKeypress);

              glutDisplayFunc(Display);
   glutDisplayFunc(Rain);

      glutTimerFunc(100, update, 0);



   glutMainLoop();
   return 0;
}
