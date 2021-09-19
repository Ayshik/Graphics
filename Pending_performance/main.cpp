#include <windows.h>
#include <GL/glut.h>
#include<math.h>>













GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}


# define PI           3.14159265358979323846
GLfloat Z = 0.0f;


void Idle()
{
    glutPostRedisplay();
}
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed += 0.1f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.1f;
			}
	glutPostRedisplay();}


void SpecialInput(int key, int x, int y){
switch(key)
{case GLUT_KEY_UP:
speed=.5;
break;
case GLUT_KEY_DOWN:
speed=.1;
break;
}
glutPostRedisplay();}



void night() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    //Sky
    glBegin(GL_QUADS);
    glColor3ub(27, 28, 24);

    glVertex2f(1,0.2);
    glVertex2f(1,1);
    glVertex2f(-1,1);

    glVertex2f(-1,0.2);
    glEnd();
     //Sun

    int sun;

	GLfloat h121=0.7f;
	GLfloat h111=0.7f;
	GLfloat radius9 =0.2f;

	int triangleAmount9 = 100;

	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(189, 199, 161);
    glVertex2f(h121, h111);
    for(sun = 0; sun <= triangleAmount9; sun++)
    {
        glVertex2f(h121+(radius9*cos(sun*twicePi9/triangleAmount9)), h111+(radius9*sin(sun*twicePi9/triangleAmount9)));
    }
	glEnd();

    //lower
    glBegin(GL_QUADS);
    glColor3ub(19, 89, 7);
    //glVertex2f(1,0.4);
    glVertex2f(1,0.2);
    glVertex2f(-1,0.2);
    glVertex2f(-1,-1);

    glVertex2f(1,-1);
    glEnd();

    glLoadIdentity();
    //Tree




    glBegin(GL_LINES);
    //Line-1
    glColor3f(0,0,1);
    glVertex2f(-1,-0.7);
    glVertex2f(1,-0.7);
    glVertex2f(-1,-0.65);
    glVertex2f(1,-0.65);
    //Line-2
    glVertex2f(-1,-0.55);
    glVertex2f(1,-0.55);
    glVertex2f(-1,-0.5);
    glVertex2f(1,-0.5);
    //Line-3
    glColor3f(0,0,0);
    glVertex2f(-1,-0.3);
    glVertex2f(1,-0.3);
    glVertex2f(-1,-0.25);
    glVertex2f(1,-0.25);
    glEnd();



//Train

