#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <cstdio>
#include<math.h>
#include<iostream>
using namespace std;

# define PI 3.14159265358979323846

GLfloat position = 0.0f;
GLfloat speed = 0.0f;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.005f;

float _move_cloud_1 = 0.00f; //
float _move_cloud_2 = 0.00f;
float _move_cloud_3 = 0.00f;

float car_move = 0.00f;
float truck_move = 0.00f;
float train_move = 0.00f;

float plane_move = 0.00f;


///view for default page

char Instructions[] = "Instructions:";
char Instructions1[] = "Press D for Day View";
char Instructions2[] = "Press N for Night View";

void myInit(void) //
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 970.0, 0.0, 720.0);
}

void Idle() // Keyboard Interaction
{
    glutPostRedisplay();     /// marks the current window as needing to be redisplayed
}

void print( float x, float y, char *st)  // default Page Print
{
    int l,i;

    l=strlen( st );                 /// see how many characters are in text string.
    glColor3f(0,0,0);
                                    /// glDisable(GL_LIGHTING);
    glRasterPos2f( x, y);           /// location to start printing text

    for( i=0; i < l; i++)           /// loop until i is greater then l
        {
           glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, st[i]);
        }
}

void topprint( float x, float y, char *st) // default Page
{
    int l,i;

    l=strlen( st );                  /// see how many characters are in text string.
    glColor3f(0,0,0);
                                     ///glDisable(GL_LIGHTING);
    glRasterPos2f( x, y);            /// location to start printing text

    for( i=0; i < l; i++)            /// loop until i is greater then l
        {
           glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);
        }
}



void printview( float x, float y, char *st) // Default Page
{
    int l,i;

    l=strlen( st );                 /// see how many characters are in text string.
    glColor3f(1,0,1);
                                    ///glDisable(GL_LIGHTING);
    glRasterPos2f( x, y);           /// location to start printing text

    for( i=0; i < l; i++)           /// loop until i is greater then l
        {
           glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);
        }
}


void update_car(int value) // ID =201
{
    car_move += 0.0025f;
    if(car_move-1.3 > 1.0)
        {
            car_move = -1.0;
        }
	glutPostRedisplay();                    ///Notify GLUT that the display has changed
	glutTimerFunc(4.6, update_car, 0);       ///Notify GLUT to call update again in 20 milliseconds
}

void update_truck(int value)  // ID = 202
{
    truck_move += 0.0025f;
    if(truck_move-1.3 > 1.0)
        {
            truck_move = -1.0;
        }
	glutPostRedisplay();                    ///Notify GLUT that the display has changed
	glutTimerFunc(7.8, update_truck, 0);     ///Notify GLUT to call update again in 20 milliseconds
}

void update_train(int value) //// ID =203
{
    train_move += 0.0025f;
    if(train_move-1.3 > 1.0)
        {
            train_move = -1.0;
        }
	glutPostRedisplay();                    ///Notify GLUT that the display has changed
	glutTimerFunc(6, update_train, 0);     ///Notify GLUT to call update again in 20 milliseconds
}


void update_plane(int value)  // ID =204
{
    plane_move += 0.0025f;
    if(plane_move-1.3 > 1.0)
        {
            plane_move = -1.0;
        }
	glutPostRedisplay();                    ///Notify GLUT that the display has changed
	glutTimerFunc(5, update_plane, 0);     ///Notify GLUT to call update again in 20 milliseconds
}


void WalkWay() // ID = 801 = Walkway
{

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.9,-.65);
    glVertex2f(-.8,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.7,-.65);
    glVertex2f(-.6,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.5,-.65);
    glVertex2f(-.4,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.3,-.65);
    glVertex2f(-.2,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.1,-.65);
    glVertex2f(0,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.1,-.65);
    glVertex2f(.2,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.3,-.65);
    glVertex2f(.4,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.5,-.65);
    glVertex2f(.6,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.7,-.65);
    glVertex2f(.8,-.65);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.9,-.65);
    glVertex2f(1,-.65);
    glEnd();

    ///1st
    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.98,-.51);
    glVertex2f(-.93,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.9,-.51);
    glVertex2f(-.85,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.82,-.51);
    glVertex2f(-.77,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.74,-.51);
    glVertex2f(-.69,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.66,-.51);
    glVertex2f(-.61,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.58,-.51);
    glVertex2f(-.53,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.5,-.51);
    glVertex2f(-.45,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.42,-.51);
    glVertex2f(-.37,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.34,-.51);
    glVertex2f(-.29,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.26,-.51);
    glVertex2f(-.21,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.18,-.51);
    glVertex2f(-.13,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.1,-.51);
    glVertex2f(-.05,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.02,-.51);
    glVertex2f(.03,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.06,-.51);
    glVertex2f(.11,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.14,-.51);
    glVertex2f(.19,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.22,-.51);
    glVertex2f(.27,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.3,-.51);
    glVertex2f(.35,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.38,-.51);
    glVertex2f(.43,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.46,-.51);
    glVertex2f(.51,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.54,-.51);
    glVertex2f(.59,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.62,-.51);
    glVertex2f(.67,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.7,-.51);
    glVertex2f(.75,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.78,-.51);
    glVertex2f(.83,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.86,-.51);
    glVertex2f(.91,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.94,-.51);
    glVertex2f(.99,-.51);
    glEnd();

    ///2nd
    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.98,-.79);
    glVertex2f(-.93,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.9,-.79);
    glVertex2f(-.85,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.82,-.79);
    glVertex2f(-.77,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.74,-.79);
    glVertex2f(-.69,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.66,-.79);
    glVertex2f(-.61,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.58,-.79);
    glVertex2f(-.53,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.5,-.79);
    glVertex2f(-.45,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.42,-.79);
    glVertex2f(-.37,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.34,-.79);
    glVertex2f(-.29,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.26,-.79);
    glVertex2f(-.21,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.18,-.79);
    glVertex2f(-.13,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.1,-.79);
    glVertex2f(-.05,-.79);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.02,-.79);
    glVertex2f(.03,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.06,-.79);
    glVertex2f(.11,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.14,-.79);
    glVertex2f(.19,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.22,-.79);
    glVertex2f(.27,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.3,-.79);
    glVertex2f(.35,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.38,-.79);
    glVertex2f(.43,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.46,-.79);
    glVertex2f(.51,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.54,-.79);
    glVertex2f(.59,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.62,-.79);
    glVertex2f(.67,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.7,-.79);
    glVertex2f(.75,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.78,-.79);
    glVertex2f(.83,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.86,-.79);
    glVertex2f(.91,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.94,-.79);
    glVertex2f(.99,-.79);
    glEnd();
}

void cloud_left() //ID =802 = cloud_left
{
    ///Cloud on the left
    glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.74,0.87,0);
    glScalef(0.6,1.0,1.0);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
        glTranslatef(-0.70,0.91,0);
        glScalef(0.6,1.0,1.0);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.65,0.88,0);
    glScalef(0.6,1.0,1.0);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.07;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.61,0.80,0);
    glScalef(0.6,1.0,1.0);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.68,0.77,0);
    glScalef(0.6,1.0,1.0);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.75,0.78,0);
    glScalef(0.6,1.0,1.0);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();
}

void cloud_right()  // ID = 803 = cloud_right
{
    ///Cloud on the right
    glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.78,0.70,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.74,0.75,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.70,0.79,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.65,0.76,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.07;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.61,0.76,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.68,0.65,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.63,0.66,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.75,0.66,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();
}

void sky(int x,int y, int z) // ID = 804 = sky
{
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(-1,1);
    glVertex2f(-1,-.1);
    glVertex2f(1,-.1);
    glVertex2f(1,1);
    glEnd();
}

void fgrass(int x,int y,int z) // ID = 805 = front grass
{
    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(-1,-.1);
    glVertex2f(-1,-.5);
    glVertex2f(1,-.5);
    glVertex2f(1,-.1);
    glEnd();
}

void road()                         // ID = 806= road
{
    glBegin(GL_QUADS);
    glColor3ub(15, 15, 15);
    glVertex2f(-1,-.5);
    glVertex2f(-1,-.8);
    glVertex2f(1,-.8);
    glVertex2f(1,-.5);
    glEnd();
}

void wheels(float xx,float yy,float rr,int r,int g,int b)  // for Moving Truck
{
    int i;

	GLfloat x=xx; GLfloat y=yy; GLfloat radius =rr;
	int triangleAmount = 20;                ///# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(r,g,b);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
                       y + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
}

