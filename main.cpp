#include<GL/gl.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <GL/glut.h>

using namespace std;

int a=0;
int r=0;
int tree1=51, tree2=204, tree3=51;
int  treel1,treel2,treel3;
int ground1=31, ground2=242,groung3=7;
int sky1=135, sky2=206, sky3=250;
int water1=142, water2=227, water3=227; //142, 227, 227
int mountain1=34,mountain2= 139,mountain3= 34;
int roadline1, roadline2, roadlin3;
int sun1,sun2,sun3;
float movet;
float _rain;
float _rain2 = 6;
float _angle2 = 0.0;
float _angle3 = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;
float cloud1;
float cloud2;
float cloud3;
float cloud4;
float cloud5;
float cloudc1=255, cloudc2=255, cloudc3=255;
float rl1=255,rl2=255,rl3=255;
float sunc1=255,sunc2=255,sunc3=0;
float hr1=219, hr2=183, hr3=72;
float door1=90, door2=90, door3=90;
float boatmove, boatmove2;

GLfloat sunMove = 1.3;
GLfloat sunSpeed = 0.01;

bool flag = true;

void triTree(){


	glPushMatrix();

glScalef(.4,.4,0);
	glPushMatrix();
	glColor3ub(tree1,tree2,tree3);
		glScalef(.6,.6,0);
	glTranslatef(.65,2.3,0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0,0);
	glVertex2f(1,2);
	glVertex2f(2,0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glColor3ub(tree1,tree2,tree3);
		glScalef(.8,.8,0);
	glTranslatef(.25,1,0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0,0);
	glVertex2f(1,2);
	glVertex2f(2,0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3ub(tree1,tree2,tree3);

	glBegin(GL_TRIANGLES);
	glVertex2f(0,0);
	glVertex2f(1,2);
	glVertex2f(2,0);
	glEnd();
	glPopMatrix();
glPushMatrix();
glColor3ub(180,180,40);
glTranslatef(1.2,0,0);
glBegin(GL_QUADS);
glVertex2f(-.5,0);
glVertex2f(-.5,-2);
glVertex2f(0,-2);
glVertex2f(0,0);
glEnd();
glPopMatrix();
	glPopMatrix();

}
void boat1(){


	//*************************** 1st boat *************************************

	//Scalling and translationg 1st boat

	glPushMatrix();

    glTranslatef(0.0,1.0,0.0);
	glScalef(0.5,0.5,0.0);

	// ist boat-lower quad

	glPushMatrix();
	glColor3ub(139,69,19);

	glBegin(GL_QUADS);

	glVertex3f(-1.5,0.0, 0.0);
	glVertex3f(1.5, 0.0, 0.0);
	glVertex3f(2.5, 1.0, 0.0);
	glVertex3f(-2.5,1.0,0.0);

	glEnd();

	glPopMatrix();

		// BOAT_PAL

	glPushMatrix();

	glColor3ub(128,0,0);
	glBegin(GL_TRIANGLES);

	glVertex3f(1.5,1.0,0.0);
	glVertex3f(2.7, 2.5, 0.0);
	glVertex3f(1.0,2.5,0.0);

	glEnd();

	glPopMatrix();


	//1st boat-upper quad

	glPushMatrix();
	glColor3ub(205,133,63);

	glBegin(GL_QUADS);

	glVertex3f(-1.5,1.0, 0.0);
	glVertex3f(1.5,1.0,0.0);
	glVertex3f(1.5,1.75,0.0);
	glVertex3f(-1.5,1.75,0.0);

	glEnd();

	glPopMatrix();






	glPopMatrix();





}
void boat2(){


	glPushMatrix();

    glTranslatef(0.0,-1.5,0.0);//Translate  y down
	glScalef(0.5,0.5,0.0);// increase x right and y

	// 2nd boat-lower quad

	glPushMatrix();
	glColor3ub(139,69,19);

	glBegin(GL_QUADS);

	glVertex3f(-1.5,0.0, 0.0);
	glVertex3f(1.5, 0.0, 0.0);
	glVertex3f(2.5, 1.0, 0.0);
	glVertex3f(-2.5,1.0,0.0);

	glEnd();

	glPopMatrix();

	//2nd boat-upper quad

	glPushMatrix();
	glColor3ub(205,133,63);

	glBegin(GL_QUADS);

	glVertex3f(-1.5,1.0, 0.0);
	glVertex3f(1.5,1.0,0.0);
	glVertex3f(1.5,1.75,0.0);
	glVertex3f(-1.5,1.75,0.0);

	glEnd();

	glPopMatrix();

	glPopMatrix();




}
void lamp(){



glPushMatrix();
///bar 1
glPushMatrix();
glColor3ub(128, 0, 0);
glScalef(0.1,5,0.1);
glutSolidCube(0.2);
glPopMatrix();
///bar 2
glPushMatrix();
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.1,1.5,0.1);
glTranslatef(4.9,0.095,0);//Translate x right and y up
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
///light
glPushMatrix();
glTranslatef(-0.3,0.45,0);
glPushMatrix();
glColor3ub(210, 105, 30);
glRotatef(-90,1,0,0);
glutSolidCone(0.12,0.05,25,25);
glPopMatrix();
glPopMatrix();

///Light ray
    if(a == 1)
    {
        glPushMatrix();
        glTranslatef(-0.3,-0.7,0.0);
        glRotatef(-91,1.0,0.0,0.0);
        glColor4f(1.0,1.0,0.0,0);
        glutSolidCone(0.6,1.2,30,30);
        glPopMatrix();
    }


glPopMatrix();


}
void forest_tree(){
///tree
glPushMatrix();
glTranslatef(0,7.5,-35.5);
glScalef(1,2,1);
glColor3ub(128, 0, 0);
//trunk
glPushMatrix();
glScalef(0.8,4,0.1);
glutSolidCube(0.2);
glPopMatrix();
//tree stalks left
glPushMatrix();
glTranslatef(-0.2,0.4,0);
glRotatef(45,0,0,1);
glPushMatrix();
glScalef(0.5,2.5,0.1);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
//tree stalks right
glPushMatrix();
glTranslatef(0.2,0.5,0);
glRotatef(-45,0,0,1);
glPushMatrix();
glScalef(0.5,2.5,0.1);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();
}
void Rain(){
    glPushMatrix();
    glTranslatef(1.3,0,0);
   // cout << "Rain speed: "  << c1xp*1 << endl;
    glColor3ub(103,155,176);

            glBegin(GL_LINES);
            for(float j=-6; j<10; j+=.5){
for(int i=0;i<940;i++)
	{
		float pi=3.1416;
		float A=(i*2*2)/50 ;
		float r=.1;
		float x = r * A;
		float y = r * A;
		glVertex2f(x-j-2.5,y-3 );
	}}
            glEnd();

    glPopMatrix();
}

//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}



//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units

	glPopMatrix(); //Undo the move to the center of the pentagon/*



glPushMatrix();


///rain
if(r==1){

glPushMatrix();
glTranslatef(0,_rain,0);
Rain();
glPopMatrix();

glPushMatrix();
glTranslatef(0,_rain2,0);
Rain();
glPopMatrix();
}

///tree road Side

glPushMatrix();// tree 1
glTranslatef(-4,-2.8,0);
glPushMatrix();
glTranslatef(.1,.8,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glPushMatrix();
glTranslatef(.1,.65,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

glPushMatrix();
glTranslatef(.1,.5,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glBegin(GL_QUADS);
glColor3ub (180, 180, 40);
glVertex2f(0,0);
glVertex2f(0,.5);
glVertex2f(.2,.5);
glVertex2f(.2,.01);
glEnd();
glPopMatrix();

glPushMatrix();// tree 3
glScalef(1.2,1.2,0);
glTranslatef(-1,-2.25,0);
glPushMatrix();
glTranslatef(.1,.8,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glPushMatrix();
glTranslatef(.1,.65,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

glPushMatrix();
glTranslatef(.1,.5,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glBegin(GL_QUADS);
glColor3ub (180, 180, 40);
glVertex2f(0,0);
glVertex2f(0,.5);
glVertex2f(.2,.5);
glVertex2f(.2,.01);
glEnd();
glPopMatrix();

glPushMatrix();// tree 4
glTranslatef(.5,-2.65,0);
glPushMatrix();
glTranslatef(.1,.8,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glPushMatrix();
glTranslatef(.1,.65,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

glPushMatrix();
glTranslatef(.1,.5,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glBegin(GL_QUADS);
glColor3ub (180, 180, 40);
glVertex2f(0,0);
glVertex2f(0,.5);
glVertex2f(.2,.5);
glVertex2f(.2,.01);
glEnd();
glPopMatrix();

glPushMatrix();// tree 2
glTranslatef(-2.5,-2.75,0);
glPushMatrix();
glTranslatef(.1,.8,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glPushMatrix();
glTranslatef(.1,.6,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

glPushMatrix();
glTranslatef(.1,.5,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glBegin(GL_QUADS);
glColor3ub (180, 180, 40);
glVertex2f(0,0);
glVertex2f(0,.5);
glVertex2f(.2,.5);
glVertex2f(.2,.01);
glEnd();
glPopMatrix();

glPushMatrix();// tree 5
glScalef(1.2,1.2,0);
glTranslatef(1.75,-2.15,0);
glPushMatrix();
glTranslatef(.1,.8,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glPushMatrix();
glTranslatef(.1,.65,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

glPushMatrix();
glTranslatef(.1,.5,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glBegin(GL_QUADS);
glColor3ub (180, 180, 40);
glVertex2f(0,0);
glVertex2f(0,.5);
glVertex2f(.2,.5);
glVertex2f(.2,.01);
glEnd();
glPopMatrix();

glPushMatrix();// tree 6
glTranslatef(3.5,-2.5,0);
glPushMatrix();
glTranslatef(.1,.8,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glPushMatrix();
glTranslatef(.1,.65,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

glPushMatrix();
glTranslatef(.1,.5,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glBegin(GL_QUADS);
glColor3ub (180, 180, 40);
glVertex2f(0,0);
glVertex2f(0,.5);
glVertex2f(.2,.5);
glVertex2f(.2,.01);
glEnd();
glPopMatrix();


glPushMatrix();// tree 7
glTranslatef(5,-2.45,0);
glPushMatrix();
glTranslatef(.1,.8,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glPushMatrix();
glTranslatef(.1,.65,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

glPushMatrix();
glTranslatef(.1,.5,0);
glColor3ub (tree1, tree2, tree3);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
glBegin(GL_QUADS);
glColor3ub (180, 180, 40);
glVertex2f(0,0);
glVertex2f(0,.5);
glVertex2f(.2,.5);
glVertex2f(.2,.01);
glEnd();
glPopMatrix();





 ///**************Cloud*********


 glPushMatrix();
   glScalef(2.5, 2.5, 0);
   glTranslatef(-1, 0, 0);
glPushMatrix();
glColor3ub(cloudc1,cloudc2,cloudc3);
glTranslatef(cloud1,.25,0);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.044;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.9f,y+.74f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.035;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.95f,y+.8f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.9f,y+.82f );
	}
	glEnd();

 glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.04;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.94f,y+.74f );
	}
	glEnd();

 glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.035;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.85f,y+.8f );
	}
	glEnd();

glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.043;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.81f,y+.74f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.87f,y+.75f );
	}
	glEnd();
glPopMatrix();


//Second cloud
glPushMatrix();

         glColor3ub(cloudc1,cloudc2,cloudc3);
         glTranslatef(cloud5,0,0);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.044;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.42,y+.74f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.035;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.41f,y+.8f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.36f,y+.82f );
	}
	glEnd();

 glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.04;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.40f,y+.74f );
	}
	glEnd();

 glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.035;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.31f,y+.8f );
	}
	glEnd();

glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.043;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.29f,y+.74f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.33f,y+.75f );
	}
	glEnd();



	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.33f,y+.68f );
	}
	glEnd();

    glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.043;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x-.40f,y+.69f );
	}
	glEnd();
glPopMatrix();
//3RD CLOUD
glPushMatrix();

  glColor3ub(cloudc1,cloudc2,cloudc3);
glTranslatef(cloud2,.1,0);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.044;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.10,y+.75f );
	}
	glEnd();
  glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.044;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.20,y+.75f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.035;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.12f,y+.8f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.18f,y+.82f );
	}
	glEnd();

 glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.04;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.14f,y+.74f );
	}
	glEnd();

 glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.035;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.23f,y+.8f );
	}
	glEnd();

glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.043;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.27f,y+.74f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.21f,y+.7f );
	}
	glEnd();
glPopMatrix();

//4TH CLOUD
glPushMatrix();
  glColor3ub(cloudc1,cloudc2,cloudc3);
  glTranslatef(cloud3,.2,0);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.044;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.20,y+.74f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.035;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.23f,y+.8f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.28f,y+.82f );
	}
	glEnd();

 glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.04;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.24f,y+.74f );
	}
	glEnd();

 glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.035;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.23f,y+.8f );
	}
	glEnd();

glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.043;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.37f,y+.74f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.31f,y+.75f );
	}
	glEnd();
	glPopMatrix();
//5TH CLOUD
glPushMatrix();
  glColor3ub(cloudc1,cloudc2,cloudc3);
  glTranslatef(cloud4,.15,0);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.044;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.10f+.70f,y+.74f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.035;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.13f+.70F,y+.8f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.18f+.7f,y+.82f );
	}
	glEnd();

 glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.04;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.14f+.7f,y+.74f );
	}
	glEnd();

 glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.035;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.23f+.7f,y+.8f );
	}
	glEnd();

glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.043;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.27f+.7f,y+.74f );
	}
	glEnd();

	glColor3ub(cloudc1,cloudc2,cloudc3);
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/50 ;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x+.21f+.7,y+.75f );
	}
	glEnd();
	glPopMatrix();
