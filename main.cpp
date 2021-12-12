#include <windows.h>
#include <Gl/glut.h>
#include <GL/gl.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

GLfloat positionWitch = 0.0f;
GLfloat positionBatsH = 0.0f;
GLfloat positionBatsM = 0.0f;


void update(int value)
{
    //witch move

    positionWitch -= 0.015f;

    if (positionWitch < -1.3f)
    {
        positionWitch = 0.95f ;
    }

    //bats fly

    positionBatsH += 0.02f;

    if (positionBatsH > 1.0f)
    {
        positionBatsH = 0.0f ;
    }

    positionBatsM += 0.02f;

    if (positionBatsM > 1.0f)
    {
        positionBatsM = 0.0f ;
    }

    glutPostRedisplay();

    glutTimerFunc(50, update, 0);
}

void sky()
{
    glBegin(GL_POLYGON);
       glColor3f(0.39f, 0.58f, 0.93f);
       glVertex2f(-1.0f, -0.205f);
       glVertex2f(-1.0f, 1.0f);
       glColor3f(0.0f, 0.0f, 0.5f);
       glVertex2f(0.5f, 1.0f);
       glVertex2f(1.0f, 1.0f);
       glVertex2f(1.0f, -0.205f);
    glEnd();
}

void stars()
{
   glPointSize(2.5);
   glBegin(GL_POINTS);
       glColor3f(0.85f, 1.0f, 1.0f);
       glVertex2f(-0.96f, 0.95f);
       glVertex2f(-0.88f, 0.95f);
       glVertex2f(-0.8f, 0.95f);
       glVertex2f(-0.72f, 0.95f);
       glVertex2f(-0.64f, 0.95f);
       glVertex2f(-0.56f, 0.95f);
       glVertex2f(-0.48f, 0.95f);
       glVertex2f(-0.4f, 0.95f);
       glVertex2f(-0.32f, 0.95f);
       glVertex2f(-0.24f, 0.95f);
       glVertex2f(-0.16f, 0.95f);
       glVertex2f(-0.08f, 0.95f);
       glVertex2f(0.0f, 0.95f);
       glVertex2f(0.08f, 0.95f);
       glVertex2f(0.16f, 0.95f);
       glVertex2f(0.24f, 0.95f);
       glVertex2f(0.32f, 0.95f);
       glVertex2f(0.4f, 0.95f);
       glVertex2f(0.48f, 0.95f);
       glVertex2f(0.56f, 0.95f);
       glVertex2f(0.64f, 0.95f);
       glVertex2f(0.72f, 0.95f);
       glVertex2f(0.8f, 0.95f);
       glVertex2f(0.88f, 0.95f);
       glVertex2f(0.96f, 0.95f);

       glVertex2f(-0.98f, 0.9f);
       glVertex2f(-0.94f, 0.9f);
       glVertex2f(-0.89f, 0.9f);
       glVertex2f(-0.82f, 0.9f);
       glVertex2f(-0.75f, 0.9f);
       glVertex2f(-0.68f, 0.9f);
       glVertex2f(-0.62f, 0.9f);
       glVertex2f(-0.54f, 0.9f);
       glVertex2f(-0.48f, 0.9f);
       glVertex2f(-0.41f, 0.9f);
       glVertex2f(-0.34f, 0.9f);
       glVertex2f(-0.27f, 0.9f);
       glVertex2f(-0.2f, 0.9f);
       glVertex2f(-0.12f, 0.9f);
       glVertex2f(-0.05f, 0.9f);
       glVertex2f(0.0f, 0.9f);
       glVertex2f(0.05f, 0.9f);
       glVertex2f(0.12f, 0.9f);
       glVertex2f(0.19f, 0.9f);
       glVertex2f(0.26f, 0.9f);
       glVertex2f(0.34f, 0.9f);
       glVertex2f(0.4f, 0.9f);
       glVertex2f(0.46f, 0.9f);
       glVertex2f(0.53f, 0.9f);
       glVertex2f(0.6f, 0.9f);
       glVertex2f(0.67f, 0.9f);
       glVertex2f(0.75f, 0.9f);
       glVertex2f(0.82f, 0.9f);
       glVertex2f(0.89f, 0.9f);
       glVertex2f(0.96f, 0.9f);

       glVertex2f(-0.96f, 0.85f);
       glVertex2f(-0.88f, 0.85f);
       glVertex2f(-0.8f, 0.85f);
       glVertex2f(-0.72f, 0.85f);
       glVertex2f(-0.64f, 0.85f);
       glVertex2f(-0.56f, 0.85f);
       glVertex2f(-0.48f, 0.85f);
       glVertex2f(-0.4f, 0.85f);
       glVertex2f(-0.32f, 0.85f);
       glVertex2f(-0.24f, 0.85f);
       glVertex2f(-0.16f, 0.85f);
       glVertex2f(-0.08f, 0.85f);
       glVertex2f(0.0f, 0.85f);
       glVertex2f(0.08f, 0.85f);
       glVertex2f(0.16f, 0.85f);
       glVertex2f(0.24f, 0.85f);
       glVertex2f(0.32f, 0.85f);
       glVertex2f(0.4f, 0.85f);
       glVertex2f(0.48f, 0.85f);
       glVertex2f(0.56f, 0.85f);
       glVertex2f(0.64f, 0.85f);
       glVertex2f(0.72f, 0.85f);
       glVertex2f(0.8f, 0.85f);
       glVertex2f(0.88f, 0.85f);
       glVertex2f(0.96f, 0.85f);

       glVertex2f(-0.96f, 0.8f);
       glVertex2f(-0.89f, 0.8f);
       glVertex2f(-0.82f, 0.8f);
       glVertex2f(-0.75f, 0.8f);
       glVertex2f(-0.68f, 0.8f);
       glVertex2f(-0.62f, 0.8f);
       glVertex2f(-0.54f, 0.8f);
       glVertex2f(-0.48f, 0.8f);
       glVertex2f(-0.41f, 0.8f);
       glVertex2f(-0.34f, 0.8f);
       glVertex2f(-0.27f, 0.8f);
       glVertex2f(-0.2f, 0.8f);
       glVertex2f(-0.12f, 0.8f);
       glVertex2f(-0.05f, 0.8f);
       glVertex2f(0.0f, 0.8f);
       glVertex2f(0.05f, 0.8f);
       glVertex2f(0.12f, 0.8f);
       glVertex2f(0.19f, 0.8f);
       glVertex2f(0.26f, 0.8f);
       glVertex2f(0.34f, 0.8f);
       glVertex2f(0.4f, 0.8f);
       glVertex2f(0.46f, 0.8f);
       glVertex2f(0.53f, 0.8f);
       glVertex2f(0.6f, 0.8f);
       glVertex2f(0.67f, 0.8f);
       glVertex2f(0.75f, 0.8f);
       glVertex2f(0.82f, 0.8f);
       glVertex2f(0.89f, 0.8f);
       glVertex2f(0.96f, 0.8f);

       glVertex2f(-0.98f, 0.75f);
       glVertex2f(-0.94f, 0.75f);
       glVertex2f(-0.88f, 0.75f);
       glVertex2f(-0.82f, 0.75f);
       glVertex2f(-0.76f, 0.75f);
       glVertex2f(-0.7f, 0.75f);
       glVertex2f(-0.64f, 0.75f);
       glVertex2f(-0.58f, 0.75f);
       glVertex2f(-0.52f, 0.75f);
       glVertex2f(-0.46f, 0.75f);
       glVertex2f(-0.4f, 0.75f);
       glVertex2f(-0.34f, 0.75f);
       glVertex2f(-0.28f, 0.75f);
       glVertex2f(-0.22f, 0.75f);
       glVertex2f(-0.16f, 0.75f);
       glVertex2f(-0.1f, 0.75f);
       glVertex2f(-0.04f, 0.75f);
       glVertex2f(0.02f, 0.75f);
       glVertex2f(0.08f, 0.75f);
       glVertex2f(0.14f, 0.75f);
       glVertex2f(0.2f, 0.75f);
       glVertex2f(0.26f, 0.75f);
       glVertex2f(0.32f, 0.75f);
       glVertex2f(0.38f, 0.75f);
       glVertex2f(0.44f, 0.75f);
       glVertex2f(0.5f, 0.75f);
       glVertex2f(0.56f, 0.75f);
       glVertex2f(0.62f, 0.75f);
       glVertex2f(0.68f, 0.75f);
       glVertex2f(0.74f, 0.75f);
       glVertex2f(0.8f, 0.75f);
       glVertex2f(0.86f, 0.75f);
       glVertex2f(0.93f, 0.75f);
       glVertex2f(0.98f, 0.75f);

       glVertex2f(-0.96f, 0.7f);
       glVertex2f(-0.89f, 0.7f);
       glVertex2f(-0.82f, 0.7f);
       glVertex2f(-0.75f, 0.7f);
       glVertex2f(-0.68f, 0.7f);
       glVertex2f(-0.62f, 0.7f);
       glVertex2f(-0.54f, 0.7f);
       glVertex2f(-0.48f, 0.7f);
       glVertex2f(-0.41f, 0.7f);
       glVertex2f(-0.34f, 0.7f);
       glVertex2f(-0.27f, 0.7f);
       glVertex2f(-0.2f, 0.7f);
       glVertex2f(-0.12f, 0.7f);
       glVertex2f(-0.05f, 0.7f);
       glVertex2f(0.0f, 0.7f);
       glVertex2f(0.05f, 0.7f);
       glVertex2f(0.12f, 0.7f);
       glVertex2f(0.19f, 0.7f);
       glVertex2f(0.26f, 0.7f);
       glVertex2f(0.34f, 0.7f);
       glVertex2f(0.4f, 0.7f);
       glVertex2f(0.46f, 0.7f);
       glVertex2f(0.53f, 0.7f);
       glVertex2f(0.6f, 0.7f);
       glVertex2f(0.67f, 0.7f);
       glVertex2f(0.75f, 0.7f);
       glVertex2f(0.82f, 0.7f);
       glVertex2f(0.89f, 0.7f);
       glVertex2f(0.96f, 0.7f);

       glVertex2f(-0.96f, 0.65f);
       glVertex2f(-0.88f, 0.65f);
       glVertex2f(-0.8f, 0.65f);
       glVertex2f(-0.72f, 0.65f);
       glVertex2f(-0.64f, 0.65f);
       glVertex2f(-0.56f, 0.65f);
       glVertex2f(-0.48f, 0.65f);
       glVertex2f(-0.4f, 0.65f);
       glVertex2f(-0.32f, 0.65f);
       glVertex2f(-0.24f, 0.65f);
       glVertex2f(-0.16f, 0.65f);
       glVertex2f(-0.08f, 0.65f);
       glVertex2f(0.0f, 0.65f);
       glVertex2f(0.08f, 0.65f);
       glVertex2f(0.16f, 0.65f);
       glVertex2f(0.24f, 0.65f);
       glVertex2f(0.32f, 0.65f);
       glVertex2f(0.4f, 0.65f);
       glVertex2f(0.48f, 0.65f);
       glVertex2f(0.56f, 0.65f);
       glVertex2f(0.64f, 0.65f);
       glVertex2f(0.72f, 0.65f);
       glVertex2f(0.8f, 0.65f);
       glVertex2f(0.88f, 0.65f);
       glVertex2f(0.96f, 0.65f);
   glEnd();
}