void movingtruck()  // ID = 807 = movingtruck
{
    glTranslatef(-.1,-.22,0);
    glScalef(.8,.65,0);

    glPushMatrix();
    glTranslatef(truck_move, 0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(65,105,225); //truck body
    glVertex2f(-.8,-.42);
    glVertex2f(-.8,-.57);
    glVertex2f(-.6,-.57);
    glVertex2f(-.6,-.42);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(65,105,225); //truck body
    glVertex2f(-.6,-.45);
    glVertex2f(-.6,-.57);
    glVertex2f(-.45,-.57);
    glVertex2f(-.45,-.52);
    glVertex2f(-.55,-.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);   //truck glass
    glVertex2f(-.589,-.46);
    glVertex2f(-.589,-.52);
    glVertex2f(-.47,-.52);
    glVertex2f(-.55,-.46);
    glEnd();

    ///last wheel of truck
    wheels(-.760,-.57,.03,100, 101, 102);
    wheels(-.760,-.57,.02,255, 255, 255);
    wheels(-.760,-.57,.01,8, 8, 8);

    ///first wheel of truck
    wheels(-.5,-.57,.03,100, 101, 102);
    wheels(-.5,-.57,.02,255, 255, 255);
    wheels(-.5,-.57,.01,8, 8, 8);
    glPopMatrix();
}

void movingcar()                   // ID = 808 = movingcar
{
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(-car_move, 0.0f, 0.0f);

    ///body
    glBegin(GL_POLYGON);
    glColor3ub(255,165,0);
    glVertex2f(.7,-.64);
    glVertex2f(.67,-.71);
    glVertex2f(.65,-.7);
    glVertex2f(.65,-.72);
    glVertex2f(.82,-.72);
    glVertex2f(.82,-.67);
    glVertex2f(.8,-.64);
    glEnd();

    ///first window
    glBegin(GL_QUADS);
    glColor3ub(120, 113, 114);
    glVertex2f(.7,-.65);
    glVertex2f(.67,-.69);
    glVertex2f(.72,-.69);
    glVertex2f(.72,-.65);
    glEnd();

    ///2nd window
    glBegin(GL_QUADS);
    glColor3ub(120, 113, 114);
    glVertex2f(.73,-.65);
    glVertex2f(.73,-.69);
    glVertex2f(.76,-.69);
    glVertex2f(.76,-.65);
    glEnd();

    ///3rd window
    glBegin(GL_QUADS);
    glColor3ub(120, 113, 114);
    glVertex2f(.77,-.65);
    glVertex2f(.77,-.69);
    glVertex2f(.81,-.69);
    glVertex2f(.79,-.65);
    glEnd();

    ///last wheel of car
    wheels(.68,-.72,.02,100, 101, 102);
    wheels(.68,-.72,.01,255, 255, 255);
    wheels(.68,-.72,.005,8, 8, 8);

    ///first wheel of car
    wheels(.79,-.72,.02,100, 101, 102);
    wheels(.79,-.72,.01,255, 255, 255);
    wheels(.79,-.72,.005,8, 8, 8);
    glPopMatrix();
}

void lgrass(int x,int y, int z)  	// ID = 809 = left grass
{
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(-1,-.8);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-.8);
    glEnd();
}

void sun()                  // ID = 810 = sun
{
    int i;

	GLfloat x=0.45f; GLfloat y=.85f; GLfloat radius =.1f;
	int triangleAmount = 20;            ///# of triangles used to draw circle
                                        ///GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 78);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++)
        {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
                       y + (radius * sin(i * twicePi / triangleAmount)));
        }
	glEnd();
}



void movingtrain()            // ID = 811 = moving train
{
    glLoadIdentity();

    glTranslatef(-.1,-.24,0);
    glScalef(.7,.5,0);
    glPushMatrix();

    glTranslatef(train_move, 0.0f, 0.0f);



    ///1st Compartment

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(-.8,-.225);
    glVertex2f(-.8,-.365);
    glVertex2f(-.5,-.365);
    glVertex2f(-.5,-.225);
    glEnd();





    //1st window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.775,-.245);
    glVertex2f(-.775,-.29);
    glVertex2f(-.725,-.29);
    glVertex2f(-.725,-.245);
    glEnd();

    //2nd window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.705,-.245);
    glVertex2f(-.705,-.29);
    glVertex2f(-.655,-.29);
    glVertex2f(-.655,-.245);
    glEnd();

    //3rd window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.635,-.245);
    glVertex2f(-.635,-.29);
    glVertex2f(-.585,-.29);
    glVertex2f(-.585,-.245);
    glEnd();


    ///4th window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.565,-.245);
    glVertex2f(-.565,-.29);
    glVertex2f(-.515,-.29);
    glVertex2f(-.515,-.245);
    glEnd();


    //middle line

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0,255,255);
    glVertex2f(-.8,-.32);
    glVertex2f(-.5,-.32);
    glEnd();


    //line

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.5,-.35);
    glVertex2f(-.48,-.35);
    glEnd();


    glPopMatrix();
    glPushMatrix();
    glTranslatef(train_move, 0.0f, 0.0f);



    ///2nd Compartment


    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(-.48,-.225);
    glVertex2f(-.48,-.365);
    glVertex2f(-.18,-.365);
    glVertex2f(-.18,-.225);
    glEnd();






    //middle line

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0,255,255);
    glVertex2f(-.48,-.32);
    glVertex2f(-.18,-.32);
    glEnd();


    //line

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.18,-.35);
    glVertex2f(-.16,-.35);
    glEnd();


     //1st window


    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.455,-.245);
    glVertex2f(-.455,-.29);
    glVertex2f(-.405,-.29);
    glVertex2f(-.405,-.245);
    glEnd();

    //2nd window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.385,-.245);
    glVertex2f(-.385,-.29);
    glVertex2f(-.335,-.29);
    glVertex2f(-.335,-.245);
    glEnd();

    //3rd window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.315,-.245);
    glVertex2f(-.315,-.29);
    glVertex2f(-.265,-.29);
    glVertex2f(-.265,-.245);
    glEnd();


    //4th window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.245,-.245);
    glVertex2f(-.245,-.29);
    glVertex2f(-.195,-.29);
    glVertex2f(-.195,-.245);
    glEnd();


    glPopMatrix();
    glPushMatrix();
    glTranslatef(train_move, 0.0f, 0.0f);


    ///3rd Compartment


    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2f(-.16,-.225);
    glVertex2f(-.16,-.365);
    glVertex2f(.16,-.365);
    glVertex2f(.16,-.225);
    glEnd();


    //middle line

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0,255,255);
    glVertex2f(-.16,-.32);
    glVertex2f(.16,-.32);
    glEnd();

    //line

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.16,-.35);
    glVertex2f(.18,-.35);
    glEnd();


    //1st window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.135,-.245);
    glVertex2f(-.135,-.29);
    glVertex2f(-.085,-.29);
    glVertex2f(-.085,-.245);
    glEnd();

    ///2ndwindow

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.065,-.245);
    glVertex2f(-.065,-.29);
    glVertex2f(-.015,-.29);
    glVertex2f(-.015,-.245);
    glEnd();

    ///3rdwindow

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.0005,-.245);
    glVertex2f(-.0005,-.29);
    glVertex2f(0.055,-.29);
    glVertex2f(0.055,-.245);
    glEnd();


    ///4thwindow

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(.075,-.245);
    glVertex2f(.075,-.29);
    glVertex2f(.128,-.29);
    glVertex2f(.128,-.245);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(train_move, 0.0f, 0.0f);


    ///Engine


    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
    glVertex2f(.18,-.225);
    glVertex2f(.18,-.365);
    glVertex2f(.48,-.365);
    glVertex2f(.48,-.29);
    glVertex2f(.4,-.225);
    glEnd();



    ///Engine Single window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(.38,-.24);
    glVertex2f(.38,-.29);
    glVertex2f(.455,-.29);
    glVertex2f(.39,-.24);
    glEnd();


    ///midleline

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0,255,255);
    glVertex2f(.18,-.32);
    glVertex2f(.48,-.32);
    glEnd();
    glPopMatrix();
}


void building(int x , int y , int z)            // ID = 812 = Building
{
  //body

    glBegin(GL_QUADS);
    glColor3ub(73, 118, 184);
    glVertex2f(-.98,.5);
    glVertex2f(-.98,-.1);
    glVertex2f(-.8,-.1);
    glVertex2f(-.8,.5);
    glEnd();


    //topline



    glLineWidth(5.0);
    glBegin(GL_LINES);
    glColor3f(.5,.2,.2);
    glVertex2f(-.98,.48);
    glVertex2f(-.8,.48);
    glEnd();


    //window


    glBegin(GL_QUADS);
glColor3ub(255,255,255);
    glVertex2f(-.94,.46);
    glVertex2f(-.94,.40);
    glVertex2f(-.9,.40);
    glVertex2f(-.9,.46);
    glEnd();


    glBegin(GL_QUADS);

    glVertex2f(-.88,.46);
    glVertex2f(-.88,.4);
    glVertex2f(-.84,.4);
    glVertex2f(-.84,.46);
    glEnd();



    //window


    glBegin(GL_QUADS);

    glVertex2f(-.94,.36);
    glVertex2f(-.94,.3);
    glVertex2f(-.9,.3);
    glVertex2f(-.9,.36);
    glEnd();


    glBegin(GL_QUADS);

    glVertex2f(-.88,.36);
    glVertex2f(-.88,.3);
    glVertex2f(-.84,.3);
    glVertex2f(-.84,.36);
    glEnd();


     //window


    glBegin(GL_QUADS);

    glVertex2f(-.94,.26);
    glVertex2f(-.94,.2);
    glVertex2f(-.9,.2);
    glVertex2f(-.9,.26);
    glEnd();


    glBegin(GL_QUADS);

    glVertex2f(-.88,.26);
    glVertex2f(-.88,.2);
    glVertex2f(-.84,.2);
    glVertex2f(-.84,.26);
    glEnd();



 //window


    glBegin(GL_QUADS);

    glVertex2f(-.94,.16);
    glVertex2f(-.94,.1);
    glVertex2f(-.9,.1);
    glVertex2f(-.9,.16);
    glEnd();


    glBegin(GL_QUADS);

    glVertex2f(-.88,.16);
    glVertex2f(-.88,.1);
    glVertex2f(-.84,.1);
    glVertex2f(-.84,.16);
    glEnd();



    //window


    glBegin(GL_QUADS);

    glVertex2f(-.94,.06);
    glVertex2f(-.94,0);
    glVertex2f(-.9,0);
    glVertex2f(-.9,.06);
    glEnd();


    glBegin(GL_QUADS);

    glVertex2f(-.88,.06);
    glVertex2f(-.88,0);
    glVertex2f(-.84,0);
    glVertex2f(-.84,.06);
    glEnd();


    //door


    glBegin(GL_QUADS);
glColor3ub(160,82,45);
    glVertex2f(-.912,-.01);
    glVertex2f(-.912,-.1);
    glVertex2f(-.867,-.1);
    glVertex2f(-.867,-.01);
    glEnd();





}