glPopMatrix();

///triTree

glPushMatrix();
glTranslatef(3.5,0,0);
triTree();
glPopMatrix();

glPushMatrix();
glTranslatef(4,0,0);
triTree();
glPopMatrix();


/*
///right cloud1
	glColor3ub(cloudc1,cloudc2,cloudc3);
    glPushMatrix();
    glScalef(.6,.6,.6);
    glTranslatef(-8,4,0);
    ///cloud1 spare1
    glColor3ub(cloudc1,cloudc2,cloudc3);
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.15,.4,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    glColor3ub(cloudc1,cloudc2,cloudc3);
    ///cloud1 spare2
    glPushMatrix();
    glColor3f(1,1,1);
   glTranslatef(0.35,.35,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    glColor3ub(cloudc1,cloudc2,cloudc3);
    ///cloud1 spare3
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.4,.6,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare4
    glColor3ub(cloudc1,cloudc2,cloudc3);
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(.7,.5,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare5
    glColor3ub(cloudc1,cloudc2,cloudc3);
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(.7,.3,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
      ///cloud1 spare6
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(1,.4,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    glPopMatrix();
*/

///********House*******


glPushMatrix();
glTranslatef(-5,-1,0);

    glColor3ub(170, 140, 70);
glBegin(GL_LINES); //chal er line
glVertex2f(1.1,1);
glVertex2f(1.55,1.45);
glEnd();
//Roof triangle
    glColor3ub(181, 158, 90);