void moon()
{
    glBegin(GL_TRIANGLE_FAN);
       glColor3f(0.99f, 0.95f, 0.84f);
       glVertex2f(0.65f, 0.45f);
       for(int i = 0; i <= 250 ; i++)
       {
            glVertex2f( 0.65 + (0.3*cos(i*((2*3.1416)/250))),
                        0.45 + (0.3*sin(i*((2*3.1416)/250)))
                       );
        }
    glEnd();
}


void tress()
{
    // Tree 1
    glBegin(GL_TRIANGLES);
        glColor3f(0.03f, 0.62f, 0.376f);
        glVertex2f(-0.48f, 0.00f);
        glVertex2f(-0.69f, 0.00f);
        glVertex2f(-0.59f, 0.4f);
    glEnd();

    glLineWidth(3.5f);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.5904f, 0.27f);
        glVertex2f(-0.5904f, -0.213f);

        glVertex2f(-0.59f, 0.04f);
        glVertex2f(-0.63f, 0.1f);

        glVertex2f(-0.59f, 0.16f);
        glVertex2f(-0.63f, 0.22f);

        glVertex2f(-0.59f, 0.09f);
        glVertex2f(-0.56f, 0.15f);

        glVertex2f(-0.59f, 0.2f);
        glVertex2f(-0.56f, 0.26f);
    glEnd();

    // Tree 2
    glBegin(GL_TRIANGLES);
        glColor3f(0.03f, 0.62f, 0.376f);
        glVertex2f(-0.9f, 0.00f);
        glVertex2f(-0.68f, 0.00f);
        glVertex2f(-0.78f, 0.567f);
    glEnd();

    glLineWidth(3.5f);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.79f, 0.27f);
        glVertex2f(-0.79f, -0.213f);

        glVertex2f(-0.79f, 0.04f);
        glVertex2f(-0.83f, 0.1f);

        glVertex2f(-0.79f, 0.16f);
        glVertex2f(-0.83f, 0.22f);

        glVertex2f(-0.79f, 0.09f);
        glVertex2f(-0.76f, 0.15f);

        glVertex2f(-0.79f, 0.2f);
        glVertex2f(-0.76f, 0.26f);
    glEnd();

}
void house()
{

    // roof-top
    glBegin(GL_POLYGON);
        glColor3f(0.1, 0.1, 0.1);
        glVertex2f(-1.06f, 0.8f);
        glVertex2f(-0.9f, 1.1f);
        glVertex2f(-0.46f, 1.1f);
        glVertex2f(-0.3f, 0.8f);
    glEnd();

    // four-walls
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);        // Set the walls to black
        glVertex2f(-0.99f, 0.8f);
        glVertex2f(-0.99f, 0.39f);
        glVertex2f(-0.382f, 0.39f);
        glVertex2f(-0.381f, 0.8f);
    glEnd();



    // Attic house-right
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.575f, 1.1f);
        glVertex2f(-0.575f, 1.32f);
        glVertex2f(-0.46f, 1.32f);
        glVertex2f(-0.46f, 1.1f);
    glEnd();
    // Attic house-middle
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.75f, 1.1f);
        glVertex2f(-0.75f, 1.4f);
        glVertex2f(-0.63f, 1.4f);
        glVertex2f(-0.63f, 1.1f);
    glEnd();
    // Attic house-left
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.9f, 1.1f);
        glVertex2f(-0.9f, 1.32f);
        glVertex2f(-0.8f, 1.32f);
        glVertex2f(-0.8f, 1.1f);
    glEnd();

    // Right-Attic-Roof
    glBegin(GL_TRIANGLES);
        glColor3f(0.1, 0.1, 0.1);
        glVertex2f(-0.52f, 1.55f);
        glVertex2f(-0.61f, 1.32f);
        glVertex2f(-0.42f, 1.32f);
    glEnd();
    // Middle-Attic-Roof
    glBegin(GL_TRIANGLES);
        glColor3f(0.1, 0.1, 0.1);
        glVertex2f(-0.69f, 1.6f);
        glVertex2f(-0.79f, 1.4f);
        glVertex2f(-0.59f, 1.4f);
    glEnd();
    // Left-Attic-Roof
    glBegin(GL_TRIANGLES);
        glColor3f(0.1, 0.1, 0.1);
        glVertex2f(-0.85f, 1.55f);
        glVertex2f(-0.93f, 1.32f);
        glVertex2f(-0.76f, 1.32f);
    glEnd();

    // Door
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.6f, 0.0f);
        glVertex2f(-0.57f, 0.67f);
        glVertex2f(-0.81f, 0.67f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.81f, 0.386f);
        glVertex2f(-0.57f, 0.386f);
    glEnd();

    // Right window
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.6f, 0.0f);
        glVertex2f(-0.414f, .74f);
        glVertex2f(-0.517f, .74f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.517f, 0.58);
        glVertex2f(-0.414f, 0.58f);
    glEnd();

    // Left window
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.6f, 0.0f);
        glVertex2f(-0.85f, 0.74f);
        glVertex2f(-0.956f, 0.74f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.956f, 0.58f);
        glVertex2f(-0.85f, 0.58f);
    glEnd();


    // Left-Attic-window
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.6f, 0.0f);
        glVertex2f(-0.81f, 1.29f);
        glVertex2f(-.889f, 1.29f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.889f, 1.18f);
        glVertex2f(-0.81f, 1.18f);
    glEnd();

    // Middle-Attic-window
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.6f, 0.0f);
        glVertex2f(-0.64f, 1.34f);
        glVertex2f(-0.74f, 1.34f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.74f, 1.18f);
        glVertex2f(-0.64f, 1.18f);
    glEnd();

    // Right-Attic-window
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.6f, 0.0f);
        glVertex2f(-0.475f, 1.29f);
        glVertex2f(-0.56f, 1.29f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-0.56f, 1.18f);
        glVertex2f(-0.475f, 1.18f);
    glEnd();


    // Left window line
    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.98f, 0.651f);
        glVertex2f(-0.83, 0.651f);

        glVertex2f(-0.901f, 0.56f);
        glVertex2f(-0.901f, 0.76f);
    glEnd();

    // Right-window line
    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.516f, 0.651f);
        glVertex2f(-0.414f, 0.651f);

        glVertex2f(-0.467f, 0.56f);
        glVertex2f(-0.467f, 0.76f);
    glEnd();

    // Right Attic lines
    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.572f, 1.24f);
        glVertex2f(-0.475f, 1.24f);

        glVertex2f(-0.5165f, 1.30f);
        glVertex2f(-0.5165f, 1.18f);
    glEnd();
    // Middle Attic lines
    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.75f, 1.25f);
        glVertex2f(-0.64f, 1.25f);

        glVertex2f(-0.689f, 1.34f);
        glVertex2f(-0.689f, 1.18f);
    glEnd();

    // Left Attic lines
    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.90f, 1.24f);
        glVertex2f(-0.80f, 1.24f);

        glVertex2f(-0.85f, 1.30f);
        glVertex2f(-0.85f, 1.18f);
    glEnd();

    // Door-line
    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.6908f, 0.34f);
        glVertex2f(-0.6908f, 0.76f);
    glEnd();

    // Road
    glBegin(GL_POLYGON);
        glColor3f(0.329412f, 0.329412f, 0.329412);
        glVertex2f(-1.4f, -0.5f);
        glVertex2f(-0.99f, 0.39f);
        glVertex2f(-0.382f, 0.39f);
        glVertex2f(0.16f, -0.5f);
    glEnd();
}