void university(){ // ID = University = 813



    //body

    glBegin(GL_QUADS);
    glColor3ub(0,250,154);
    glVertex2f(-.78,.4);
    glVertex2f(-.78,-.1);
    glVertex2f(0,-.1);
    glVertex2f(0,.4);
    glEnd();



    //midle body


    glBegin(GL_QUADS);
    glColor3ub(0,139,139);
    glVertex2f(-.455,-.1);
    glVertex2f(-.455,.39);
    glVertex2f(-.3,.39);
    glVertex2f(-.3,-.1);
    glEnd();


    //midle line1

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-.78,.22);
    glVertex2f(0,.22);
    glEnd();


     //midle line2

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-.78,.05);
    glVertex2f(0,.05);
    glEnd();


    //straight line1

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-.62,.39);
    glVertex2f(-.62,-.1);
    glEnd();




//straight line2

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-.15,.39);
    glVertex2f(-.15,-.1);
    glEnd();



    //windowlefttop1


     glBegin(GL_QUADS);

    glVertex2f(-.77,.385);
    glVertex2f(-.77,.31);
    glVertex2f(-.71,.31);
    glVertex2f(-.71,.385);
    glEnd();


    //windowlefttop2





     glBegin(GL_QUADS);

    glVertex2f(-.7,.385);
    glVertex2f(-.7,.31);
    glVertex2f(-.64,.31);
    glVertex2f(-.64,.385);
    glEnd();




    //windowlefttop3


     glBegin(GL_QUADS);

    glVertex2f(-.77,.2);
    glVertex2f(-.77,.125);
    glVertex2f(-.71,.125);
    glVertex2f(-.71,.2);
    glEnd();





    //windowlefttop4


     glBegin(GL_QUADS);

    glVertex2f(-.7,.2);
    glVertex2f(-.7,.125);
    glVertex2f(-.64,.125);
    glVertex2f(-.64,.2);
    glEnd();



    //windowlefttop5


     glBegin(GL_QUADS);

    glVertex2f(-.77,.03);
    glVertex2f(-.77,-0.045);
    glVertex2f(-.71,-0.045);
    glVertex2f(-.71,.03);
    glEnd();





    //windowlefttop6


     glBegin(GL_QUADS);

    glVertex2f(-.7,.03);
    glVertex2f(-.7,-0.045);
    glVertex2f(-.64,-0.045);
    glVertex2f(-.64,.03);
    glEnd();






     //windowlefttop7


     glBegin(GL_QUADS);

    glVertex2f(-.61,.385);
    glVertex2f(-.61,.31);
    glVertex2f(-.55,.31);
    glVertex2f(-.55,.385);
    glEnd();


    //windowlefttop8





     glBegin(GL_QUADS);

    glVertex2f(-.54,.385);
    glVertex2f(-.54,.31);
    glVertex2f(-.48,.31);
    glVertex2f(-.48,.385);
    glEnd();




    //windowlefttop9


     glBegin(GL_QUADS);

    glVertex2f(-.61,.2);
    glVertex2f(-.61,.125);
    glVertex2f(-.55,.125);
    glVertex2f(-.55,.2);
    glEnd();





    //windowlefttop10


     glBegin(GL_QUADS);

    glVertex2f(-.54,.2);
   glVertex2f(-.54,.125);
    glVertex2f(-.48,.125);
    glVertex2f(-.48,.2);
    glEnd();



    //windowlefttop11


     glBegin(GL_QUADS);

    glVertex2f(-.61,.03);
    glVertex2f(-.61,-0.045);
    glVertex2f(-.55,-0.045);
    glVertex2f(-.55,.03);
    glEnd();





    //windowlefttop12


    glBegin(GL_QUADS);

    glVertex2f(-.54,.03);
    glVertex2f(-.54,-0.045);
    glVertex2f(-.48,-0.045);
    glVertex2f(-.48,.03);
    glEnd();




    //windowrighttop1


     glBegin(GL_QUADS);

    glVertex2f(-.29,.385);
    glVertex2f(-.29,.31);
    glVertex2f(-.228,.31);
    glVertex2f(-.228,.385);
    glEnd();


    //windowrighttop2





     glBegin(GL_QUADS);

    glVertex2f(-.218,.385);
    glVertex2f(-.218,.31);
    glVertex2f(-.16,.31);
    glVertex2f(-.16,.385);
    glEnd();




    //windowrighttop3


     glBegin(GL_QUADS);

    glVertex2f(-.29,.2);
    glVertex2f(-.29,.125);
    glVertex2f(-.228,.125);
    glVertex2f(-.228,.2);
    glEnd();





    //windowrighttop4


     glBegin(GL_QUADS);

    glVertex2f(-.218,.2);
    glVertex2f(-.218,.125);
    glVertex2f(-.16,.125);
    glVertex2f(-.16,.2);
    glEnd();



    //windowrighttop5


     glBegin(GL_QUADS);

    glVertex2f(-.29,.03);
    glVertex2f(-.29,-0.045);
    glVertex2f(-.228,-0.045);
    glVertex2f(-.228,.03);
    glEnd();





    //windowrightttop6


     glBegin(GL_QUADS);

    glVertex2f(-.218,.03);
    glVertex2f(-.218,-0.045);
    glVertex2f(-.16,-0.045);
    glVertex2f(-.16,.03);
    glEnd();




    //windowrighttop7


     glBegin(GL_QUADS);

    glVertex2f(-.14,.385);
    glVertex2f(-.14,.31);
    glVertex2f(-.082,.31);
    glVertex2f(-.082,.385);
    glEnd();


    //windowrighttop8





     glBegin(GL_QUADS);

    glVertex2f(-.072,.385);
    glVertex2f(-.072,.31);
    glVertex2f(-.014,.31);
    glVertex2f(-.014,.385);
    glEnd();




    //windowrighttop9


     glBegin(GL_QUADS);

    glVertex2f(-.14,.2);
    glVertex2f(-.14,.125);
    glVertex2f(-.082,.125);
    glVertex2f(-.082,.2);
    glEnd();





    //windowrighttop10


     glBegin(GL_QUADS);

    glVertex2f(-.072,.2);
    glVertex2f(-.072,.125);
    glVertex2f(-.014,.125);
    glVertex2f(-.014,.2);
    glEnd();



    //windowrighttop11


     glBegin(GL_QUADS);

    glVertex2f(-.14,.03);
    glVertex2f(-.14,-0.045);
    glVertex2f(-.082,-0.045);
    glVertex2f(-.082,.03);
    glEnd();





    //windowrightttop12


     glBegin(GL_QUADS);

    glVertex2f(-.072,.03);
    glVertex2f(-.072,-0.045);
    glVertex2f(-.014,-0.045);
    glVertex2f(-.014,.03);
    glEnd();


    //middle windows///



    ///middle door///

glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.380f,-0.01f,0.0f);
    glBegin(GL_QUADS);
glColor3ub(160,82,45);
    glVertex2f(-.042,.03);
    glVertex2f(-.042,-0.09);
    glVertex2f(.04,-0.09);
    glVertex2f(.04,.03);
    glEnd();



}

void rail_line(){  // iD = Rail Line = 814

    glLoadIdentity();
    glLineWidth(14.0);
    glBegin(GL_LINES);
    glColor3f(.76,.31,.23);
    glVertex2f(-1,-.44);
    glVertex2f(1,-.44);
    glEnd();

    glLoadIdentity();
    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.95,-.416);
    glVertex2f(-.95,-.466);

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.90,-.416);
    glVertex2f(-.90,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.85,-.416);
    glVertex2f(-.85,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.80,-.416);
    glVertex2f(-.80,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.75,-.416);
    glVertex2f(-.75,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.70,-.416);
    glVertex2f(-.70,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.65,-.416);
    glVertex2f(-.65,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.60,-.416);
    glVertex2f(-.60,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.55,-.416);
    glVertex2f(-.55,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.50,-.416);
    glVertex2f(-.50,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.45,-.416);
    glVertex2f(-.45,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.40,-.416);
    glVertex2f(-.40,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.35,-.416);
    glVertex2f(-.35,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.30,-.416);
    glVertex2f(-.30,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.25,-.416);
    glVertex2f(-.25,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.20,-.416);
    glVertex2f(-.20,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.15,-.416);
    glVertex2f(-.15,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.10,-.416);
    glVertex2f(-.10,-.466);
    glEnd();
    glLineWidth(4.0);

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.05,-.416);
    glVertex2f(-.05,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.00,-.416);
    glVertex2f(.00,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.05,-.416);
    glVertex2f(.05,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.10,-.416);
    glVertex2f(.10,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.15,-.416);
    glVertex2f(.15,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.20,-.416);
    glVertex2f(.20,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.25,-.416);
    glVertex2f(.25,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.30,-.416);
    glVertex2f(.30,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.35,-.416);
    glVertex2f(.35,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.40,-.416);
    glVertex2f(.40,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.45,-.416);
    glVertex2f(.45,-.466);
    glEnd();


    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.50,-.416);
    glVertex2f(.50,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.55,-.416);
    glVertex2f(.55,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.60,-.416);
    glVertex2f(.60,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.65,-.416);
    glVertex2f(.65,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.70,-.416);
    glVertex2f(.70,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.75,-.416);
    glVertex2f(.75,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.80,-.416);
    glVertex2f(.80,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.85,-.416);
    glVertex2f(.85,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.90,-.416);
    glVertex2f(.90,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.95,-.416);
    glVertex2f(.95,-.466);
    glEnd();
}