glBegin(GL_TRIANGLES);
glVertex2f(1,1);
glVertex2f(1.5,1.5);
glVertex2f(2,1);
glEnd();


    glColor3ub(hr1, hr2, hr3); //chall1
glBegin(GL_TRIANGLES);
glVertex2f(1.5,1.5);
glVertex2f(2,1);
glVertex2f(3,1.6);
glEnd();
    glColor3ub(hr1,hr2,hr3);// chall2
glBegin(GL_TRIANGLES);
glVertex2f(2,1);
glVertex2f(3,1.6);
glVertex2f(3.5,1.1);
glEnd();

 ///////////////////right body janala (left)
    glColor3ub (door1, door2, door3);
    glBegin(GL_QUADS);
    glVertex2f(2.2,.8 );
    glVertex2f(2.2,.45 );
    glVertex2f(2.5,.47 );
    glVertex2f(2.5,.82 );
    glEnd();

     /////////////////// door
    glColor3ub (door1, door2, door3);
    glBegin(GL_QUADS);
    glVertex2f(2.6,.83 );
    glVertex2f(2.6,.18 );
    glVertex2f(2.85,.21 );
    glVertex2f(2.85,.85 );
    glEnd();


    glPushMatrix();
    ///////////////////right body janala (right)
    glColor3ub (door1, door2, door3);
    glTranslatef(.8,.12,0);
    glBegin(GL_QUADS);
    glVertex2f(2.15,.75 );
    glVertex2f(2.15,.4 );
    glVertex2f(2.45,.42 );
    glVertex2f(2.45,.77 );
    glEnd();
glPopMatrix();