void grave1()
{
    //outer structure
    glBegin(GL_POLYGON);
       glColor3f(0.1f, 0.1f, 0.1f);
       glVertex2f(0.66f, 0.55f);
       glVertex2f(0.64f, 0.51f);
       glVertex2f(0.68f, 0.3f);
       glVertex2f(0.72f, 0.3f);
       glVertex2f(0.76f, 0.51f);
       glVertex2f(0.74f, 0.55f);
    glEnd();

    //vertical cross
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.665f, 0.475f);
        glVertex2f(0.665f, 0.46f);
        glVertex2f(0.735f, 0.46f);
        glVertex2f(0.735f, 0.475f);
    glEnd();

    //horizontal cross
     glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.695f, 0.51f);
        glVertex2f(0.695f, 0.38f);
        glVertex2f(0.705f, 0.38f);
        glVertex2f(0.705f, 0.51f);
    glEnd();
}

void grave2()
{
    glBegin(GL_POLYGON);
       glColor3f(0.1f, 0.1f, 0.1f);
       glVertex2f(0.49f, 0.51f);
       glVertex2f(0.47f, 0.47f);
       glVertex2f(0.505f, 0.3f);
       glVertex2f(0.535f, 0.3f);
       glVertex2f(0.57f, 0.47f);
       glVertex2f(0.55f, 0.51f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.49f, 0.45f);
        glVertex2f(0.49f, 0.44f);
        glVertex2f(0.55f, 0.44f);
        glVertex2f(0.55f, 0.45f);
    glEnd();

     glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.515f, 0.48f);
        glVertex2f(0.515f, 0.37f);
        glVertex2f(0.525f, 0.37f);
        glVertex2f(0.525f, 0.48f);
    glEnd();
}