void drawCircle(int a,int b,int c){   // ID = Building1 Circle = 815

    int i;
    glScalef(0.9,1,1);

	GLfloat x=0.358f; GLfloat y=.5235f; GLfloat radius =.088f;
	int triangleAmount = 20;


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(240,240,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


void building1(int x,int y ,int z,int a,int b,int c){   //ID = Shopping Mall ' = 816

    //body
    glBegin(GL_QUADS);
    glColor3ub(240,240,255);
    glVertex2f(.02,.51);
    glVertex2f(.02,-.1);
    glVertex2f(.68,-.1);
    glVertex2f(.68,.51);
    glEnd();


    //leftbody
    glBegin(GL_QUADS);
    glColor3ub(240,240,255);
    glVertex2f(.02,.42);
    glVertex2f(.02,.565);
    glVertex2f(.1,.565);
    glVertex2f(.1,.42);
    glEnd();


    //rightbody
    glBegin(GL_QUADS);
    glColor3ub(240,240,255);
    glVertex2f(.6,.42);
    glVertex2f(.6,.564);
    glVertex2f(.68,.565);
    glVertex2f(.68,.42);
    glEnd();




    //leftredbody


    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);
    glVertex2f(.105,.50);
    glVertex2f(.105,-.1);
    glVertex2f(.265,-.1);
    glVertex2f(.265,.50);
    glEnd();

    //rightredbody


    glTranslatef(.34,0,0);


    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);
    glVertex2f(.105,.50);
    glVertex2f(.105,-.1);
    glVertex2f(.265,-.1);
    glVertex2f(.265,.50);
    glEnd();


    //first window

    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window

    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



       //first window
    glTranslatef(.0,-.176,0);

    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



    //2nd window


    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();




    //first window
    glTranslatef(.0,-.175,0);

    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



//first window

    glTranslatef(.308,.345,0);
    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();


    //2nd window


    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



       //first window
    glTranslatef(.0,-.176,0);

    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



    //2nd window


    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();




    //first window
    glTranslatef(.0,-.175,0);

    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



    ///////////////midle/////////////////



    glTranslatef(-.13,.415,0);
    glScalef(.85,.85,0);


    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(.1,.48);
    glVertex2f(.1,-.18);
    glVertex2f(.23,-.18);
    glVertex2f(.23,.48);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();


       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();


       //first window
    glTranslatef(.0,-.176,0);

    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();


       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();




    //first window
    glTranslatef(.0,-.175,0);

    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();


    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(.29,-.1);
    glVertex2f(.29,.07);
    glVertex2f(.35,.07);
    glVertex2f(.35,-.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(150, 69, 19);
    glVertex2f(.30,-.1);
    glVertex2f(.30,.06);
    glVertex2f(.34,.06);
    glVertex2f(.34,-.1);
    glEnd();

}


void building1night(int x,int y ,int z,int a,int b,int c){   //ID = Shopping Mall Night View = 832

    //body
    glBegin(GL_QUADS);
    glColor3ub(240,240,255);
    glVertex2f(.02,.51);
    glVertex2f(.02,-.1);
    glVertex2f(.68,-.1);
    glVertex2f(.68,.51);
    glEnd();


    //leftbody
    glBegin(GL_QUADS);
    glColor3ub(240,240,255);
    glVertex2f(.02,.42);
    glVertex2f(.02,.565);
    glVertex2f(.1,.565);
    glVertex2f(.1,.42);
    glEnd();


    //rightbody
    glBegin(GL_QUADS);
    glColor3ub(240,240,255);
    glVertex2f(.6,.42);
    glVertex2f(.6,.564);
    glVertex2f(.68,.565);
    glVertex2f(.68,.42);
    glEnd();




    //leftredbody


    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);
    glVertex2f(.105,.50);
    glVertex2f(.105,-.1);
    glVertex2f(.265,-.1);
    glVertex2f(.265,.50);
    glEnd();

    //rightredbody


    glTranslatef(.34,0,0);


    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);
    glVertex2f(.105,.50);
    glVertex2f(.105,-.1);
    glVertex2f(.265,-.1);
    glVertex2f(.265,.50);
    glEnd();


    //first window

    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window

    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



       //first window
    glTranslatef(.0,-.176,0);

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



    //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();




    //first window
    glTranslatef(.0,-.175,0);

    glBegin(GL_QUADS);
   glColor3ub(255,255,0);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



//first window

    glTranslatef(.308,.345,0);
    glBegin(GL_QUADS);
   glColor3ub(255,255,0);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();


    //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



       //first window
    glTranslatef(.0,-.176,0);

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
   glColor3ub(255,255,0);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



    //2nd windowww


    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
   glColor3ub(255,255,0);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();




    //first window
    glTranslatef(.0,-.175,0);

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



    ///////////////midle/////////////////



    glTranslatef(-.13,.415,0);
    glScalef(.85,.85,0);


    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(.1,.48);
    glVertex2f(.1,-.18);
    glVertex2f(.23,-.18);
    glVertex2f(.23,.48);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();


       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();


       //first window
    glTranslatef(.0,-.176,0);

    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();


       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();




    //first window
    glTranslatef(.0,-.175,0);

    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();


    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(.29,-.1);
    glVertex2f(.29,.07);
    glVertex2f(.35,.07);
    glVertex2f(.35,-.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(150, 69, 19);
    glVertex2f(.30,-.1);
    glVertex2f(.30,.06);
    glVertex2f(.34,.06);
    glVertex2f(.34,-.1);
    glEnd();

}







void drawCircle2(float xx,float yy,float r,int rr,int g,int b){

    int i;
    glScalef(0.9,1,1);

	GLfloat x=xx; GLfloat y=yy; GLfloat radius =r;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(rr,g,b);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

void hotel(int x,int y,int z){  // ID = Hotel = 817

    //circles

    glLoadIdentity();


    //rightbody

    glBegin(GL_QUADS);
    glColor3ub(139,0,0);
    glVertex2f(.73,.4);
    glVertex2f(.73,-.02);
    glVertex2f(.997,-.02);
    glVertex2f(.997,.4);
    glEnd();

    glLoadIdentity();
    //brownbody
    glLineWidth(12.0);

    glBegin(GL_LINES);
    glColor3ub(139,69,19);
    glVertex2f(.72,.5);
    glVertex2f(.72,-.02);
    glEnd();

   glLoadIdentity();
   //greenbody
   glLineWidth(14.0);
   glBegin(GL_LINES);
   glColor3ub(160,82,45);
   glVertex2f(.68,.44);
   glVertex2f(.68,-.02);
   glEnd();


    //windowsss/////////


    glTranslatef(.65,-.1,0);


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



    /////again windowss

    glLoadIdentity();


    glTranslatef(.65,-.275,0);


     glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



    //windows endsss/////////



    //windows////////////////
    glLoadIdentity();

    glTranslatef(.773,-.1,0);


     //glTranslatef(.65,-.1,0);


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();

       //2nd window

    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



    /////again windowss

    glLoadIdentity();


    glTranslatef(.773,-.274,0);


     glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();
/////////////windows ends

    //midcircle

    glLoadIdentity();

    drawCircle2(.888,-.014,.06,48, 48, 48);

    glLoadIdentity();

//downbody
    glBegin(GL_QUADS);
    glColor3ub(139,0,0);
    glVertex2f(.618,-.02);
    glVertex2f(.618,-.1);
    glVertex2f(.997,-.1);
    glVertex2f(.997,-.02);
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.8635,-.03);
    glVertex2f(.8635,-.075);
    glVertex2f(.922,-.075);
    glVertex2f(.922,-.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.928,-.03);
    glVertex2f(.928,-.075);
    glVertex2f(.9865,-.075);
    glVertex2f(.9865,-.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.68,-.03);
    glVertex2f(.68,-.075);
    glVertex2f(.7385,-.075);
    glVertex2f(.7385,-.03);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.625,-.03);
    glVertex2f(.625,-.075);
    glVertex2f(.677,-.075);
    glVertex2f(.677,-.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(165,42,42);
    glVertex2f(.74,-.03);
    glVertex2f(.74,-.1);
    glVertex2f(.8618,-.1);
    glVertex2f(.8618,-.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.76,-.03);
    glVertex2f(.76,-.1);
    glVertex2f(.84,-.1);
    glVertex2f(.84,-.03);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.8,-.03);
    glVertex2f(.8,-.1);
    glEnd();


}



