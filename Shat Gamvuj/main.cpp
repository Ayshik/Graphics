#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include<math.h>>
# define PI           3.14159265358979323846
GLfloat Z = 0.0f;
void demo_morning();//For scaleing Loop

void sound(){
    PlaySound("a.wav",NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
}
//Right Side Nouka Funtion Start
GLfloat position = 0.0f;
GLfloat speed = 0.05f;
void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
//Right Side Nouka Funtion End
//Left  Side Nouka Funtion Start
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.03f;
void update2(int value) {

    if(position2 >1.0)
        position2 = -1.0f;

    position2 += speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}
//Left Side Nouka Funtion End
//Sun Funtion Start
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.01f;

void update3(int value) {

    if(position3 >1.0)
        position3 = -1.0f;

    position3 += speed3;

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}
//Sun Funtion End


//Cloud Funtion Start
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.05f;

void update4(int value) {

    if(position4 >1.0)
        position4 = -1.0f;

    position4 += speed4;

	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);
}
//Cloud Funtion End



void Idle(){
    glutPostRedisplay();
}

void demo_back(int val) {
    glutDisplayFunc(demo_morning);
}



//Night Display Start/////////////////////////////////////////////////////////////////////
void night() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    //Sky Start
    glBegin(GL_QUADS);
    glColor3ub(43, 35, 35);
    glVertex2f(1,.2);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,.2);
    glEnd();
    //Sky End
    //Sun or Moon
    glPushMatrix();
    glTranslatef(position3,0, 0.0f);
    int sun;

	GLfloat h121=0.4f;
	GLfloat h111=0.9f;
	GLfloat radius9 =0.08f;

	int triangleAmount9 = 100; //# of triangles used to draw circle

	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
    glVertex2f(h121, h111); // center of circle
    for(sun = 0; sun <= triangleAmount9; sun++)
    {
        glVertex2f(h121+(radius9*cos(sun*twicePi9/triangleAmount9)), h111+(radius9*sin(sun*twicePi9/triangleAmount9)));
    }
	glEnd();
	glPopMatrix();
	////Sun or Moon End
    //Star Start
    glPointSize(3);//star
  glBegin(GL_POINTS);
  glColor3ub(224, 224, 224);
  glVertex2f(-0.9,0.9);
  glVertex2f(-0.85,0.85);
   glVertex2f(-0.8,0.75);
  glVertex2f(-0.75,0.85);
  glVertex2f(-0.78,0.75);
   glVertex2f(-0.65,0.75);
    glVertex2f(-0.6,0.9);
  glVertex2f(-0.55,0.85);
  glVertex2f(-0.45,0.85);
  glVertex2f(-0.38,0.75);
   glVertex2f(-0.2,0.9);
  glVertex2f(-0.15,0.85);
  glVertex2f(-0.1,0.85);
  glVertex2f(0.75,0.85);
  glVertex2f(0.78,0.75);
    glVertex2f(0.6,0.9);
  glVertex2f(0.55,0.85);
  glVertex2f(0.45,0.85);
  glVertex2f(0.3,0.85);
  glVertex2f(0.48,0.85);
  glVertex2f(0.25,0.75);
  glEnd();
  //Star End

    //River Start
    glBegin(GL_POLYGON);
    glColor3ub(51, 122, 100);
    glVertex2f(1,.25);
    glVertex2f(-1,.25);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glEnd();
    //Nouka in river
    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(18, 28, 19);
    glVertex2f(0.97,0.1);
    glVertex2f(0.83,0.1);
    glVertex2f(0.85,0.02);
    glVertex2f(0.95,0.02);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(18, 28, 19);
    glVertex2f(0.93,.1);
    glVertex2f(0.93,.13);
    glVertex2f(0.87,0.13);
    glVertex2f(0.87,0.1);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(18, 28, 19);
    glVertex2f(-.85,.1);
    glVertex2f(-.95,.1);
    glVertex2f(-.98,.15);
    glVertex2f(-.82,.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(18, 28, 19);
    glVertex2f(-.87,.15);
    glVertex2f(-.87,.17);
    glVertex2f(-.93,.17);
    glVertex2f(-.93,.15);
    glEnd();
    glPopMatrix();
    //Nouka in river End
    //River  End

    //Ground Start
    glBegin(GL_POLYGON);
    glColor3ub(62, 199, 60);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glEnd();
    //Ground  End


    //Mosque Start
    //Mosque Base Circle Start
    int k;

	GLfloat b=-0.4f;
	GLfloat c=0.45f;
	GLfloat radius3 =.15f;

	int triangleAmount3 = 100; //# of triangles used to draw circle

	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(b, c); // center of circle
    for(k = 0; k <= triangleAmount3; k++)
    {
        glVertex2f(b+(radius3*cos(k*twicePi3/triangleAmount3)), c+(radius3*sin(k*twicePi3/triangleAmount3)));
    }
	glEnd();
	int l;

	GLfloat d=-0.1f;
	GLfloat e=0.45f;
	GLfloat radius4 =.15f;

	int triangleAmount4 = 100; //# of triangles used to draw circle

	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(d, e); // center of circle
    for(l = 0; l <= triangleAmount4; l++)
    {
        glVertex2f(d+(radius4*cos(l*twicePi4/triangleAmount4)), e+(radius4*sin(l*twicePi4/triangleAmount4)));
    }
	glEnd();
	int m;

	GLfloat f=0.2f;
	GLfloat g=0.45f;
	GLfloat radius5 =.15f;

	int triangleAmount5 = 100; //# of triangles used to draw circle

	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(f, g); // center of circle
    for(m = 0; m <= triangleAmount5; m++)
    {
        glVertex2f(f+(radius5*cos(m*twicePi5/triangleAmount5)), g+(radius5*sin(m*twicePi5/triangleAmount5)));
    }
	glEnd();
	int n;

	GLfloat h=0.4f;
	GLfloat h1=0.45f;
	GLfloat radius6 =.13f;

	int triangleAmount6 = 100; //# of triangles used to draw circle

	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(h, h1); // center of circle
    for(n = 0; n <= triangleAmount6; n++)
    {
        glVertex2f(h+(radius5*cos(n*twicePi6/triangleAmount6)), h1+(radius6*sin(n*twicePi6/triangleAmount6)));
    }
	glEnd();
	int m1;

	GLfloat f1=0.05f;
	GLfloat g1=0.45f;
	GLfloat radius7 =.1f;

	int triangleAmount7 = 100; //# of triangles used to draw circle

	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(f1, g1); // center of circle
    for(m1 = 0; m1 <= triangleAmount7; m1++)
    {
        glVertex2f(f1+(radius7*cos(m1*twicePi7/triangleAmount7)), g1+(radius7*sin(m1*twicePi7/triangleAmount7)));
    }
	glEnd();
	int n1;

	GLfloat h12=-0.25f;
	GLfloat h11=0.45f;
	GLfloat radius8 =.1f;

	int triangleAmount8 = 100; //# of triangles used to draw circle

	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(h12, h11); // center of circle
    for(n1 = 0; n1 <= triangleAmount8; n1++)
    {
        glVertex2f(h12+(radius8*cos(n1*twicePi8/triangleAmount8)), h11+(radius8*sin(n1*twicePi8/triangleAmount8)));
    }
	glEnd();
	//Mosque Base Circle End
    //Mosque Base Start
    glBegin(GL_POLYGON);
    glColor3ub(105, 30, 15);
    glVertex2f(.6,0);
    glVertex2f(.6,.4);
    glVertex2f(.3,.5);
    glVertex2f(-.3,.5);
    glVertex2f(-.6,.4);
    glVertex2f(-.6,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(31, 22, 20);
    glVertex2f(.1,0);
    glVertex2f(.1,.2);
    glVertex2f(0,.3);
    glVertex2f(-.1,.2);
    glVertex2f(-.1,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(31, 22, 20);
    glVertex2f(.3,0);
    glVertex2f(.3,.2);
    glVertex2f(.2,.2);
    glVertex2f(.2,.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(31, 22, 20);
    glVertex2f(.5,0);
    glVertex2f(.5,.2);
    glVertex2f(.4,.2);
    glVertex2f(.4,.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(31, 22, 20);
    glVertex2f(-.2,0);
    glVertex2f(-.2,.2);
    glVertex2f(-.3,.2);
    glVertex2f(-.3,.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(31, 22, 20);
    glVertex2f(-.4,0);
    glVertex2f(-.4,.2);
    glVertex2f(-.5,.2);
    glVertex2f(-.5,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(.5,.3);
    glVertex2f(.5,.32);
    glVertex2f(.4,.32);
    glVertex2f(.4,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(.3,.3);
    glVertex2f(.3,.32);
    glVertex2f(.2,.32);
    glVertex2f(.2,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(-.2,.3);
    glVertex2f(-.2,.32);
    glVertex2f(-.3,.32);
    glVertex2f(-.3,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(-.4,.3);
    glVertex2f(-.4,.32);
    glVertex2f(-.5,.32);
    glVertex2f(-.5,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(.1,.35);
    glVertex2f(.1,.37);
    glVertex2f(-.1,.37);
    glVertex2f(-.1,.35);
    glEnd();
    //Mosque Base End
    //Mosque GOMBHUJ Start
    glBegin(GL_QUADS);
    glColor3ub(105, 30, 15);
    glVertex2f(-.6,0);
    glVertex2f(-.6,.6);
    glVertex2f(-.8,.6);
    glVertex2f(-.8,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(105, 30, 15);
    glVertex2f(.8,0);
    glVertex2f(.8,.6);
    glVertex2f(.6,.6);
    glVertex2f(.6,0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-.6,0);
    glVertex2f(-.6,.6);
    glColor3f(1,1,1);
    glVertex2f(.6,0);
    glVertex2f(.6,.6);
    glEnd();
    int i;

	GLfloat x=-0.7f;
	GLfloat y=0.6f;
	GLfloat radius =.15f;

	int triangleAmount = 100; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)), y+(radius*sin(i*twicePi/triangleAmount)));
    }
	glEnd();
	int j;

	GLfloat z=0.7f;
	GLfloat a=0.6f;
	GLfloat radius2 =.15f;

	int triangleAmount2 = 100; //# of triangles used to draw circle

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(z, a); // center of circle
    for(j = 0; j <= triangleAmount2; j++)
    {
        glVertex2f(z+(radius2*cos(j*twicePi2/triangleAmount2)), a+(radius2*sin(j*twicePi2/triangleAmount2)));
    }
	glEnd();
    //Mosque GOMBHUJ End
    //Mosque End


    //Road Start
    glBegin(GL_QUADS);
    glColor3ub(158, 66, 35);
    glVertex2f(.1,0);
    glVertex2f(-.1,0);
    glVertex2f(-.4,-1);
    glVertex2f(.4,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(158, 66, 35);
    glVertex2f(.8,0);
    glVertex2f(-.8,0);
    glVertex2f(-.8,-.05);
    glVertex2f(.8,-.05);
    glEnd();

     //Road Right side Tree
     glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.2);
    glVertex2f(.3,0);
    glVertex2f(.4,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.5,0);
    glVertex2f(.35,.1);
    glVertex2f(.2,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.5,0.05);
    glVertex2f(.35,.2);
    glVertex2f(.2,.05);
    glEnd();
    //Road Left side tree
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.2);
    glVertex2f(-.3,0);
    glVertex2f(-.4,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(-.5,0);
    glVertex2f(-.2,0);
    glVertex2f(-.35,.1);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(-.5,0.05);
    glVertex2f(-.2,.05);
    glVertex2f(-.35,.2);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glTranslatef(.03,-.1,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.06,-.2,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.09,-.3,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.12,-.4,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.15,-.5,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.18,-.6,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();


    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glTranslatef(-.03,-.1,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.06,-.2,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.09,-.3,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.12,-.4,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.15,-.5,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.18,-.6,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    //Road End


    //Ground Right Tree Start
    //Tree-1
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(.7,-.5);
    glVertex2f(.7,-.2);
    glVertex2f(.6,-.2);
    glVertex2f(.6,-.5);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,.05,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();
    glTranslatef(0,.1,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();
    glTranslatef(0,.15,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();
    glTranslatef(0,.2,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();
    //Tree 1 End

    //Tree 2
    glTranslatef(0.5,-0.6,0);
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.2);
    glVertex2f(.3,0);
    glVertex2f(.4,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.5,0);
    glVertex2f(.35,.1);
    glVertex2f(.2,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.5,0.05);
    glVertex2f(.35,.2);
    glVertex2f(.2,.05);
    glEnd();
    glLoadIdentity();

    //Ground Right Tree End


    //Ground Left Tree Start
    //Tree1
    glTranslatef(-1.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(.7,-.5);
    glVertex2f(.7,-.2);
    glVertex2f(.6,-.2);
    glVertex2f(.6,-.5);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,0.05,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,.054,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,.055,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,.056,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();

    //Ground Left Tree End




    //WindMill Start
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



    glPushMatrix();
    glScalef(.2,.2,0);
    glTranslatef(-4.5,1.8,0);
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
    Z+=0.1f;
    glLoadIdentity();
    glScalef(.2,.2,0);
    glTranslatef(-4.5,1.65,0);
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f( -0.05f, -0.4f);
    glVertex2f( 0.05f, -0.4f);

    glEnd();
    glLoadIdentity();
    //WindMill End


    glutTimerFunc(4000,demo_back,0);
    glFlush();
}
//Night Display End
void demo_night(int val) {
    glutDisplayFunc(night);
}
//Day Display Start////////////////////////////////////////////////////////////
void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    //Sky Start
    glBegin(GL_QUADS);
    glColor3ub(227, 200, 200);
    glVertex2f(1,.2);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,.2);
    glEnd();
    //Sky End
    //Sun or Moon
    glPushMatrix();
    glTranslatef(position3,0, 0.0f);
    int sun;

	GLfloat h121=0.4f;
	GLfloat h111=0.9f;
	GLfloat radius9 =0.08f;

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
	////Sun or Moon End


    //River Start
    glBegin(GL_POLYGON);
    glColor3ub(51, 122, 100);
    glVertex2f(1,.25);
    glVertex2f(-1,.25);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glEnd();
    //Nouka in river
    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(18, 28, 19);
    glVertex2f(0.97,0.1);
    glVertex2f(0.83,0.1);
    glVertex2f(0.85,0.02);
    glVertex2f(0.95,0.02);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(18, 28, 19);
    glVertex2f(0.93,.1);
    glVertex2f(0.93,.13);
    glVertex2f(0.87,0.13);
    glVertex2f(0.87,0.1);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(18, 28, 19);
    glVertex2f(-.85,.1);
    glVertex2f(-.95,.1);
    glVertex2f(-.98,.15);
    glVertex2f(-.82,.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(18, 28, 19);
    glVertex2f(-.87,.15);
    glVertex2f(-.87,.17);
    glVertex2f(-.93,.17);
    glVertex2f(-.93,.15);
    glEnd();
    glPopMatrix();
    //Nouka in river End
    //River  End

    //Ground Start
    glBegin(GL_POLYGON);
    glColor3ub(62, 199, 60);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glEnd();
    //Ground  End


    //Mosque Start
    //Mosque Base Circle Start
    int k;

	GLfloat b=-0.4f;
	GLfloat c=0.45f;
	GLfloat radius3 =.15f;

	int triangleAmount3 = 100; //# of triangles used to draw circle

	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(b, c); // center of circle
    for(k = 0; k <= triangleAmount3; k++)
    {
        glVertex2f(b+(radius3*cos(k*twicePi3/triangleAmount3)), c+(radius3*sin(k*twicePi3/triangleAmount3)));
    }
	glEnd();
	int l;

	GLfloat d=-0.1f;
	GLfloat e=0.45f;
	GLfloat radius4 =.15f;

	int triangleAmount4 = 100; //# of triangles used to draw circle

	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(d, e); // center of circle
    for(l = 0; l <= triangleAmount4; l++)
    {
        glVertex2f(d+(radius4*cos(l*twicePi4/triangleAmount4)), e+(radius4*sin(l*twicePi4/triangleAmount4)));
    }
	glEnd();
	int m;

	GLfloat f=0.2f;
	GLfloat g=0.45f;
	GLfloat radius5 =.15f;

	int triangleAmount5 = 100; //# of triangles used to draw circle

	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(f, g); // center of circle
    for(m = 0; m <= triangleAmount5; m++)
    {
        glVertex2f(f+(radius5*cos(m*twicePi5/triangleAmount5)), g+(radius5*sin(m*twicePi5/triangleAmount5)));
    }
	glEnd();
	int n;

	GLfloat h=0.4f;
	GLfloat h1=0.45f;
	GLfloat radius6 =.13f;

	int triangleAmount6 = 100; //# of triangles used to draw circle

	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(h, h1); // center of circle
    for(n = 0; n <= triangleAmount6; n++)
    {
        glVertex2f(h+(radius5*cos(n*twicePi6/triangleAmount6)), h1+(radius6*sin(n*twicePi6/triangleAmount6)));
    }
	glEnd();
	int m1;

	GLfloat f1=0.05f;
	GLfloat g1=0.45f;
	GLfloat radius7 =.1f;

	int triangleAmount7 = 100; //# of triangles used to draw circle

	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(f1, g1); // center of circle
    for(m1 = 0; m1 <= triangleAmount7; m1++)
    {
        glVertex2f(f1+(radius7*cos(m1*twicePi7/triangleAmount7)), g1+(radius7*sin(m1*twicePi7/triangleAmount7)));
    }
	glEnd();
	int n1;

	GLfloat h12=-0.25f;
	GLfloat h11=0.45f;
	GLfloat radius8 =.1f;

	int triangleAmount8 = 100; //# of triangles used to draw circle

	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(h12, h11); // center of circle
    for(n1 = 0; n1 <= triangleAmount8; n1++)
    {
        glVertex2f(h12+(radius8*cos(n1*twicePi8/triangleAmount8)), h11+(radius8*sin(n1*twicePi8/triangleAmount8)));
    }
	glEnd();
	//Mosque Base Circle End
    //Mosque Base Start
    glBegin(GL_POLYGON);
    glColor3ub(105, 30, 15);
    glVertex2f(.6,0);
    glVertex2f(.6,.4);
    glVertex2f(.3,.5);
    glVertex2f(-.3,.5);
    glVertex2f(-.6,.4);
    glVertex2f(-.6,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(31, 22, 20);
    glVertex2f(.1,0);
    glVertex2f(.1,.2);
    glVertex2f(0,.3);
    glVertex2f(-.1,.2);
    glVertex2f(-.1,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(31, 22, 20);
    glVertex2f(.3,0);
    glVertex2f(.3,.2);
    glVertex2f(.2,.2);
    glVertex2f(.2,.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(31, 22, 20);
    glVertex2f(.5,0);
    glVertex2f(.5,.2);
    glVertex2f(.4,.2);
    glVertex2f(.4,.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(31, 22, 20);
    glVertex2f(-.2,0);
    glVertex2f(-.2,.2);
    glVertex2f(-.3,.2);
    glVertex2f(-.3,.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(31, 22, 20);
    glVertex2f(-.4,0);
    glVertex2f(-.4,.2);
    glVertex2f(-.5,.2);
    glVertex2f(-.5,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(.5,.3);
    glVertex2f(.5,.32);
    glVertex2f(.4,.32);
    glVertex2f(.4,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(.3,.3);
    glVertex2f(.3,.32);
    glVertex2f(.2,.32);
    glVertex2f(.2,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(-.2,.3);
    glVertex2f(-.2,.32);
    glVertex2f(-.3,.32);
    glVertex2f(-.3,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(-.4,.3);
    glVertex2f(-.4,.32);
    glVertex2f(-.5,.32);
    glVertex2f(-.5,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(.1,.35);
    glVertex2f(.1,.37);
    glVertex2f(-.1,.37);
    glVertex2f(-.1,.35);
    glEnd();
    //Mosque Base End
    //Mosque GOMBHUJ Start
    glBegin(GL_QUADS);
    glColor3ub(105, 30, 15);
    glVertex2f(-.6,0);
    glVertex2f(-.6,.6);
    glVertex2f(-.8,.6);
    glVertex2f(-.8,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(105, 30, 15);
    glVertex2f(.8,0);
    glVertex2f(.8,.6);
    glVertex2f(.6,.6);
    glVertex2f(.6,0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-.6,0);
    glVertex2f(-.6,.6);
    glColor3f(1,1,1);
    glVertex2f(.6,0);
    glVertex2f(.6,.6);
    glEnd();
    int i;

	GLfloat x=-0.7f;
	GLfloat y=0.6f;
	GLfloat radius =.15f;

	int triangleAmount = 100; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)), y+(radius*sin(i*twicePi/triangleAmount)));
    }
	glEnd();
	int j;

	GLfloat z=0.7f;
	GLfloat a=0.6f;
	GLfloat radius2 =.15f;

	int triangleAmount2 = 100; //# of triangles used to draw circle

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(z, a); // center of circle
    for(j = 0; j <= triangleAmount2; j++)
    {
        glVertex2f(z+(radius2*cos(j*twicePi2/triangleAmount2)), a+(radius2*sin(j*twicePi2/triangleAmount2)));
    }
	glEnd();
    //Mosque GOMBHUJ End
    //Mosque End


    //Road Start
    glBegin(GL_QUADS);
    glColor3ub(158, 66, 35);
    glVertex2f(.1,0);
    glVertex2f(-.1,0);
    glVertex2f(-.4,-1);
    glVertex2f(.4,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(158, 66, 35);
    glVertex2f(.8,0);
    glVertex2f(-.8,0);
    glVertex2f(-.8,-.05);
    glVertex2f(.8,-.05);
    glEnd();

     //Road Right side Tree
     glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.2);
    glVertex2f(.3,0);
    glVertex2f(.4,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.5,0);
    glVertex2f(.35,.1);
    glVertex2f(.2,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.5,0.05);
    glVertex2f(.35,.2);
    glVertex2f(.2,.05);
    glEnd();
    //Road Left side tree
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.2);
    glVertex2f(-.3,0);
    glVertex2f(-.4,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(-.5,0);
    glVertex2f(-.2,0);
    glVertex2f(-.35,.1);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(-.5,0.05);
    glVertex2f(-.2,.05);
    glVertex2f(-.35,.2);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glTranslatef(.03,-.1,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.06,-.2,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.09,-.3,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.12,-.4,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.15,-.5,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.18,-.6,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();


    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glTranslatef(-.03,-.1,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.06,-.2,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.09,-.3,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.12,-.4,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.15,-.5,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.18,-.6,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    //Road End


    //Ground Right Tree Start
    //Tree-1
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(.7,-.5);
    glVertex2f(.7,-.2);
    glVertex2f(.6,-.2);
    glVertex2f(.6,-.5);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,.05,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();
    glTranslatef(0,.1,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();
    glTranslatef(0,.15,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();
    glTranslatef(0,.2,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();
    //Tree 1 End

    //Tree 2
    glTranslatef(0.5,-0.6,0);
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.2);
    glVertex2f(.3,0);
    glVertex2f(.4,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.5,0);
    glVertex2f(.35,.1);
    glVertex2f(.2,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.5,0.05);
    glVertex2f(.35,.2);
    glVertex2f(.2,.05);
    glEnd();
    glLoadIdentity();

    //Ground Right Tree End


    //Ground Left Tree Start
    //Tree1
    glTranslatef(-1.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(.7,-.5);
    glVertex2f(.7,-.2);
    glVertex2f(.6,-.2);
    glVertex2f(.6,-.5);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,0.05,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,.054,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,.055,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,.056,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();

    //Ground Left Tree End




    //WindMill Start
    glPushMatrix();
    glScalef(.2,.2,0);
    glTranslatef(4.5,1.8,0);
    glRotatef(Z,0,0.0,0.2);
    glBegin(GL_TRIANGLES);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, 0.4f);
    glVertex2f( 0.0f, 0.4f);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, -0.4f);
    glVertex2f( 0.0f, -0.4f);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.4f, -0.15f);
    glVertex2f( 0.4f, 0.0f);

    glColor3ub(50, 69, 50);
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




    glPushMatrix();
    glScalef(.2,.2,0);
    glTranslatef(-4.5,1.8,0);
    glRotatef(Z,0,0.0,0.2);
    glBegin(GL_TRIANGLES);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, 0.4f);
    glVertex2f( 0.0f, 0.4f);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, -0.4f);
    glVertex2f( 0.0f, -0.4f);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.4f, -0.15f);
    glVertex2f( 0.4f, 0.0f);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.4f, 0.15f);
    glVertex2f( -0.4f, 0.0f);

    glEnd();
    glPopMatrix();
    Z+=0.1f;
    glLoadIdentity();
    glScalef(.2,.2,0);
    glTranslatef(-4.5,1.65,0);
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f( -0.05f, -0.4f);
    glVertex2f( 0.05f, -0.4f);

    glEnd();
    glLoadIdentity();
    //WindMill End



     //Cloud Start
    //Cloud 1 Start
    glPushMatrix();
    glTranslatef(position4, 0.0f, 0.0f);
   x=-0.9f;  y=0.9f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.85f;  y=0.875f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-0.85f;  y=0.94f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
		x=-0.79f;  y=0.94f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
         glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.79f;  y=0.9f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();//cloud_end2
	glPopMatrix();
    //Cloud 1 End

    //Cloud 2 Start
    glPushMatrix();
    glTranslatef(position4, 0.0f, 0.0f);
	glTranslatef(.4,0,0);
	x=-0.9f;  y=0.9f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.85f;  y=0.875f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-0.85f;  y=0.94f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
		x=-0.79f;  y=0.94f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
         glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.79f;  y=0.9f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();//cloud_end2
	glPopMatrix();
	glLoadIdentity();
	//Cloud 2 End

	//Cloud 3 Start
	glPushMatrix();
    glTranslatef(position4, 0.0f, 0.0f);
	glTranslatef(.7,-.07,0);
	x=-0.9f;  y=0.9f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.85f;  y=0.875f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-0.85f;  y=0.94f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
		x=-0.79f;  y=0.94f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
         glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.79f;  y=0.9f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();//cloud_end2
	glPopMatrix();
	glLoadIdentity();
	//Cloud 3 End

	//Cloud 4 Start
	glPushMatrix();
    glTranslatef(position4, 0.0f, 0.0f);
	glTranslatef(1.5,-.07,0);
	x=-0.9f;  y=0.9f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.85f;  y=0.875f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-0.85f;  y=0.94f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
		x=-0.79f;  y=0.94f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
         glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.79f;  y=0.9f;  radius =.05f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
          glColor3ub(204, 235, 255);
		glVertex2f(x, y); //cloud
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();//cloud_end2
	glPopMatrix();
	glLoadIdentity();

	//Cloud 4 End
//Cloud End



    glutTimerFunc(4000,demo_night,0);
    glFlush();
}
//Day Display End
void demo_day(int val) {
    glutDisplayFunc(day);
}
//Morning Display Start
void morning() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    //Sky Start
    glBegin(GL_QUADS);
    glColor3ub(235, 235, 235);
    glVertex2f(1,.2);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,.2);
    glEnd();
    //Sky End
    //Sun or Moon
    glPushMatrix();
    glTranslatef(position3,0, 0.0f);
    int sun;

	GLfloat h121=0.4f;
	GLfloat h111=0.9f;
	GLfloat radius9 =0.08f;

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
	////Sun or Moon End


    //River Start
    glBegin(GL_POLYGON);
    glColor3ub(51, 122, 100);
    glVertex2f(1,.25);
    glVertex2f(-1,.25);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glEnd();
    //Nouka in river
    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(18, 28, 19);
    glVertex2f(0.97,0.1);
    glVertex2f(0.83,0.1);
    glVertex2f(0.85,0.02);
    glVertex2f(0.95,0.02);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(18, 28, 19);
    glVertex2f(0.93,.1);
    glVertex2f(0.93,.13);
    glVertex2f(0.87,0.13);
    glVertex2f(0.87,0.1);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(18, 28, 19);
    glVertex2f(-.85,.1);
    glVertex2f(-.95,.1);
    glVertex2f(-.98,.15);
    glVertex2f(-.82,.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(18, 28, 19);
    glVertex2f(-.87,.15);
    glVertex2f(-.87,.17);
    glVertex2f(-.93,.17);
    glVertex2f(-.93,.15);
    glEnd();
    glPopMatrix();
    //Nouka in river End
    //River  End

    //Ground Start
    glBegin(GL_POLYGON);
    glColor3ub(62, 199, 60);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glEnd();
    //Ground  End


    //Mosque Start
    //Mosque Base Circle Start
    int k;

	GLfloat b=-0.4f;
	GLfloat c=0.45f;
	GLfloat radius3 =.15f;

	int triangleAmount3 = 100; //# of triangles used to draw circle

	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(b, c); // center of circle
    for(k = 0; k <= triangleAmount3; k++)
    {
        glVertex2f(b+(radius3*cos(k*twicePi3/triangleAmount3)), c+(radius3*sin(k*twicePi3/triangleAmount3)));
    }
	glEnd();
	int l;

	GLfloat d=-0.1f;
	GLfloat e=0.45f;
	GLfloat radius4 =.15f;

	int triangleAmount4 = 100; //# of triangles used to draw circle

	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(d, e); // center of circle
    for(l = 0; l <= triangleAmount4; l++)
    {
        glVertex2f(d+(radius4*cos(l*twicePi4/triangleAmount4)), e+(radius4*sin(l*twicePi4/triangleAmount4)));
    }
	glEnd();
	int m;

	GLfloat f=0.2f;
	GLfloat g=0.45f;
	GLfloat radius5 =.15f;

	int triangleAmount5 = 100; //# of triangles used to draw circle

	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(f, g); // center of circle
    for(m = 0; m <= triangleAmount5; m++)
    {
        glVertex2f(f+(radius5*cos(m*twicePi5/triangleAmount5)), g+(radius5*sin(m*twicePi5/triangleAmount5)));
    }
	glEnd();
	int n;

	GLfloat h=0.4f;
	GLfloat h1=0.45f;
	GLfloat radius6 =.13f;

	int triangleAmount6 = 100; //# of triangles used to draw circle

	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(h, h1); // center of circle
    for(n = 0; n <= triangleAmount6; n++)
    {
        glVertex2f(h+(radius5*cos(n*twicePi6/triangleAmount6)), h1+(radius6*sin(n*twicePi6/triangleAmount6)));
    }
	glEnd();
	int m1;

	GLfloat f1=0.05f;
	GLfloat g1=0.45f;
	GLfloat radius7 =.1f;

	int triangleAmount7 = 100; //# of triangles used to draw circle

	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(f1, g1); // center of circle
    for(m1 = 0; m1 <= triangleAmount7; m1++)
    {
        glVertex2f(f1+(radius7*cos(m1*twicePi7/triangleAmount7)), g1+(radius7*sin(m1*twicePi7/triangleAmount7)));
    }
	glEnd();
	int n1;

	GLfloat h12=-0.25f;
	GLfloat h11=0.45f;
	GLfloat radius8 =.1f;

	int triangleAmount8 = 100; //# of triangles used to draw circle

	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(h12, h11); // center of circle
    for(n1 = 0; n1 <= triangleAmount8; n1++)
    {
        glVertex2f(h12+(radius8*cos(n1*twicePi8/triangleAmount8)), h11+(radius8*sin(n1*twicePi8/triangleAmount8)));
    }
	glEnd();
	//Mosque Base Circle End
    //Mosque Base Start
    glBegin(GL_POLYGON);
    glColor3ub(105, 30, 15);
    glVertex2f(.6,0);
    glVertex2f(.6,.4);
    glVertex2f(.3,.5);
    glVertex2f(-.3,.5);
    glVertex2f(-.6,.4);
    glVertex2f(-.6,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(31, 22, 20);
    glVertex2f(.1,0);
    glVertex2f(.1,.2);
    glVertex2f(0,.3);
    glVertex2f(-.1,.2);
    glVertex2f(-.1,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(31, 22, 20);
    glVertex2f(.3,0);
    glVertex2f(.3,.2);
    glVertex2f(.2,.2);
    glVertex2f(.2,.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(31, 22, 20);
    glVertex2f(.5,0);
    glVertex2f(.5,.2);
    glVertex2f(.4,.2);
    glVertex2f(.4,.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(31, 22, 20);
    glVertex2f(-.2,0);
    glVertex2f(-.2,.2);
    glVertex2f(-.3,.2);
    glVertex2f(-.3,.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(31, 22, 20);
    glVertex2f(-.4,0);
    glVertex2f(-.4,.2);
    glVertex2f(-.5,.2);
    glVertex2f(-.5,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(.5,.3);
    glVertex2f(.5,.32);
    glVertex2f(.4,.32);
    glVertex2f(.4,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(.3,.3);
    glVertex2f(.3,.32);
    glVertex2f(.2,.32);
    glVertex2f(.2,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(-.2,.3);
    glVertex2f(-.2,.32);
    glVertex2f(-.3,.32);
    glVertex2f(-.3,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(-.4,.3);
    glVertex2f(-.4,.32);
    glVertex2f(-.5,.32);
    glVertex2f(-.5,.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(28, 41, 32);
    glVertex2f(.1,.35);
    glVertex2f(.1,.37);
    glVertex2f(-.1,.37);
    glVertex2f(-.1,.35);
    glEnd();
    //Mosque Base End
    //Mosque GOMBHUJ Start
    glBegin(GL_QUADS);
    glColor3ub(105, 30, 15);
    glVertex2f(-.6,0);
    glVertex2f(-.6,.6);
    glVertex2f(-.8,.6);
    glVertex2f(-.8,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(105, 30, 15);
    glVertex2f(.8,0);
    glVertex2f(.8,.6);
    glVertex2f(.6,.6);
    glVertex2f(.6,0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-.6,0);
    glVertex2f(-.6,.6);
    glColor3f(1,1,1);
    glVertex2f(.6,0);
    glVertex2f(.6,.6);
    glEnd();
    int i;

	GLfloat x=-0.7f;
	GLfloat y=0.6f;
	GLfloat radius =.15f;

	int triangleAmount = 100; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)), y+(radius*sin(i*twicePi/triangleAmount)));
    }
	glEnd();
	int j;

	GLfloat z=0.7f;
	GLfloat a=0.6f;
	GLfloat radius2 =.15f;

	int triangleAmount2 = 100; //# of triangles used to draw circle

	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(69, 23, 13);
    glVertex2f(z, a); // center of circle
    for(j = 0; j <= triangleAmount2; j++)
    {
        glVertex2f(z+(radius2*cos(j*twicePi2/triangleAmount2)), a+(radius2*sin(j*twicePi2/triangleAmount2)));
    }
	glEnd();
    //Mosque GOMBHUJ End
    //Mosque End


    //Road Start
    glBegin(GL_QUADS);
    glColor3ub(158, 66, 35);
    glVertex2f(.1,0);
    glVertex2f(-.1,0);
    glVertex2f(-.4,-1);
    glVertex2f(.4,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(158, 66, 35);
    glVertex2f(.8,0);
    glVertex2f(-.8,0);
    glVertex2f(-.8,-.05);
    glVertex2f(.8,-.05);
    glEnd();

     //Road Right side Tree
     glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.2);
    glVertex2f(.3,0);
    glVertex2f(.4,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.5,0);
    glVertex2f(.35,.1);
    glVertex2f(.2,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.5,0.05);
    glVertex2f(.35,.2);
    glVertex2f(.2,.05);
    glEnd();
    //Road Left side tree
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.2);
    glVertex2f(-.3,0);
    glVertex2f(-.4,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(-.5,0);
    glVertex2f(-.2,0);
    glVertex2f(-.35,.1);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(-.5,0.05);
    glVertex2f(-.2,.05);
    glVertex2f(-.35,.2);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glTranslatef(.03,-.1,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.06,-.2,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.09,-.3,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.12,-.4,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.15,-.5,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(.18,-.6,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(.4,-.3);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.1);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-.3);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();


    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glTranslatef(-.03,-.1,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.06,-.2,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.09,-.3,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.12,-.4,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.15,-.5,0);
    glBegin(GL_POLYGON);
    glColor3ub(33, 138, 28);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.18,-.6,0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 69, 12);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.2);
    glVertex2f(-.3,-.1);
    glVertex2f(-.2,-.2);
    glVertex2f(-.2,-.3);
    glVertex2f(-.3,-.4);
    glEnd();
    glLoadIdentity();
    //Road End


    //Ground Right Tree Start
    //Tree-1
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(.7,-.5);
    glVertex2f(.7,-.2);
    glVertex2f(.6,-.2);
    glVertex2f(.6,-.5);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,.05,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();
    glTranslatef(0,.1,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();
    glTranslatef(0,.15,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();
    glTranslatef(0,.2,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();
    //Tree 1 End

    //Tree 2
    glTranslatef(0.5,-0.6,0);
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(.4,-.2);
    glVertex2f(.3,-.2);
    glVertex2f(.3,0);
    glVertex2f(.4,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.5,0);
    glVertex2f(.35,.1);
    glVertex2f(.2,0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.5,0.05);
    glVertex2f(.35,.2);
    glVertex2f(.2,.05);
    glEnd();
    glLoadIdentity();

    //Ground Right Tree End


    //Ground Left Tree Start
    //Tree1
    glTranslatef(-1.3,0,0);
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 5);
    glVertex2f(.7,-.5);
    glVertex2f(.7,-.2);
    glVertex2f(.6,-.2);
    glVertex2f(.6,-.5);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,0.05,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,.054,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,.055,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glTranslatef(0,.056,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(9, 61, 9);
    glVertex2f(.65,-.1);
    glVertex2f(.5,-.2);
    glVertex2f(.8,-.2);
    glEnd();
    glLoadIdentity();

    //Ground Left Tree End




    //WindMill Start
    glPushMatrix();
    glScalef(.2,.2,0);
    glTranslatef(4.5,1.8,0);
    glRotatef(Z,0,0.0,0.2);
    glBegin(GL_TRIANGLES);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, 0.4f);
    glVertex2f( 0.0f, 0.4f);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, -0.4f);
    glVertex2f( 0.0f, -0.4f);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.4f, -0.15f);
    glVertex2f( 0.4f, 0.0f);

    glColor3ub(50, 69, 50);
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



    glPushMatrix();
    glScalef(.2,.2,0);
    glTranslatef(-4.5,1.8,0);
    glRotatef(Z,0,0.0,0.2);
    glBegin(GL_TRIANGLES);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, 0.4f);
    glVertex2f( 0.0f, 0.4f);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, -0.4f);
    glVertex2f( 0.0f, -0.4f);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.4f, -0.15f);
    glVertex2f( 0.4f, 0.0f);

    glColor3ub(50, 69, 50);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.4f, 0.15f);
    glVertex2f( -0.4f, 0.0f);

    glEnd();
    glPopMatrix();
    Z+=0.1f;
    glLoadIdentity();
    glScalef(.2,.2,0);
    glTranslatef(-4.5,1.65,0);
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f( -0.05f, -0.4f);
    glVertex2f( 0.05f, -0.4f);

    glEnd();
    glLoadIdentity();
    //WindMill End

    glutTimerFunc(4000,demo_day,0);
    glFlush();
}
//Morning Display End
void demo_morning()
{
       glutDisplayFunc(morning);
}
//Mouse Interaction Start
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
    {
			speed4 += 0.05f;
            speed3 += 0.05f;
    }
    if (button == GLUT_RIGHT_BUTTON)
	{
	    speed4 -= 0.05f;
	    speed3 -= 0.05f;
    }
	glutPostRedisplay();}
//Mouse Interaction End
//Special Key Start
void SpecialInput(int key, int x, int y){
    switch(key)
        {
            case GLUT_KEY_UP:
                speed4=0.1;
                break;
            case GLUT_KEY_DOWN:
                speed4=0.05;
                break;
            case GLUT_KEY_LEFT:
                speed3=0.1;
                break;
            case GLUT_KEY_RIGHT:
                speed3=0.01;
                break;
        }
        glutPostRedisplay();
}
//Special key End
//Handle Key Start
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p'://Cloud Pause
    speed4 = 0.0f;
    break;
case 's'://Cloud move
    speed4 = 0.05f;
    break;
case 'a'://Sun Pause
    speed3 = 0.0f;
    break;
case 'b'://Sun Move
    speed3= 0.01f;
    break;
case 'm':
    glutDisplayFunc(morning);
    glutPostRedisplay();
    break;
case 'd':
    glutDisplayFunc(day);
    glutPostRedisplay();
    break;
case 'n':
    glutDisplayFunc(night);
    glutPostRedisplay();
    break;

glutPostRedisplay();
	}
}
//Handle key End
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Project");
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(demo_morning);
	int();
	glutKeyboardFunc(handleKeypress);
	glutMouseFunc(handleMouse);
	glutSpecialFunc(SpecialInput);
	glutTimerFunc(100, update, 0);
	glutTimerFunc(100, update2, 0);
	glutTimerFunc(100, update3, 0);
	glutTimerFunc(100, update4, 0);
	glutIdleFunc(Idle);
	sound();
	glutMainLoop();
	return 0;
}