void grave3()
{
    //First cross horizontal

    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(0.36f, 0.44f);
        glVertex2f(0.36f, 0.42f);
        glVertex2f(0.43f, 0.43f);
        glVertex2f(0.43f, 0.45f);
    glEnd();

    //first cross vertical
    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(0.388f, 0.475f);
        glVertex2f(0.391f, 0.3f);
        glVertex2f(0.399f, 0.3f);
        glVertex2f(0.402f, 0.475f);
    glEnd();

    //Second cross horizontal
    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(0.585f, 0.38f);
        glVertex2f(0.585f, 0.364f);
        glVertex2f(0.63f, 0.364f);
        glVertex2f(0.63f, 0.38f);
    glEnd();


    //Second cross vertical
    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(0.602f, 0.4f);
        glVertex2f(0.602f, 0.3f);
        glVertex2f(0.613f, 0.3f);
        glVertex2f(0.613f, 0.4f);
    glEnd();

    //Third cross horizontal
    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(0.78f, 0.44f);
        glVertex2f(0.78f, 0.422f);
        glVertex2f(0.86f, 0.422f);
        glVertex2f(0.86f, 0.44f);
    glEnd();

    //Third cross vertical
    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(0.812f, 0.475f);
        glVertex2f(0.8164f, 0.3f);
        glVertex2f(0.8236f, 0.3f);
        glVertex2f(0.828f, 0.475f);
    glEnd();
}

void grave4()
{
    //Bottom part
    glBegin(GL_POLYGON);
       glColor3f(0.07f, 0.07f, 0.07f);
       glVertex2f(0.9f, 0.3f);
       glVertex2f(0.9f, 0.35f);
       glVertex2f(0.917f, 0.375f);
       glVertex2f(0.933f, 0.375f);
       glVertex2f(0.95f, 0.35f);
       glVertex2f(0.95f, 0.3f);
    glEnd();

    //cross vertical
    glBegin(GL_POLYGON);
        glColor3f(0.07f, 0.07f, 0.07f);
        glVertex2f(0.918f, 0.375f);
        glVertex2f(0.918f, 0.45f);
        glVertex2f(0.932f, 0.45f);
        glVertex2f(0.932f, 0.375f);
    glEnd();

    //cross horizontal
    glBegin(GL_POLYGON);
        glColor3f(0.07f, 0.07f, 0.07f);
        glVertex2f(0.904f, 0.405f);
        glVertex2f(0.904f, 0.417f);
        glVertex2f(0.946f, 0.417f);
        glVertex2f(0.946f, 0.405f);
    glEnd();
}

void pumpkin1()
{
    //Outer shape
   glBegin(GL_TRIANGLE_FAN);
            glColor3f(1.0f, 0.46f, 0.094f);
            glVertex2f(-0.0032f,  -0.4574f);
            glVertex2f(0.0186f,  -0.4574f);
            glVertex2f(0.0418f,  -0.4574f);
            glVertex2f(0.0684f,  -0.4424f);
            glVertex2f(0.0866f,  -0.4148f);
            glVertex2f(0.0938f,  -0.3934f);
            glVertex2f(0.1008f,  -0.3618f);
            glVertex2f(0.1008f,  -0.3254f);
            glVertex2f(0.1f,  -0.2836f);
            glVertex2f(0.0938f,  -0.2558f);
            glVertex2f(0.0808f,  -0.2234f);
            glVertex2f(0.0604f,  -0.1998f);
            glVertex2f(0.0454f,  -0.1966f);
            glVertex2f(0.0276f,  -0.1918f);
            glVertex2f(0.0026f,  -0.1872f);
            glVertex2f(-0.0276f,  -0.1918f);
            glVertex2f(-0.0534f,  -0.2022f);
            glVertex2f(-0.0666f,  -0.2266f);
            glVertex2f(-0.0774f,  -0.255f);
            glVertex2f(-0.0822f,  -0.278f);
            glVertex2f(-0.0844f,  -0.3034f);
            glVertex2f(-0.0862f,  -0.3318f);
            glVertex2f(-0.0826f,  -0.3736f);
            glVertex2f(-0.0724f,  -0.4038f);
            glVertex2f(-0.0592f,  -0.4322f);
            glVertex2f(-0.0414f,  -0.452f);
            glVertex2f(-0.0218f,  -0.4574f);
    glEnd();


    //pumpkin green head
    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(10,199,48);
            glVertex2f(-0.0066f,  -0.1782f);
            glVertex2f(-0.008f,  -0.1878f);
            glVertex2f(-0.0116f,  -0.2044f);
            glVertex2f(-0.0146f,  -0.2068f);
            glVertex2f(-0.008f,  -0.2076f);
            glVertex2f(-0.0018f,  -0.2052f);
            glVertex2f(0.0026f,  -0.2090f);
            glVertex2f(0.0076f,  -0.2114f);
            glVertex2f(0.0156f,  -0.2114f);
            glVertex2f(0.0258f,  -0.206f);
            glVertex2f(0.0186f,  -0.1996f);
            glVertex2f(0.0186f,  -0.1766f);
            glVertex2f(0.0134f,  -0.153f);
            glVertex2f(0.0098f,  -0.1482f);
            glVertex2f(-0.0008f,  -0.1546f);
            glVertex2f(-0.008f,  -0.157f);
            glVertex2f(-0.0094f,  -0.1624f);
    glEnd();

    //Left eye
    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(-0.0192f,  -0.2952f);
            glVertex2f(-0.0254f,  -0.2234f);
            glVertex2f(-0.0516f,  -0.2842f);
    glEnd();

    //Right eye
    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(0.0232f,  -0.2890f);
            glVertex2f(0.0356f,  -0.2210f);
            glVertex2f(0.0552f,  -0.2858f);
    glEnd();

    //nose
    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
             glVertex2f(-0.0098f,  -0.319f);
            glVertex2f(0.0134f,  -0.319f);
            glVertex2f(0.0018f,  -0.2778f);
    glEnd();

    //smile
    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(0.0076f,  -0.3554f);
            glVertex2f(0.024f,  -0.354f);
            glVertex2f(0.0244f,  -0.3698f);
            glVertex2f(0.0328f,  -0.3658f);
            glVertex2f(0.0342f,  -0.3508f);
            glVertex2f(0.0552f,  -0.335f);
            glVertex2f(0.0756f,  -0.3088f);
            glVertex2f(0.0644f,  -0.3532f);
            glVertex2f(0.0396f,  -0.388f);
            glVertex2f(0.0128f,  -0.3966f);
            glVertex2f(-0.0098f,  -0.3848f);
            glVertex2f(-0.0076f,  -0.372f);
            glVertex2f(-0.0222f,  -0.3666f);
            glVertex2f(-0.0266f,  -0.3894f);
            glVertex2f(-0.0454f,  -0.372f);
            glVertex2f(-0.0574f,  -0.3444f);
            glVertex2f(-0.0546f,  -0.3144f);
            glVertex2f(-0.0448f,  -0.3396f);
            glVertex2f(-0.0214f,  -0.3548f);
    glEnd();
}