void hotelnight(int x,int y,int z){  // ID = Hotel Night = 833

    //circles

    glLoadIdentity();


    //rightbody

    glBegin(GL_QUADS);
    glColor3ub(139,0,0);
    glVertex2f(.73,.4);
    glVertex2f(.73,-.02);
    glVertex2f(.997,-.02);
    glVertex2f(.997,.4);
    glEnd();

    glLoadIdentity();
    //brownbody
    glLineWidth(12.0);

    glBegin(GL_LINES);
    glColor3ub(139,69,19);
    glVertex2f(.72,.5);
    glVertex2f(.72,-.02);
    glEnd();

   glLoadIdentity();
   //greenbody
   glLineWidth(14.0);
   glBegin(GL_LINES);
   glColor3ub(160,82,45);
   glVertex2f(.68,.44);
   glVertex2f(.68,-.02);
   glEnd();


    //windowsss/////////


    glTranslatef(.65,-.1,0);


    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



    /////again windowss

    glLoadIdentity();


    glTranslatef(.65,-.275,0);


     glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
   glColor3ub(255,255,0);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



    //windows endsss/////////



    //windows////////////////
    glLoadIdentity();

    glTranslatef(.773,-.1,0);


     //glTranslatef(.65,-.1,0);


    glBegin(GL_QUADS);
   glColor3ub(255,255,0);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();

       //2nd window

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



    /////again windowss

    glLoadIdentity();


    glTranslatef(.773,-.274,0);


     glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();
/////////////windows ends

    //midcircle

    glLoadIdentity();

    drawCircle2(.888,-.014,.06,48, 48, 48);

    glLoadIdentity();

//downbody
    glBegin(GL_QUADS);
    glColor3ub(139,0,0);
    glVertex2f(.618,-.02);
    glVertex2f(.618,-.1);
    glVertex2f(.997,-.1);
    glVertex2f(.997,-.02);
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.8635,-.03);
    glVertex2f(.8635,-.075);
    glVertex2f(.922,-.075);
    glVertex2f(.922,-.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.928,-.03);
    glVertex2f(.928,-.075);
    glVertex2f(.9865,-.075);
    glVertex2f(.9865,-.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.68,-.03);
    glVertex2f(.68,-.075);
    glVertex2f(.7385,-.075);
    glVertex2f(.7385,-.03);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.625,-.03);
    glVertex2f(.625,-.075);
    glVertex2f(.677,-.075);
    glVertex2f(.677,-.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(165,42,42);
    glVertex2f(.74,-.03);
    glVertex2f(.74,-.1);
    glVertex2f(.8618,-.1);
    glVertex2f(.8618,-.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.76,-.03);
    glVertex2f(.76,-.1);
    glVertex2f(.84,-.1);
    glVertex2f(.84,-.03);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.8,-.03);
    glVertex2f(.8,-.1);
    glEnd();


}





void tree(){  //  ID = Tree = 818

/////////1st tree/////////

glLoadIdentity();
    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.895,-.9);
    glVertex2f(-.895,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.86);
    glVertex2f(-.97,-.9);
    glVertex2f(-.82,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.8);
    glVertex2f(-.97,-.885);
    glVertex2f(-.82,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.75);
    glVertex2f(-.97,-.865);
    glVertex2f(-.82,-.865);
    glEnd();


    ///////////////////1st tree end////////////



    ///////////////2nd tree////////////////////





    glLoadIdentity();

    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.48,-.9);
    glVertex2f(-.48,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.48,-.86);
    glVertex2f(-.55,-.9);
    glVertex2f(-.41,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.48,-.8);
    glVertex2f(-.55,-.885);
    glVertex2f(-.41,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.48,-.75);
    glVertex2f(-.55,-.865);
    glVertex2f(-.41,-.865);
    glEnd();


    ///////2nd treee end/////////


    ///////3rd treeee//////


    glLoadIdentity();

    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.065,-.9);
    glVertex2f(-.065,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.065,-.86);
    glVertex2f(-.135,-.9);
    glVertex2f(-.0005,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.065,-.8);
    glVertex2f(-.135,-.885);
    glVertex2f(-.0005,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.065,-.75);
    glVertex2f(-.135,-.865);
    glVertex2f(-.0005,-.865);
    glEnd();


    /////////3rd tree ends//////////

    /////4th tree starts////////////




    glLoadIdentity();

    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(.35,-.9);
    glVertex2f(.35,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(.35,-.86);
    glVertex2f(.28,-.9);
    glVertex2f(.42,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(.35,-.8);
    glVertex2f(.28,-.885);
    glVertex2f(.42,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(.35,-.75);
    glVertex2f(.28,-.865);
    glVertex2f(.42,-.865);
    glEnd();



    ///////4th tree endss///////


    ///////5th tree starts/////////////



    glLoadIdentity();

    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(.765,-.9);
    glVertex2f(.765,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(.765,-.86);
    glVertex2f(.695,-.9);
    glVertex2f(.835,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(.765,-.8);
    glVertex2f(.695,-.885);
    glVertex2f(.835,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(.765,-.75);
    glVertex2f(.695,-.865);
    glVertex2f(.835,-.865);
    glEnd();


}


void lamp(int x,int y,int z){  // ID = 819 = Lamp

    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glLineWidth(6.0);

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(-.85,-.57);
    glVertex2f(-.85,-.65);
    glEnd();


    glLineWidth(6.0); // Road Middle lamp Top
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.865,-.65);
    glVertex2f(-.835,-.65);
    glEnd();


    glLineWidth(6.0);   // Road Middle lamp Top
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(-.895,-.56);
    glVertex2f(-.805,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(-.99,-.58,.017,x,y,z);
    drawCircle2(-.995,-.58,.017,x,y,z);





   glLineWidth(6.0); // Road Middle lamp Top

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(-.79,-.57);
    glVertex2f(-.79,-.65);
    glEnd();

    glLineWidth(6.0); // Road Middle lamp Top
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.805,-.65);
    glVertex2f(-.775,-.65);
    glEnd();


    glLineWidth(6.0);  // Road Middle lamp Top
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(-.835,-.56);
    glVertex2f(-.745,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(-.75,-.58,.017,x,y,z);
    drawCircle2(-.739,-.58,.017,x,y,z);



    /////next////////


   glLineWidth(6.0); // Road Middle lamp Top

   glBegin(GL_LINES);

   glColor3f(.42,.47,.43);
   glVertex2f(-.554,-.57);
   glVertex2f(-.554,-.65);
    glEnd();



    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.569,-.65);
    glVertex2f(-.539,-.65);
    glEnd();


    glLineWidth(6.0);  // Road Middle lamp Top
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(-.599,-.56);
    glVertex2f(-.509,-.56);
    glEnd();

    glLoadIdentity();
    drawCircle2(-.535,-.58,.017,x,y,z);
    drawCircle2(-.51,-.58,.017,x,y,z);



    ////next///////


      glLineWidth(6.0); // Road Middle lamp Top

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(-.309,-.57);
    glVertex2f(-.309,-.65);
    glEnd();

 //glLoadIdentity();
 //glLoadMatrixd();
    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.324,-.65);
    glVertex2f(-.294,-.65);
    glEnd();

//glLoadIdentity();
    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(-.354,-.56);
    glVertex2f(-.264,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(-.315,-.58,.017,x,y,z);
    drawCircle2(-.26,-.58,.017,x,y,z);




     ////next///////


    glLineWidth(6.0);  // Road Middle lamp Top
    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(-.061,-.57);
    glVertex2f(-.061,-.65);
    glEnd();


    glLineWidth(6.0);  // Road Middle lamp Top
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.076,-.65);
    glVertex2f(-.046,-.65);
    glEnd();


    glLineWidth(6.0);  // Road Middle lamp Top
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(-.106,-.56);
    glVertex2f(-.016,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(-.095,-.58,.017,x,y,z);
    drawCircle2(-.01,-.58,.017,x,y,z);



    ////next///////


    glLineWidth(6.0);  // Road Middle lamp Top

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(.187,-.57);
    glVertex2f(.187,-.65);
    glEnd();


    glLineWidth(6.0);  // Road Middle lamp Top
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.172,-.65);
    glVertex2f(.202,-.65);
    glEnd();


    glLineWidth(6.0);   // Road Middle lamp Top
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(.142,-.56);
    glVertex2f(.232,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(.128,-.58,.017,x,y,z);
    drawCircle2(.23,-.58,.017,x,y,z);




     ////next///////


      glLineWidth(6.0);  // Road Middle lamp Top

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(.434,-.57);
    glVertex2f(.434,-.65);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.419,-.65);
    glVertex2f(.449,-.65);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(.389,-.56);
    glVertex2f(.479,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(.35,-.58,.017,x,y,z);
    drawCircle2(.48,-.58,.017,x,y,z);



    ////next///////


      glLineWidth(6.0);  // Road Middle lamp Top

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(.68,-.57);
    glVertex2f(.68,-.65);
    glEnd();


    glLineWidth(6.0);   // Road Middle lamp Top
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.665,-.65);
    glVertex2f(.695,-.65);
    glEnd();


    glLineWidth(6.0); // Road Middle lamp Top
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(.635,-.56);
    glVertex2f(.725,-.56);
    glEnd();

   glLoadIdentity();
    drawCircle2(.57,-.58,.017,x,y,z);
    drawCircle2(.725,-.58,.017,x,y,z);



    ////next///////


      glLineWidth(6.0); // Road Middle lamp Top

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(.929,-.57);
    glVertex2f(.929,-.65);
    glEnd();


    glLineWidth(6.0); // Road Middle lamp Top
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.914,-.65);
    glVertex2f(.944,-.65);
    glEnd();


    glLineWidth(6.0); // Road Middle lamp Top ( LAST )
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(.884,-.56);
    glVertex2f(.974,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(.797,-.58,.017,x,y,z);  // Road Middle Lamp Circle
    drawCircle2(.975,-.58,.017,x,y,z);

}

void middletrees() // ID = 820 = Middle Trees
{
    //tree2
    glTranslatef(.4,.6,0);
    glScalef(.6,.7,0);
    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.895,-.9);
    glVertex2f(-.895,-1);
    glEnd();

    //tree2 bottom
    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.86);
    glVertex2f(-.97,-.9);
    glVertex2f(-.82,-.9);
    glEnd();

    //tree2 middle
    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.8);
    glVertex2f(-.97,-.885);
    glVertex2f(-.82,-.885);
    glEnd();

    //tree2 top
    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.75);
    glVertex2f(-.97,-.865);
    glVertex2f(-.82,-.865);
    glEnd();


   //tree1
    glLoadIdentity();
    glTranslatef(-.1,.6,0);
    glScalef(.6,.7,0);
    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.895,-.9);
    glVertex2f(-.895,-1);
    glEnd();

     //tree1 bottom
    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.86);
    glVertex2f(-.97,-.9);
    glVertex2f(-.82,-.9);
    glEnd();

     //tree1 middle
    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.8);
    glVertex2f(-.97,-.885);
    glVertex2f(-.82,-.885);
    glEnd();

       // tree1 top
    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.75);
    glVertex2f(-.97,-.865);
    glVertex2f(-.82,-.865);
    glEnd();


    //tree3
    glLoadIdentity();
    glTranslatef(.7,.6,0);
    glScalef(.6,.7,0);
    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.895,-.9);
    glVertex2f(-.895,-1);
    glEnd();

    //tree3 bottom
    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.86);
    glVertex2f(-.97,-.9);
    glVertex2f(-.82,-.9);
    glEnd();

    //tree3 middle
    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.8);
    glVertex2f(-.97,-.885);
    glVertex2f(-.82,-.885);
    glEnd();


    //tree3 top
    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.75);
    glVertex2f(-.97,-.865);
    glVertex2f(-.82,-.865);
    glEnd();


   //tree4
    glLoadIdentity();
    glTranslatef(1.1,.6,0);
    glScalef(.6,.7,0);
    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.895,-.9);
    glVertex2f(-.895,-1);
    glEnd();

    //tree4 bottom
    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.86);
    glVertex2f(-.97,-.9);
    glVertex2f(-.82,-.9);
    glEnd();

     //tree4 middle
    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.8);
    glVertex2f(-.97,-.885);
    glVertex2f(-.82,-.885);
    glEnd();

     //tree4 top
    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.75);
    glVertex2f(-.97,-.865);
    glVertex2f(-.82,-.865);
    glEnd();

}

