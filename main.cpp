#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<iostream>
#include <GL/glut.h>
#include<math.h>>
#define PI 3.14159265358979323846
using namespace std;


/////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
                              ///car

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.1f;

void update1(int value1)// For cloud
{
if(position1>1.0)
position1=-1.0f;



position1 +=speed1;
glutPostRedisplay();

glutTimerFunc(150,update1,0);

}
//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.1f;

void update2(int value2)// For cloud
{
if(position2<-1.0)
position2=1.0f;

position2 -=speed2;
glutPostRedisplay();

glutTimerFunc(150,update2,0);

}

///////////////////////////////////////////////////////////
///CLOUDS
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.01f;

GLfloat position4 = 0.0f;
GLfloat speed4 = 0.02f;

///////////////////////////////////

/// for CLOUDS

//////////////////

void update3(int value3)
{

    if(position3 <-1.0)
        position3 = 1.0f;

    position3 -= speed3;

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

void update4(int value4) {

    if(position4 <-1.0)
        position4 = 1.0f;

    position4 -= speed4;

	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);
}
////////////////////////////////////////



////////////////////////////////////////////////////////////
    ////////////////// mouse drop press right to spreed up and left press to  spreed down///////

    void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed3 += 0.1f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed3 -= 0.1f;
			}
	glutPostRedisplay();}



void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);




    glBegin(GL_QUADS); ///ground 1
	glColor3ub(115, 151, 77);
	glVertex2f(-1.0f,-0.90f);
	glVertex2f(1.0f, -0.90f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(-1.0f,-1.0f);
    glEnd();

    glBegin(GL_QUADS); ///road 1
	glColor3ub(127, 127, 127);
	glVertex2f(-1.0f,-0.90f);
	glVertex2f(1.0f, -0.90f);
	glVertex2f(1.0f,-0.65f);
	glVertex2f(-1.0f,-0.65f);
    glEnd();

    glBegin(GL_QUADS); ///road middle white
	glColor3ub(254, 254, 252);
	glVertex2f(-1.0f,-0.72f);
	glVertex2f(1.0f, -0.72f);
	glVertex2f(1.0f,-0.75f);
	glVertex2f(-1.0f,-0.75f);
    glEnd();

     glBegin(GL_QUADS); ///ground 2
	glColor3ub(142, 180, 107);
	glVertex2f(-1.0f,-0.65f);
	glVertex2f(1.0f, -0.65f);
	glVertex2f(1.0f,-0.40f);
	glVertex2f(-1.0f,-0.40f);
    glEnd();


    glBegin(GL_QUADS); ///road 2
	glColor3ub(127, 127, 127);
	glVertex2f(-1.0f,-0.40f);
	glVertex2f(1.0f, -0.40f);
	glVertex2f(1.0f,-0.20f);
	glVertex2f(-1.0f,-0.20f);
    glEnd();


    glBegin(GL_QUADS); ///road 2 white
	glColor3ub(241, 241, 241);
	glVertex2f(-1.0f,-0.25f);
	glVertex2f(1.0f, -0.25f);
	glVertex2f(1.0f,-0.27f);
	glVertex2f(-1.0f,-0.27f);
    glEnd();


       glBegin(GL_QUADS); ///groud 3
	glColor3ub(142, 180, 107);
	glVertex2f(-1.0f,-0.23f);
	glVertex2f(1.0f, -0.23f);
	glVertex2f(1.0f,-0.05f);
	glVertex2f(-1.0f,-0.05f);
    glEnd();


    glBegin(GL_QUADS); ///sky
	glColor3ub(195, 236, 248);
	glVertex2f(-1.0f,-0.05f);
	glVertex2f(1.0f, -0.05f);
    glColor3ub(129, 209, 244);
	glVertex2f(1.0f,1.00f);
    glColor3ub(60, 183, 243);
	glVertex2f(-1.0f,1.00f);
    glEnd();

///////////////////////////////////////////////////////////////////

GLfloat x_2 =0.90; GLfloat y_2 = 0.90; GLfloat radius_2 =0.10;/// sun
int triangleAmount = 20; //# of triangles used to draw circle

GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,204,51);
glVertex2f(x_2 , y_2); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_2 + (radius_2 * cos(i * twicePi / triangleAmount)),
y_2 + (radius_2 * sin(i * twicePi / triangleAmount))
);
}
glEnd();