void witch()
{

    //witch's hand
    glBegin(GL_TRIANGLES);
        glColor3f(0.22f, 0.8f, 0.22f);
        glVertex2f(-0.067f, 0.55f);
        glVertex2f(-0.068f, 0.52f);
        glVertex2f(-0.16f, 0.46f);
    glEnd();

    //broomstick
    glBegin(GL_POLYGON);
        glColor3f(0.3f, 0.2f, 0.2f);
        glVertex2f(-0.192f, 0.475f);
        glVertex2f(0.23f, 0.32f);
        glVertex2f(0.236f, 0.345f);
        glVertex2f(-0.19f, 0.5f);
    glEnd();

    //broom black part
    glBegin(GL_POLYGON);
       glColor3f(0.2f, 0.2f, 0.2f);
       glVertex2f(0.252f, 0.3f);
       glVertex2f(0.227f, 0.3f);
       glVertex2f(0.232f, 0.364f);
       glVertex2f(0.252f, 0.364f);
    glEnd();

    //broom yellow part
    glBegin(GL_POLYGON);
       glColor3f(0.9f, 0.9f, 0.15f);
       glVertex2f(0.252f, 0.3f);
       glVertex2f(0.33f, 0.26f);
       glVertex2f(0.33f, 0.364f);
       glVertex2f(0.252f, 0.364f);
    glEnd();

   //witch hat bottom part
    glBegin(GL_POLYGON);
        glColor3f(0.18f, 0.18f, 0.18f);
        glVertex2f(-0.1f, 0.705f);
        glVertex2f(-0.06f, 0.73f);
        glVertex2f(0.0f, 0.73f);
        glVertex2f(0.04f, 0.705f);
    glEnd();

    //hat middle part
    glBegin(GL_POLYGON);
        glColor3f(0.18f, 0.18f, 0.18f);
        glVertex2f(-0.06f, 0.73f);
        glVertex2f(-0.03f, 0.91f);
        glVertex2f(0.0f, 0.89f);
        glVertex2f(0.0f, 0.73f);
    glEnd();

    //hat end part
    glBegin(GL_POLYGON);
        glColor3f(0.18f, 0.18f, 0.18f);
        glVertex2f(-0.03f, 0.91f);
        glVertex2f(0.06f, 0.905f);
        glVertex2f(0.0f, 0.89f);
    glEnd();

    //witch face
    glBegin(GL_POLYGON);
        glColor3f(0.22f, 0.8f, 0.22f);
        glVertex2f(-0.08f, 0.705f);
        glVertex2f(-0.078f, 0.63f);
        glVertex2f(-0.03f, 0.63f);
        glVertex2f(-0.03f, 0.69f);
        glVertex2f(-0.04f, 0.705f);
    glEnd();

    //eye
    glPointSize(4);
    glBegin(GL_POINTS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.066f, 0.68f);
    glEnd();

    //hair
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.42f, 0.42f);
        glVertex2f(0.0f, 0.705f);
        glVertex2f(0.03f, 0.61f);
        glVertex2f(-0.03f, 0.61f);
        glVertex2f(-0.03f, 0.67f);
        glVertex2f(-0.04f, 0.705f);
    glEnd();

    //nose
    glBegin(GL_POLYGON);
        glColor3f(0.22f, 0.8f, 0.22f);
        glVertex2f(-0.08f, 0.69f);
        glVertex2f(-0.125f, 0.682f);
        glVertex2f(-0.08f, 0.674f);
    glEnd();

    //chin
    glBegin(GL_POLYGON);
        glColor3f(0.22f, 0.8f, 0.22f);
        glVertex2f(-0.078f, 0.63f);
        glVertex2f(-0.105f, 0.62f);
        glVertex2f(-0.103f, 0.61f);
        glVertex2f(-0.046f, 0.63f);
    glEnd();

    //neck
    glBegin(GL_POLYGON);
        glColor3f(0.22f, 0.8f, 0.22f);
        glVertex2f(-0.046f, 0.63f);
        glVertex2f(-0.046f, 0.585f);
        glVertex2f(-0.03f, 0.585f);
        glVertex2f(-0.03f, 0.63f);
    glEnd();

    //body
    glBegin(GL_POLYGON);
        glColor3f(0.18f, 0.18f, 0.18f);
        glVertex2f(-0.03f, 0.585f);
        glVertex2f(-0.067f, 0.585f);
        glVertex2f(-0.068f, 0.47f);
        glVertex2f(-0.11f, 0.37f);
        glVertex2f(-0.11f, 0.3f);
        glVertex2f(-0.06f, 0.3f);
        glVertex2f(0.01f, 0.4f);
        glVertex2f(0.0f, 0.44f);
        glVertex2f(0.0f, 0.585f);
    glEnd();

    //shoe 1
    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(-0.11f, 0.273f);
        glVertex2f(-0.11f, 0.3f);
        glVertex2f(-0.095f, 0.3f);
        glVertex2f(-0.085f, 0.273f);
    glEnd();

    //shoe 2
    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(-0.075f, 0.273f);
        glVertex2f(-0.075f, 0.3f);
        glVertex2f(-0.06f, 0.3f);
        glVertex2f(-0.05f, 0.273f);
    glEnd();

    //cape
    glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(-0.02f, 0.585f);
        glVertex2f(0.25f, 0.565f);
        glVertex2f(0.225f, 0.54f);
        glVertex2f(0.25f, 0.514f);
        glVertex2f(0.225f, 0.488f);
        glVertex2f(0.25f, 0.462f);
        glVertex2f(0.225f, 0.436f);
        glVertex2f(0.25f, 0.42f);
        glVertex2f(0.2f, 0.44f);
        glVertex2f(0.15f, 0.45f);
        glVertex2f(0.1f, 0.44f);
        glVertex2f(0.05f, 0.455f);
        glVertex2f(-0.01f, 0.44f);
    glEnd();
}