void leftbench(int x,int y,int z){    // ID = Left Bench = 821


    glLoadIdentity();

    glLineWidth(10.0);

    glBegin(GL_LINES);
    glColor3f(.76,.56,.16);
    glVertex2f(-.3,-.2);
    glVertex2f(-.45,-.2);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(194, 143, 41);
    glVertex2f(-.45,-.223);
    glVertex2f(-.47,-.237);
    glVertex2f(-.28,-.237);
    glVertex2f(-.3,-.223);
    glEnd();


    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.435,-.21);
    glVertex2f(-.435,-.223);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.315,-.21);
    glVertex2f(-.315,-.223);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.375,-.21);
    glVertex2f(-.375,-.223);
    glEnd();
glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.457,-.26);
    glVertex2f(-.457,-.235);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.375,-.26);
    glVertex2f(-.375,-.235);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.293,-.26);
    glVertex2f(-.293,-.235);
    glEnd();


    ////

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.435,-.248);
    glVertex2f(-.435,-.235);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.315,-.248);
    glVertex2f(-.315,-.235);
    glEnd();


    // lamp

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.24,-.26);
    glVertex2f(-.24,-.16);
    glEnd();

    glLineWidth(2.3);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.233,-.16);
    glVertex2f(-.246,-.16);
    glEnd();


    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.234,-.26);
    glVertex2f(-.245,-.26);
    glEnd();

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.229,-.264);
    glVertex2f(-.249,-.264);
    glEnd();


    drawCircle2(-.266,-.1395,.018,x,y,z);


    //dustbin//



    glLineWidth(8.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.59,-.26);
    glVertex2f(-.59,-.22);
    glEnd();



    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(.63,.61,.57);
    glVertex2f(-.57,-.218);
    glVertex2f(-.61,-.218);
    glEnd();



    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.58,-.262);
    glVertex2f(-.602,-.262);
    glEnd();


}


void rightbench(int x,int y,int z){  // ID = Right Bench = 822


glLoadIdentity();

    glTranslatef(.7,-.005,0);

     glLineWidth(10.0);

    glBegin(GL_LINES);
    glColor3f(.76,.56,.16);
    glVertex2f(-.3,-.2);
    glVertex2f(-.45,-.2);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(194, 143, 41);
    glVertex2f(-.45,-.223);
    glVertex2f(-.47,-.237);
    glVertex2f(-.28,-.237);
    glVertex2f(-.3,-.223);
    glEnd();


    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.435,-.21);
    glVertex2f(-.435,-.223);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.315,-.21);
    glVertex2f(-.315,-.223);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.375,-.21);
    glVertex2f(-.375,-.223);
    glEnd();
glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.457,-.26);
    glVertex2f(-.457,-.235);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.375,-.26);
    glVertex2f(-.375,-.235);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.293,-.26);
    glVertex2f(-.293,-.235);
    glEnd();


    ////

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.435,-.248);
    glVertex2f(-.435,-.235);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.315,-.248);
    glVertex2f(-.315,-.235);
    glEnd();


    // lamp

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.24,-.26);
    glVertex2f(-.24,-.16);
    glEnd();

    glLineWidth(2.3);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.233,-.16);
    glVertex2f(-.246,-.16);
    glEnd();


    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.234,-.26);
    glVertex2f(-.245,-.26);
    glEnd();

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.229,-.264);
    glVertex2f(-.249,-.264);
    glEnd();


    drawCircle2(-.266,-.1395,.018,x,y,z);


    //dustbin//



    glLineWidth(8.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.59,-.26);
    glVertex2f(-.59,-.22);
    glEnd();



    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(.63,.61,.57);
    glVertex2f(-.57,-.218);
    glVertex2f(-.61,-.218);
    glEnd();



    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.58,-.262);
    glVertex2f(-.602,-.262);
    glEnd();



}


void plane(){   // ID = Plane = 823
    glLoadIdentity();

    glPushMatrix();

    glTranslatef(plane_move, 0.0f, 0.0f);



glLineWidth(11.0);

glBegin(GL_LINES);
    glColor3ub(220,20,60);
    glVertex2f(-.37,.792);
    glVertex2f(-.4,.83);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(220,20,60);
    glVertex2f(-.54,.8);
    glVertex2f(-.54,.76);
    glVertex2f(-.3,.76);
    glVertex2f(-.3,.8);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(220,20,60);
    glVertex2f(-.3,.8);
    glVertex2f(-.3,.76);
    glVertex2f(-.25,.78);

    glEnd();


    //left wing

    glBegin(GL_QUADS);
    glColor3ub(220,20,60);
    glVertex2f(-.54,.84);
    glVertex2f(-.54,.8);
    glVertex2f(-.5,.8);
    glVertex2f(-.53,.84);
    glEnd();


    //2nd wing

    glLineWidth(12.0);
    glBegin(GL_LINES);
    glColor3ub(220,20,60);
    glVertex2f(-.37,.776);
    glVertex2f(-.4,.72);
    glEnd();


//windows


glLineWidth(6.0);
    glEnable(GL_LINE_STIPPLE);
glLineStipple(12, 0xAAAA);
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-.52,.787);
    glVertex2f(-.32,.787);
    glEnd();

    glDisable(GL_LINE_STIPPLE);

    glPopMatrix();

}

void downlighteffects(){  // ID = Road Middle Down Light Effects = 824

glLoadIdentity();
    glBegin(GL_TRIANGLES);
    glColor3ub(240,230,140);
    glVertex2f(-.89,-.57);
    glVertex2f(-.92,-.65);
    glVertex2f(-.86,-.65);
    glEnd();



    glLoadIdentity();
    //roadlight1
    glBegin(GL_TRIANGLES);
    glVertex2f(-.805,-.57);
    glVertex2f(-.835,-.65);
    glVertex2f(-.775,-.65);
    glEnd();

    //roadlight2
    glBegin(GL_TRIANGLES);

    glVertex2f(-.676,-.57);
    glVertex2f(-.706,-.65);
    glVertex2f(-.646,-.65);
    glEnd();


      //roadlight3
    glBegin(GL_TRIANGLES);

    glVertex2f(-.597,-.57);
    glVertex2f(-.627,-.65);
    glVertex2f(-.567,-.65);
    glEnd();


        ////roadlight4
    glBegin(GL_TRIANGLES);

    glVertex2f(-.482,-.57);
    glVertex2f(-.512,-.65);
    glVertex2f(-.452,-.65);
    glEnd();


  //roadlight5
    glBegin(GL_TRIANGLES);

    glVertex2f(-.412,-.57);
    glVertex2f(-.442,-.65);
    glVertex2f(-.382,-.65);
    glEnd();


//roadlight6
    glBegin(GL_TRIANGLES);

    glVertex2f(-.283,-.57);
    glVertex2f(-.313,-.65);
    glVertex2f(-.253,-.65);
    glEnd();


//roadlight7
    glBegin(GL_TRIANGLES);

    glVertex2f(-.21,-.57);
    glVertex2f(-.24,-.65);
    glVertex2f(-.18,-.65);
    glEnd();


//roadlight8
    glBegin(GL_TRIANGLES);

    glVertex2f(-.087,-.57);
    glVertex2f(-.117,-.65);
    glVertex2f(-.057,-.65);
    glEnd();

//roadlight9
    glBegin(GL_TRIANGLES);

    glVertex2f(-.004,-.57);
    glVertex2f(-.034,-.65);
    glVertex2f(.024,-.65);
    glEnd();

//roadlight10
    glBegin(GL_TRIANGLES);

    glVertex2f(.117,-.57);
    glVertex2f(.087,-.65);
    glVertex2f(.147,-.65);
    glEnd();

//roadlight11
    glBegin(GL_TRIANGLES);

    glVertex2f(.192,-.57);
    glVertex2f(.162,-.65);
    glVertex2f(.222,-.65);
    glEnd();


//roadlight12
    glBegin(GL_TRIANGLES);

    glVertex2f(.316,-.57);
    glVertex2f(.286,-.65);
    glVertex2f(.346,-.65);
    glEnd();


//roadlight13
    glBegin(GL_TRIANGLES);

    glVertex2f(.395,-.57);
    glVertex2f(.365,-.65);
    glVertex2f(.425,-.65);
    glEnd();


//roadlight14
    glBegin(GL_TRIANGLES);

    glVertex2f(.515,-.57);
    glVertex2f(.485,-.65);
    glVertex2f(.545,-.65);
    glEnd();


//roadlight15
    glBegin(GL_TRIANGLES);

    glVertex2f(.59,-.57);
    glVertex2f(.56,-.65);
    glVertex2f(.62,-.65);
    glEnd();


//roadlight16
    glBegin(GL_TRIANGLES);

    glVertex2f(.719,-.57);
    glVertex2f(.689,-.65);
    glVertex2f(.749,-.65);
    glEnd();

//roadlight17
    glBegin(GL_TRIANGLES);

    glVertex2f(.796,-.57);
    glVertex2f(.766,-.65);
    glVertex2f(.826,-.65);
    glEnd();



    //lamps upper//

//lamp 1
    glBegin(GL_TRIANGLES);

    glVertex2f(-.238,-.1395);
    glVertex2f(-.268,-.266);
    glVertex2f(-.208,-.266);
    glEnd();

//lamp2

    glBegin(GL_TRIANGLES);

    glVertex2f(.46,-.1395);
    glVertex2f(.43,-.27);
    glVertex2f(.49,-.27);
    glEnd();

}