////////////left body janala
    glColor3ub (door1, door2, door3);
    glBegin(GL_QUADS);
    glVertex2f(1.3, .75);
    glVertex2f(1.7, .75);
    glVertex2f(1.7, .4);
    glVertex2f(1.3, .4);
    glEnd();

    glColor3ub (153, 153, 153); //left wall
    glBegin(GL_QUADS);
    glVertex2f(1.1, 1);
    glVertex2f(2, 1);
    glVertex2f(2, 0);
    glVertex2f(1.1, 0);
    glEnd();

    glColor3ub (180, 180, 180); //right wall
    glBegin(GL_QUADS);
    glVertex2f(2, 1);
    glVertex2f(2, 0);
    glVertex2f(3.4,.2);
    glVertex2f(3.4, 1.1);
    glEnd();
glPopMatrix();


///********House Tree*******
glPushMatrix();

glTranslatef(-4.3,-.95,0);
glColor3ub (180, 180, 40);
glBegin(GL_QUADS); // main quad

glVertex2f(0,0);
glVertex2f(0,1);
glVertex2f(.3,1);
glVertex2f(.3,0);
glEnd();
////////////right branch
glColor3ub (180, 180, 40);
glBegin(GL_QUADS);

glVertex2f(.15,1);
glVertex2f(.3,1.2);
glVertex2f(.45,1.2);
glVertex2f(.3,1);
glEnd();

////////////Left branch
glColor3ub (180, 180, 40);
glBegin(GL_QUADS);