void bat1()
{
    glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.699f, 0.5158f);
            glVertex2f(-0.7047f, 0.5126f);
            glVertex2f(-0.7062f, 0.5225f);
            glVertex2f(-0.7062f, 0.5296f);
            glVertex2f(-0.7084f, 0.519f);
            glVertex2f(-0.7071f, 0.5079f);
            glVertex2f(-0.7098f, 0.4964f);
            glVertex2f(-0.714f, 0.4984f);
            glVertex2f(-0.72f, 0.5111f);
            glVertex2f(-0.7273f, 0.5332f);
            glVertex2f(-0.7709f, 0.5502f);
            glVertex2f(-0.7616f, 0.53f);
            glVertex2f(-0.7602f, 0.5178f);
            glVertex2f(-0.7484f, 0.5051f);
            glVertex2f(-0.7438f, 0.4889f);
            glVertex2f(-0.7327f, 0.481f);
            glVertex2f(-0.7251f, 0.4676f);
            glVertex2f(-0.7089f, 0.4668f);
            glVertex2f(-0.7002f, 0.4468f);
            glVertex2f(-0.6902f, 0.468f);
            glVertex2f(-0.674f, 0.468f);
            glVertex2f(-0.6671f, 0.4814f);
            glVertex2f(-0.6547f, 0.4921f);
            glVertex2f(-0.6491f, 0.5095f);
            glVertex2f(-0.6387f, 0.5178f);
            glVertex2f(-0.6373f, 0.5328f);
            glVertex2f(-0.6287f, 0.5506f);
            glVertex2f(-0.6722f, 0.532f);
            glVertex2f(-0.68f, 0.5091f);
            glVertex2f(-0.6849f, 0.4996f);
            glVertex2f(-0.6902f, 0.4957f);
            glVertex2f(-0.692f, 0.5091f);
            glVertex2f(-0.6911f, 0.519f);
            glVertex2f(-0.6927f, 0.5269f);
            glVertex2f(-0.6951f, 0.5115f);
    glEnd();
}

void bat2()
{
    glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.801f, 0.5958f);
            glVertex2f(0.7913f, 0.5926f);
            glVertex2f(0.7938f, 0.6025f);
            glVertex2f(0.7938f, 0.6096f);
            glVertex2f(0.7916f, 0.599f);
            glVertex2f(0.7929f, 0.5879f);
            glVertex2f(0.7902f, 0.5764f);
            glVertex2f(0.786f, 0.5784f);
            glVertex2f(0.78f, 0.5911f);
            glVertex2f(0.7727f, 0.6132f);
            glVertex2f(0.7291f, 0.6302f);
            glVertex2f(0.7384f, 0.61f);
            glVertex2f(0.7398f, 0.5978f);
            glVertex2f(0.7516f, 0.5851f);
            glVertex2f(0.7562f, 0.5689f);
            glVertex2f(0.7673f, 0.561f);
            glVertex2f(0.7749f, 0.5476f);
            glVertex2f(0.7911f, 0.5468f);
            glVertex2f(0.7998f, 0.5268f);
            glVertex2f(0.8098f, 0.548f);
            glVertex2f(0.826f, 0.548f);
            glVertex2f(0.8329f, 0.5614f);
            glVertex2f(0.8453f, 0.5721f);
            glVertex2f(0.8509f, 0.5895);
            glVertex2f(0.8613f, 0.5978f);
            glVertex2f(0.8627f, 0.6128f);
            glVertex2f(0.8713f, 0.6306f);
            glVertex2f(0.8278f, 0.612f);
            glVertex2f(0.82f, 0.5891f);
            glVertex2f(0.8151f, 0.5796f);
            glVertex2f(0.8098f, 0.5757f);
            glVertex2f(0.808f,0.5891f);
            glVertex2f(0.8089f, 0.599f);
            glVertex2f(0.8073f, 0.6069f);
            glVertex2f(0.8049f, 0.5915f);
    glEnd();
}

void bat3()
{
     glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.5515f, 0.59378f);
            glVertex2f(0.53695f, 0.5889f);
            glVertex2f(0.5407f, 0.60375f);
            glVertex2f(0.5407f, 0.6144f);
            glVertex2f(0.5374f, 0.5985f);
            glVertex2f(0.53935f, 0.58185f);
            glVertex2f(0.5353f, 0.5646f);
            glVertex2f(0.529f, 0.5676f);
            glVertex2f(0.52f, 0.58665f);
            glVertex2f(0.50905f, 0.6198f);
            glVertex2f(0.44365f, 0.6453f);
            glVertex2f(0.4576f, 0.615f);
            glVertex2f(0.4597f, 0.5967f);
            glVertex2f(0.4774f, 0.57765f);
            glVertex2f(0.4843f, 0.55335f);
            glVertex2f(0.50095f, 0.5415f);
            glVertex2f(0.51235f, 0.5214f);
            glVertex2f(0.53665f, 0.4968f);
            glVertex2f(0.5497f, 0.4902f);
            glVertex2f(0.5647f, 0.522f);
            glVertex2f(0.589f, 0.522f);
            glVertex2f(0.59935f, 0.5421f);
            glVertex2f(0.61795f, 0.55815f);
            glVertex2f(0.6263f, 0.58425);
            glVertex2f(0.64195f, 0.5967f);
            glVertex2f(0.64405f, 0.6192f);
            glVertex2f(0.65695f, 0.6459f);
            glVertex2f(0.5917f, 0.618f);
            glVertex2f(0.58f, 0.58365f);
            glVertex2f(0.57265f, 0.5694f);
            glVertex2f(0.5647f, 0.56355f);
            glVertex2f(0.562f, 0.58365f);
            glVertex2f(0.56335f, 0.59865f);
            glVertex2f(0.56095f, 0.61035f);
            glVertex2f(0.55735f, 0.58725f);
    glEnd();
}

void bat4()
{
     glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.701f, 0.6958f);
            glVertex2f(0.6913f, 0.6926f);
            glVertex2f(0.6938f, 0.7025f);
            glVertex2f(0.6938f, 0.7096f);
            glVertex2f(0.6916f, 0.699f);
            glVertex2f(0.6929f, 0.6879f);
            glVertex2f(0.6902f, 0.6764f);
            glVertex2f(0.686f, 0.6784f);
            glVertex2f(0.68f, 0.6911f);
            glVertex2f(0.6727f, 0.7132f);
            glVertex2f(0.6291f, 0.7302f);
            glVertex2f(0.6384f, 0.71f);
            glVertex2f(0.6398f, 0.6978f);
            glVertex2f(0.6516f, 0.6851f);
            glVertex2f(0.6562f, 0.6689f);
            glVertex2f(0.6673f, 0.661f);
            glVertex2f(0.6749f, 0.6476f);
            glVertex2f(0.6911f, 0.6468f);
            glVertex2f(0.6998f, 0.6268f);
            glVertex2f(0.7098f, 0.648f);
            glVertex2f(0.726f, 0.648f);
            glVertex2f(0.7329f, 0.6614f);
            glVertex2f(0.7453f, 0.6721f);
            glVertex2f(0.7509f, 0.6895);
            glVertex2f(0.7613f, 0.6978f);
            glVertex2f(0.7627f, 0.7128f);
            glVertex2f(0.7713f, 0.7306f);
            glVertex2f(0.7278f, 0.712f);
            glVertex2f(0.72f, 0.6891f);
            glVertex2f(0.7151f, 0.6796f);
            glVertex2f(0.7098f, 0.6757f);
            glVertex2f(0.708f,0.6891f);
            glVertex2f(0.7089f, 0.6991f);
            glVertex2f(0.7073f, 0.7069f);
            glVertex2f(0.7049f, 0.6915f);
    glEnd();
}