glBegin(GL_QUADS);
    glColor3ub(125, 181, 440);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.8,-0.1);
    glVertex2f(-0.8,-0.25);
    glVertex2f(-0.6,-0.25);
    glEnd();
    int i;

	GLfloat x=-0.8f;
	GLfloat y=-0.25f;
	GLfloat radius =.03f;

	int triangleAmount = 100;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)), y+(radius*sin(i*twicePi/triangleAmount)));
    }
	glEnd();
	int j;

	GLfloat z=-0.6f;
	GLfloat a=-0.25f;
	GLfloat radius2 =.03f;

	int triangleAmount2 = 100;

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(z, a);
    for(j = 0; j <= triangleAmount2; j++)
    {
        glVertex2f(z+(radius2*cos(j*twicePi2/triangleAmount2)), a+(radius2*sin(j*twicePi2/triangleAmount2)));
    }
	glEnd();
	glBegin(GL_QUADS);
    glColor3ub(28, 31, 36);
    glVertex2f(-0.67,-0.1);
    glVertex2f(-0.73,-0.1);
    glVertex2f(-0.73,-0.25);
    glVertex2f(-0.67,-0.25);
    glEnd();

	glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.5,-0.2);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(125, 181, 440);
    glVertex2f(-0.3,-0.1);
    glVertex2f(-0.5,-0.1);
    glVertex2f(-0.5,-0.25);
    glVertex2f(-0.3,-0.25);
    glEnd();
    int k;

	GLfloat b=-0.5f;
	GLfloat c=-0.25f;
	GLfloat radius3 =.03f;

	int triangleAmount3 = 100;

	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(b, c);
    for(k = 0; k <= triangleAmount3; k++)
    {
        glVertex2f(b+(radius3*cos(k*twicePi3/triangleAmount3)), c+(radius3*sin(k*twicePi3/triangleAmount3)));
    }
	glEnd();
	int l;

	GLfloat d=-0.3f;
	GLfloat e=-0.25f;
	GLfloat radius4 =.03f;

	int triangleAmount4 = 100; //# of triangles used to draw circle

	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(d, e); // center of circle
    for(l = 0; l <= triangleAmount4; l++)
    {
        glVertex2f(d+(radius4*cos(l*twicePi4/triangleAmount4)), e+(radius4*sin(l*twicePi4/triangleAmount4)));
    }
	glEnd();
	glBegin(GL_QUADS);
    glColor3ub(28, 31, 36);
    glVertex2f(-0.37,-0.1);
    glVertex2f(-0.43,-0.1);
    glVertex2f(-0.43,-0.25);
    glVertex2f(-0.37,-0.25);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(125, 181, 440);
    glVertex2f(0,-0.1);
    glVertex2f(-0.2,-0.1);
    glVertex2f(-0.2,-0.25);
    glVertex2f(0,-0.25);
    glEnd();
    int m;

	GLfloat f=-0.2f;
	GLfloat g=-0.25f;
	GLfloat radius5 =.03f;

	int triangleAmount5 = 100; //# of triangles used to draw circle

	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(f, g); // center of circle
    for(m = 0; m <= triangleAmount5; m++)
    {
        glVertex2f(f+(radius5*cos(m*twicePi5/triangleAmount5)), g+(radius5*sin(m*twicePi5/triangleAmount5)));
    }
	glEnd();

	glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.2,-0.2);
    glEnd();

	int n;

	GLfloat h=-0.0f;
	GLfloat h1=-0.25f;
	GLfloat radius6 =.03f;

	int triangleAmount6 = 100; //# of triangles used to draw circle

	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(h, h1); // center of circle
    for(n = 0; n <= triangleAmount6; n++)
    {
        glVertex2f(h+(radius5*cos(n*twicePi6/triangleAmount6)), h1+(radius6*sin(n*twicePi6/triangleAmount6)));
    }
	glEnd();
	glBegin(GL_QUADS);
    glColor3ub(28, 31, 36);
    glVertex2f(-0.07,-0.1);
    glVertex2f(-0.13,-0.1);
    glVertex2f(-0.13,-0.25);
    glVertex2f(-0.07,-0.25);
    glEnd();



	glBegin(GL_QUADS);
    glColor3ub(125, 181, 440);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.1,-0.1);
    glVertex2f(0.1,-0.25);
    glVertex2f(0.3,-0.25);
    glEnd();
    int m1;

	GLfloat f1=0.1f;
	GLfloat g1=-0.25f;
	GLfloat radius7 =.03f;

	int triangleAmount7 = 100; //# of triangles used to draw circle

	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(f1, g1); // center of circle
    for(m1 = 0; m1 <= triangleAmount7; m1++)
    {
        glVertex2f(f1+(radius7*cos(m1*twicePi7/triangleAmount7)), g1+(radius7*sin(m1*twicePi7/triangleAmount7)));
    }
	glEnd();

	glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0.0,-0.2);
    glVertex2f(0.1,-0.2);
    glEnd();

	int n1;

	GLfloat h12=0.3f;
	GLfloat h11=-0.25f;
	GLfloat radius8 =.03f;

	int triangleAmount8 = 100; //# of triangles used to draw circle

	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(h12, h11); // center of circle
    for(n1 = 0; n1 <= triangleAmount8; n1++)
    {
        glVertex2f(h12+(radius8*cos(n1*twicePi8/triangleAmount8)), h11+(radius8*sin(n1*twicePi8/triangleAmount8)));
    }
	glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 31, 36);
    glVertex2f(0.23,-0.1);
    glVertex2f(0.17,-0.1);
    glVertex2f(0.17,-0.25);
    glVertex2f(0.23,-0.25);
    glEnd();
    //glPopMatrix();





    //WindMill
    glPushMatrix();
    glScalef(.2,.2,0);
    glTranslatef(4.5,1.8,0);
    glRotatef(Z,0,0.0,0.2);
    glBegin(GL_TRIANGLES);

    glColor3ub(199, 199, 199);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, 0.4f);
    glVertex2f( 0.0f, 0.4f);

    glColor3ub(199, 199, 199);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, -0.4f);
    glVertex2f( 0.0f, -0.4f);

    glColor3ub(199, 199, 199);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.4f, -0.15f);
    glVertex2f( 0.4f, 0.0f);

    glColor3ub(199, 199, 199);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.4f, 0.15f);
    glVertex2f( -0.4f, 0.0f);

    glEnd();
    glPopMatrix();
    Z+=0.5f;
    glLoadIdentity();
    glScalef(.2,.2,0);
    glTranslatef(4.5,1.65,0);
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f( -0.05f, -0.4f);
    glVertex2f( 0.05f, -0.4f);

    glEnd();
    glLoadIdentity();




	glFlush();  // Render now
}