/////////////////////////////////////////////////////////////////////////////////////
         //////////////////////////////bari start///////////////

    glBegin(GL_QUADS); ///back ground home
	glColor3ub(108, 178, 203);
	glVertex2f(-1.0f,-0.05f);
	glVertex2f(1.0f, -0.05f);
	glVertex2f(1.0f,0.20f);
	glVertex2f(-1.0f,0.20f);
    glEnd();


    glBegin(GL_QUADS); ///back ground home1
	glColor3ub(108, 178, 203);
	glVertex2f(-1.0f,0.20f);
	glVertex2f(-0.90f, 0.20f);
	glVertex2f(-0.90f,0.27f);
	glVertex2f(-1.0f,0.27f);
    glEnd();


     glBegin(GL_QUADS); ///back ground home 2
	glColor3ub(108, 178, 203);
	glVertex2f(-0.80f,0.20f);
	glVertex2f(-0.50f,0.20f);
	glVertex2f(-0.50f,0.35f);
	glVertex2f(-0.80f,0.35f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 3
	glColor3ub(108, 178, 203);
	glVertex2f(-0.48f,0.20f);
	glVertex2f(-0.40f,0.20f);
	glVertex2f(-0.40f,0.40f);
	glVertex2f(-0.48f,0.40f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 4
	glColor3ub(108, 178, 203);
	glVertex2f(-0.40f,0.20f);
	glVertex2f(-0.35f,0.20f);
	glVertex2f(-0.35f,0.30f);
	glVertex2f(-0.40f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 7
	glColor3ub(108, 178, 203);
	glVertex2f(-0.30f,0.20f);
	glVertex2f(-0.07f,0.20f);
	glVertex2f(-0.07f,0.30f);
	glVertex2f(-0.30f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 5
	glColor3ub(108, 178, 203);
	glVertex2f(-0.33f,0.20f);
	glVertex2f(-0.20f,0.20f);
	glVertex2f(-0.20f,0.35f);
	glVertex2f(-0.33f,0.35f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 6
	glColor3ub(108, 178, 203);
	glVertex2f(-0.19f,0.20f);
	glVertex2f(-0.08f,0.20f);
	glVertex2f(-0.08f,0.40f);
	glVertex2f(-0.19f,0.40f);
    glEnd();

/////////////////////////////////////////

     glBegin(GL_QUADS); ///back ground home 2
	glColor3ub(108, 178, 203);
	glVertex2f(0.80f,0.20f);
	glVertex2f(0.50f,0.20f);
	glVertex2f(0.50f,0.35f);
	glVertex2f(0.80f,0.35f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 3
	glColor3ub(108, 178, 203);
	glVertex2f(0.48f,0.20f);
	glVertex2f(0.40f,0.20f);
	glVertex2f(0.40f,0.40f);
	glVertex2f(0.48f,0.40f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 4
	glColor3ub(108, 178, 203);
	glVertex2f(0.40f,0.20f);
	glVertex2f(0.35f,0.20f);
	glVertex2f(0.35f,0.30f);
	glVertex2f(0.40f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 7
	glColor3ub(108, 178, 203);
	glVertex2f(0.30f,0.20f);
	glVertex2f(0.07f,0.20f);
	glVertex2f(0.07f,0.30f);
	glVertex2f(0.30f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 5
	glColor3ub(108, 178, 203);
	glVertex2f(0.33f,0.20f);
	glVertex2f(0.20f,0.20f);
	glVertex2f(0.20f,0.35f);
	glVertex2f(0.33f,0.35f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 6
	glColor3ub(108, 178, 203);
	glVertex2f(0.19f,0.20f);
	glVertex2f(0.08f,0.20f);
	glVertex2f(0.08f,0.40f);
	glVertex2f(0.19f,0.40f);
    glEnd();


///////////////////////////////////////////////////
                  ///the house in front



    glBegin(GL_QUADS); ///front home1
	glColor3ub(207, 202, 162);
	glVertex2f(-0.70f,-0.18f);
	glVertex2f(-0.95f,- 0.18f);
	glVertex2f(-0.95f,-0.10f);
	glVertex2f(-0.70f,-0.10f);
    glEnd();


      glBegin(GL_QUADS); ///front home
	glColor3ub(236, 238, 225);
	glVertex2f(-0.70f,-0.10f);
	glVertex2f(-0.95f,- 0.10f);
	glVertex2f(-0.95f,0.15f);
	glVertex2f(-0.70f,0.15f);
    glEnd();



    glBegin(GL_QUADS); ///front home chal
	glColor3ub(242, 152, 45);
	glVertex2f(-0.65f,0.15f);
	glVertex2f(-0.96f, 0.15f);
	glVertex2f(-0.88f,0.29f);
	glVertex2f(-0.65f,0.29f);
    glEnd();

    glBegin(GL_QUADS); ///front home hind
	glColor3ub(219, 226, 215);
	glVertex2f(-0.72f,-0.20f);
	glVertex2f(-0.55f, -0.20f);
	glVertex2f(-0.55f,0.15f);
	glVertex2f(-0.72f,0.15f);
    glEnd();

    glBegin(GL_QUADS); ///front home
	glColor3ub(244, 249, 238);
	glVertex2f(-0.71f,-0.20f);
	glVertex2f(-0.50f, -0.20f);
	glVertex2f(-0.50f,0.15f);
	glVertex2f(-0.71f,0.15f);
    glEnd();


    glBegin(GL_TRIANGLES); ///front home chal hide
	glColor3ub(228,132,0);
	glVertex2f(-0.74f,0.15f);
	glVertex2f(-0.54f, 0.15f);
	glVertex2f(-0.63f,0.33f);
	glEnd();



    glBegin(GL_TRIANGLES); ///front home chal
	glColor3ub(226, 154, 60);
	glVertex2f(-0.72f,0.15f);
	glVertex2f(-0.490f, 0.15f);
	glVertex2f(-0.61f,0.38f);
	glEnd();


	glBegin(GL_TRIANGLES); ///front home get up
	glColor3ub(244, 249, 238);
	glVertex2f(-0.71f,0.15f);
	glVertex2f(-0.51f, 0.15f);
	glVertex2f(-0.61f,0.33f);
	glEnd();



    glBegin(GL_QUADS); ///front home chal
	glColor3ub(237, 237, 236);
	glVertex2f(-0.80f,0.25f);
	glVertex2f(-0.73f, 0.25f);
	glVertex2f(-0.73f,0.34f);
	glVertex2f(-0.80f,0.34f);
    glEnd();

    glBegin(GL_QUADS); ///front home chal ar opr
	glColor3ub(130, 77, 53);
	glVertex2f(-0.81f,0.33f);
	glVertex2f(-0.72f, 0.33f);
	glVertex2f(-0.72f,0.36f);
	glVertex2f(-0.81f,0.36f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 1
	glColor3ub(115, 77, 38);
	glVertex2f(-0.88f,0.0f);
	glVertex2f(-0.935f,0.0f);
	glVertex2f(-0.935f,-0.08f);
	glVertex2f(-0.88f,-0.08f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 1
	glColor3ub(150, 220, 244);
	glVertex2f(-0.885f,-0.01f);
	glVertex2f(-0.93f,-0.01f);
	glVertex2f(-0.93f,-0.07f);
	glVertex2f(-0.885f,-0.07f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 2
	glColor3ub(115, 77, 38);
	glVertex2f(-0.86f,0.0f);
	glVertex2f(-0.80f,0.0f);
	glVertex2f(-0.80f,-0.08f);
	glVertex2f(-0.86f,-0.08f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 2
	glColor3ub(150, 220, 244);
	glVertex2f(-0.855f,-0.01f);
	glVertex2f(-0.805f,-0.01f);
	glVertex2f(-0.805f,-0.07f);
	glVertex2f(-0.855f,-0.07f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 3
	glColor3ub(115, 77, 38);
	glVertex2f(-0.785f,0.0f);
	glVertex2f(-0.73f,0.0f);
	glVertex2f(-0.73f,-0.08f);
	glVertex2f(-0.785f,-0.08f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 3
	glColor3ub(150, 220, 244);
	glVertex2f(-0.78f,-0.01f);
	glVertex2f(-0.735f,-0.01f);
	glVertex2f(-0.735f,-0.07f);
	glVertex2f(-0.78f,-0.07f);
    glEnd();

     glBegin(GL_QUADS); ///front home1 window 4
	glColor3ub(115, 77, 38);
	glVertex2f(-0.785f,0.03f);
	glVertex2f(-0.73f,0.03f);
	glVertex2f(-0.73f,0.11f);
	glVertex2f(-0.785f,0.11f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 4
	glColor3ub(150, 220, 244);
	glVertex2f(-0.78f,0.04f);
	glVertex2f(-0.735f,0.04f);
	glVertex2f(-0.735f,0.10f);
	glVertex2f(-0.78f,0.10f);
    glEnd();



    glBegin(GL_QUADS); ///front home1 window 5
	glColor3ub(115, 77, 38);
	glVertex2f(-0.86f,0.03f);
	glVertex2f(-0.80f,0.03f);
	glVertex2f(-0.80f,0.11f);
	glVertex2f(-0.86f,0.11f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 5
	glColor3ub(150, 220, 244);
	glVertex2f(-0.855f,0.04f);
	glVertex2f(-0.805f,0.04f);
	glVertex2f(-0.805f,0.10f);
	glVertex2f(-0.855f,0.10f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 6
	glColor3ub(115, 77, 38);
	glVertex2f(-0.88f,0.03f);
	glVertex2f(-0.935f,0.03f);
	glVertex2f(-0.935f,0.11f);
	glVertex2f(-0.88f,0.11f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 6
	glColor3ub(150, 220, 244);
	glVertex2f(-0.885f,0.04f);
	glVertex2f(-0.93f,0.04f);
	glVertex2f(-0.93f,0.10f);
	glVertex2f(-0.885f,0.10f);
    glEnd();
    ///////////////////////////////////////////////////////
    glLineWidth(03); ///window
   glBegin(GL_LINES);
   glColor3ub(115, 77, 38);
/// window 1
    glVertex2f(-0.91f,-0.01f);
	glVertex2f(-0.91f,-0.08f);

	glVertex2f(-0.935f,-0.04f);
	glVertex2f(-0.88f,-0.04f);
/// window 2
	glVertex2f(-0.83f,-0.01f);
	glVertex2f(-0.83f,-0.08f);

	glVertex2f(-0.80f,-0.04f);
	glVertex2f(-0.86f,-0.04f);
/// window 3
    glVertex2f(-0.76f,-0.01f);
	glVertex2f(-0.76f,-0.08f);

	glVertex2f(-0.73f,-0.04f);
	glVertex2f(-0.785f,-0.04f);

/// window 4

    glVertex2f(-0.76f,0.04f);
	glVertex2f(-0.76f,0.10f);

	glVertex2f(-0.73f,0.07f);
	glVertex2f(-0.785f,0.07f);

///  window 5

   glVertex2f(-0.83f,0.04f);
	glVertex2f(-0.83f,0.10f);

	glVertex2f(-0.80f,0.07f);
	glVertex2f(-0.86f,0.07f);

/// window 6

	glVertex2f(-0.91f,0.04f);
	glVertex2f(-0.91f,0.10f);

	glVertex2f(-0.935f,0.07f);
	glVertex2f(-0.88f,0.07f);
///door
    glVertex2f(-0.60f,0.12f);
	glVertex2f(-0.60f, 0.18f);

	glVertex2f(-0.57f,0.15f);
	glVertex2f(-0.635f,0.15f);

    glEnd();

    glBegin(GL_QUADS); ///front home door 1
	glColor3ub(227,218,201);
	glVertex2f(-0.67f,-0.19f);
	glVertex2f(-0.54f, -0.19f);
	glVertex2f(-0.54f,0.05f);
	glVertex2f(-0.67f,0.05f);
    glEnd();


     glBegin(GL_QUADS); ///front home door 2
	glColor3ub(228, 122, 9);
	glVertex2f(-0.65f,0.09f);
	glVertex2f(-0.56f, 0.09f);
	glVertex2f(-0.535f,0.05f);
	glVertex2f(-0.675f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home door 3
	glColor3ub(138, 107, 80);
	glVertex2f(-0.65f,-0.19f);
	glVertex2f(-0.56f, -0.19f);
	glVertex2f(-0.56f,0.04f);
	glVertex2f(-0.65f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home door 4
	glColor3ub(218,193,160);
	glVertex2f(-0.64f,-0.17f);
	glVertex2f(-0.572f, -0.17f);
	glVertex2f(-0.572f,0.02f);
	glVertex2f(-0.64f,0.02f);
    glEnd();

     glBegin(GL_QUADS); ///front home door up window 5
	glColor3ub(115, 77, 38);
	glVertex2f(-0.64f,0.11f);
	glVertex2f(-0.565f, 0.11f);
	glVertex2f(-0.565f,0.19f);
	glVertex2f(-0.64f,0.19f);
    glEnd();

     glBegin(GL_QUADS); ///front home door up window 5
	glColor3ub(150, 220, 244);
	glVertex2f(-0.635f,0.12f);
	glVertex2f(-0.57f, 0.12f);
	glVertex2f(-0.57f,0.18f);
	glVertex2f(-0.635f,0.18f);
    glEnd();

    glLineWidth(03);
   glBegin(GL_LINES);
   glColor3ub(138, 107, 80);

 ///door
    glVertex2f(-0.605,-0.18);
    glVertex2f(-0.605,0.04);


    ///door
    glColor3ub(115, 77, 38);
    glVertex2f(-0.60f,0.12f);
	glVertex2f(-0.60f, 0.18f);

	glVertex2f(-0.57f,0.15f);
	glVertex2f(-0.64f,0.15f);

      glEnd();






////////////////////////////////////(+++++++++++++++++++++++++)///////////////////////////////////////////


    glBegin(GL_QUADS); ///front home
	glColor3ub(236, 238, 225);
	glVertex2f(0.70f,-0.15f);
	glVertex2f(0.95f,- 0.15f);
	glVertex2f(0.95f,0.15f);
	glVertex2f(0.70f,0.15f);
    glEnd();


    glBegin(GL_QUADS); ///front home chal
	glColor3ub(120, 95, 125);
	glVertex2f(0.65f,0.15f);
	glVertex2f(0.96f, 0.15f);
	glVertex2f(0.88f,0.29f);
	glVertex2f(0.65f,0.29f);
    glEnd();

    glBegin(GL_QUADS); ///front home hind
	glColor3ub(219, 226, 215);
	glVertex2f(0.72f,-0.20f);
	glVertex2f(0.55f, -0.20f);
	glVertex2f(0.55f,0.15f);
	glVertex2f(0.72f,0.15f);
    glEnd();

   glBegin(GL_QUADS); ///front home
	glColor3ub(244, 249, 238);
	glVertex2f(0.71f,-0.20f);
	glVertex2f(0.51f, -0.20f);
	glVertex2f(0.51f,0.15f);
	glVertex2f(0.71f,0.15f);
    glEnd();

    glBegin(GL_TRIANGLES); ///front home chal hide
	glColor3ub(102, 79, 108);
	glVertex2f(0.74f,0.15f);
	glVertex2f(0.54f, 0.15f);
	glVertex2f(0.63f,0.33f);
	glEnd();



    glBegin(GL_TRIANGLES); ///front home chal
	glColor3ub(149, 123, 153);
	glVertex2f(0.72f,0.15f);
	glVertex2f(0.50f, 0.15f);
	glVertex2f(0.618f,0.38f);
	glEnd();

	glBegin(GL_QUADS); ///front home chal ar opr
	glColor3ub(237, 237, 236);
	glVertex2f(0.77f,0.25f);
	glVertex2f(0.73f, 0.25f);
	glVertex2f(0.73f,0.34f);
	glVertex2f(0.77f,0.34f);
    glEnd();

	glBegin(GL_QUADS); ///front home ar opr
	glColor3ub(128, 110, 137);
	glVertex2f(0.78f,0.33f);
	glVertex2f(0.72f, 0.33f);
	glVertex2f(0.72f,0.36f);
	glVertex2f(0.78f,0.36f);
    glEnd();


    glBegin(GL_TRIANGLES); ///front home dorojar opr
	glColor3ub(244, 249, 238);
	glVertex2f(0.705f,0.15f);
	glVertex2f(0.52f, 0.15f);
	glVertex2f(0.615f,0.33f);
	glEnd();


	 glBegin(GL_QUADS); ///front home window 1
	glColor3ub(115, 77, 38);
	glVertex2f(0.73f,-0.10f);
	glVertex2f(0.78f,- 0.10f);
	glVertex2f(0.78f,0.13f);
	glVertex2f(0.73f,0.13f);
    glEnd();

    glBegin(GL_QUADS); ///front home window 1
	glColor3ub(150, 220, 244);
	glVertex2f(0.735f,-0.09f);
	glVertex2f(0.775f,- 0.09f);
	glVertex2f(0.775f,0.12f);
	glVertex2f(0.735f,0.12f);
    glEnd();



     glBegin(GL_QUADS); ///front home window 2
	glColor3ub(115, 77, 38);
	glVertex2f(0.80f,-0.10f);
	glVertex2f(0.85f,- 0.10f);
	glVertex2f(0.85f,0.13f);
	glVertex2f(0.80f,0.13f);
    glEnd();

    glBegin(GL_QUADS); ///front home window 2
	glColor3ub(150, 220, 244);
	glVertex2f(0.805f,-0.09f);
	glVertex2f(0.845f,- 0.09f);
	glVertex2f(0.845f,0.12f);
	glVertex2f(0.805f,0.12f);
    glEnd();

     glBegin(GL_QUADS); ///front home window 3
	glColor3ub(115, 77, 38);
	glVertex2f(0.87f,-0.10f);
	glVertex2f(0.92f,- 0.10f);
	glVertex2f(0.92f,0.13f);
	glVertex2f(0.87f,0.13f);
    glEnd();

   glBegin(GL_QUADS); ///front home window 3
	glColor3ub(150, 220, 244);
	glVertex2f(0.875f,-0.09f);
	glVertex2f(0.915f,- 0.09f);
	glVertex2f(0.915f,0.12f);
	glVertex2f(0.875f,0.12f);
    glEnd();

    glLineWidth(03);
   glBegin(GL_LINES);
   glColor3ub(115, 77, 38);
///window 1
    glVertex2f(0.895,-0.09);
    glVertex2f(0.895,0.12);

    glVertex2f(0.875,0.0);
    glVertex2f(0.915,0.0);

    /////////////////////////////////
///window 2
    glVertex2f(0.825,-0.09);
    glVertex2f(0.825,0.12);

    glVertex2f(0.805,0.0);
    glVertex2f(0.845,0.0);

///////////////////////////////////
///window 3

    glVertex2f(0.755f,-0.09f);
	glVertex2f(0.755f,0.12f);

	glVertex2f(0.775f,0.0f);
	glVertex2f(0.735f,0.0f);


    glEnd();


////////////////////////////////////////////////////
    glBegin(GL_QUADS); ///front home door 1
	glColor3ub(214,202,221);
	glVertex2f(0.68f,-0.20f);
	glVertex2f(0.55f, -0.20f);
	glVertex2f(0.55f,0.09f);
	glVertex2f(0.68f,0.09f);
    glEnd();


    glBegin(GL_QUADS); ///front home door 2
	glColor3ub(244, 249, 238);
	glVertex2f(0.675f,-0.20f);
	glVertex2f(0.555f, -0.20f);
	glVertex2f(0.555f,0.09f);
	glVertex2f(0.675f,0.09f);
    glEnd();


    glBegin(GL_QUADS); ///front home door 3
	glColor3ub(149, 123, 153);
	glVertex2f(0.69f,0.09f);
	glVertex2f(0.54f,0.09f);
	glVertex2f(0.565f,0.13f);
	glVertex2f(0.67f,0.13f);
    glEnd();

     glBegin(GL_QUADS); ///front home door 4
	glColor3ub(160,82,45);
	glVertex2f(0.66f,-0.19f);
	glVertex2f(0.57f, -0.19f);
	glVertex2f(0.57f,0.06f);
	glVertex2f(0.66f,0.06f);
    glEnd();

    glBegin(GL_QUADS); ///front home door 5
	glColor3ub(221, 172, 133);
	glVertex2f(0.65f,-0.17f);
	glVertex2f(0.58f, -0.17f);
	glVertex2f(0.58f,0.04f);
	glVertex2f(0.65f,0.04f);
    glEnd();

/////////////////////////////////////
     glLineWidth(03);///door
   glBegin(GL_LINES);
   glColor3ub(160,82,45);

    glVertex2f(0.615,-0.18);
    glVertex2f(0.615,0.05);
    glEnd();

//////////////////////////////////////////////////////////////
///BARI 3

    glBegin(GL_QUADS); ///front home middel
	glColor3ub(240, 231, 221);
	glVertex2f(0.35f,-0.20f);
	glVertex2f(-0.35f, -0.20f);
	glVertex2f(-0.35f,0.12f);
	glVertex2f(0.35f,0.12f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal
	glColor3ub(57, 115, 129);
	glVertex2f(0.37f,0.10f);
	glVertex2f(-0.37f,0.10f);
	glVertex2f(-0.30f,0.25f);
	glVertex2f(0.30f,0.25f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal up
	glColor3ub(240, 231, 221);
	glVertex2f(-0.23f,0.20f);
	glVertex2f(-0.19f,0.20f);
	glVertex2f(-0.19f,0.27f);
	glVertex2f(-0.23f,0.27f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal up
	glColor3ub(240, 231, 221);
	glVertex2f(0.23f,0.20f);
	glVertex2f(0.19f,0.20f);
	glVertex2f(0.19f,0.27f);
	glVertex2f(0.23f,0.27f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal up
	glColor3ub(146, 103, 70);
	glVertex2f(-0.24f,0.27f);
	glVertex2f(-0.18f,0.27f);
	glVertex2f(-0.18f,0.30f);
	glVertex2f(-0.24f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal up
	glColor3ub(146, 103, 70);
	glVertex2f(0.24f,0.27f);
	glVertex2f(0.18f,0.27f);
	glVertex2f(0.18f,0.30f);
	glVertex2f(0.24f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel 2
	glColor3ub(238, 221, 209);
	glVertex2f(0.10f,-0.20f);
	glVertex2f(-0.10f, -0.20f);
	glVertex2f(-0.10f,0.10f);
	glVertex2f(0.10f,0.10f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel 2
	glColor3ub(240, 231, 221);
	glVertex2f(0.09f,-0.20f);
	glVertex2f(-0.09f, -0.20f);
	glVertex2f(-0.09f,0.10f);
	glVertex2f(0.09f,0.10f);
    glEnd();

   glBegin(GL_TRIANGLES); ///front home middel 2
	glColor3ub(40, 94, 106);
	glVertex2f(-0.13f,0.10f);
	glVertex2f(0.13f,0.10f);
	glVertex2f(0.0f,0.280f);
    glEnd();

    glBegin(GL_TRIANGLES); ///front home middel 2
	glColor3ub(93, 148, 166);
	glVertex2f(-0.10f,0.10f);
	glVertex2f(0.10f,0.10f);
	glVertex2f(0.0f,0.30f);
    glEnd();

    glBegin(GL_TRIANGLES); ///front home middel 2
	glColor3ub(240, 231, 221);
	glVertex2f(-0.08f,0.10f);
	glVertex2f(0.08f,0.10f);
	glVertex2f(0.0f,0.26f);
    glEnd();

     glBegin(GL_QUADS); ///front home middel get
	glColor3ub(216, 180, 157);
	glVertex2f(0.05f,-0.20f);
	glVertex2f(-0.05f, -0.20f);
	glVertex2f(-0.05f,0.06f);
	glVertex2f(0.05f,0.06f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel get
	glColor3ub(146, 103, 70);
	glVertex2f(0.04f,-0.18f);
	glVertex2f(-0.04f, -0.18f);
	glVertex2f(-0.04f,0.03f);
	glVertex2f(0.04f,0.03f);
    glEnd();


    glBegin(GL_QUADS); ///front home middel get 1
	glColor3ub(227,218,201);
	glVertex2f(0.03f,-0.17f);
	glVertex2f(-0.03f, -0.17f);
	glVertex2f(-0.03f,0.02f);
	glVertex2f(0.03f,0.02f);
    glEnd();


    glLineWidth(03);
   glBegin(GL_LINES);
   glColor3ub(115, 77, 38);///door

    glVertex2f(0.0,-0.17);
    glVertex2f(0.0,0.02);
   glEnd();


     glBegin(GL_QUADS); ///front home middel get up
	glColor3ub(93, 148, 166);
	glVertex2f(0.07f,0.06f);
	glVertex2f(-0.07f,0.06f);
	glVertex2f(-0.04f,0.11f);
	glVertex2f(0.04f,0.11f);
    glEnd();



    glBegin(GL_QUADS); ///front home middel window 1
	glColor3ub(146, 103, 70);
	glVertex2f(-0.33f,-0.15f);
	glVertex2f(-0.28f, -0.15f);
	glVertex2f(-0.28f,0.05f);
	glVertex2f(-0.33f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 1
	glColor3ub(146, 103, 70);
	glVertex2f(0.33f,-0.15f);
	glVertex2f(0.28f, -0.15f);
	glVertex2f(0.28f,0.05f);
	glVertex2f(0.33f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 1
	glColor3ub(150, 220, 244);
	glVertex2f(-0.325f,-0.14f);
	glVertex2f(-0.285f, -0.14f);
	glVertex2f(-0.285f,0.04f);
	glVertex2f(-0.325f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 1
	glColor3ub(150, 220, 244);
	glVertex2f(0.325f,-0.14f);
	glVertex2f(0.285f, -0.14f);
	glVertex2f(0.285f,0.04f);
	glVertex2f(0.325f,0.04f);
    glEnd();



    glBegin(GL_QUADS); ///front home middel window 2
	glColor3ub(146, 103, 70);
	glVertex2f(-0.25f,-0.15f);
	glVertex2f(-0.20f, -0.15f);
	glVertex2f(-0.20f,0.05f);
	glVertex2f(-0.25f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 2
	glColor3ub(146, 103, 70);
	glVertex2f(0.25f,-0.15f);
	glVertex2f(0.20f, -0.15f);
	glVertex2f(0.20f,0.05f);
	glVertex2f(0.25f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 2
	glColor3ub(150, 220, 244);
	glVertex2f(-0.245f,-0.14f);
	glVertex2f(-0.205f, -0.14f);
	glVertex2f(-0.205f,0.04f);
	glVertex2f(-0.245f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 2
	glColor3ub(150, 220, 244);
	glVertex2f(0.245f,-0.14f);
	glVertex2f(0.205f, -0.14f);
	glVertex2f(0.205f,0.04f);
	glVertex2f(0.245f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 3
	glColor3ub(146, 103, 70);
	glVertex2f(-0.17f,-0.15f);
	glVertex2f(-0.12f, -0.15f);
	glVertex2f(-0.12f,0.05f);
	glVertex2f(-0.17f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 3
	glColor3ub(146, 103, 70);
	glVertex2f(0.17f,-0.15f);
	glVertex2f(0.12f, -0.15f);
	glVertex2f(0.12f,0.05f);
	glVertex2f(0.17f,0.05f);
    glEnd();


    glBegin(GL_QUADS); ///front home middel window 3
	glColor3ub(150, 220, 244);
	glVertex2f(-0.165f,-0.14f);
	glVertex2f(-0.125f, -0.14f);
	glVertex2f(-0.125f,0.04f);
	glVertex2f(-0.165f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 3
	glColor3ub(150, 220, 244);
	glVertex2f(0.165f,-0.14f);
	glVertex2f(0.125f, -0.14f);
	glVertex2f(0.125f,0.04f);
	glVertex2f(0.165f,0.04f);
    glEnd();


   glLineWidth(03);
   glBegin(GL_LINES);
   glColor3ub(115, 77, 38);/// window 1

    glVertex2f(-0.305,-0.15);
    glVertex2f(-0.305,0.05);

/// window 2

    glVertex2f(-0.225,-0.15);
    glVertex2f(-0.225,0.05);

/// window 3

    glVertex2f(-0.145,-0.15);
    glVertex2f(-0.145,0.05);
/////////////////////////////////////////////
    glColor3ub(115, 77, 38);/// window 1

    glVertex2f(0.305,-0.15);
    glVertex2f(0.305,0.05);

/// window 2

    glVertex2f(0.225,-0.15);
    glVertex2f(0.225,0.05);

/// window 3

    glVertex2f(0.145,-0.15);
    glVertex2f(0.145,0.05);



   glEnd();















//////////////////////////////////////////////////////////////
///CLOUDS 1

glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);

GLfloat x_3 =0.0; GLfloat y_3 =0.80; GLfloat radius_3 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_3 , y_3); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_3 + (radius_3 * cos(i * twicePi / triangleAmount)),
y_3 + (radius_3 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_4 =0.05; GLfloat y_4= 0.85; GLfloat radius_4 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_4 , y_4); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_4 + (radius_4 * cos(i * twicePi / triangleAmount)),
y_4 + (radius_4 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x_5 =0.05; GLfloat y_5= 0.78; GLfloat radius_5 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_5 , y_5); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_5 + (radius_5 * cos(i * twicePi / triangleAmount)),
y_5 + (radius_5 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_6 =0.15; GLfloat y_6= 0.78; GLfloat radius_6=0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(255,255,255);
glVertex2f(x_6 , y_6); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_6 + (radius_6 * cos(i * twicePi / triangleAmount)),
y_6 + (radius_6 * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glPopMatrix();

////////////////////////////////////////////////////////////////
/// CLOUDS 2

glPushMatrix();
glTranslatef(position4,.0f, 0.0f);

GLfloat x_7 =0.0; GLfloat y_7 =0.80; GLfloat radius_7 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_7 , y_7); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_7 + (radius_7 * cos(i * twicePi / triangleAmount)),
y_7 + (radius_7 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_8 =0.05; GLfloat y_8= 0.85; GLfloat radius_8 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_8 , y_8); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_8 + (radius_8 * cos(i * twicePi / triangleAmount)),
y_8 + (radius_8 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x_9 =0.05; GLfloat y_9= 0.78; GLfloat radius_9 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_9 , y_9); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_9 + (radius_9 * cos(i * twicePi / triangleAmount)),
y_9 + (radius_9 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_10 =0.15; GLfloat y_10= 0.78; GLfloat radius_10=0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(255,255,255);
glVertex2f(x_10 , y_10); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_10 + (radius_10 * cos(i * twicePi / triangleAmount)),
y_10 + (radius_10 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

glPopMatrix();
//////////////////////////////////////////////////////////////////////

/// tree
GLfloat x_11 =-0.90; GLfloat y_11= -0.52; GLfloat radius_11=0.05;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(64, 114, 61);
glVertex2f(x_11 , y_11); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_11 + (radius_11 * cos(i * twicePi / triangleAmount)),
y_11 + (radius_11 * sin(i * twicePi / triangleAmount))
);
}
glEnd();



GLfloat x_12 =-0.83; GLfloat y_12= -0.52; GLfloat radius_12=0.05;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(64, 114, 61);
glVertex2f(x_12 , y_12); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_12 + (radius_12 * cos(i * twicePi / triangleAmount)),
y_12 + (radius_12 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_13 =-0.79; GLfloat y_13= -0.53; GLfloat radius_13=0.05;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(64, 114, 61);
glVertex2f(x_13 , y_13); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_13 + (radius_13 * cos(i * twicePi / triangleAmount)),
y_13 + (radius_13 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x_14 =-0.79; GLfloat y_14= -0.53; GLfloat radius_14=0.02;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(224, 237, 105);
glVertex2f(x_14 , y_14); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_14 + (radius_14 * cos(i * twicePi / triangleAmount)),
y_14 + (radius_14 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


////////////////////////////////////////////////
/////////////////////////////////////////////////
/// car 2

 glLoadIdentity();
 glPushMatrix();
 glTranslatef(position2,0.0f, 0.0f);

   glBegin(GL_QUADS);
      glColor3ub(105,53,156);
      glVertex2f(-0.13f, -0.50f);
      glVertex2f( 0.12f, -0.50f);
      glVertex2f( 0.12f,  -0.65f);
      glVertex2f(-0.13f,  -0.65f);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(105,53,156);
      glVertex2f(-0.13f, -0.50f);
      glVertex2f(0.02f, -0.50f);
      glVertex2f(0.02f,  -0.40f);
      glVertex2f(-0.13f,  -0.40f);

      glEnd();


   glBegin(GL_QUADS);
      glColor3ub(230,232,250);
      glVertex2f(-0.11f, -0.49f);
      glVertex2f( -0.03f, -0.49f);
      glVertex2f( -0.03f,  -0.42f);
      glVertex2f(-0.11f,  -0.42f);

   glEnd();


GLfloat x_15 =-0.07; GLfloat y_15= -0.65; GLfloat radius_15 =-0.04;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_15 , y_15); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_15 + (radius_15 * cos(i * twicePi / triangleAmount)),
y_15 + (radius_15 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_16 =0.07; GLfloat y_16= -0.65; GLfloat radius_16 =-0.04;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_16 , y_16); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_16 + (radius_16* cos(i * twicePi / triangleAmount)),
y_16 + (radius_16 * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glPopMatrix();

/////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
///car
glLoadIdentity();
glPushMatrix();
 glTranslatef(position1,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3ub(0,139,139);
      glVertex2f(-0.15f, -0.85f);
      glVertex2f( 0.15f, -0.85f);
      glVertex2f( 0.15f,  -0.65f);
      glVertex2f(-0.15f,  -0.65f);
      glEnd();

      GLfloat x_17 =-0.08; GLfloat y_17= -0.84; GLfloat radius_17 =-0.05;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_17 , y_17); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_17+ (radius_17 * cos(i * twicePi / triangleAmount)),
y_17 + (radius_17 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

 GLfloat x_18 =-0.082; GLfloat y_18= -0.84; GLfloat radius_18 =-0.04;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(255,255,255);
glVertex2f(x_18 , y_18); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_18 + (radius_18 * cos(i * twicePi / triangleAmount)),
y_18 + (radius_18 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


 GLfloat x_19 =-0.082; GLfloat y_19= -0.84; GLfloat radius_19 =-0.03;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_19 , y_19); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_19 + (radius_19 * cos(i * twicePi / triangleAmount)),
y_19 + (radius_19 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x_20 =-0.02; GLfloat y_20 = -0.595; GLfloat radius_20 =0.14;


glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(0,139,139);
glVertex2f(x_20 , y_20); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_20  + (radius_20 * cos(i * twicePi / triangleAmount)),
y_20 + (radius_20 * sin(i * twicePi / triangleAmount))
);
}
glEnd();





GLfloat x_21 =0.08; GLfloat y_21= -0.74; GLfloat radius_21 =0.12;


glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(0,139,139);
glVertex2f(x_21 , y_21); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_21 + (radius_21 * cos(i * twicePi / triangleAmount)),
y_21 + (radius_21 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_22 =-0.02; GLfloat y_22= -0.62; GLfloat radius_22 =0.10;


glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_22 , y_22); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_22  + (radius_22 * cos(i * twicePi / triangleAmount)),
y_22 + (radius_22 * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glBegin(GL_QUADS);
      glColor3ub(0,139,139);
      glVertex2f(-0.15f, -0.80f);
      glVertex2f( 0.15f, -0.80f);
      glVertex2f( 0.15f,  -0.65f);
      glVertex2f(-0.15f,  -0.65f);
      glEnd();

      glEnd();
     glBegin(GL_QUADS);
      glColor3ub(0,139,139);
      glVertex2f(-0.03f, -0.80f);
      glVertex2f( 0.0f, -0.80f);
      glVertex2f( 0.0f,  -0.52f);
      glVertex2f(-0.03f,  -0.52f);
      glEnd();



      GLfloat x_23 =0.08; GLfloat y_23= -0.84; GLfloat radius_23 =-0.05;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_23, y_23); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_23 + (radius_23 * cos(i * twicePi / triangleAmount)),
y_23 + (radius_23 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

 GLfloat x_24 =0.082; GLfloat y_24= -0.84; GLfloat radius_24 =-0.04;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(255,255,255);
glVertex2f(x_24 , y_24); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_24 + (radius_24 * cos(i * twicePi / triangleAmount)),
y_24 + (radius_24 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


 GLfloat x_25 =0.082; GLfloat y_25= -0.84; GLfloat radius_25 =-0.03;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_25 , y_25); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_25 + (radius_25 * cos(i * twicePi / triangleAmount)),
y_25 + (radius_25 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

glPopMatrix();


    glFlush();
}
////////////////////////////////////////////////////////////////

                                          ///night mood

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void night() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
   glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS); ///ground 1
	glColor3ub(115, 151, 77);
	glVertex2f(-1.0f,-0.90f);
	glVertex2f(1.0f, -0.90f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(-1.0f,-1.0f);
    glEnd();

    glBegin(GL_QUADS); ///road 1
	glColor3ub(127, 127, 127);
	glVertex2f(-1.0f,-0.90f);
	glVertex2f(1.0f, -0.90f);
	glVertex2f(1.0f,-0.65f);
	glVertex2f(-1.0f,-0.65f);
    glEnd();

    glBegin(GL_QUADS); ///road middle white
	glColor3ub(254, 254, 252);
	glVertex2f(-1.0f,-0.72f);
	glVertex2f(1.0f, -0.72f);
	glVertex2f(1.0f,-0.75f);
	glVertex2f(-1.0f,-0.75f);
    glEnd();

     glBegin(GL_QUADS); ///ground 2
	glColor3ub(142, 180, 107);
	glVertex2f(-1.0f,-0.65f);
	glVertex2f(1.0f, -0.65f);
	glVertex2f(1.0f,-0.40f);
	glVertex2f(-1.0f,-0.40f);
    glEnd();


    glBegin(GL_QUADS); ///road 2
	glColor3ub(127, 127, 127);
	glVertex2f(-1.0f,-0.40f);
	glVertex2f(1.0f, -0.40f);
	glVertex2f(1.0f,-0.20f);
	glVertex2f(-1.0f,-0.20f);
    glEnd();


    glBegin(GL_QUADS); ///road 2 white
	glColor3ub(241, 241, 241);
	glVertex2f(-1.0f,-0.25f);
	glVertex2f(1.0f, -0.25f);
	glVertex2f(1.0f,-0.27f);
	glVertex2f(-1.0f,-0.27f);
    glEnd();


       glBegin(GL_QUADS); ///groud 3
	glColor3ub(142, 180, 107);
	glVertex2f(-1.0f,-0.23f);
	glVertex2f(1.0f, -0.23f);
	glVertex2f(1.0f,-0.05f);
	glVertex2f(-1.0f,-0.05f);
    glEnd();


    glBegin(GL_QUADS); ///sky
	glColor3ub(105,105,105);
	glVertex2f(-1.0f,-0.05f);
	glVertex2f(1.0f, -0.05f);
    glColor3ub(0, 0, 0);
	glVertex2f(1.0f,1.00f);
   // glColor3ub(60, 183, 243);
	glVertex2f(-1.0f,1.00f);
    glEnd();



/////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///star


      glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(0.47f,0.80f);
	glVertex2f(0.50f,0.80f);
	glVertex2f(0.485f,0.85f);

    glEnd();

    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(0.47f,0.83f);
	glVertex2f(0.50f,0.83f);
	glVertex2f(0.485f,0.78f);

    glEnd();


//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////

      glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(-0.47f,0.80f);
	glVertex2f(-0.50f,0.80f);
	glVertex2f(-0.485f,0.85f);

    glEnd();

    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(-0.47f,0.83f);
	glVertex2f(-0.50f,0.83f);
	glVertex2f(-0.485f,0.78f);

    glEnd();
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

   glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(-0.97f,0.80f);
	glVertex2f(-0.94f,0.80f);
	glVertex2f(-0.955f,0.85f);

    glEnd();

    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(-0.97f,0.83f);
	glVertex2f(-0.94f,0.83f);
	glVertex2f(-0.955f,0.78f);

    glEnd();

//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

  glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(0.97f,0.70f);
	glVertex2f(0.94f,0.70f);
	glVertex2f(0.955f,0.75f);

    glEnd();

    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(0.97f,0.73f);
	glVertex2f(0.94f,0.73f);
	glVertex2f(0.955f,0.68f);

    glEnd();

/////////////////////////////////////////////////////////
////////////////////////////////////////////////////////

   glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(0.01f,0.70f);
	glVertex2f(0.04f,0.70f);
	glVertex2f(0.025f,0.75f);

    glEnd();

    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(0.01f,0.73f);
	glVertex2f(0.04f,0.73f);
	glVertex2f(0.025f,0.68f);

    glEnd();

///////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(-0.10f,0.90f);
	glVertex2f(-0.14f,0.90f);
	glVertex2f(-0.12f,0.95f);

    glEnd();

    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(-0.10f,0.93f);
	glVertex2f(-0.14f,0.93f);
	glVertex2f(-0.12f,0.88f);

    glEnd();

//////////////////////////////////////////////////////
//////////////////////////////////////////////////////

      glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(0.60f,0.70f);
	glVertex2f(0.64f,0.70f);
	glVertex2f(0.62f,0.75f);

    glEnd();

    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(0.60f,0.73f);
	glVertex2f(0.64f,0.73f);
	glVertex2f(0.62f,0.68f);

    glEnd();

////////////////////////////////////////////////////
///////////////////////////////////////////////////

     glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(-0.60f,0.70f);
	glVertex2f(-0.64f,0.70f);
	glVertex2f(-0.62f,0.75f);

    glEnd();

    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(255,255,255);
	glVertex2f(-0.60f,0.73f);
	glVertex2f(-0.64f,0.73f);
	glVertex2f(-0.62f,0.68f);

    glEnd();

////////////////////////////////////////////////////////
///////////////////////////////////////////////////////
///tree

glBegin(GL_QUADS); ///front home1
	glColor3ub(89,39,32);
	glVertex2f(-0.45f,-0.05f);
	glVertex2f(-0.40f,- 0.05f);
	glVertex2f(-0.40f,-0.18f);
	glVertex2f(-0.45f,-0.18);
    glEnd();


    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(0,128,0);
	glVertex2f(-0.47f,-0.05f);
	glVertex2f(-0.38f,- 0.05f);
	glVertex2f(-0.425f,0.2f);

    glEnd();

    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(34,139,34);
	glVertex2f(-0.48f,-0.01f);
	glVertex2f(-0.37f,-0.01f);
	glVertex2f(-0.425f,0.3f);

    glEnd();

    /////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
    glBegin(GL_QUADS); ///front home1
	glColor3ub(89,39,32);
	glVertex2f(0.45f,-0.05f);
	glVertex2f(0.40f,- 0.05f);
	glVertex2f(0.40f,-0.18f);
	glVertex2f(0.45f,-0.18);
    glEnd();


    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(0,128,0);
	glVertex2f(0.47f,-0.05f);
	glVertex2f(0.38f,- 0.05f);
	glVertex2f(0.425f,0.2f);

    glEnd();

    glBegin(GL_TRIANGLES); ///front home1
	glColor3ub(34,139,34);
	glVertex2f(0.48f,-0.01f);
	glVertex2f(0.37f,-0.01f);
	glVertex2f(0.425f,0.3f);

    glEnd();









///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

/// moon

GLfloat x_2 =0.90; GLfloat y_2 = 0.90; GLfloat radius_2 =0.10;
int triangleAmount = 20; //# of triangles used to draw circle

GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(248,248,255);
glVertex2f(x_2 , y_2); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_2 + (radius_2 * cos(i * twicePi / triangleAmount)),
y_2 + (radius_2 * sin(i * twicePi / triangleAmount))
);
}
glEnd();






///////////////////////////////////////////////////
                  ///the house in front
//////////////////////////////////////////////////////
                  ///front home1

/////////////////////////////////////////////////////

    glBegin(GL_QUADS);
	glColor3ub(207, 202, 162);
	glVertex2f(-0.70f,-0.18f);
	glVertex2f(-0.95f,- 0.18f);
	glVertex2f(-0.95f,-0.10f);
	glVertex2f(-0.70f,-0.10f);
    glEnd();


      glBegin(GL_QUADS); ///front home
	glColor3ub(236, 238, 225);
	glVertex2f(-0.70f,-0.10f);
	glVertex2f(-0.95f,- 0.10f);
	glVertex2f(-0.95f,0.15f);
	glVertex2f(-0.70f,0.15f);
    glEnd();



    glBegin(GL_QUADS); ///front home chal
	glColor3ub(242, 152, 45);
	glVertex2f(-0.65f,0.15f);
	glVertex2f(-0.96f, 0.15f);
	glVertex2f(-0.88f,0.29f);
	glVertex2f(-0.65f,0.29f);
    glEnd();

    glBegin(GL_QUADS); ///front home hind
	glColor3ub(219, 226, 215);
	glVertex2f(-0.72f,-0.20f);
	glVertex2f(-0.55f, -0.20f);
	glVertex2f(-0.55f,0.15f);
	glVertex2f(-0.72f,0.15f);
    glEnd();

    glBegin(GL_QUADS); ///front home
	glColor3ub(244, 249, 238);
	glVertex2f(-0.71f,-0.20f);
	glVertex2f(-0.50f, -0.20f);
	glVertex2f(-0.50f,0.15f);
	glVertex2f(-0.71f,0.15f);
    glEnd();


    glBegin(GL_TRIANGLES); ///front home chal hide
	glColor3ub(228,132,0);
	glVertex2f(-0.74f,0.15f);
	glVertex2f(-0.54f, 0.15f);
	glVertex2f(-0.63f,0.33f);
	glEnd();



    glBegin(GL_TRIANGLES); ///front home chal
	glColor3ub(226, 154, 60);
	glVertex2f(-0.72f,0.15f);
	glVertex2f(-0.490f, 0.15f);
	glVertex2f(-0.61f,0.38f);
	glEnd();


	glBegin(GL_TRIANGLES); ///front home get up
	glColor3ub(244, 249, 238);
	glVertex2f(-0.71f,0.15f);
	glVertex2f(-0.51f, 0.15f);
	glVertex2f(-0.61f,0.33f);
	glEnd();



    glBegin(GL_QUADS); ///front home chal
	glColor3ub(237, 237, 236);
	glVertex2f(-0.80f,0.25f);
	glVertex2f(-0.73f, 0.25f);
	glVertex2f(-0.73f,0.34f);
	glVertex2f(-0.80f,0.34f);
    glEnd();

    glBegin(GL_QUADS); ///front home chal ar opr
	glColor3ub(130, 77, 53);
	glVertex2f(-0.81f,0.33f);
	glVertex2f(-0.72f, 0.33f);
	glVertex2f(-0.72f,0.36f);
	glVertex2f(-0.81f,0.36f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 1
	glColor3ub(115, 77, 38);
	glVertex2f(-0.88f,0.0f);
	glVertex2f(-0.935f,0.0f);
	glVertex2f(-0.935f,-0.08f);
	glVertex2f(-0.88f,-0.08f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 1
	glColor3ub(255,204,51);
	glVertex2f(-0.885f,-0.01f);
	glVertex2f(-0.93f,-0.01f);
	glVertex2f(-0.93f,-0.07f);
	glVertex2f(-0.885f,-0.07f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 2
	glColor3ub(115, 77, 38);
	glVertex2f(-0.86f,0.0f);
	glVertex2f(-0.80f,0.0f);
	glVertex2f(-0.80f,-0.08f);
	glVertex2f(-0.86f,-0.08f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 2
	glColor3ub(255,204,51);
	glVertex2f(-0.855f,-0.01f);
	glVertex2f(-0.805f,-0.01f);
	glVertex2f(-0.805f,-0.07f);
	glVertex2f(-0.855f,-0.07f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 3
	glColor3ub(115, 77, 38);
	glVertex2f(-0.785f,0.0f);
	glVertex2f(-0.73f,0.0f);
	glVertex2f(-0.73f,-0.08f);
	glVertex2f(-0.785f,-0.08f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 3
	glColor3ub(255,204,51);
	glVertex2f(-0.78f,-0.01f);
	glVertex2f(-0.735f,-0.01f);
	glVertex2f(-0.735f,-0.07f);
	glVertex2f(-0.78f,-0.07f);
    glEnd();

     glBegin(GL_QUADS); ///front home1 window 4
	glColor3ub(115, 77, 38);
	glVertex2f(-0.785f,0.03f);
	glVertex2f(-0.73f,0.03f);
	glVertex2f(-0.73f,0.11f);
	glVertex2f(-0.785f,0.11f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 4
	glColor3ub(255,204,51);
	glVertex2f(-0.78f,0.04f);
	glVertex2f(-0.735f,0.04f);
	glVertex2f(-0.735f,0.10f);
	glVertex2f(-0.78f,0.10f);
    glEnd();



    glBegin(GL_QUADS); ///front home1 window 5
	glColor3ub(115, 77, 38);
	glVertex2f(-0.86f,0.03f);
	glVertex2f(-0.80f,0.03f);
	glVertex2f(-0.80f,0.11f);
	glVertex2f(-0.86f,0.11f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 5
	glColor3ub(255,204,51);
	glVertex2f(-0.855f,0.04f);
	glVertex2f(-0.805f,0.04f);
	glVertex2f(-0.805f,0.10f);
	glVertex2f(-0.855f,0.10f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 6
	glColor3ub(115, 77, 38);
	glVertex2f(-0.88f,0.03f);
	glVertex2f(-0.935f,0.03f);
	glVertex2f(-0.935f,0.11f);
	glVertex2f(-0.88f,0.11f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 6
	glColor3ub(255,204,51);
	glVertex2f(-0.885f,0.04f);
	glVertex2f(-0.93f,0.04f);
	glVertex2f(-0.93f,0.10f);
	glVertex2f(-0.885f,0.10f);
    glEnd();
    ///////////////////////////////////////////////////////
    glLineWidth(03); ///window
   glBegin(GL_LINES);
   glColor3ub(115, 77, 38);
/// window 1
    glVertex2f(-0.91f,-0.01f);
	glVertex2f(-0.91f,-0.08f);

	glVertex2f(-0.935f,-0.04f);
	glVertex2f(-0.88f,-0.04f);
/// window 2
	glVertex2f(-0.83f,-0.01f);
	glVertex2f(-0.83f,-0.08f);

	glVertex2f(-0.80f,-0.04f);
	glVertex2f(-0.86f,-0.04f);
/// window 3
    glVertex2f(-0.76f,-0.01f);
	glVertex2f(-0.76f,-0.08f);

	glVertex2f(-0.73f,-0.04f);
	glVertex2f(-0.785f,-0.04f);

/// window 4

    glVertex2f(-0.76f,0.04f);
	glVertex2f(-0.76f,0.10f);

	glVertex2f(-0.73f,0.07f);
	glVertex2f(-0.785f,0.07f);

///  window 5

   glVertex2f(-0.83f,0.04f);
	glVertex2f(-0.83f,0.10f);

	glVertex2f(-0.80f,0.07f);
	glVertex2f(-0.86f,0.07f);

/// window 6

	glVertex2f(-0.91f,0.04f);
	glVertex2f(-0.91f,0.10f);

	glVertex2f(-0.935f,0.07f);
	glVertex2f(-0.88f,0.07f);
///door
    glVertex2f(-0.60f,0.12f);
	glVertex2f(-0.60f, 0.18f);

	glVertex2f(-0.57f,0.15f);
	glVertex2f(-0.635f,0.15f);

    glEnd();

    glBegin(GL_QUADS); ///front home door 1
	glColor3ub(227,218,201);
	glVertex2f(-0.67f,-0.19f);
	glVertex2f(-0.54f, -0.19f);
	glVertex2f(-0.54f,0.05f);
	glVertex2f(-0.67f,0.05f);
    glEnd();


     glBegin(GL_QUADS); ///front home door 2
	glColor3ub(228, 122, 9);
	glVertex2f(-0.65f,0.09f);
	glVertex2f(-0.56f, 0.09f);
	glVertex2f(-0.535f,0.05f);
	glVertex2f(-0.675f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home door 3
	glColor3ub(138, 107, 80);
	glVertex2f(-0.65f,-0.19f);
	glVertex2f(-0.56f, -0.19f);
	glVertex2f(-0.56f,0.04f);
	glVertex2f(-0.65f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home door 4
	glColor3ub(218,193,160);
	glVertex2f(-0.64f,-0.17f);
	glVertex2f(-0.572f, -0.17f);
	glVertex2f(-0.572f,0.02f);
	glVertex2f(-0.64f,0.02f);
    glEnd();

     glBegin(GL_QUADS); ///front home door up window 5
	glColor3ub(115, 77, 38);
	glVertex2f(-0.64f,0.11f);
	glVertex2f(-0.565f, 0.11f);
	glVertex2f(-0.565f,0.19f);
	glVertex2f(-0.64f,0.19f);
    glEnd();

     glBegin(GL_QUADS); ///front home door up window 5
	glColor3ub(255,204,51);
	glVertex2f(-0.635f,0.12f);
	glVertex2f(-0.57f, 0.12f);
	glVertex2f(-0.57f,0.18f);
	glVertex2f(-0.635f,0.18f);
    glEnd();

    glLineWidth(03);
   glBegin(GL_LINES);
   glColor3ub(138, 107, 80);

 ///door
    glVertex2f(-0.605,-0.18);
    glVertex2f(-0.605,0.04);


    ///door
    glColor3ub(115, 77, 38);
    glVertex2f(-0.60f,0.12f);
	glVertex2f(-0.60f, 0.18f);

	glVertex2f(-0.57f,0.15f);
	glVertex2f(-0.64f,0.15f);

      glEnd();






////////////////////////////////////(+++++++++++++++++++++++++)///////////////////////////////////////////
                   ///front home 2
                   ///front home 2
                   ///front home 2
                   ///front home 2
////////////////////////////////////////////////////////////////////////////////////////////////////////////

    glBegin(GL_QUADS);
	glColor3ub(236, 238, 225);
	glVertex2f(0.70f,-0.15f);
	glVertex2f(0.95f,- 0.15f);
	glVertex2f(0.95f,0.15f);
	glVertex2f(0.70f,0.15f);
    glEnd();


    glBegin(GL_QUADS); ///front home chal
	glColor3ub(120, 95, 125);
	glVertex2f(0.65f,0.15f);
	glVertex2f(0.96f, 0.15f);
	glVertex2f(0.88f,0.29f);
	glVertex2f(0.65f,0.29f);
    glEnd();

    glBegin(GL_QUADS); ///front home hind
	glColor3ub(219, 226, 215);
	glVertex2f(0.72f,-0.20f);
	glVertex2f(0.55f, -0.20f);
	glVertex2f(0.55f,0.15f);
	glVertex2f(0.72f,0.15f);
    glEnd();

   glBegin(GL_QUADS); ///front home
	glColor3ub(244, 249, 238);
	glVertex2f(0.71f,-0.20f);
	glVertex2f(0.51f, -0.20f);
	glVertex2f(0.51f,0.15f);
	glVertex2f(0.71f,0.15f);
    glEnd();

    glBegin(GL_TRIANGLES); ///front home chal hide
	glColor3ub(102, 79, 108);
	glVertex2f(0.74f,0.15f);
	glVertex2f(0.54f, 0.15f);
	glVertex2f(0.63f,0.33f);
	glEnd();



    glBegin(GL_TRIANGLES); ///front home chal
	glColor3ub(149, 123, 153);
	glVertex2f(0.72f,0.15f);
	glVertex2f(0.50f, 0.15f);
	glVertex2f(0.618f,0.38f);
	glEnd();

	glBegin(GL_QUADS); ///front home chal ar opr
	glColor3ub(237, 237, 236);
	glVertex2f(0.77f,0.25f);
	glVertex2f(0.73f, 0.25f);
	glVertex2f(0.73f,0.34f);
	glVertex2f(0.77f,0.34f);
    glEnd();

	glBegin(GL_QUADS); ///front home ar opr
	glColor3ub(128, 110, 137);
	glVertex2f(0.78f,0.33f);
	glVertex2f(0.72f, 0.33f);
	glVertex2f(0.72f,0.36f);
	glVertex2f(0.78f,0.36f);
    glEnd();


    glBegin(GL_TRIANGLES); ///front home dorojar opr
	glColor3ub(244, 249, 238);
	glVertex2f(0.705f,0.15f);
	glVertex2f(0.52f, 0.15f);
	glVertex2f(0.615f,0.33f);
	glEnd();


	 glBegin(GL_QUADS); ///front home window 1
	glColor3ub(115, 77, 38);
	glVertex2f(0.73f,-0.10f);
	glVertex2f(0.78f,- 0.10f);
	glVertex2f(0.78f,0.13f);
	glVertex2f(0.73f,0.13f);
    glEnd();

    glBegin(GL_QUADS); ///front home window 1
	glColor3ub(255,204,51);
	glVertex2f(0.735f,-0.09f);
	glVertex2f(0.775f,- 0.09f);
	glVertex2f(0.775f,0.12f);
	glVertex2f(0.735f,0.12f);
    glEnd();



     glBegin(GL_QUADS); ///front home window 2
	glColor3ub(115, 77, 38);
	glVertex2f(0.80f,-0.10f);
	glVertex2f(0.85f,- 0.10f);
	glVertex2f(0.85f,0.13f);
	glVertex2f(0.80f,0.13f);
    glEnd();

    glBegin(GL_QUADS); ///front home window 2
	glColor3ub(255,204,51);
	glVertex2f(0.805f,-0.09f);
	glVertex2f(0.845f,- 0.09f);
	glVertex2f(0.845f,0.12f);
	glVertex2f(0.805f,0.12f);
    glEnd();

     glBegin(GL_QUADS); ///front home window 3
	glColor3ub(115, 77, 38);
	glVertex2f(0.87f,-0.10f);
	glVertex2f(0.92f,- 0.10f);
	glVertex2f(0.92f,0.13f);
	glVertex2f(0.87f,0.13f);
    glEnd();

   glBegin(GL_QUADS); ///front home window 3
	glColor3ub(255,204,51);
	glVertex2f(0.875f,-0.09f);
	glVertex2f(0.915f,- 0.09f);
	glVertex2f(0.915f,0.12f);
	glVertex2f(0.875f,0.12f);
    glEnd();

    glLineWidth(03);
   glBegin(GL_LINES);
   glColor3ub(115, 77, 38);
///window 1
    glVertex2f(0.895,-0.09);
    glVertex2f(0.895,0.12);

    glVertex2f(0.875,0.0);
    glVertex2f(0.915,0.0);

    /////////////////////////////////
///window 2
    glVertex2f(0.825,-0.09);
    glVertex2f(0.825,0.12);

    glVertex2f(0.805,0.0);
    glVertex2f(0.845,0.0);

///////////////////////////////////
///window 3

    glVertex2f(0.755f,-0.09f);
	glVertex2f(0.755f,0.12f);

	glVertex2f(0.775f,0.0f);
	glVertex2f(0.735f,0.0f);


    glEnd();


////////////////////////////////////////////////////
    glBegin(GL_QUADS); ///front home door 1
	glColor3ub(214,202,221);
	glVertex2f(0.68f,-0.20f);
	glVertex2f(0.55f, -0.20f);
	glVertex2f(0.55f,0.09f);
	glVertex2f(0.68f,0.09f);
    glEnd();


    glBegin(GL_QUADS); ///front home door 2
	glColor3ub(244, 249, 238);
	glVertex2f(0.675f,-0.20f);
	glVertex2f(0.555f, -0.20f);
	glVertex2f(0.555f,0.09f);
	glVertex2f(0.675f,0.09f);
    glEnd();


    glBegin(GL_QUADS); ///front home door 3
	glColor3ub(149, 123, 153);
	glVertex2f(0.69f,0.09f);
	glVertex2f(0.54f,0.09f);
	glVertex2f(0.565f,0.13f);
	glVertex2f(0.67f,0.13f);
    glEnd();

     glBegin(GL_QUADS); ///front home door 4
	glColor3ub(160,82,45);
	glVertex2f(0.66f,-0.19f);
	glVertex2f(0.57f, -0.19f);
	glVertex2f(0.57f,0.06f);
	glVertex2f(0.66f,0.06f);
    glEnd();

    glBegin(GL_QUADS); ///front home door 5
	glColor3ub(221, 172, 133);
	glVertex2f(0.65f,-0.17f);
	glVertex2f(0.58f, -0.17f);
	glVertex2f(0.58f,0.04f);
	glVertex2f(0.65f,0.04f);
    glEnd();

/////////////////////////////////////
     glLineWidth(03);///door
   glBegin(GL_LINES);
   glColor3ub(160,82,45);

    glVertex2f(0.615,-0.18);
    glVertex2f(0.615,0.05);
    glEnd();

//////////////////////////////////////////////////////////////
                          ///BARI 3 middle
                          ///BARI 3 middle
                          ///BARI 3 middle
                         ///BARI 3 middle
/////////////////////////////////////////////////////////////

    glBegin(GL_QUADS); ///front home middel
	glColor3ub(240, 231, 221);
	glVertex2f(0.35f,-0.20f);
	glVertex2f(-0.35f, -0.20f);
	glVertex2f(-0.35f,0.12f);
	glVertex2f(0.35f,0.12f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal
	glColor3ub(57, 115, 129);
	glVertex2f(0.37f,0.10f);
	glVertex2f(-0.37f,0.10f);
	glVertex2f(-0.30f,0.25f);
	glVertex2f(0.30f,0.25f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal up
	glColor3ub(240, 231, 221);
	glVertex2f(-0.23f,0.20f);
	glVertex2f(-0.19f,0.20f);
	glVertex2f(-0.19f,0.27f);
	glVertex2f(-0.23f,0.27f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal up
	glColor3ub(240, 231, 221);
	glVertex2f(0.23f,0.20f);
	glVertex2f(0.19f,0.20f);
	glVertex2f(0.19f,0.27f);
	glVertex2f(0.23f,0.27f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal up
	glColor3ub(146, 103, 70);
	glVertex2f(-0.24f,0.27f);
	glVertex2f(-0.18f,0.27f);
	glVertex2f(-0.18f,0.30f);
	glVertex2f(-0.24f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal up
	glColor3ub(146, 103, 70);
	glVertex2f(0.24f,0.27f);
	glVertex2f(0.18f,0.27f);
	glVertex2f(0.18f,0.30f);
	glVertex2f(0.24f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel 2
	glColor3ub(238, 221, 209);
	glVertex2f(0.10f,-0.20f);
	glVertex2f(-0.10f, -0.20f);
	glVertex2f(-0.10f,0.10f);
	glVertex2f(0.10f,0.10f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel 2
	glColor3ub(240, 231, 221);
	glVertex2f(0.09f,-0.20f);
	glVertex2f(-0.09f, -0.20f);
	glVertex2f(-0.09f,0.10f);
	glVertex2f(0.09f,0.10f);
    glEnd();

   glBegin(GL_TRIANGLES); ///front home middel 2
	glColor3ub(40, 94, 106);
	glVertex2f(-0.13f,0.10f);
	glVertex2f(0.13f,0.10f);
	glVertex2f(0.0f,0.280f);
    glEnd();

    glBegin(GL_TRIANGLES); ///front home middel 2
	glColor3ub(93, 148, 166);
	glVertex2f(-0.10f,0.10f);
	glVertex2f(0.10f,0.10f);
	glVertex2f(0.0f,0.30f);
    glEnd();

    glBegin(GL_TRIANGLES); ///front home middel 2
	glColor3ub(240, 231, 221);
	glVertex2f(-0.08f,0.10f);
	glVertex2f(0.08f,0.10f);
	glVertex2f(0.0f,0.26f);
    glEnd();

     glBegin(GL_QUADS); ///front home middel get
	glColor3ub(216, 180, 157);
	glVertex2f(0.05f,-0.20f);
	glVertex2f(-0.05f, -0.20f);
	glVertex2f(-0.05f,0.06f);
	glVertex2f(0.05f,0.06f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel get
	glColor3ub(146, 103, 70);
	glVertex2f(0.04f,-0.18f);
	glVertex2f(-0.04f, -0.18f);
	glVertex2f(-0.04f,0.03f);
	glVertex2f(0.04f,0.03f);
    glEnd();


    glBegin(GL_QUADS); ///front home middel get 1
	glColor3ub(227,218,201);
	glVertex2f(0.03f,-0.17f);
	glVertex2f(-0.03f, -0.17f);
	glVertex2f(-0.03f,0.02f);
	glVertex2f(0.03f,0.02f);
    glEnd();


    glLineWidth(03);
   glBegin(GL_LINES);
   glColor3ub(115, 77, 38);///door

    glVertex2f(0.0,-0.17);
    glVertex2f(0.0,0.02);
   glEnd();


     glBegin(GL_QUADS); ///front home middel get up
	glColor3ub(93, 148, 166);
	glVertex2f(0.07f,0.06f);
	glVertex2f(-0.07f,0.06f);
	glVertex2f(-0.04f,0.11f);
	glVertex2f(0.04f,0.11f);
    glEnd();



    glBegin(GL_QUADS); ///front home middel window 1
	glColor3ub(146, 103, 70);
	glVertex2f(-0.33f,-0.15f);
	glVertex2f(-0.28f, -0.15f);
	glVertex2f(-0.28f,0.05f);
	glVertex2f(-0.33f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 1
	glColor3ub(146, 103, 70);
	glVertex2f(0.33f,-0.15f);
	glVertex2f(0.28f, -0.15f);
	glVertex2f(0.28f,0.05f);
	glVertex2f(0.33f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 1
	glColor3ub(255,204,51);
	glVertex2f(-0.325f,-0.14f);
	glVertex2f(-0.285f, -0.14f);
	glVertex2f(-0.285f,0.04f);
	glVertex2f(-0.325f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 1
	glColor3ub(255,204,51);
	glVertex2f(0.325f,-0.14f);
	glVertex2f(0.285f, -0.14f);
	glVertex2f(0.285f,0.04f);
	glVertex2f(0.325f,0.04f);
    glEnd();



    glBegin(GL_QUADS); ///front home middel window 2
	glColor3ub(146, 103, 70);
	glVertex2f(-0.25f,-0.15f);
	glVertex2f(-0.20f, -0.15f);
	glVertex2f(-0.20f,0.05f);
	glVertex2f(-0.25f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 2
	glColor3ub(146, 103, 70);
	glVertex2f(0.25f,-0.15f);
	glVertex2f(0.20f, -0.15f);
	glVertex2f(0.20f,0.05f);
	glVertex2f(0.25f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 2
	glColor3ub(255,204,51);
	glVertex2f(-0.245f,-0.14f);
	glVertex2f(-0.205f, -0.14f);
	glVertex2f(-0.205f,0.04f);
	glVertex2f(-0.245f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 2
	glColor3ub(255,204,51);
	glVertex2f(0.245f,-0.14f);
	glVertex2f(0.205f, -0.14f);
	glVertex2f(0.205f,0.04f);
	glVertex2f(0.245f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 3
	glColor3ub(146, 103, 70);
	glVertex2f(-0.17f,-0.15f);
	glVertex2f(-0.12f, -0.15f);
	glVertex2f(-0.12f,0.05f);
	glVertex2f(-0.17f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 3
	glColor3ub(146, 103, 70);
	glVertex2f(0.17f,-0.15f);
	glVertex2f(0.12f, -0.15f);
	glVertex2f(0.12f,0.05f);
	glVertex2f(0.17f,0.05f);
    glEnd();


    glBegin(GL_QUADS); ///front home middel window 3
	glColor3ub(255,204,51);
	glVertex2f(-0.165f,-0.14f);
	glVertex2f(-0.125f, -0.14f);
	glVertex2f(-0.125f,0.04f);
	glVertex2f(-0.165f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 3
	glColor3ub(255,204,51);
	glVertex2f(0.165f,-0.14f);
	glVertex2f(0.125f, -0.14f);
	glVertex2f(0.125f,0.04f);
	glVertex2f(0.165f,0.04f);
    glEnd();


   glLineWidth(03);
   glBegin(GL_LINES);
   glColor3ub(115, 77, 38);/// window 1

    glVertex2f(-0.305,-0.15);
    glVertex2f(-0.305,0.05);

/// window 2

    glVertex2f(-0.225,-0.15);
    glVertex2f(-0.225,0.05);

/// window 3

    glVertex2f(-0.145,-0.15);
    glVertex2f(-0.145,0.05);
/////////////////////////////////////////////
    glColor3ub(115, 77, 38);/// window 1

    glVertex2f(0.305,-0.15);
    glVertex2f(0.305,0.05);

/// window 2

    glVertex2f(0.225,-0.15);
    glVertex2f(0.225,0.05);

/// window 3

    glVertex2f(0.145,-0.15);
    glVertex2f(0.145,0.05);



   glEnd();


//////////////////////////////////////////////////////////////
///CLOUDS 1

glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);

GLfloat x_3 =0.0; GLfloat y_3 =0.80; GLfloat radius_3 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(190,190,190);
glVertex2f(x_3 , y_3); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_3 + (radius_3 * cos(i * twicePi / triangleAmount)),
y_3 + (radius_3 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_4 =0.05; GLfloat y_4= 0.85; GLfloat radius_4 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(190,190,190);
glVertex2f(x_4 , y_4); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_4 + (radius_4 * cos(i * twicePi / triangleAmount)),
y_4 + (radius_4 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x_5 =0.05; GLfloat y_5= 0.78; GLfloat radius_5 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(190,190,190);
glVertex2f(x_5 , y_5); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_5 + (radius_5 * cos(i * twicePi / triangleAmount)),
y_5 + (radius_5 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_6 =0.15; GLfloat y_6= 0.78; GLfloat radius_6=0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(190,190,190);
glVertex2f(x_6 , y_6); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_6 + (radius_6 * cos(i * twicePi / triangleAmount)),
y_6 + (radius_6 * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glPopMatrix();

////////////////////////////////////////////////////////////////
/// CLOUDS 2

glPushMatrix();
glTranslatef(position4,.0f, 0.0f);

GLfloat x_7 =0.0; GLfloat y_7 =0.80; GLfloat radius_7 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_7 , y_7); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_7 + (radius_7 * cos(i * twicePi / triangleAmount)),
y_7 + (radius_7 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_8 =0.05; GLfloat y_8= 0.85; GLfloat radius_8 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_8 , y_8); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_8 + (radius_8 * cos(i * twicePi / triangleAmount)),
y_8 + (radius_8 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x_9 =0.05; GLfloat y_9= 0.78; GLfloat radius_9 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_9 , y_9); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_9 + (radius_9 * cos(i * twicePi / triangleAmount)),
y_9 + (radius_9 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_10 =0.15; GLfloat y_10= 0.78; GLfloat radius_10=0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_10 , y_10); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_10 + (radius_10 * cos(i * twicePi / triangleAmount)),
y_10 + (radius_10 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

glPopMatrix();
//////////////////////////////////////////////////////////////////////





/////////////////////////////////////////////////
/// car 2

 glLoadIdentity();
 glPushMatrix();
 glTranslatef(position2,0.0f, 0.0f);

   glBegin(GL_QUADS);
      glColor3ub(105,53,156);
      glVertex2f(-0.13f, -0.50f);
      glVertex2f( 0.12f, -0.50f);
      glVertex2f( 0.12f,  -0.65f);
      glVertex2f(-0.13f,  -0.65f);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(105,53,156);
      glVertex2f(-0.13f, -0.50f);
      glVertex2f(0.02f, -0.50f);
      glVertex2f(0.02f,  -0.40f);
      glVertex2f(-0.13f,  -0.40f);

      glEnd();


   glBegin(GL_QUADS);
      glColor3ub(230,232,250);
      glVertex2f(-0.11f, -0.49f);
      glVertex2f( -0.03f, -0.49f);
      glVertex2f( -0.03f,  -0.42f);
      glVertex2f(-0.11f,  -0.42f);

   glEnd();


GLfloat x_15 =-0.07; GLfloat y_15= -0.65; GLfloat radius_15 =-0.04;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_15 , y_15); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_15 + (radius_15 * cos(i * twicePi / triangleAmount)),
y_15 + (radius_15 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_16 =0.07; GLfloat y_16= -0.65; GLfloat radius_16 =-0.04;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_16 , y_16); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_16 + (radius_16* cos(i * twicePi / triangleAmount)),
y_16 + (radius_16 * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glPopMatrix();

/////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
///car
glLoadIdentity();
glPushMatrix();
 glTranslatef(position1,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3ub(0,139,139);
      glVertex2f(-0.15f, -0.85f);
      glVertex2f( 0.15f, -0.85f);
      glVertex2f( 0.15f,  -0.65f);
      glVertex2f(-0.15f,  -0.65f);
      glEnd();

      GLfloat x_17 =-0.08; GLfloat y_17= -0.84; GLfloat radius_17 =-0.05;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_17 , y_17); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_17+ (radius_17 * cos(i * twicePi / triangleAmount)),
y_17 + (radius_17 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

 GLfloat x_18 =-0.082; GLfloat y_18= -0.84; GLfloat radius_18 =-0.04;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(255,255,255);
glVertex2f(x_18 , y_18); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_18 + (radius_18 * cos(i * twicePi / triangleAmount)),
y_18 + (radius_18 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


 GLfloat x_19 =-0.082; GLfloat y_19= -0.84; GLfloat radius_19 =-0.03;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_19 , y_19); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_19 + (radius_19 * cos(i * twicePi / triangleAmount)),
y_19 + (radius_19 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x_20 =-0.02; GLfloat y_20 = -0.595; GLfloat radius_20 =0.14;


glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(0,139,139);
glVertex2f(x_20 , y_20); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_20  + (radius_20 * cos(i * twicePi / triangleAmount)),
y_20 + (radius_20 * sin(i * twicePi / triangleAmount))
);
}
glEnd();





GLfloat x_21 =0.08; GLfloat y_21= -0.74; GLfloat radius_21 =0.12;


glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(0,139,139);
glVertex2f(x_21 , y_21); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_21 + (radius_21 * cos(i * twicePi / triangleAmount)),
y_21 + (radius_21 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_22 =-0.02; GLfloat y_22= -0.62; GLfloat radius_22 =0.10;


glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_22 , y_22); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_22  + (radius_22 * cos(i * twicePi / triangleAmount)),
y_22 + (radius_22 * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glBegin(GL_QUADS);
      glColor3ub(0,139,139);
      glVertex2f(-0.15f, -0.80f);
      glVertex2f( 0.15f, -0.80f);
      glVertex2f( 0.15f,  -0.65f);
      glVertex2f(-0.15f,  -0.65f);
      glEnd();

      glEnd();
     glBegin(GL_QUADS);
      glColor3ub(0,139,139);
      glVertex2f(-0.03f, -0.80f);
      glVertex2f( 0.0f, -0.80f);
      glVertex2f( 0.0f,  -0.52f);
      glVertex2f(-0.03f,  -0.52f);
      glEnd();



      GLfloat x_23 =0.08; GLfloat y_23= -0.84; GLfloat radius_23 =-0.05;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_23, y_23); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_23 + (radius_23 * cos(i * twicePi / triangleAmount)),
y_23 + (radius_23 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

 GLfloat x_24 =0.082; GLfloat y_24= -0.84; GLfloat radius_24 =-0.04;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(255,255,255);
glVertex2f(x_24 , y_24); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_24 + (radius_24 * cos(i * twicePi / triangleAmount)),
y_24 + (radius_24 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


 GLfloat x_25 =0.082; GLfloat y_25= -0.84; GLfloat radius_25 =-0.03;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_25 , y_25); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_25 + (radius_25 * cos(i * twicePi / triangleAmount)),
y_25 + (radius_25 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

glPopMatrix();




   glFlush();
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
                                  ///Day mood
                                  ///Day mood
                                  ///Day mood
                                  ///Day mood

//////////////////////////////////////////////////////////////////////////////////




void day() {
    glClearColor(1.0,1.0,1.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);

   glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS); ///ground 1
	glColor3ub(115, 151, 77);
	glVertex2f(-1.0f,-0.90f);
	glVertex2f(1.0f, -0.90f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(-1.0f,-1.0f);
    glEnd();

    glBegin(GL_QUADS); ///road 1
	glColor3ub(127, 127, 127);
	glVertex2f(-1.0f,-0.90f);
	glVertex2f(1.0f, -0.90f);
	glVertex2f(1.0f,-0.65f);
	glVertex2f(-1.0f,-0.65f);
    glEnd();

    glBegin(GL_QUADS); ///road middle white
	glColor3ub(254, 254, 252);
	glVertex2f(-1.0f,-0.72f);
	glVertex2f(1.0f, -0.72f);
	glVertex2f(1.0f,-0.75f);
	glVertex2f(-1.0f,-0.75f);
    glEnd();

     glBegin(GL_QUADS); ///ground 2
	glColor3ub(142, 180, 107);
	glVertex2f(-1.0f,-0.65f);
	glVertex2f(1.0f, -0.65f);
	glVertex2f(1.0f,-0.40f);
	glVertex2f(-1.0f,-0.40f);
    glEnd();


    glBegin(GL_QUADS); ///road 2
	glColor3ub(127, 127, 127);
	glVertex2f(-1.0f,-0.40f);
	glVertex2f(1.0f, -0.40f);
	glVertex2f(1.0f,-0.20f);
	glVertex2f(-1.0f,-0.20f);
    glEnd();


    glBegin(GL_QUADS); ///road 2 white
	glColor3ub(241, 241, 241);
	glVertex2f(-1.0f,-0.25f);
	glVertex2f(1.0f, -0.25f);
	glVertex2f(1.0f,-0.27f);
	glVertex2f(-1.0f,-0.27f);
    glEnd();


       glBegin(GL_QUADS); ///groud 3
	glColor3ub(142, 180, 107);
	glVertex2f(-1.0f,-0.23f);
	glVertex2f(1.0f, -0.23f);
	glVertex2f(1.0f,-0.05f);
	glVertex2f(-1.0f,-0.05f);
    glEnd();


    glBegin(GL_QUADS); ///sky
	glColor3ub(195, 236, 248);
	glVertex2f(-1.0f,-0.05f);
	glVertex2f(1.0f, -0.05f);
    glColor3ub(129, 209, 244);
	glVertex2f(1.0f,1.00f);
    glColor3ub(60, 183, 243);
	glVertex2f(-1.0f,1.00f);
    glEnd();





///////////////////////////////////////////////////////////////////
                 /// sun
///////////////////////////////////////////////////////////////////

GLfloat x_2 =0.90; GLfloat y_2 = 0.90; GLfloat radius_2 =0.10;
int triangleAmount = 20; //# of triangles used to draw circle

GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,204,51);
glVertex2f(x_2 , y_2); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_2 + (radius_2 * cos(i * twicePi / triangleAmount)),
y_2 + (radius_2 * sin(i * twicePi / triangleAmount))
);
}
glEnd();



/////////////////////////////////////////////////////////////////////////////////////
         //////////////////////////////bari start///////////////

    glBegin(GL_QUADS); ///back ground home
	glColor3ub(108, 178, 203);
	glVertex2f(-1.0f,-0.05f);
	glVertex2f(1.0f, -0.05f);
	glVertex2f(1.0f,0.20f);
	glVertex2f(-1.0f,0.20f);
    glEnd();


    glBegin(GL_QUADS); ///back ground home1
	glColor3ub(108, 178, 203);
	glVertex2f(-1.0f,0.20f);
	glVertex2f(-0.90f, 0.20f);
	glVertex2f(-0.90f,0.27f);
	glVertex2f(-1.0f,0.27f);
    glEnd();


     glBegin(GL_QUADS); ///back ground home 2
	glColor3ub(108, 178, 203);
	glVertex2f(-0.80f,0.20f);
	glVertex2f(-0.50f,0.20f);
	glVertex2f(-0.50f,0.35f);
	glVertex2f(-0.80f,0.35f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 3
	glColor3ub(108, 178, 203);
	glVertex2f(-0.48f,0.20f);
	glVertex2f(-0.40f,0.20f);
	glVertex2f(-0.40f,0.40f);
	glVertex2f(-0.48f,0.40f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 4
	glColor3ub(108, 178, 203);
	glVertex2f(-0.40f,0.20f);
	glVertex2f(-0.35f,0.20f);
	glVertex2f(-0.35f,0.30f);
	glVertex2f(-0.40f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 7
	glColor3ub(108, 178, 203);
	glVertex2f(-0.30f,0.20f);
	glVertex2f(-0.07f,0.20f);
	glVertex2f(-0.07f,0.30f);
	glVertex2f(-0.30f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 5
	glColor3ub(108, 178, 203);
	glVertex2f(-0.33f,0.20f);
	glVertex2f(-0.20f,0.20f);
	glVertex2f(-0.20f,0.35f);
	glVertex2f(-0.33f,0.35f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 6
	glColor3ub(108, 178, 203);
	glVertex2f(-0.19f,0.20f);
	glVertex2f(-0.08f,0.20f);
	glVertex2f(-0.08f,0.40f);
	glVertex2f(-0.19f,0.40f);
    glEnd();

/////////////////////////////////////////

     glBegin(GL_QUADS); ///back ground home 2
	glColor3ub(108, 178, 203);
	glVertex2f(0.80f,0.20f);
	glVertex2f(0.50f,0.20f);
	glVertex2f(0.50f,0.35f);
	glVertex2f(0.80f,0.35f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 3
	glColor3ub(108, 178, 203);
	glVertex2f(0.48f,0.20f);
	glVertex2f(0.40f,0.20f);
	glVertex2f(0.40f,0.40f);
	glVertex2f(0.48f,0.40f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 4
	glColor3ub(108, 178, 203);
	glVertex2f(0.40f,0.20f);
	glVertex2f(0.35f,0.20f);
	glVertex2f(0.35f,0.30f);
	glVertex2f(0.40f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 7
	glColor3ub(108, 178, 203);
	glVertex2f(0.30f,0.20f);
	glVertex2f(0.07f,0.20f);
	glVertex2f(0.07f,0.30f);
	glVertex2f(0.30f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 5
	glColor3ub(108, 178, 203);
	glVertex2f(0.33f,0.20f);
	glVertex2f(0.20f,0.20f);
	glVertex2f(0.20f,0.35f);
	glVertex2f(0.33f,0.35f);
    glEnd();

    glBegin(GL_QUADS); ///back ground home 6
	glColor3ub(108, 178, 203);
	glVertex2f(0.19f,0.20f);
	glVertex2f(0.08f,0.20f);
	glVertex2f(0.08f,0.40f);
	glVertex2f(0.19f,0.40f);
    glEnd();


    ////////////////////////////////////////////////////////
///////////////////////////////////////////////////////
                     ///tree
                     ///tree
                     ///tree
////////////////////////////////////////////////////////

glBegin(GL_QUADS);
	glColor3ub(89,39,32);
	glVertex2f(-0.45f,-0.05f);
	glVertex2f(-0.40f,- 0.05f);
	glVertex2f(-0.40f,-0.18f);
	glVertex2f(-0.45f,-0.18);
    glEnd();


    glBegin(GL_TRIANGLES);
	glColor3ub(0,128,0);
	glVertex2f(-0.47f,-0.05f);
	glVertex2f(-0.38f,- 0.05f);
	glVertex2f(-0.425f,0.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(34,139,34);
	glVertex2f(-0.48f,-0.01f);
	glVertex2f(-0.37f,-0.01f);
	glVertex2f(-0.425f,0.3f);

    glEnd();

    /////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
                         ///tree
                         ///tree
                         ///tree
    //////////////////////////////////////////////////////
    glBegin(GL_QUADS);
	glColor3ub(89,39,32);
	glVertex2f(0.45f,-0.05f);
	glVertex2f(0.40f,- 0.05f);
	glVertex2f(0.40f,-0.18f);
	glVertex2f(0.45f,-0.18);
    glEnd();


    glBegin(GL_TRIANGLES);
	glColor3ub(0,128,0);
	glVertex2f(0.47f,-0.05f);
	glVertex2f(0.38f,- 0.05f);
	glVertex2f(0.425f,0.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(34,139,34);
	glVertex2f(0.48f,-0.01f);
	glVertex2f(0.37f,-0.01f);
	glVertex2f(0.425f,0.3f);

    glEnd();



///////////////////////////////////////////////////
                  ///the house in front
/////////////////////////////////////////////////
            ///front home 1
            ///front home 1
            ///front home 1
            ///front home 1

/////////////////////////////////////////////////////////////

    glBegin(GL_QUADS); ///front home1
	glColor3ub(207, 202, 162);
	glVertex2f(-0.70f,-0.18f);
	glVertex2f(-0.95f,- 0.18f);
	glVertex2f(-0.95f,-0.10f);
	glVertex2f(-0.70f,-0.10f);
    glEnd();


      glBegin(GL_QUADS); ///front home
	glColor3ub(236, 238, 225);
	glVertex2f(-0.70f,-0.10f);
	glVertex2f(-0.95f,- 0.10f);
	glVertex2f(-0.95f,0.15f);
	glVertex2f(-0.70f,0.15f);
    glEnd();



    glBegin(GL_QUADS); ///front home chal
	glColor3ub(242, 152, 45);
	glVertex2f(-0.65f,0.15f);
	glVertex2f(-0.96f, 0.15f);
	glVertex2f(-0.88f,0.29f);
	glVertex2f(-0.65f,0.29f);
    glEnd();

    glBegin(GL_QUADS); ///front home hind
	glColor3ub(219, 226, 215);
	glVertex2f(-0.72f,-0.20f);
	glVertex2f(-0.55f, -0.20f);
	glVertex2f(-0.55f,0.15f);
	glVertex2f(-0.72f,0.15f);
    glEnd();

    glBegin(GL_QUADS); ///front home
	glColor3ub(244, 249, 238);
	glVertex2f(-0.71f,-0.20f);
	glVertex2f(-0.50f, -0.20f);
	glVertex2f(-0.50f,0.15f);
	glVertex2f(-0.71f,0.15f);
    glEnd();


    glBegin(GL_TRIANGLES); ///front home chal hide
	glColor3ub(228,132,0);
	glVertex2f(-0.74f,0.15f);
	glVertex2f(-0.54f, 0.15f);
	glVertex2f(-0.63f,0.33f);
	glEnd();



    glBegin(GL_TRIANGLES); ///front home chal
	glColor3ub(226, 154, 60);
	glVertex2f(-0.72f,0.15f);
	glVertex2f(-0.490f, 0.15f);
	glVertex2f(-0.61f,0.38f);
	glEnd();


	glBegin(GL_TRIANGLES); ///front home get up
	glColor3ub(244, 249, 238);
	glVertex2f(-0.71f,0.15f);
	glVertex2f(-0.51f, 0.15f);
	glVertex2f(-0.61f,0.33f);
	glEnd();



    glBegin(GL_QUADS); ///front home chal
	glColor3ub(237, 237, 236);
	glVertex2f(-0.80f,0.25f);
	glVertex2f(-0.73f, 0.25f);
	glVertex2f(-0.73f,0.34f);
	glVertex2f(-0.80f,0.34f);
    glEnd();

    glBegin(GL_QUADS); ///front home chal ar opr
	glColor3ub(130, 77, 53);
	glVertex2f(-0.81f,0.33f);
	glVertex2f(-0.72f, 0.33f);
	glVertex2f(-0.72f,0.36f);
	glVertex2f(-0.81f,0.36f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 1
	glColor3ub(115, 77, 38);
	glVertex2f(-0.88f,0.0f);
	glVertex2f(-0.935f,0.0f);
	glVertex2f(-0.935f,-0.08f);
	glVertex2f(-0.88f,-0.08f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 1
	glColor3ub(150, 220, 244);
	glVertex2f(-0.885f,-0.01f);
	glVertex2f(-0.93f,-0.01f);
	glVertex2f(-0.93f,-0.07f);
	glVertex2f(-0.885f,-0.07f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 2
	glColor3ub(115, 77, 38);
	glVertex2f(-0.86f,0.0f);
	glVertex2f(-0.80f,0.0f);
	glVertex2f(-0.80f,-0.08f);
	glVertex2f(-0.86f,-0.08f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 2
	glColor3ub(150, 220, 244);
	glVertex2f(-0.855f,-0.01f);
	glVertex2f(-0.805f,-0.01f);
	glVertex2f(-0.805f,-0.07f);
	glVertex2f(-0.855f,-0.07f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 3
	glColor3ub(115, 77, 38);
	glVertex2f(-0.785f,0.0f);
	glVertex2f(-0.73f,0.0f);
	glVertex2f(-0.73f,-0.08f);
	glVertex2f(-0.785f,-0.08f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 3
	glColor3ub(150, 220, 244);
	glVertex2f(-0.78f,-0.01f);
	glVertex2f(-0.735f,-0.01f);
	glVertex2f(-0.735f,-0.07f);
	glVertex2f(-0.78f,-0.07f);
    glEnd();

     glBegin(GL_QUADS); ///front home1 window 4
	glColor3ub(115, 77, 38);
	glVertex2f(-0.785f,0.03f);
	glVertex2f(-0.73f,0.03f);
	glVertex2f(-0.73f,0.11f);
	glVertex2f(-0.785f,0.11f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 4
	glColor3ub(150, 220, 244);
	glVertex2f(-0.78f,0.04f);
	glVertex2f(-0.735f,0.04f);
	glVertex2f(-0.735f,0.10f);
	glVertex2f(-0.78f,0.10f);
    glEnd();



    glBegin(GL_QUADS); ///front home1 window 5
	glColor3ub(115, 77, 38);
	glVertex2f(-0.86f,0.03f);
	glVertex2f(-0.80f,0.03f);
	glVertex2f(-0.80f,0.11f);
	glVertex2f(-0.86f,0.11f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 5
	glColor3ub(150, 220, 244);
	glVertex2f(-0.855f,0.04f);
	glVertex2f(-0.805f,0.04f);
	glVertex2f(-0.805f,0.10f);
	glVertex2f(-0.855f,0.10f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 6
	glColor3ub(115, 77, 38);
	glVertex2f(-0.88f,0.03f);
	glVertex2f(-0.935f,0.03f);
	glVertex2f(-0.935f,0.11f);
	glVertex2f(-0.88f,0.11f);
    glEnd();

    glBegin(GL_QUADS); ///front home1 window 6
	glColor3ub(150, 220, 244);
	glVertex2f(-0.885f,0.04f);
	glVertex2f(-0.93f,0.04f);
	glVertex2f(-0.93f,0.10f);
	glVertex2f(-0.885f,0.10f);
    glEnd();
    ///////////////////////////////////////////////////////
    glLineWidth(03); ///window
   glBegin(GL_LINES);
   glColor3ub(115, 77, 38);
/// window 1
    glVertex2f(-0.91f,-0.01f);
	glVertex2f(-0.91f,-0.08f);

	glVertex2f(-0.935f,-0.04f);
	glVertex2f(-0.88f,-0.04f);
/// window 2
	glVertex2f(-0.83f,-0.01f);
	glVertex2f(-0.83f,-0.08f);

	glVertex2f(-0.80f,-0.04f);
	glVertex2f(-0.86f,-0.04f);
/// window 3
    glVertex2f(-0.76f,-0.01f);
	glVertex2f(-0.76f,-0.08f);

	glVertex2f(-0.73f,-0.04f);
	glVertex2f(-0.785f,-0.04f);

/// window 4

    glVertex2f(-0.76f,0.04f);
	glVertex2f(-0.76f,0.10f);

	glVertex2f(-0.73f,0.07f);
	glVertex2f(-0.785f,0.07f);

///  window 5

   glVertex2f(-0.83f,0.04f);
	glVertex2f(-0.83f,0.10f);

	glVertex2f(-0.80f,0.07f);
	glVertex2f(-0.86f,0.07f);

/// window 6

	glVertex2f(-0.91f,0.04f);
	glVertex2f(-0.91f,0.10f);

	glVertex2f(-0.935f,0.07f);
	glVertex2f(-0.88f,0.07f);
///door
    glVertex2f(-0.60f,0.12f);
	glVertex2f(-0.60f, 0.18f);

	glVertex2f(-0.57f,0.15f);
	glVertex2f(-0.635f,0.15f);

    glEnd();

    glBegin(GL_QUADS); ///front home door 1
	glColor3ub(227,218,201);
	glVertex2f(-0.67f,-0.19f);
	glVertex2f(-0.54f, -0.19f);
	glVertex2f(-0.54f,0.05f);
	glVertex2f(-0.67f,0.05f);
    glEnd();


     glBegin(GL_QUADS); ///front home door 2
	glColor3ub(228, 122, 9);
	glVertex2f(-0.65f,0.09f);
	glVertex2f(-0.56f, 0.09f);
	glVertex2f(-0.535f,0.05f);
	glVertex2f(-0.675f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home door 3
	glColor3ub(138, 107, 80);
	glVertex2f(-0.65f,-0.19f);
	glVertex2f(-0.56f, -0.19f);
	glVertex2f(-0.56f,0.04f);
	glVertex2f(-0.65f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home door 4
	glColor3ub(218,193,160);
	glVertex2f(-0.64f,-0.17f);
	glVertex2f(-0.572f, -0.17f);
	glVertex2f(-0.572f,0.02f);
	glVertex2f(-0.64f,0.02f);
    glEnd();

     glBegin(GL_QUADS); ///front home door up window 5
	glColor3ub(115, 77, 38);
	glVertex2f(-0.64f,0.11f);
	glVertex2f(-0.565f, 0.11f);
	glVertex2f(-0.565f,0.19f);
	glVertex2f(-0.64f,0.19f);
    glEnd();

     glBegin(GL_QUADS); ///front home door up window 5
	glColor3ub(150, 220, 244);
	glVertex2f(-0.635f,0.12f);
	glVertex2f(-0.57f, 0.12f);
	glVertex2f(-0.57f,0.18f);
	glVertex2f(-0.635f,0.18f);
    glEnd();

    glLineWidth(03);
   glBegin(GL_LINES);
   glColor3ub(138, 107, 80);

 ///door
    glVertex2f(-0.605,-0.18);
    glVertex2f(-0.605,0.04);


    ///door
    glColor3ub(115, 77, 38);
    glVertex2f(-0.60f,0.12f);
	glVertex2f(-0.60f, 0.18f);

	glVertex2f(-0.57f,0.15f);
	glVertex2f(-0.64f,0.15f);

      glEnd();



////////////////////////////////////(+++++++++++++++++++++++++)///////////////////////////////////////////
                                            ///front home 2
                                            ///front home 2
                                            ///front home 2
////////////////////////////////////(+++++++++++++++++++++++++)///////////////////////////////////////////

    glBegin(GL_QUADS); ///front home
	glColor3ub(236, 238, 225);
	glVertex2f(0.70f,-0.15f);
	glVertex2f(0.95f,- 0.15f);
	glVertex2f(0.95f,0.15f);
	glVertex2f(0.70f,0.15f);
    glEnd();


    glBegin(GL_QUADS); ///front home chal
	glColor3ub(120, 95, 125);
	glVertex2f(0.65f,0.15f);
	glVertex2f(0.96f, 0.15f);
	glVertex2f(0.88f,0.29f);
	glVertex2f(0.65f,0.29f);
    glEnd();

    glBegin(GL_QUADS); ///front home hind
	glColor3ub(219, 226, 215);
	glVertex2f(0.72f,-0.20f);
	glVertex2f(0.55f, -0.20f);
	glVertex2f(0.55f,0.15f);
	glVertex2f(0.72f,0.15f);
    glEnd();

   glBegin(GL_QUADS); ///front home
	glColor3ub(244, 249, 238);
	glVertex2f(0.71f,-0.20f);
	glVertex2f(0.51f, -0.20f);
	glVertex2f(0.51f,0.15f);
	glVertex2f(0.71f,0.15f);
    glEnd();

    glBegin(GL_TRIANGLES); ///front home chal hide
	glColor3ub(102, 79, 108);
	glVertex2f(0.74f,0.15f);
	glVertex2f(0.54f, 0.15f);
	glVertex2f(0.63f,0.33f);
	glEnd();



    glBegin(GL_TRIANGLES); ///front home chal
	glColor3ub(149, 123, 153);
	glVertex2f(0.72f,0.15f);
	glVertex2f(0.50f, 0.15f);
	glVertex2f(0.618f,0.38f);
	glEnd();

	glBegin(GL_QUADS); ///front home chal ar opr
	glColor3ub(237, 237, 236);
	glVertex2f(0.77f,0.25f);
	glVertex2f(0.73f, 0.25f);
	glVertex2f(0.73f,0.34f);
	glVertex2f(0.77f,0.34f);
    glEnd();

	glBegin(GL_QUADS); ///front home ar opr
	glColor3ub(128, 110, 137);
	glVertex2f(0.78f,0.33f);
	glVertex2f(0.72f, 0.33f);
	glVertex2f(0.72f,0.36f);
	glVertex2f(0.78f,0.36f);
    glEnd();


    glBegin(GL_TRIANGLES); ///front home dorojar opr
	glColor3ub(244, 249, 238);
	glVertex2f(0.705f,0.15f);
	glVertex2f(0.52f, 0.15f);
	glVertex2f(0.615f,0.33f);
	glEnd();


	 glBegin(GL_QUADS); ///front home window 1
	glColor3ub(115, 77, 38);
	glVertex2f(0.73f,-0.10f);
	glVertex2f(0.78f,- 0.10f);
	glVertex2f(0.78f,0.13f);
	glVertex2f(0.73f,0.13f);
    glEnd();

    glBegin(GL_QUADS); ///front home window 1
	glColor3ub(150, 220, 244);
	glVertex2f(0.735f,-0.09f);
	glVertex2f(0.775f,- 0.09f);
	glVertex2f(0.775f,0.12f);
	glVertex2f(0.735f,0.12f);
    glEnd();



     glBegin(GL_QUADS); ///front home window 2
	glColor3ub(115, 77, 38);
	glVertex2f(0.80f,-0.10f);
	glVertex2f(0.85f,- 0.10f);
	glVertex2f(0.85f,0.13f);
	glVertex2f(0.80f,0.13f);
    glEnd();

    glBegin(GL_QUADS); ///front home window 2
	glColor3ub(150, 220, 244);
	glVertex2f(0.805f,-0.09f);
	glVertex2f(0.845f,- 0.09f);
	glVertex2f(0.845f,0.12f);
	glVertex2f(0.805f,0.12f);
    glEnd();

     glBegin(GL_QUADS); ///front home window 3
	glColor3ub(115, 77, 38);
	glVertex2f(0.87f,-0.10f);
	glVertex2f(0.92f,- 0.10f);
	glVertex2f(0.92f,0.13f);
	glVertex2f(0.87f,0.13f);
    glEnd();

   glBegin(GL_QUADS); ///front home window 3
	glColor3ub(150, 220, 244);
	glVertex2f(0.875f,-0.09f);
	glVertex2f(0.915f,- 0.09f);
	glVertex2f(0.915f,0.12f);
	glVertex2f(0.875f,0.12f);
    glEnd();

    glLineWidth(03);
   glBegin(GL_LINES);
   glColor3ub(115, 77, 38);
///window 1
    glVertex2f(0.895,-0.09);
    glVertex2f(0.895,0.12);

    glVertex2f(0.875,0.0);
    glVertex2f(0.915,0.0);

    /////////////////////////////////
///window 2
    glVertex2f(0.825,-0.09);
    glVertex2f(0.825,0.12);

    glVertex2f(0.805,0.0);
    glVertex2f(0.845,0.0);

///////////////////////////////////
///window 3

    glVertex2f(0.755f,-0.09f);
	glVertex2f(0.755f,0.12f);

	glVertex2f(0.775f,0.0f);
	glVertex2f(0.735f,0.0f);


    glEnd();


////////////////////////////////////////////////////
    glBegin(GL_QUADS); ///front home door 1
	glColor3ub(214,202,221);
	glVertex2f(0.68f,-0.20f);
	glVertex2f(0.55f, -0.20f);
	glVertex2f(0.55f,0.09f);
	glVertex2f(0.68f,0.09f);
    glEnd();


    glBegin(GL_QUADS); ///front home door 2
	glColor3ub(244, 249, 238);
	glVertex2f(0.675f,-0.20f);
	glVertex2f(0.555f, -0.20f);
	glVertex2f(0.555f,0.09f);
	glVertex2f(0.675f,0.09f);
    glEnd();


    glBegin(GL_QUADS); ///front home door 3
	glColor3ub(149, 123, 153);
	glVertex2f(0.69f,0.09f);
	glVertex2f(0.54f,0.09f);
	glVertex2f(0.565f,0.13f);
	glVertex2f(0.67f,0.13f);
    glEnd();

     glBegin(GL_QUADS); ///front home door 4
	glColor3ub(160,82,45);
	glVertex2f(0.66f,-0.19f);
	glVertex2f(0.57f, -0.19f);
	glVertex2f(0.57f,0.06f);
	glVertex2f(0.66f,0.06f);
    glEnd();

    glBegin(GL_QUADS); ///front home door 5
	glColor3ub(221, 172, 133);
	glVertex2f(0.65f,-0.17f);
	glVertex2f(0.58f, -0.17f);
	glVertex2f(0.58f,0.04f);
	glVertex2f(0.65f,0.04f);
    glEnd();

/////////////////////////////////////
     glLineWidth(03);///door
   glBegin(GL_LINES);
   glColor3ub(160,82,45);

    glVertex2f(0.615,-0.18);
    glVertex2f(0.615,0.05);
    glEnd();

//////////////////////////////////////////////////////////////
                           ///BARI 3 middle
                           ///BARI 3 middle
                           ///BARI 3 middle
                           ///BARI 3 middle

///////////////////////////////////////////////////////////////

    glBegin(GL_QUADS); ///front home middel
	glColor3ub(240, 231, 221);
	glVertex2f(0.35f,-0.20f);
	glVertex2f(-0.35f, -0.20f);
	glVertex2f(-0.35f,0.12f);
	glVertex2f(0.35f,0.12f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal
	glColor3ub(57, 115, 129);
	glVertex2f(0.37f,0.10f);
	glVertex2f(-0.37f,0.10f);
	glVertex2f(-0.30f,0.25f);
	glVertex2f(0.30f,0.25f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal up
	glColor3ub(240, 231, 221);
	glVertex2f(-0.23f,0.20f);
	glVertex2f(-0.19f,0.20f);
	glVertex2f(-0.19f,0.27f);
	glVertex2f(-0.23f,0.27f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal up
	glColor3ub(240, 231, 221);
	glVertex2f(0.23f,0.20f);
	glVertex2f(0.19f,0.20f);
	glVertex2f(0.19f,0.27f);
	glVertex2f(0.23f,0.27f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal up
	glColor3ub(146, 103, 70);
	glVertex2f(-0.24f,0.27f);
	glVertex2f(-0.18f,0.27f);
	glVertex2f(-0.18f,0.30f);
	glVertex2f(-0.24f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel chal up
	glColor3ub(146, 103, 70);
	glVertex2f(0.24f,0.27f);
	glVertex2f(0.18f,0.27f);
	glVertex2f(0.18f,0.30f);
	glVertex2f(0.24f,0.30f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel 2
	glColor3ub(238, 221, 209);
	glVertex2f(0.10f,-0.20f);
	glVertex2f(-0.10f, -0.20f);
	glVertex2f(-0.10f,0.10f);
	glVertex2f(0.10f,0.10f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel 2
	glColor3ub(240, 231, 221);
	glVertex2f(0.09f,-0.20f);
	glVertex2f(-0.09f, -0.20f);
	glVertex2f(-0.09f,0.10f);
	glVertex2f(0.09f,0.10f);
    glEnd();

   glBegin(GL_TRIANGLES); ///front home middel 2
	glColor3ub(40, 94, 106);
	glVertex2f(-0.13f,0.10f);
	glVertex2f(0.13f,0.10f);
	glVertex2f(0.0f,0.280f);
    glEnd();

    glBegin(GL_TRIANGLES); ///front home middel 2
	glColor3ub(93, 148, 166);
	glVertex2f(-0.10f,0.10f);
	glVertex2f(0.10f,0.10f);
	glVertex2f(0.0f,0.30f);
    glEnd();

    glBegin(GL_TRIANGLES); ///front home middel 2
	glColor3ub(240, 231, 221);
	glVertex2f(-0.08f,0.10f);
	glVertex2f(0.08f,0.10f);
	glVertex2f(0.0f,0.26f);
    glEnd();

     glBegin(GL_QUADS); ///front home middel get
	glColor3ub(216, 180, 157);
	glVertex2f(0.05f,-0.20f);
	glVertex2f(-0.05f, -0.20f);
	glVertex2f(-0.05f,0.06f);
	glVertex2f(0.05f,0.06f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel get
	glColor3ub(146, 103, 70);
	glVertex2f(0.04f,-0.18f);
	glVertex2f(-0.04f, -0.18f);
	glVertex2f(-0.04f,0.03f);
	glVertex2f(0.04f,0.03f);
    glEnd();


    glBegin(GL_QUADS); ///front home middel get 1
	glColor3ub(227,218,201);
	glVertex2f(0.03f,-0.17f);
	glVertex2f(-0.03f, -0.17f);
	glVertex2f(-0.03f,0.02f);
	glVertex2f(0.03f,0.02f);
    glEnd();


    glLineWidth(03);
   glBegin(GL_LINES);
   glColor3ub(115, 77, 38);///door

    glVertex2f(0.0,-0.17);
    glVertex2f(0.0,0.02);
   glEnd();


     glBegin(GL_QUADS); ///front home middel get up
	glColor3ub(93, 148, 166);
	glVertex2f(0.07f,0.06f);
	glVertex2f(-0.07f,0.06f);
	glVertex2f(-0.04f,0.11f);
	glVertex2f(0.04f,0.11f);
    glEnd();



    glBegin(GL_QUADS); ///front home middel window 1
	glColor3ub(146, 103, 70);
	glVertex2f(-0.33f,-0.15f);
	glVertex2f(-0.28f, -0.15f);
	glVertex2f(-0.28f,0.05f);
	glVertex2f(-0.33f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 1
	glColor3ub(146, 103, 70);
	glVertex2f(0.33f,-0.15f);
	glVertex2f(0.28f, -0.15f);
	glVertex2f(0.28f,0.05f);
	glVertex2f(0.33f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 1
	glColor3ub(150, 220, 244);
	glVertex2f(-0.325f,-0.14f);
	glVertex2f(-0.285f, -0.14f);
	glVertex2f(-0.285f,0.04f);
	glVertex2f(-0.325f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 1
	glColor3ub(150, 220, 244);
	glVertex2f(0.325f,-0.14f);
	glVertex2f(0.285f, -0.14f);
	glVertex2f(0.285f,0.04f);
	glVertex2f(0.325f,0.04f);
    glEnd();



    glBegin(GL_QUADS); ///front home middel window 2
	glColor3ub(146, 103, 70);
	glVertex2f(-0.25f,-0.15f);
	glVertex2f(-0.20f, -0.15f);
	glVertex2f(-0.20f,0.05f);
	glVertex2f(-0.25f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 2
	glColor3ub(146, 103, 70);
	glVertex2f(0.25f,-0.15f);
	glVertex2f(0.20f, -0.15f);
	glVertex2f(0.20f,0.05f);
	glVertex2f(0.25f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 2
	glColor3ub(150, 220, 244);
	glVertex2f(-0.245f,-0.14f);
	glVertex2f(-0.205f, -0.14f);
	glVertex2f(-0.205f,0.04f);
	glVertex2f(-0.245f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 2
	glColor3ub(150, 220, 244);
	glVertex2f(0.245f,-0.14f);
	glVertex2f(0.205f, -0.14f);
	glVertex2f(0.205f,0.04f);
	glVertex2f(0.245f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 3
	glColor3ub(146, 103, 70);
	glVertex2f(-0.17f,-0.15f);
	glVertex2f(-0.12f, -0.15f);
	glVertex2f(-0.12f,0.05f);
	glVertex2f(-0.17f,0.05f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 3
	glColor3ub(146, 103, 70);
	glVertex2f(0.17f,-0.15f);
	glVertex2f(0.12f, -0.15f);
	glVertex2f(0.12f,0.05f);
	glVertex2f(0.17f,0.05f);
    glEnd();


    glBegin(GL_QUADS); ///front home middel window 3
	glColor3ub(150, 220, 244);
	glVertex2f(-0.165f,-0.14f);
	glVertex2f(-0.125f, -0.14f);
	glVertex2f(-0.125f,0.04f);
	glVertex2f(-0.165f,0.04f);
    glEnd();

    glBegin(GL_QUADS); ///front home middel window 3
	glColor3ub(150, 220, 244);
	glVertex2f(0.165f,-0.14f);
	glVertex2f(0.125f, -0.14f);
	glVertex2f(0.125f,0.04f);
	glVertex2f(0.165f,0.04f);
    glEnd();


   glLineWidth(03);
   glBegin(GL_LINES);
   glColor3ub(115, 77, 38);/// window 1

    glVertex2f(-0.305,-0.15);
    glVertex2f(-0.305,0.05);

/// window 2

    glVertex2f(-0.225,-0.15);
    glVertex2f(-0.225,0.05);

/// window 3

    glVertex2f(-0.145,-0.15);
    glVertex2f(-0.145,0.05);
/////////////////////////////////////////////
    glColor3ub(115, 77, 38);/// window 1

    glVertex2f(0.305,-0.15);
    glVertex2f(0.305,0.05);

/// window 2

    glVertex2f(0.225,-0.15);
    glVertex2f(0.225,0.05);

/// window 3

    glVertex2f(0.145,-0.15);
    glVertex2f(0.145,0.05);



   glEnd();


//////////////////////////////////////////////////////////////
///CLOUDS 1

glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);

GLfloat x_3 =0.0; GLfloat y_3 =0.80; GLfloat radius_3 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_3 , y_3); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_3 + (radius_3 * cos(i * twicePi / triangleAmount)),
y_3 + (radius_3 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_4 =0.05; GLfloat y_4= 0.85; GLfloat radius_4 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_4 , y_4); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_4 + (radius_4 * cos(i * twicePi / triangleAmount)),
y_4 + (radius_4 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x_5 =0.05; GLfloat y_5= 0.78; GLfloat radius_5 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_5 , y_5); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_5 + (radius_5 * cos(i * twicePi / triangleAmount)),
y_5 + (radius_5 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_6 =0.15; GLfloat y_6= 0.78; GLfloat radius_6=0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(255,255,255);
glVertex2f(x_6 , y_6); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_6 + (radius_6 * cos(i * twicePi / triangleAmount)),
y_6 + (radius_6 * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glPopMatrix();

////////////////////////////////////////////////////////////////
/// CLOUDS 2

glPushMatrix();
glTranslatef(position4,.0f, 0.0f);

GLfloat x_7 =0.0; GLfloat y_7 =0.80; GLfloat radius_7 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_7 , y_7); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_7 + (radius_7 * cos(i * twicePi / triangleAmount)),
y_7 + (radius_7 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_8 =0.05; GLfloat y_8= 0.85; GLfloat radius_8 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_8 , y_8); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_8 + (radius_8 * cos(i * twicePi / triangleAmount)),
y_8 + (radius_8 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x_9 =0.05; GLfloat y_9= 0.78; GLfloat radius_9 =0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_9 , y_9); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_9 + (radius_9 * cos(i * twicePi / triangleAmount)),
y_9 + (radius_9 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_10 =0.15; GLfloat y_10= 0.78; GLfloat radius_10=0.10;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(255,255,255);
glVertex2f(x_10 , y_10); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_10 + (radius_10 * cos(i * twicePi / triangleAmount)),
y_10 + (radius_10 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

glPopMatrix();




////////////////////////////////////////////////
/////////////////////////////////////////////////
/// car 2

 glLoadIdentity();
 glPushMatrix();
 glTranslatef(position2,0.0f, 0.0f);

   glBegin(GL_QUADS);
      glColor3ub(105,53,156);
      glVertex2f(-0.13f, -0.50f);
      glVertex2f( 0.12f, -0.50f);
      glVertex2f( 0.12f,  -0.65f);
      glVertex2f(-0.13f,  -0.65f);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(105,53,156);
      glVertex2f(-0.13f, -0.50f);
      glVertex2f(0.02f, -0.50f);
      glVertex2f(0.02f,  -0.40f);
      glVertex2f(-0.13f,  -0.40f);

      glEnd();


   glBegin(GL_QUADS);
      glColor3ub(230,232,250);
      glVertex2f(-0.11f, -0.49f);
      glVertex2f( -0.03f, -0.49f);
      glVertex2f( -0.03f,  -0.42f);
      glVertex2f(-0.11f,  -0.42f);

   glEnd();


GLfloat x_15 =-0.07; GLfloat y_15= -0.65; GLfloat radius_15 =-0.04;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_15 , y_15); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_15 + (radius_15 * cos(i * twicePi / triangleAmount)),
y_15 + (radius_15 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_16 =0.07; GLfloat y_16= -0.65; GLfloat radius_16 =-0.04;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_16 , y_16); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_16 + (radius_16* cos(i * twicePi / triangleAmount)),
y_16 + (radius_16 * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glPopMatrix();

/////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
///car
glLoadIdentity();
glPushMatrix();
 glTranslatef(position1,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3ub(0,139,139);
      glVertex2f(-0.15f, -0.85f);
      glVertex2f( 0.15f, -0.85f);
      glVertex2f( 0.15f,  -0.65f);
      glVertex2f(-0.15f,  -0.65f);
      glEnd();

      GLfloat x_17 =-0.08; GLfloat y_17= -0.84; GLfloat radius_17 =-0.05;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_17 , y_17); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_17+ (radius_17 * cos(i * twicePi / triangleAmount)),
y_17 + (radius_17 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

 GLfloat x_18 =-0.082; GLfloat y_18= -0.84; GLfloat radius_18 =-0.04;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(255,255,255);
glVertex2f(x_18 , y_18); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_18 + (radius_18 * cos(i * twicePi / triangleAmount)),
y_18 + (radius_18 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


 GLfloat x_19 =-0.082; GLfloat y_19= -0.84; GLfloat radius_19 =-0.03;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_19 , y_19); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_19 + (radius_19 * cos(i * twicePi / triangleAmount)),
y_19 + (radius_19 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x_20 =-0.02; GLfloat y_20 = -0.595; GLfloat radius_20 =0.14;


glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(0,139,139);
glVertex2f(x_20 , y_20); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_20  + (radius_20 * cos(i * twicePi / triangleAmount)),
y_20 + (radius_20 * sin(i * twicePi / triangleAmount))
);
}
glEnd();





GLfloat x_21 =0.08; GLfloat y_21= -0.74; GLfloat radius_21 =0.12;


glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(0,139,139);
glVertex2f(x_21 , y_21); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_21 + (radius_21 * cos(i * twicePi / triangleAmount)),
y_21 + (radius_21 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

GLfloat x_22 =-0.02; GLfloat y_22= -0.62; GLfloat radius_22 =0.10;


glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3ub(255,255,255);
glVertex2f(x_22 , y_22); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_22  + (radius_22 * cos(i * twicePi / triangleAmount)),
y_22 + (radius_22 * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glBegin(GL_QUADS);
      glColor3ub(0,139,139);
      glVertex2f(-0.15f, -0.80f);
      glVertex2f( 0.15f, -0.80f);
      glVertex2f( 0.15f,  -0.65f);
      glVertex2f(-0.15f,  -0.65f);
      glEnd();

      glEnd();
     glBegin(GL_QUADS);
      glColor3ub(0,139,139);
      glVertex2f(-0.03f, -0.80f);
      glVertex2f( 0.0f, -0.80f);
      glVertex2f( 0.0f,  -0.52f);
      glVertex2f(-0.03f,  -0.52f);
      glEnd();



      GLfloat x_23 =0.08; GLfloat y_23= -0.84; GLfloat radius_23 =-0.05;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_23, y_23); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_23 + (radius_23 * cos(i * twicePi / triangleAmount)),
y_23 + (radius_23 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

 GLfloat x_24 =0.082; GLfloat y_24= -0.84; GLfloat radius_24 =-0.04;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(255,255,255);
glVertex2f(x_24 , y_24); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_24 + (radius_24 * cos(i * twicePi / triangleAmount)),
y_24 + (radius_24 * sin(i * twicePi / triangleAmount))
);
}
glEnd();


 GLfloat x_25 =0.082; GLfloat y_25= -0.84; GLfloat radius_25 =-0.03;

glBegin(GL_TRIANGLE_FAN);//chaka1
glColor3f(0,0,0);
glVertex2f(x_25 , y_25); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x_25 + (radius_25 * cos(i * twicePi / triangleAmount)),
y_25 + (radius_25 * sin(i * twicePi / triangleAmount))
);
}
glEnd();

glPopMatrix();






glFlush();
}


void handleKeypress1(unsigned char key, int x, int y) {

	switch (key) {
case 'S':
    speed1 = 0.0f;
    break;
case 'P':
    speed1 = 0.1f;
    break;
	}

    switch (key) {

case 'D':
    glutDisplayFunc(day);
    glutPostRedisplay();

    break;
case 'N':
    glutDisplayFunc(night);
    glutPostRedisplay();
    break;


	}
}




int main(int argc, char** argv) {
    cout << "Press N : For Night Mode" << endl;
    cout << "Press D : For Day Mode" << endl;
    cout << "Press S : To stop first car" << endl;
    cout << "Press P : To start first car" << endl<< endl<< endl;

    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Setup");
   // glutInitWindowSize(320, 320);
    glutReshapeWindow(720,405);
    glutPositionWindow(350,200);
    glutDisplayFunc(display);
    glutDisplayFunc(day);
//    glutKeyboardFunc(handleKeypress);
    glutKeyboardFunc(handleKeypress1);
    glutMouseFunc(handleMouse);
    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, update4, 0);

    glutMainLoop();
    return 0;
}