void buildingnight(int x , int y , int z)            // ID = 831 = Building Night
{
  //body

    glBegin(GL_QUADS);
    glColor3ub(73, 118, 184);
    glVertex2f(-.98,.5);
    glVertex2f(-.98,-.1);
    glVertex2f(-.8,-.1);
    glVertex2f(-.8,.5);
    glEnd();


    //topline



    glLineWidth(5.0);
    glBegin(GL_LINES);
    glColor3f(.5,.2,.2);
    glVertex2f(-.98,.48);
    glVertex2f(-.8,.48);
    glEnd();


    //window


    glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.94,.46);
    glVertex2f(-.94,.40);
    glVertex2f(-.9,.40);
    glVertex2f(-.9,.46);
    glEnd();


    glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.88,.46);
    glVertex2f(-.88,.4);
    glVertex2f(-.84,.4);
    glVertex2f(-.84,.46);
    glEnd();



    //window


    glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.94,.36);
    glVertex2f(-.94,.3);
    glVertex2f(-.9,.3);
    glVertex2f(-.9,.36);
    glEnd();


    glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.88,.36);
    glVertex2f(-.88,.3);
    glVertex2f(-.84,.3);
    glVertex2f(-.84,.36);
    glEnd();


     //window


    glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.94,.26);
    glVertex2f(-.94,.2);
    glVertex2f(-.9,.2);
    glVertex2f(-.9,.26);
    glEnd();


    glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.88,.26);
    glVertex2f(-.88,.2);
    glVertex2f(-.84,.2);
    glVertex2f(-.84,.26);
    glEnd();



 //window


    glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.94,.16);
    glVertex2f(-.94,.1);
    glVertex2f(-.9,.1);
    glVertex2f(-.9,.16);
    glEnd();


    glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.88,.16);
    glVertex2f(-.88,.1);
    glVertex2f(-.84,.1);
    glVertex2f(-.84,.16);
    glEnd();



    //window


    glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.94,.06);
    glVertex2f(-.94,0);
    glVertex2f(-.9,0);
    glVertex2f(-.9,.06);
    glEnd();


    glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.88,.06);
    glVertex2f(-.88,0);
    glVertex2f(-.84,0);
    glVertex2f(-.84,.06);
    glEnd();


    //door


    glBegin(GL_QUADS);
glColor3f(.5,.2,.2);
    glVertex2f(-.912,-.01);
    glVertex2f(-.912,-.1);
    glVertex2f(-.867,-.1);
    glVertex2f(-.867,-.01);
    glEnd();





}


void universitynight(){ // ID = University Night = 830



     //body

    glBegin(GL_QUADS);
    glColor3ub(0,250,154);
    glVertex2f(-.78,.4);
    glVertex2f(-.78,-.1);
    glVertex2f(0,-.1);
    glVertex2f(0,.4);
    glEnd();



    //midle body


    glBegin(GL_QUADS);
    glColor3ub(0,139,139);
    glVertex2f(-.455,-.1);
    glVertex2f(-.455,.39);
    glVertex2f(-.3,.39);
    glVertex2f(-.3,-.1);
    glEnd();

    //midle line1

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-.78,.22);
    glVertex2f(0,.22);
    glEnd();


     //midle line2

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-.78,.05);
    glVertex2f(0,.05);
    glEnd();


    //straight line1

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-.62,.39);
    glVertex2f(-.62,-.1);
    glEnd();




//straight line2

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-.15,.39);
    glVertex2f(-.15,-.1);
    glEnd();



        //windowlefttop1
glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.77,.385);
    glVertex2f(-.77,.31);
    glVertex2f(-.71,.31);
    glVertex2f(-.71,.385);
    glEnd();


 //windowlefttop2





     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.7,.385);
    glVertex2f(-.7,.31);
    glVertex2f(-.64,.31);
    glVertex2f(-.64,.385);
    glEnd();

    //windowlefttop3


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.77,.2);
    glVertex2f(-.77,.125);
    glVertex2f(-.71,.125);
    glVertex2f(-.71,.2);
    glEnd();


//windowlefttop4


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.7,.2);
    glVertex2f(-.7,.125);
    glVertex2f(-.64,.125);
    glVertex2f(-.64,.2);
    glEnd();



    //windowlefttop5


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.77,.03);
    glVertex2f(-.77,-0.045);
    glVertex2f(-.71,-0.045);
    glVertex2f(-.71,.03);
    glEnd();





    //windowlefttop6


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.7,.03);
    glVertex2f(-.7,-0.045);
    glVertex2f(-.64,-0.045);
    glVertex2f(-.64,.03);
    glEnd();






     //windowlefttop7


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.61,.385);
    glVertex2f(-.61,.31);
    glVertex2f(-.55,.31);
    glVertex2f(-.55,.385);
    glEnd();


    //windowlefttop8





     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.54,.385);
    glVertex2f(-.54,.31);
    glVertex2f(-.48,.31);
    glVertex2f(-.48,.385);
    glEnd();




    //windowlefttop9


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.61,.2);
    glVertex2f(-.61,.125);
    glVertex2f(-.55,.125);
    glVertex2f(-.55,.2);
    glEnd();





    //windowlefttop10


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.54,.2);
   glVertex2f(-.54,.125);
    glVertex2f(-.48,.125);
    glVertex2f(-.48,.2);
    glEnd();



    //windowlefttop11


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.61,.03);
    glVertex2f(-.61,-0.045);
    glVertex2f(-.55,-0.045);
    glVertex2f(-.55,.03);
    glEnd();





    //windowlefttop12


    glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.54,.03);
    glVertex2f(-.54,-0.045);
    glVertex2f(-.48,-0.045);
    glVertex2f(-.48,.03);
    glEnd();




    //windowrighttop1


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.29,.385);
    glVertex2f(-.29,.31);
    glVertex2f(-.228,.31);
    glVertex2f(-.228,.385);
    glEnd();


    //windowrighttop2





     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.218,.385);
    glVertex2f(-.218,.31);
    glVertex2f(-.16,.31);
    glVertex2f(-.16,.385);
    glEnd();




    //windowrighttop3


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.29,.2);
    glVertex2f(-.29,.125);
    glVertex2f(-.228,.125);
    glVertex2f(-.228,.2);
    glEnd();





    //windowrighttop4


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.218,.2);
    glVertex2f(-.218,.125);
    glVertex2f(-.16,.125);
    glVertex2f(-.16,.2);
    glEnd();



    //windowrighttop5


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.29,.03);
    glVertex2f(-.29,-0.045);
    glVertex2f(-.228,-0.045);
    glVertex2f(-.228,.03);
    glEnd();





    //windowrightttop6


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.218,.03);
    glVertex2f(-.218,-0.045);
    glVertex2f(-.16,-0.045);
    glVertex2f(-.16,.03);
    glEnd();




    //windowrighttop7


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.14,.385);
    glVertex2f(-.14,.31);
    glVertex2f(-.082,.31);
    glVertex2f(-.082,.385);
    glEnd();


    //windowrighttop8





     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.072,.385);
    glVertex2f(-.072,.31);
    glVertex2f(-.014,.31);
    glVertex2f(-.014,.385);
    glEnd();




    //windowrighttop9


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.14,.2);
    glVertex2f(-.14,.125);
    glVertex2f(-.082,.125);
    glVertex2f(-.082,.2);
    glEnd();





    //windowrighttop10


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.072,.2);
    glVertex2f(-.072,.125);
    glVertex2f(-.014,.125);
    glVertex2f(-.014,.2);
    glEnd();



    //windowrighttop11


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.14,.03);
    glVertex2f(-.14,-0.045);
    glVertex2f(-.082,-0.045);
    glVertex2f(-.082,.03);
    glEnd();





    //windowrightttop12


     glBegin(GL_QUADS);