void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    //Sky
    glBegin(GL_QUADS);
    glColor3ub(219, 237, 216);
    //glVertex2f(1,0.4);
    glVertex2f(1,0.2);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    //glVertex2f(-1,0.4);
    glVertex2f(-1,0.2);
    glEnd();
     //Sun
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    int sun;

	GLfloat h121=0.7f;
	GLfloat h111=0.7f;
	GLfloat radius9 =0.2f;

	int triangleAmount9 = 100; //# of triangles used to draw circle

	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(222, 135, 22);
    glVertex2f(h121, h111); // center of circle
    for(sun = 0; sun <= triangleAmount9; sun++)
    {
        glVertex2f(h121+(radius9*cos(sun*twicePi9/triangleAmount9)), h111+(radius9*sin(sun*twicePi9/triangleAmount9)));
    }
	glEnd();
	glPopMatrix();

    //lower
    glBegin(GL_QUADS);
    glColor3ub(26, 61, 20);
    //glVertex2f(1,0.4);
    glVertex2f(1,0.2);
    glVertex2f(-1,0.2);
    glVertex2f(-1,-1);
    //glVertex2f(-1,0.4);
    glVertex2f(1,-1);
    glEnd();
    //Tree translate Scale
    glScalef(1.2,1.2,0);
    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(43, 30, 12);
    glVertex2f(-0.7,0.7);
    glVertex2f(-0.8,0.7);
    glVertex2f(-0.8,0.0);
    glVertex2f(-0.7,0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(27, 64, 26);
    glVertex2f(-0.5,0.6);
    glVertex2f(-0.75,0.8);
    glVertex2f(-1,0.6);

    glEnd();
    glLoadIdentity();





    glBegin(GL_LINES);
    //Line-1
    glColor3f(0,0,1);
    glVertex2f(-1,-0.7);
    glVertex2f(1,-0.7);
    glVertex2f(-1,-0.65);
    glVertex2f(1,-0.65);
    //Line-2
    glVertex2f(-1,-0.55);
    glVertex2f(1,-0.55);
    glVertex2f(-1,-0.5);
    glVertex2f(1,-0.5);
    //Line-3
    glColor3f(0,0,0);
    glVertex2f(-1,-0.3);
    glVertex2f(1,-0.3);
    glVertex2f(-1,-0.25);
    glVertex2f(1,-0.25);
    glEnd();



//Train
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
glBegin(GL_QUADS);
    glColor3ub(125, 181, 440);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.8,-0.1);
    glVertex2f(-0.8,-0.25);
    glVertex2f(-0.6,-0.25);
    glEnd();
    int i;

	GLfloat x=-0.8f;
	GLfloat y=-0.25f;
	GLfloat radius =.03f;

	int triangleAmount = 100; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)), y+(radius*sin(i*twicePi/triangleAmount)));
    }
	glEnd();
	int j;

	GLfloat z=-0.6f;
	GLfloat a=-0.25f;
	GLfloat radius2 =.03f;

	int triangleAmount2 = 100; //# of triangles used to draw circle

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(z, a); // center of circle
    for(j = 0; j <= triangleAmount2; j++)
    {
        glVertex2f(z+(radius2*cos(j*twicePi2/triangleAmount2)), a+(radius2*sin(j*twicePi2/triangleAmount2)));
    }
	glEnd();
	glBegin(GL_QUADS);
    glColor3ub(28, 31, 36);
    glVertex2f(-0.67,-0.1);
    glVertex2f(-0.73,-0.1);
    glVertex2f(-0.73,-0.25);
    glVertex2f(-0.67,-0.25);
    glEnd();

	glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.5,-0.2);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(125, 181, 440);
    glVertex2f(-0.3,-0.1);
    glVertex2f(-0.5,-0.1);
    glVertex2f(-0.5,-0.25);
    glVertex2f(-0.3,-0.25);
    glEnd();
    int k;

	GLfloat b=-0.5f;
	GLfloat c=-0.25f;
	GLfloat radius3 =.03f;

	int triangleAmount3 = 100;

	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(b, c); // center of circle
    for(k = 0; k <= triangleAmount3; k++)
    {
        glVertex2f(b+(radius3*cos(k*twicePi3/triangleAmount3)), c+(radius3*sin(k*twicePi3/triangleAmount3)));
    }
	glEnd();
	int l;

	GLfloat d=-0.3f;
	GLfloat e=-0.25f;
	GLfloat radius4 =.03f;

	int triangleAmount4 = 100; //# of triangles used to draw circle

	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(d, e); // center of circle
    for(l = 0; l <= triangleAmount4; l++)
    {
        glVertex2f(d+(radius4*cos(l*twicePi4/triangleAmount4)), e+(radius4*sin(l*twicePi4/triangleAmount4)));
    }
	glEnd();
	glBegin(GL_QUADS);
    glColor3ub(28, 31, 36);
    glVertex2f(-0.37,-0.1);
    glVertex2f(-0.43,-0.1);
    glVertex2f(-0.43,-0.25);
    glVertex2f(-0.37,-0.25);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(125, 181, 440);
    glVertex2f(0,-0.1);
    glVertex2f(-0.2,-0.1);
    glVertex2f(-0.2,-0.25);
    glVertex2f(0,-0.25);
    glEnd();
    int m;

	GLfloat f=-0.2f;
	GLfloat g=-0.25f;
	GLfloat radius5 =.03f;

	int triangleAmount5 = 100; //# of triangles used to draw circle

	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(f, g); // center of circle
    for(m = 0; m <= triangleAmount5; m++)
    {
        glVertex2f(f+(radius5*cos(m*twicePi5/triangleAmount5)), g+(radius5*sin(m*twicePi5/triangleAmount5)));
    }
	glEnd();

	glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.2,-0.2);
    glEnd();

	int n;

	GLfloat h=-0.0f;
	GLfloat h1=-0.25f;
	GLfloat radius6 =.03f;

	int triangleAmount6 = 100; //# of triangles used to draw circle

	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(h, h1); // center of circle
    for(n = 0; n <= triangleAmount6; n++)
    {
        glVertex2f(h+(radius5*cos(n*twicePi6/triangleAmount6)), h1+(radius6*sin(n*twicePi6/triangleAmount6)));
    }
	glEnd();
	glBegin(GL_QUADS);
    glColor3ub(28, 31, 36);
    glVertex2f(-0.07,-0.1);
    glVertex2f(-0.13,-0.1);
    glVertex2f(-0.13,-0.25);
    glVertex2f(-0.07,-0.25);
    glEnd();



	glBegin(GL_QUADS);
    glColor3ub(125, 181, 440);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.1,-0.1);
    glVertex2f(0.1,-0.25);
    glVertex2f(0.3,-0.25);
    glEnd();
    int m1;

	GLfloat f1=0.1f;
	GLfloat g1=-0.25f;
	GLfloat radius7 =.03f;

	int triangleAmount7 = 100; //# of triangles used to draw circle

	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(f1, g1); // center of circle
    for(m1 = 0; m1 <= triangleAmount7; m1++)
    {
        glVertex2f(f1+(radius7*cos(m1*twicePi7/triangleAmount7)), g1+(radius7*sin(m1*twicePi7/triangleAmount7)));
    }
	glEnd();

	glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0.0,-0.2);
    glVertex2f(0.1,-0.2);
    glEnd();

	int n1;

	GLfloat h12=0.3f;
	GLfloat h11=-0.25f;
	GLfloat radius8 =.03f;

	int triangleAmount8 = 100; //# of triangles used to draw circle

	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(h12, h11); // center of circle
    for(n1 = 0; n1 <= triangleAmount8; n1++)
    {
        glVertex2f(h12+(radius8*cos(n1*twicePi8/triangleAmount8)), h11+(radius8*sin(n1*twicePi8/triangleAmount8)));
    }
	glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 31, 36);
    glVertex2f(0.23,-0.1);
    glVertex2f(0.17,-0.1);
    glVertex2f(0.17,-0.25);
    glVertex2f(0.23,-0.25);
    glEnd();
    glPopMatrix();







    //WindMill
   glPushMatrix();
    glScalef(.2,.2,0);
    glTranslatef(4.5,1.8,0);
    glRotatef(Z,0,0.0,0.2);
    glBegin(GL_TRIANGLES);

    glColor3ub(199, 199, 199);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, 0.4f);
    glVertex2f( 0.0f, 0.4f);

    glColor3ub(199, 199, 199);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, -0.4f);
    glVertex2f( 0.0f, -0.4f);

    glColor3ub(199, 199, 199);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.4f, -0.15f);
    glVertex2f( 0.4f, 0.0f);

    glColor3ub(199, 199, 199);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.4f, 0.15f);
    glVertex2f( -0.4f, 0.0f);

    glEnd();
    glPopMatrix();
    Z+=0.5f;
    glLoadIdentity();
    glScalef(.2,.2,0);
    glTranslatef(4.5,1.65,0);
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f( -0.05f, -0.4f);
    glVertex2f( 0.05f, -0.4f);

    glEnd();
    glLoadIdentity();




	glFlush();
}