void bat5()
{
    glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(-0.8193f, 0.48606f);
            glVertex2f(-0.8233f, 0.48382f);
            glVertex2f(-0.82434f, 0.49075f);
            glVertex2f(-0.82434f, 0.49572f);
            glVertex2f(-0.82588f, 0.4883f);
            glVertex2f(-0.82497f, 0.48053f);
            glVertex2f(-0.82686f, 0.47248f);
            glVertex2f(-0.8298f, 0.47388f);
            glVertex2f(-0.834f, 0.48277f);
            glVertex2f(-0.83911f, 0.49824f);
            glVertex2f(-0.86963f, 0.51014f);
            glVertex2f(-0.86312f, 0.496f);
            glVertex2f(-0.86214f, 0.48746f);
            glVertex2f(-0.85388f, 0.47857f);
            glVertex2f(-0.85066f, 0.46723f);
            glVertex2f(-0.84289f, 0.4617f);
            glVertex2f(-0.83757f, 0.45232f);
            glVertex2f(-0.82623f, 0.45176f);
            glVertex2f(-0.82014f, 0.43776f);
            glVertex2f(-0.81314f, 0.4526f);
            glVertex2f(-0.8018f, 0.4526f);
            glVertex2f(-0.79697f, 0.46198f);
            glVertex2f(-0.78829f, 0.46947f);
            glVertex2f(-0.78437f, 0.48165f);
            glVertex2f(-0.77709f, 0.48746f);
            glVertex2f(-0.77611f, 0.49796f);
            glVertex2f(-0.77009f, 0.51042f);
            glVertex2f(-0.80054f, 0.4974f);
            glVertex2f(-0.806f, 0.48137f);
            glVertex2f(-0.80943f, 0.47472f);
            glVertex2f(-0.81314f, 0.47199f);
            glVertex2f(-0.8144f, 0.48137f);
            glVertex2f(-0.81377f, 0.4883f);
            glVertex2f(-0.81489f, 0.49383f);
            glVertex2f(-0.81657f, 0.48305f);
        glEnd();
}

void bat6()
{
    glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.6893f, 0.53606f);
            glVertex2f(0.6933f, 0.53382f);
            glVertex2f(0.69434f, 0.54075f);
            glVertex2f(0.69434f, 0.54572f);
            glVertex2f(0.69588f, 0.5383f);
            glVertex2f(0.69497f, 0.53053f);
            glVertex2f(0.69686f, 0.52248f);
            glVertex2f(0.6998f, 0.52388f);
            glVertex2f(0.704f, 0.53277f);
            glVertex2f(0.70911f, 0.54824f);
            glVertex2f(0.73963f, 0.56014f);
            glVertex2f(0.73312f, 0.546f);
            glVertex2f(0.73214f, 0.53746f);
            glVertex2f(0.72388f, 0.52857f);
            glVertex2f(0.72066f, 0.51723f);
            glVertex2f(0.71289f, 0.5117f);
            glVertex2f(0.70757f, 0.50232f);
            glVertex2f(0.69623f, 0.50176f);
            glVertex2f(0.69014f, 0.48776f);
            glVertex2f(0.68314f, 0.5026f);
            glVertex2f(0.6718f, 0.5026f);
            glVertex2f(0.66697f, 0.51198f);
            glVertex2f(0.65829f, 0.51947f);
            glVertex2f(0.65437f, 0.53165f);
            glVertex2f(0.64709f, 0.53746f);
            glVertex2f(0.64611f, 0.54796f);
            glVertex2f(0.64009f, 0.56042f);
            glVertex2f(0.67054f, 0.5474f);
            glVertex2f(0.676f, 0.53137f);
            glVertex2f(0.67943f, 0.52472f);
            glVertex2f(0.68314f, 0.522f);
            glVertex2f(0.6844f, 0.53137f);
            glVertex2f(0.68377f, 0.5383f);
            glVertex2f(0.68489f, 0.54383f);
            glVertex2f(0.68657f, 0.53305f);
        glEnd();
}

void bat7()
{
     glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.8809f, 0.70101f);
            glVertex2f(0.87217f, 0.69797f);
            glVertex2f(0.87442f, 0.707375f);
            glVertex2f(0.87442f, 0.71412f);
            glVertex2f(0.87244f, 0.70405f);
            glVertex2f(0.87361f, 0.693505f);
            glVertex2f(0.87118f, 0.68258f);
            glVertex2f(0.8674f, 0.68448f);
            glVertex2f(0.862f, 0.696545f);
            glVertex2f(0.85543f, 0.71754f);
            glVertex2f(0.8162f, 0.73369f);
            glVertex2f(0.82456f, 0.7145f);
            glVertex2f(0.82582f, 0.70291f);
            glVertex2f(0.83644f, 0.690845f);
            glVertex2f(0.84058f, 0.675455f);
            glVertex2f(0.85057f, 0.66795f);
            glVertex2f(0.85741f, 0.65522f);
            glVertex2f(0.87199f, 0.65446f);
            glVertex2f(0.87982f, 0.63546f);
            glVertex2f(0.88882f, 0.6556f);
            glVertex2f(0.9034f, 0.6556f);
            glVertex2f(0.90961f, 0.66833f);
            glVertex2f(0.92077f, 0.678494f);
            glVertex2f(0.92581f, 0.695025);
            glVertex2f(0.93517f, 0.70291f);
            glVertex2f(0.93643f, 0.71716f);
            glVertex2f(0.94417f, 0.73407f);
            glVertex2f(0.90502f, 0.7164f);
            glVertex2f(0.898f, 0.694645f);
            glVertex2f(0.89359f, 0.68562f);
            glVertex2f(0.88882f, 0.681915f);
            glVertex2f(0.8872f,0.694645f);
            glVertex2f(0.88801f, 0.704145f);
            glVertex2f(0.88657f, 0.71165f);
            glVertex2f(0.88441f, 0.69699f);
    glEnd();
}