glVertex2f(0,1);
glVertex2f(-.15,1.2);
glVertex2f(.15,1.2);
glVertex2f(.3,1);
glEnd();
////////////big circle
    glColor3ub(tree1, tree2, tree3);
    glPushMatrix();
	glTranslatef(0.15,1.5 , 0.0);
    glScalef(.8,.8,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=.7;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
	////////////// small circle

	    glColor3ub(tree1, tree2, tree3);
    glPushMatrix();
	glTranslatef(.15, 2, 0.0);
    glScalef(.5,.5,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=.7;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
glPopMatrix();

glPopMatrix();
///boat1
glPushMatrix();
glScalef(.5,.4,0);
glTranslatef(boatmove,.5,0);
boat1();
glPopMatrix();



///boat2

glPushMatrix();
glScalef(.5,.4,0);
glTranslatef(boatmove2,1.8,0);
boat2();

glPopMatrix();

///Khet
/*glPushMatrix();
glPushMatrix();
	glColor3ub(220,220,60);

	glScalef(1,1,0);
	glTranslatef(.5,-1.3,0);
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(.5,1);
    glVertex2f(1.5,1);
    glVertex2f(1,0);
    glEnd();
	glPopMatrix();
glPopMatrix(); */
///train
glPushMatrix();
glScalef(1,.5,0);
glTranslatef(-5.5+movet,2.01,0);

glPushMatrix();
glColor3ub(door1,door2,door3);
glTranslatef(.1,.02,0);
glBegin(GL_QUADS); //janala1
glVertex2f(0,0);
glVertex2f(0,.15);
glVertex2f(.15,.15);
glVertex2f(.15,0);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3ub(door1,door2,door3);
glTranslatef(.3,.02,0);
glBegin(GL_QUADS); //janala2
glVertex2f(0,0);
glVertex2f(0,.15);
glVertex2f(.15,.15);
glVertex2f(.15,0);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3ub(door1,door2,door3);
glTranslatef(.6,.02,0);
glBegin(GL_QUADS); //janala3
glVertex2f(0,0);
glVertex2f(0,.15);
glVertex2f(.15,.15);
glVertex2f(.15,0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(.8,.02,0);
glColor3ub(door1,door2,door3);
glBegin(GL_QUADS); //janala4
glVertex2f(0,0);
glVertex2f(0,.15);
glVertex2f(.15,.15);
glVertex2f(.15,0);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3ub(door1,door2,door3);
glTranslatef(1.1,.02,0);
glBegin(GL_QUADS); //janala5
glVertex2f(0,0);
glVertex2f(0,.15);
glVertex2f(.15,.15);
glVertex2f(.15,0);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3ub(door1,door2,door3);
glTranslatef(1.3,.02,0);
glBegin(GL_QUADS); //janala6
glVertex2f(0,0);
glVertex2f(0,.15);
glVertex2f(.15,.15);
glVertex2f(.15,0);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3ub(door1,door2,door3);
glTranslatef(1.88,.06,0);
glBegin(GL_QUADS); //janala Front
glVertex2f(0,0);
glVertex2f(0,.1);
glVertex2f(.15,.1);
glVertex2f(.25,0);
glEnd();
glPopMatrix();

glPushMatrix();//line 1
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.52,0);
glVertex2f(.52,.2);
glEnd();
glPopMatrix();

glPushMatrix();//line 2
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(1.02,0);
glVertex2f(1.02,.2);
glEnd();
glPopMatrix();

glPushMatrix();//line 3
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(1.52,0);
glVertex2f(1.52,.2);
glEnd();
glPopMatrix();

glColor3ub(0,204,204);
glBegin(GL_QUADS); //main body
glVertex2f(0,0);
glVertex2f(0,.2);
glVertex2f(2,.2);
glVertex2f(2.2,0);
glEnd();



glPopMatrix();


///**********Mountain*********

glPushMatrix();

//RightMountain
    glTranslatef(-5,-1,0);
    glColor3ub (mountain1,mountain2,mountain3);
    glBegin(GL_TRIANGLES);
    glVertex2f(2, 2);
    glVertex2f(3, 2.5);
    glVertex2f(5, 2);
    glEnd();
     glBegin(GL_TRIANGLES); //2nd right
    glVertex2f(1, 2);
    glVertex2f(2, 2.5);
    glVertex2f(3, 2);
    glEnd();
     glBegin(GL_TRIANGLES);
    glVertex2f(0, 2);
    glVertex2f(1, 2.3);
    glVertex2f(2, 2);
    glEnd();
     glBegin(GL_TRIANGLES);
    glVertex2f(4.5, 2);
    glVertex2f(6, 2.7);
    glVertex2f(8, 2);
    glEnd();
     glBegin(GL_TRIANGLES);
    glVertex2f(7.95, 2);
    glVertex2f(9.5, 2.2);
    glVertex2f(10.5, 2);
    glEnd();
     glBegin(GL_TRIANGLES);
    glVertex2f(-1, 2);
    glVertex2f(0, 2.5);
    glVertex2f(1, 2);
    glEnd();

glPopMatrix();

///lamp

glPushMatrix(); // lamp 1
//glRotatef(40,0,1,0);
glTranslatef(-2.9,-1.1,0);
lamp();
glPopMatrix();

glPushMatrix(); // lamp 2
//glRotatef(40,0,1,0);
//glScalef(1.3,1.3,1.3);
glTranslatef(0,-1,0);
lamp();
glPopMatrix();

glPushMatrix(); // lamp 3
glScalef(.9,.9,.9);
//glRotatef(40,0,1,0);
glTranslatef(3.58,-1,0);
lamp();
glPopMatrix();


///**********Road**********
glPushMatrix();
//glRotatef(5,0,1,0);
//glScalef(1,1,0);


glTranslatef(-6,-2.8,0);



////////////////road Line

glColor3ub(rl1,rl2,rl3);

glBegin(GL_LINES);

glVertex2f(1,0.55); // line 1
glVertex2f(2.5,0.62);

glVertex2f(3,0.64); //line 2
glVertex2f(4.5,0.71);

glVertex2f(5,0.73); // line 3
glVertex2f(6.5,0.8);

glVertex2f(7,0.82); // line4
glVertex2f(8.5,0.89);

glVertex2f(9,0.91); // line5
glVertex2f(10.5,0.98);

glEnd();



 ///////////////////////////////////////////road
     glColor3ub (87, 81, 92);
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(12,0.5);
    glVertex2f(12,1.5);
    glVertex2f(0, 1);
    glEnd();

glPopMatrix();

glPushMatrix();

///***********Ground********
glTranslatef(-6,-3,0);
 glColor3ub (ground1, ground2, groung3);
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(12,0);
    glVertex2f(12, 3);
    glVertex2f(0, 3);
    glEnd();
glPopMatrix();


        ///*************** water *********
glPushMatrix();
glColor3ub (water1,water2,water3);
glTranslatef(-6,0,0);
    glBegin(GL_QUADS);
    glVertex2i(0, 1);
    glVertex2i(12,1);
    glVertex2i(12,0);
    glVertex2i(0,0);
    glEnd();
glPopMatrix();

///**********Sun*****

    glTranslatef(0,sunMove,0);
    glColor3ub(sunc1,sunc2,sunc3);
    glPushMatrix();
	glTranslatef(3, 2, 0.0);
    glScalef(.4,.4,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=.7;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
    glTranslatef(0,-sunMove,0);


 glPushMatrix();


///**********Sky********
 glTranslatef(-6,1,0);

        glColor3ub(sky1,sky2,sky3);
        glBegin(GL_QUADS);
        glVertex2f(0,2);
        glVertex2f(12,2);
        glVertex2f(12,0);
        glVertex2f(0,0);
        glEnd();
    glPopMatrix();

glPushMatrix();


glPopMatrix();





glPopMatrix();
	glutSwapBuffers();
}




void changeFlag(){
    if(flag){
        flag=false;
    }
    else{
        flag=true;
    }
}
void sunUpdate(int value){
    if(sunMove<=-2.0){
        sunMove = 1.3;
    }
    if(flag){
        if(sunMove>=-1.9){
            a=1;
            ground1=5; ground2=94; groung3=28;
            sky1=49; sky2=98; sky3=131;
            tree1=51; tree2=102; tree3=0;
            water1=15, water2=94, water3=156;
            rl1=125; rl2=122; rl3=122;
            sunc1=222; sunc2=222; sunc3=222;
            cloudc1=212; cloudc2=212; cloudc3=212;
            hr1=156, hr2=129, hr3=64;
            mountain1=10,mountain2= 74,mountain3= 6;
            door1=240, door2=240, door3=0;
        }
    }
    else{
        if(sunMove>=.4){
            a=0;
            ground1=31; ground2=242;groung3=7;
            sky1=235; sky2=200; sky3=90;
            tree1=51; tree2=204; tree3=51;
            water1=142; water2=227; water3=227;
            rl1=255;rl2=255;rl3=255;
            sunc1=205; sunc2=80; sunc3=50;
            cloudc1=255; cloudc2=255; cloudc3=255;
            hr1=219; hr2=183; hr3=72;
            mountain1=34,mountain2= 139,mountain3= 34;
            door1=90, door2=90, door3=90;
        }
        else if(sunMove>=-.4){
            a=0;
            ground1=31; ground2=242;groung3=7;
            sky1=135; sky2=206; sky3=250;
            tree1=51; tree2=204; tree3=51;
            water1=142; water2=227; water3=227;
            rl1=255;rl2=255;rl3=255;
            sunc1=255; sunc2=255; sunc3=0;
            cloudc1=255; cloudc2=255; cloudc3=255;
            hr1=219; hr2=183; hr3=72;
            mountain1=34,mountain2= 139,mountain3= 34;
            door1=90, door2=90, door3=90;
        }
        else if(sunMove>=-1.3){
            a=0;
            ground1=31; ground2=242;groung3=7;
            sky1=200; sky2=125; sky3=30;
            tree1=51; tree2=204; tree3=51;
            water1=142; water2=227; water3=227;
            rl1=255;rl2=255;rl3=255;
            sunc1=255; sunc2=0; sunc3=0;
            cloudc1=255; cloudc2=255; cloudc3=255;
            hr1=219; hr2=183; hr3=72;
            mountain1=34,mountain2= 139,mountain3= 34;
            door1=90, door2=90, door3=90;
        }
        else if(sunMove>=-1.9){
            a=1;
            ground1=5; ground2=94; groung3=28;
            sky1=49; sky2=98; sky3=131;
            tree1=51; tree2=102; tree3=0;
            water1=15, water2=94, water3=156;
            rl1=125; rl2=122; rl3=122;
            sunc1=222; sunc2=222; sunc3=222;
            cloudc1=212; cloudc2=212; cloudc3=212;
            hr1=156, hr2=129, hr3=64;
            mountain1=10,mountain2= 74,mountain3= 6;
            door1=240, door2=240, door3=0;
        }
    }
    sunMove-=sunSpeed;
    glutPostRedisplay(); //Tell GLUT that the display has changed
    glutTimerFunc(100, sunUpdate, 0); //Add a timer
    if(sunMove<=-2.0){
        changeFlag();
    }
}

void updateCall(){
    glutTimerFunc(100, sunUpdate, 0); //Add a timer
}

void update(int value) {
	_rain -= 0.05f;
	//cout<<_rain<<endl;
	if (_rain < -8) {

		_rain=5.5;
	}
	_rain2 -= 0.05f;
	//cout<<_rain<<"r2"<<endl;
	if (_rain2 < -8) {
		_rain2 =5.5;
	}
    cloud1+=0.001f;
    if(cloud1>4){
        cloud1= -2;
    }
    cloud2+=0.0002f;
    if(cloud2>4){
        cloud2= -2;
    }
    cloud3+=0.0004f;
    if(cloud3>4){
        cloud3= -2;
    }

    cloud4+=0.0006f;
    if(cloud4>4){
        cloud4= -2;
    }
    cloud5+=0.0008f;
    if(cloud5>4){
        cloud5= -2;
    }
    movet+=0.03f;       //train direction & speed
    if(movet>11.5){
        movet= -3;
    }

	_angle3 += 10.0f;
	if (_angle3 > 360) {
		_angle3 -= 360;
	}
	_ang_tri -= 0.05f;
	//cout<<_ang_tri<<endl;
	if (_ang_tri < -16) {
		_ang_tri = 10;
	}

	boatmove +=0.05;  //boat direction & speed
	if(boatmove>13){
        boatmove=-13;
	}
    boatmove2 -=0.01;  //boat direction & speed
	if(boatmove2>13){
        boatmove2=-13;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}
void keyboard(unsigned char key, int x, int y){
    switch (key) {
        case 'n': /* night mode */
            a=1;
            ground1=5; ground2=94; groung3=28;
            sky1=49; sky2=98; sky3=131;
            tree1=51; tree2=102; tree3=0;
            water1=15, water2=94, water3=156;
            rl1=125; rl2=122; rl3=122;
            sunc1=222; sunc2=222; sunc3=222;
            cloudc1=212; cloudc2=212; cloudc3=212;
            hr1=156, hr2=129, hr3=64;
            mountain1=10,mountain2= 74,mountain3= 6;
            door1=240, door2=240, door3=0;
            break;
        case 'd': //day mode
            a=0;
            ground1=31; ground2=242;groung3=7;
            sky1=135; sky2=206; sky3=250;
            tree1=51; tree2=204; tree3=51;
            water1=142; water2=227; water3=227;
            rl1=255;rl2=255;rl3=255;
            sunc1=255; sunc2=255; sunc3=0;
            cloudc1=255; cloudc2=255; cloudc3=255;
            hr1=219; hr2=183; hr3=72;
            mountain1=34,mountain2= 139,mountain3= 34;
            door1=90, door2=90, door3=90;
        break;
        case 'm': //day mode
            a=0;
            ground1=31; ground2=242;groung3=7;
            sky1=235; sky2=200; sky3=90;
            tree1=51; tree2=204; tree3=51;
            water1=142; water2=227; water3=227;
            rl1=255;rl2=255;rl3=255;
            sunc1=205; sunc2=80; sunc3=50;
            cloudc1=255; cloudc2=255; cloudc3=255;
            hr1=219; hr2=183; hr3=72;
            mountain1=34,mountain2= 139,mountain3= 34;
            door1=90, door2=90, door3=90;
        break;
        case 'e': //day mode
            a=0;
            ground1=31; ground2=242;groung3=7;
            sky1=200; sky2=125; sky3=30;
            tree1=51; tree2=204; tree3=51;
            water1=142; water2=227; water3=227;
            rl1=255;rl2=255;rl3=255;
            sunc1=255; sunc2=0; sunc3=0;
            cloudc1=255; cloudc2=255; cloudc3=255;
            hr1=219; hr2=183; hr3=72;
            mountain1=34,mountain2= 139,mountain3= 34;
            door1=90, door2=90, door3=90;
        break;
        case 'r':
            if(r==0){
                r=1;
                cloudc1=125; cloudc2=122; cloudc3=122;
                sunc1=255; sunc2=140; sunc3=76;
            }
            else{
                r=0;
                cloudc1=255; cloudc2=255; cloudc3=255;
                sunc1=255; sunc2=255; sunc3=0;
            }
        break;
        default:
        break;
    }
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(200,100);

	//Create the window
	glutCreateWindow("Transformations");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);
    glutKeyboardFunc(keyboard);
	glutTimerFunc(25, update, 0); //Add a timer
	glutTimerFunc(100, sunUpdate, 0); //Add a timer

	glutMainLoop();
	return 0;
}