glColor3ub(255,255,0);
    glVertex2f(-.072,.03);
    glVertex2f(-.072,-0.045);
    glVertex2f(-.014,-0.045);
    glVertex2f(-.014,.03);
    glEnd();



    //middle windows///



    ///middle door///

glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.380f,-0.01f,0.0f);
    glBegin(GL_QUADS);
glColor3ub(160,82,45);
    glVertex2f(-.042,.03);
    glVertex2f(-.042,-0.09);
    glVertex2f(.04,-0.09);
    glVertex2f(.04,.03);
    glEnd();



}








void star(){  // Night Start = ID = 825

glTranslatef(-.7,.8,0);
glScalef(.09,.06,0);


    glBegin(GL_TRIANGLES);

    glColor3f(1, 1, 1);
    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.42, 0.77, 0);


    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle


    glVertex3f(-0.64, 1, 0);


    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle

    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);            ///code for the Polygon within the stars
    glColor3f(1, 1,1);              ///sets color of Polygon

    glVertex3f(-0.68, 0.77, 0);     ///set the 5 vetices of polygon


    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);




    glEnd();


    glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex3f(-0.60, 0.77, 0);
glVertex3f(-0.68, 0.77, 0);
glVertex3f(-0.7, 0.68, 0);
glVertex3f(-0.64, 0.63, 0);
glVertex3f(-0.58, 0.68, 0);

glEnd();


////////2nd star///////

glLoadIdentity();

glTranslatef(-.4,.89,0);
glScalef(.09,.06,0);


    glBegin(GL_TRIANGLES);

    glColor3f(1, 1, 1);
    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.42, 0.77, 0);


    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle


    glVertex3f(-0.64, 1, 0);


    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle

    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);        ///code for the Polygon within the stars
    glColor3f(1, 1,1);          ///sets color of Polygon

    glVertex3f(-0.68, 0.77, 0); ///set the 5 vetices of polygon


    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glEnd();


    glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex3f(-0.60, 0.77, 0); // <--- -0.60 instead of -0.68
glVertex3f(-0.68, 0.77, 0); // <--- -0.68 instead of -0.60
glVertex3f(-0.7, 0.68, 0);
glVertex3f(-0.64, 0.63, 0);
glVertex3f(-0.58, 0.68, 0);

glEnd();


//3rd star///




glLoadIdentity();

glTranslatef(.1,.78,0);
glScalef(.09,.06,0);


    glBegin(GL_TRIANGLES);

    glColor3f(1, 1, 1);
    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.42, 0.77, 0);


    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle


    glVertex3f(-0.64, 1, 0);


    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle

    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);//code for the Polygon within the stars
    glColor3f(1, 1,1);//sets color of Polygon

    glVertex3f(-0.68, 0.77, 0); //set the 5 vetices of polygon


    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);




    glEnd();


    glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex3f(-0.60, 0.77, 0); // <--- -0.60 instead of -0.68
glVertex3f(-0.68, 0.77, 0); // <--- -0.68 instead of -0.60
glVertex3f(-0.7, 0.68, 0);
glVertex3f(-0.64, 0.63, 0);
glVertex3f(-0.58, 0.68, 0);

glEnd();


////4thstar/



glLoadIdentity();

glTranslatef(.5,.83,0);
glScalef(.09,.06,0);


    glBegin(GL_TRIANGLES);

    glColor3f(1, 1, 1);
    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.42, 0.77, 0);


    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle


    glVertex3f(-0.64, 1, 0);


    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle

    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);//code for the Polygon within the stars
    glColor3f(1, 1,1);//sets color of Polygon

    glVertex3f(-0.68, 0.77, 0); //set the 5 vetices of polygon


    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);




    glEnd();

glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex3f(-0.60, 0.77, 0); // <--- -0.60 instead of -0.68
glVertex3f(-0.68, 0.77, 0); // <--- -0.68 instead of -0.60
glVertex3f(-0.7, 0.68, 0);
glVertex3f(-0.64, 0.63, 0);
glVertex3f(-0.58, 0.68, 0);

glEnd();


///5th star
glLoadIdentity();

glTranslatef(.7,.76,0);
glScalef(.09,.06,0);


    glBegin(GL_TRIANGLES);

    glColor3f(1, 1, 1);
    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.42, 0.77, 0);


    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle


    glVertex3f(-0.64, 1, 0);


    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle

    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);//code for the Polygon within the stars
    glColor3f(1, 1,1);//sets color of Polygon

    glVertex3f(-0.68, 0.77, 0); //set the 5 vetices of polygon


    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);




    glEnd();


    glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex3f(-0.60, 0.77, 0); // <--- -0.60 instead of -0.68
glVertex3f(-0.68, 0.77, 0); // <--- -0.68 instead of -0.60
glVertex3f(-0.7, 0.68, 0);
glVertex3f(-0.64, 0.63, 0);
glVertex3f(-0.58, 0.68, 0);

glEnd();



/////6th star//


glLoadIdentity();

glTranslatef(.85,.835,0);
glScalef(.09,.06,0);


    glBegin(GL_TRIANGLES);

    glColor3f(1, 1, 1);
    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.42, 0.77, 0);


    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle


    glVertex3f(-0.64, 1, 0);


    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle

    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);//code for the Polygon within the stars
    glColor3f(1, 1,1);//sets color of Polygon

    glVertex3f(-0.68, 0.77, 0); //set the 5 vetices of polygon


    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);




    glEnd();


    glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex3f(-0.60, 0.77, 0); // <--- -0.60 instead of -0.68
glVertex3f(-0.68, 0.77, 0); // <--- -0.68 instead of -0.60
glVertex3f(-0.7, 0.68, 0);
glVertex3f(-0.64, 0.63, 0);
glVertex3f(-0.58, 0.68, 0);

glEnd();
}


void drawCircle4(GLfloat xx, GLfloat yy, GLfloat r,int rr,int g,int b)  // ID = Circle4 for Moon = 126
{
      int i;
     glScalef(0.72,1,1);

	GLfloat x=xx; GLfloat y=yy; GLfloat radius =r;
	int triangleAmount = 40; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(rr,g,b);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void drawCircle5(GLfloat xx, GLfloat yy, GLfloat r,int rr,int g,int b){  // ID = Circle5 for Moon = 126

    int i;

    //glScalef(0.72,1,1);

	GLfloat x=-xx; GLfloat y=yy; GLfloat radius =r;
	int triangleAmount = 40; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(rr,g,b);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


void moon()   // ID = Moon = 828
{

    glLoadIdentity();

    drawCircle5(-.7,.8,.1,255,255,255);

    drawCircle5(-.72,.84,.1,5, 54, 64);

}








void night_display(){      //ID = 829



    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);

    sky(5, 54, 64);


    fgrass(15, 71, 30);

        road();


    WalkWay();
    movingtruck();


    lgrass(15, 71, 30);
    buildingnight(255, 255, 0);
    universitynight();



    rail_line();

    drawCircle(173, 123, 36);
    building1night(228, 255, 196,173, 123, 36);
    hotelnight(116, 214, 204);
    lamp(216, 230, 23);
    leftbench(216, 230, 23);
    rightbench(216, 230, 23);
    downlighteffects();
     movingcar();

    movingtrain();

    tree();

    middletrees();

    star();

    moon();


    plane();


    glFlush();
}

void day_display(){        //ID = 830

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    sky(18, 172, 255);
    sun();
    cloud_left();
    cloud_right();

    fgrass(79, 179, 64);

    road();

    WalkWay();
    movingtruck();

    lgrass(79, 179, 64);
    building(87, 86, 86);
    university();
    rail_line();



    drawCircle(230, 230, 34);
   building1(0, 0, 0,230, 230, 34);
    hotel(116, 214, 204);
    lamp(255,255,255);
    movingcar();


    movingtrain();
    tree();

    middletrees();
    leftbench(255,255,255);
    rightbench(255,255,255);
    plane();




    glFlush();
    glutSwapBuffers();
}

void default_display(){   //ID = 831

    glClearColor(.90f, .90f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    topprint(-.80,.33,Instructions);
    print(-.80, .20,Instructions1);
    print(-.80, .10,Instructions2);

    glFlush();
    glutSwapBuffers();



}


void handleKeypress(unsigned char key, int x, int y)   // ID = Keyboard = 205
{
switch (key) {

        case 'n':


            glutDisplayFunc(night_display);


        break;

        case 'd':

            glutDisplayFunc(day_display);

        break;

        glutPostRedisplay();
	}
}

int main(int argc, char** argv) {

   cout<<"\nComputer Graphics Project";
    cout<<"\n\n\n";
    cout<<"\nCity View";
    cout<<"\n\n";
    cout<<"\nPress D for Day View";
    cout<<"\n";
    cout<<"\nPress N for Night View";
    cout<<"\n";


    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (650,500);
    glutInitWindowPosition (200, 150);
	glutCreateWindow("City View");
	glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
	glEnable( GL_BLEND );
	glClearColor(0.0,0.0,0.0,0.0);

	glutDisplayFunc(default_display);


	glutKeyboardFunc(handleKeypress);


    glutTimerFunc(100, update_car, 0);
    glutTimerFunc(100, update_truck, 0);
    glutTimerFunc(100, update_train, 0);
    glutTimerFunc(100, update_plane, 0);



	glutKeyboardFunc(handleKeypress);

    glutIdleFunc(Idle);

	glutMainLoop();
	myInit();
	return 0;
}