void bat8()
{
    glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.0f, 0.0f, 0.0f);
            glVertex2f(0.8893f, 0.51606f);
            glVertex2f(0.8933f, 0.51382f);
            glVertex2f(0.89434f, 0.52075f);
            glVertex2f(0.89434f, 0.52572f);
            glVertex2f(0.89588f, 0.5183f);
            glVertex2f(0.89497f, 0.51053f);
            glVertex2f(0.89686f, 0.50248f);
            glVertex2f(0.8998f, 0.50388f);
            glVertex2f(0.904f, 0.51277f);
            glVertex2f(0.90911f, 0.52824f);
            glVertex2f(0.93963f, 0.54014f);
            glVertex2f(0.93312f, 0.526f);
            glVertex2f(0.93214f, 0.51746f);
            glVertex2f(0.92388f, 0.50857f);
            glVertex2f(0.92066f, 0.49723f);
            glVertex2f(0.91289f, 0.4917f);
            glVertex2f(0.90757f, 0.48232f);
            glVertex2f(0.89623f, 0.48176f);
            glVertex2f(0.89014f, 0.46776f);
            glVertex2f(0.88314f, 0.4826f);
            glVertex2f(0.8718f, 0.4826f);
            glVertex2f(0.86697f, 0.481198f);
            glVertex2f(0.85829f, 0.49947f);
            glVertex2f(0.85437f, 0.51165f);
            glVertex2f(0.84709f, 0.51746f);
            glVertex2f(0.84611f, 0.52796f);
            glVertex2f(0.84009f, 0.54042f);
            glVertex2f(0.87054f, 0.5274f);
            glVertex2f(0.876f, 0.51137f);
            glVertex2f(0.87943f, 0.50472f);
            glVertex2f(0.88314f, 0.502f);
            glVertex2f(0.8844f, 0.51137f);
            glVertex2f(0.88377f, 0.5183f);
            glVertex2f(0.88489f, 0.52383f);
            glVertex2f(0.88657f, 0.51305f);
        glEnd();
}

void pumpkin2()
{
   glBegin(GL_TRIANGLE_FAN);
            glColor3f(1.0f, 0.46f, 0.094f);
            glVertex2f(-0.0032f,  -0.4574f);
            glVertex2f(0.0186f,  -0.4574f);
            glVertex2f(0.0418f,  -0.4574f);
            glVertex2f(0.0684f,  -0.4424f);
            glVertex2f(0.0866f,  -0.4148f);
            glVertex2f(0.0938f,  -0.3934f);
            glVertex2f(0.1008f,  -0.3618f);
            glVertex2f(0.1008f,  -0.3254f);
            glVertex2f(0.1f,  -0.2836f);
            glVertex2f(0.0938f,  -0.2558f);
            glVertex2f(0.0808f,  -0.2234f);
            glVertex2f(0.0604f,  -0.1998f);
            glVertex2f(0.0454f,  -0.1966f);
            glVertex2f(0.0276f,  -0.1918f);
            glVertex2f(0.0026f,  -0.1872f);
            glVertex2f(-0.0276f,  -0.1918f);
            glVertex2f(-0.0534f,  -0.2022f);
            glVertex2f(-0.0666f,  -0.2266f);
            glVertex2f(-0.0774f,  -0.255f);
            glVertex2f(-0.0822f,  -0.278f);
            glVertex2f(-0.0844f,  -0.3034f);
            glVertex2f(-0.0862f,  -0.3318f);
            glVertex2f(-0.0826f,  -0.3736f);
            glVertex2f(-0.0724f,  -0.4038f);
            glVertex2f(-0.0592f,  -0.4322f);
            glVertex2f(-0.0414f,  -0.452f);
            glVertex2f(-0.0218f,  -0.4574f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(10,199,48);
           glVertex2f(-0.0066f,  -0.1782f);
            glVertex2f(-0.008f,  -0.1878f);
            glVertex2f(-0.0116f,  -0.2044f);
            glVertex2f(-0.0146f,  -0.2068f);
            glVertex2f(-0.008f,  -0.2076f);
            glVertex2f(-0.0018f,  -0.2052f);
            glVertex2f(0.0026f,  -0.2090f);
            glVertex2f(0.0076f,  -0.2114f);
            glVertex2f(0.0156f,  -0.2114f);
            glVertex2f(0.0258f,  -0.206f);
            glVertex2f(0.0186f,  -0.1996f);
            glVertex2f(0.0186f,  -0.1766f);
            glVertex2f(0.0134f,  -0.153f);
            glVertex2f(0.0098f,  -0.1482f);
            glVertex2f(-0.0008f,  -0.1546f);
            glVertex2f(-0.008f,  -0.157f);
            glVertex2f(-0.0094f,  -0.1624f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(-0.0192f,  -0.2952f);
            glVertex2f(-0.0254f,  -0.2234f);
            glVertex2f(-0.0516f,  -0.2842f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
             glVertex2f(0.0232f,  -0.2890f);
            glVertex2f(0.0356f,  -0.2210f);
            glVertex2f(0.0552f,  -0.2858f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
             glVertex2f(-0.0098f,  -0.319f);
            glVertex2f(0.0134f,  -0.319f);
            glVertex2f(0.0018f,  -0.2778f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(0.0076f,  -0.3554f);
            glVertex2f(0.024f,  -0.354f);
            glVertex2f(0.0244f,  -0.3698f);
            glVertex2f(0.0328f,  -0.3658f);
            glVertex2f(0.0342f,  -0.3508f);
            glVertex2f(0.0552f,  -0.335f);
            glVertex2f(0.0756f,  -0.3088f);
            glVertex2f(0.0644f,  -0.3532f);
            glVertex2f(0.0396f,  -0.388f);
            glVertex2f(0.0128f,  -0.3966f);
            glVertex2f(-0.0098f,  -0.3848f);
            glVertex2f(-0.0076f,  -0.372f);
            glVertex2f(-0.0222f,  -0.3666f);
            glVertex2f(-0.0266f,  -0.3894f);
            glVertex2f(-0.0454f,  -0.372f);
            glVertex2f(-0.0574f,  -0.3444f);
            glVertex2f(-0.0546f,  -0.3144f);
            glVertex2f(-0.0448f,  -0.3396f);
            glVertex2f(-0.0214f,  -0.3548f);
    glEnd();
}



void display(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);


    sky();
    stars();
    moon();
    tress();
    glTranslatef(0.5f, -0.6f, 1.0f);
    house();
    glPushMatrix();
    glTranslatef(0.54f, positionBatsH, 0.0f);
    bat1();
    bat5();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.63f, positionBatsM, 0.0f);

    bat2();
    bat4();
    bat6();
    bat7();
    bat8();
    glPopMatrix();

    glTranslatef(-.62f, 0.08f, 0.0f);
    grave1();
    grave2();
    grave3();
    grave4();

    glPushMatrix();
    glTranslatef(positionWitch, 0.57f, 0.0f);
    witch();
    glPopMatrix();
    glTranslatef(0.73f, -0.02f, 0.0f);
    pumpkin1();
    glTranslatef(-1.5f, 0.001f, 0.0f);
    pumpkin2();

	glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
	glutInitWindowSize (1200, 680);
	glutInitWindowPosition (10, 10);
	glutCreateWindow ("THE HALLOWEEN");
	glutDisplayFunc(display);
    glutTimerFunc(50, update, 0);
	glutMainLoop();
	return 0;
}