void morning() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    //Sky
    glBegin(GL_QUADS);
    glColor3ub(200, 232, 144);
    //glVertex2f(1,0.4);
    glVertex2f(1,0.2);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    //glVertex2f(-1,0.4);
    glVertex2f(-1,0.2);
    glEnd();
     //Sun
   //..........

    //lower
    glBegin(GL_QUADS);
    glColor3ub(34, 107, 38);
    //glVertex2f(1,0.4);
    glVertex2f(1,0.2);
    glVertex2f(-1,0.2);
    glVertex2f(-1,-1);
    //glVertex2f(-1,0.4);
    glVertex2f(1,-1);
    glEnd();
    //Tree translate Scale
    glScalef(1.2,1.2,0);
    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(43, 30, 12);
    glVertex2f(-0.7,0.7);
    glVertex2f(-0.8,0.7);
    glVertex2f(-0.8,0.0);
    glVertex2f(-0.7,0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(27, 64, 26);
    glVertex2f(-0.5,0.6);
    glVertex2f(-0.75,0.8);
    glVertex2f(-1,0.6);

    glEnd();
    glLoadIdentity();



    glBegin(GL_LINES);
    //Line-1
    glColor3f(0,0,1);
    glVertex2f(-1,-0.7);
    glVertex2f(1,-0.7);
    glVertex2f(-1,-0.65);
    glVertex2f(1,-0.65);
    //Line-2
    glVertex2f(-1,-0.55);
    glVertex2f(1,-0.55);
    glVertex2f(-1,-0.5);
    glVertex2f(1,-0.5);
    //Line-3
    glColor3f(0,0,0);
    glVertex2f(-1,-0.3);
    glVertex2f(1,-0.3);
    glVertex2f(-1,-0.25);
    glVertex2f(1,-0.25);
    glEnd();



//Train
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
glBegin(GL_QUADS);
    glColor3ub(125, 181, 440);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.8,-0.1);
    glVertex2f(-0.8,-0.25);
    glVertex2f(-0.6,-0.25);
    glEnd();
    int i;

	GLfloat x=-0.8f;
	GLfloat y=-0.25f;
	GLfloat radius =.03f;

	int triangleAmount = 100; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)), y+(radius*sin(i*twicePi/triangleAmount)));
    }
	glEnd();
	int j;

	GLfloat z=-0.6f;
	GLfloat a=-0.25f;
	GLfloat radius2 =.03f;

	int triangleAmount2 = 100; //# of triangles used to draw circle

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(z, a); // center of circle
    for(j = 0; j <= triangleAmount2; j++)
    {
        glVertex2f(z+(radius2*cos(j*twicePi2/triangleAmount2)), a+(radius2*sin(j*twicePi2/triangleAmount2)));
    }
	glEnd();
	glBegin(GL_QUADS);
    glColor3ub(28, 31, 36);
    glVertex2f(-0.67,-0.1);
    glVertex2f(-0.73,-0.1);
    glVertex2f(-0.73,-0.25);
    glVertex2f(-0.67,-0.25);
    glEnd();

	glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.5,-0.2);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(125, 181, 440);
    glVertex2f(-0.3,-0.1);
    glVertex2f(-0.5,-0.1);
    glVertex2f(-0.5,-0.25);
    glVertex2f(-0.3,-0.25);
    glEnd();
    int k;

	GLfloat b=-0.5f;
	GLfloat c=-0.25f;
	GLfloat radius3 =.03f;

	int triangleAmount3 = 100; //# of triangles used to draw circle

	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(b, c); // center of circle
    for(k = 0; k <= triangleAmount3; k++)
    {
        glVertex2f(b+(radius3*cos(k*twicePi3/triangleAmount3)), c+(radius3*sin(k*twicePi3/triangleAmount3)));
    }
	glEnd();
	int l;

	GLfloat d=-0.3f;
	GLfloat e=-0.25f;
	GLfloat radius4 =.03f;

	int triangleAmount4 = 100; //# of triangles used to draw circle

	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(d, e); // center of circle
    for(l = 0; l <= triangleAmount4; l++)
    {
        glVertex2f(d+(radius4*cos(l*twicePi4/triangleAmount4)), e+(radius4*sin(l*twicePi4/triangleAmount4)));
    }
	glEnd();
	glBegin(GL_QUADS);
    glColor3ub(28, 31, 36);
    glVertex2f(-0.37,-0.1);
    glVertex2f(-0.43,-0.1);
    glVertex2f(-0.43,-0.25);
    glVertex2f(-0.37,-0.25);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(125, 181, 440);
    glVertex2f(0,-0.1);
    glVertex2f(-0.2,-0.1);
    glVertex2f(-0.2,-0.25);
    glVertex2f(0,-0.25);
    glEnd();
    int m;

	GLfloat f=-0.2f;
	GLfloat g=-0.25f;
	GLfloat radius5 =.03f;

	int triangleAmount5 = 100; //# of triangles used to draw circle

	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(f, g); // center of circle
    for(m = 0; m <= triangleAmount5; m++)
    {
        glVertex2f(f+(radius5*cos(m*twicePi5/triangleAmount5)), g+(radius5*sin(m*twicePi5/triangleAmount5)));
    }
	glEnd();

	glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.2,-0.2);
    glEnd();

	int n;

	GLfloat h=-0.0f;
	GLfloat h1=-0.25f;
	GLfloat radius6 =.03f;

	int triangleAmount6 = 100; //# of triangles used to draw circle

	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(h, h1); // center of circle
    for(n = 0; n <= triangleAmount6; n++)
    {
        glVertex2f(h+(radius5*cos(n*twicePi6/triangleAmount6)), h1+(radius6*sin(n*twicePi6/triangleAmount6)));
    }
	glEnd();
	glBegin(GL_QUADS);
    glColor3ub(28, 31, 36);
    glVertex2f(-0.07,-0.1);
    glVertex2f(-0.13,-0.1);
    glVertex2f(-0.13,-0.25);
    glVertex2f(-0.07,-0.25);
    glEnd();



	glBegin(GL_QUADS);
    glColor3ub(125, 181, 440);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.1,-0.1);
    glVertex2f(0.1,-0.25);
    glVertex2f(0.3,-0.25);
    glEnd();
    int m1;

	GLfloat f1=0.1f;
	GLfloat g1=-0.25f;
	GLfloat radius7 =.03f;

	int triangleAmount7 = 100; //# of triangles used to draw circle

	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(f1, g1); // center of circle
    for(m1 = 0; m1 <= triangleAmount7; m1++)
    {
        glVertex2f(f1+(radius7*cos(m1*twicePi7/triangleAmount7)), g1+(radius7*sin(m1*twicePi7/triangleAmount7)));
    }
	glEnd();

	glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0.0,-0.2);
    glVertex2f(0.1,-0.2);
    glEnd();

	int n1;

	GLfloat h12=0.3f;
	GLfloat h11=-0.25f;
	GLfloat radius8 =.03f;

	int triangleAmount8 = 100; //# of triangles used to draw circle

	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(26, 28, 26);
    glVertex2f(h12, h11); // center of circle
    for(n1 = 0; n1 <= triangleAmount8; n1++)
    {
        glVertex2f(h12+(radius8*cos(n1*twicePi8/triangleAmount8)), h11+(radius8*sin(n1*twicePi8/triangleAmount8)));
    }
	glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 31, 36);
    glVertex2f(0.23,-0.1);
    glVertex2f(0.17,-0.1);
    glVertex2f(0.17,-0.25);
    glVertex2f(0.23,-0.25);
    glEnd();
    glPopMatrix();










    //WindMill
    glPushMatrix();
    glScalef(.2,.2,0);
    glTranslatef(4.5,1.8,0);
    glRotatef(Z,0,0.0,0.2);
    glBegin(GL_TRIANGLES);

    glColor3ub(0, 0, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, 0.4f);
    glVertex2f( 0.0f, 0.4f);

    glColor3ub(0, 0, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, -0.4f);
    glVertex2f( 0.0f, -0.4f);

    glColor3ub(0, 0, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.4f, -0.15f);
    glVertex2f( 0.4f, 0.0f);

    glColor3ub(0, 0, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.4f, 0.15f);
    glVertex2f( -0.4f, 0.0f);

    glEnd();
    glPopMatrix();
    Z+=0.5f;
    glLoadIdentity();
    glScalef(.2,.2,0);
    glTranslatef(4.5,1.65,0);
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f( -0.05f, -0.4f);
    glVertex2f( 0.05f, -0.4f);

    glEnd();
    glLoadIdentity();




	glFlush();
}




void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
   case 'a':
    speed = 0.0f;
    break;
  case 'b':
    speed = 0.1f;
    break;

case 'd':
    glutDisplayFunc(day);
    glutPostRedisplay();
    break;
case 'n':
    glutDisplayFunc(night);
    glutPostRedisplay();
    break;
case 'm':
    glutDisplayFunc(morning);
    glutPostRedisplay();
    break;

 glutPostRedisplay();
	}
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(day);
    init();
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutSpecialFunc(SpecialInput);
    glutTimerFunc(100, update, 0);
    glutIdleFunc(Idle);
    glutMainLoop();
    return 0;}
