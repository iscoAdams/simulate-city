#include <GL/glut.h>
using namespace std;

void building(float x, float y, float z) {
    int i;
    int j;

    // the actual back side of the building
    glColor3f(0.7, 0.7, 0.7);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z + 0.5);
    glVertex3f(x + 45, y, z + 0.5);
    glVertex3f(x + 45, y + 100, z + 0.5);
    glVertex3f(x, y + 100, z + 0.5);
    glEnd();

    // some windows for the back side
    glColor3f(0.8, 0.8, 0.8);
    for (j = 0; j < 8; j++) {
        glPushMatrix();
        glTranslatef(0, -12 * j, 0);
        for (i = 0; i < 4; i++) {
            glPushMatrix();
            glTranslatef(11 * i, 0, 0);
            glBegin(GL_POLYGON);
            glVertex3f(x + 2, y + 98, z);
            glVertex3f(x + 10, y + 98, z);
            glVertex3f(x + 10, y + 88, z);
            glVertex3f(x + 2, y + 88, z);
            glEnd();
            glPopMatrix();
        }
        glPopMatrix();
    }

    // some borders for the windows in the back side
    glColor3f(0, 0, 0);
    for (j = 0; j < 8; j++) {
        glPushMatrix();
        glTranslatef(0, -12 * j, 0);
        for (i = 0; i < 4; i++)
        {
            glPushMatrix();
            glTranslatef(11 * i, 0, 0);
            glBegin(GL_LINE_LOOP);
            glVertex3f(x + 2, y + 98, z);
            glVertex3f(x + 10, y + 98, z);
            glVertex3f(x + 10, y + 88, z);
            glVertex3f(x + 2, y + 88, z);
            glEnd();
            glPopMatrix();
        }
        glPopMatrix();
    }
    //........

        //the actual front side of the building
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z + 45 - 0.5);
    glVertex3f(x + 45, y, z + 45 - 0.5);
    glVertex3f(x + 45, y + 100, z + 45 - 0.5);
    glVertex3f(x, y + 100, z + 45 - 0.5);
    glEnd();

    // some windows for the front side
    glColor3f(0.8, 0.8, 0.8);
    for (j = 0; j < 8; j++) {
        glPushMatrix();
        glTranslatef(0, -12 * j, 0); // to draw the grid relative to the building, if we didn't translate to the next raw it will overdraw the same line/raw of the building.
        for (i = 0; i < 4; i++) {
            glPushMatrix();
            glTranslatef(11 * i, 0, 0);// to place the grid in the position relative to the building, if we din't do so we will overdraw the same line in each iteration.
            glBegin(GL_POLYGON);
            glVertex3f(x + 2, y + 98, z + 45);
            glVertex3f(x + 10, y + 98, z + 45);
            glVertex3f(x + 10, y + 88, z + 45);
            glVertex3f(x + 2, y + 88, z + 45);
            glEnd();
            glPopMatrix();
        }
        glPopMatrix();
    }

    //some borders for the windows in the front side
    glColor3f(0, 0, 0);
    for (j = 0; j < 8; j++) {
        glPushMatrix();
        glTranslatef(0, -12 * j, 0);
        for (i = 0; i < 4; i++) {
            glPushMatrix();
            glTranslatef(11 * i, 0, 0);
            glBegin(GL_LINE_LOOP);
            glVertex3f(x + 2, y + 98, z + 45);
            glVertex3f(x + 10, y + 98, z + 45);
            glVertex3f(x + 10, y + 88, z + 45);
            glVertex3f(x + 2, y + 88, z + 45);
            glEnd();
            glPopMatrix();
        }
        glPopMatrix();
    }
    //....
        //the actual left side of the building
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex3f(x + 0.5, y, z);
    glVertex3f(x + 0.5, y, z + 45);
    glVertex3f(x + 0.5, y + 100, z + 45);
    glVertex3f(x + 0.5, y + 100, z);
    glEnd();

    // some windows for left side
    glColor3f(0.8, 0.8, 0.8);
    for (j = 0; j < 8; j++) {
        glPushMatrix();
        glTranslatef(0, -12 * j, 0);
        for (i = 0; i < 4; i++) {
            glPushMatrix();
            glTranslatef(0, 0, 11 * i);
            glBegin(GL_POLYGON);
            glVertex3f(x, y + 98, z + 2);
            glVertex3f(x, y + 98, z + 10);
            glVertex3f(x, y + 88, z + 10);
            glVertex3f(x, y + 88, z + 2);
            glEnd();
            glPopMatrix();
        }
        glPopMatrix();
    }

    // borders of windows for left side
    glColor3f(0, 0, 0);
    for (j = 0; j < 8; j++) {
        glPushMatrix();
        glTranslatef(0, -12 * j, 0);
        for (i = 0; i < 4; i++) {
            glPushMatrix();
            glTranslatef(0, 0, 11 * i);
            glBegin(GL_LINE_LOOP);
            glVertex3f(x, y + 98, z + 2);
            glVertex3f(x, y + 98, z + 10);
            glVertex3f(x, y + 88, z + 10);
            glVertex3f(x, y + 88, z + 2);
            glEnd();
            glPopMatrix();
        }
        glPopMatrix();
    }

    //....
        //the actual right side of the building
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex3f(x + 45 - 0.5, y, z - 0.5);
    glVertex3f(x + 45 - 0.5, y, z + 45 - 0.5);
    glVertex3f(x + 45 - 0.5, y + 100, z + 45 - 0.5);
    glVertex3f(x + 45 - 0.5, y + 100, z - 0.5);
    glEnd();

    // some windows for right side
    glColor3f(0.8, 0.8, 0.8);
    for (j = 0; j < 8; j++) {
        glPushMatrix();
        glTranslatef(0, -12 * j, 0);
        for (i = 0; i < 4; i++) {
            glPushMatrix();
            glTranslatef(0, 0, 11 * i);
            glBegin(GL_POLYGON);
            glVertex3f(x + 45, y + 98, z + 2);
            glVertex3f(x + 45, y + 98, z + 10);
            glVertex3f(x + 45, y + 88, z + 10);
            glVertex3f(x + 45, y + 88, z + 2);
            glEnd();
            glPopMatrix();
        }
        glPopMatrix();
    }

    //borders of windows for right side
    glColor3f(0, 0, 0);
    for (j = 0; j < 8; j++) {
        glPushMatrix();
        glTranslatef(0, -12 * j, 0);
        for (i = 0; i < 4; i++) {
            glPushMatrix();
            glTranslatef(0, 0, 11 * i);
            glBegin(GL_LINE_LOOP);
            glVertex3f(x + 45, y + 98, z + 2);
            glVertex3f(x + 45, y + 98, z + 10);
            glVertex3f(x + 45, y + 88, z + 10);
            glVertex3f(x + 45, y + 88, z + 2);
            glEnd();
            glPopMatrix();
        }
        glPopMatrix();
    }

    //ground
    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z - 0.5);
    glVertex3f(x + 45, y, z - 0.5);
    glVertex3f(x + 45, y, z + 45 - 0.5);
    glVertex3f(x, y, z + 45 - 0.5);
    glEnd();


    //roof
    glBegin(GL_POLYGON);
    glVertex3f(x, y + 100, z);
    glVertex3f(x + 45, y + 100, z);
    glVertex3f(x + 45, y + 100, z + 45);
    glVertex3f(x, y + 100, z + 45);
    glEnd();
}

void house(float x, float y, float z) {

    // face
    glColor3f(0.01, 0.05, 0.3);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z);
    glVertex3f(x, y, z + 30);
    glVertex3f(x, y + 15, z + 30);
    glVertex3f(x, y + 15, z);
    glEnd();

    // back
    glColor3f(0.01, 0.05, 0.3);
    glBegin(GL_POLYGON);
    glVertex3f(x - 15, y, z);
    glVertex3f(x - 15, y + 15, z);
    glVertex3f(x - 15, y + 15, z + 30);
    glVertex3f(x - 15, y, z + 30);
    glEnd();

    // left
    glColor3f(0.01, 0.05, 0.3);
    glBegin(GL_POLYGON);
    glVertex3f(x, y, z + 30);
    glVertex3f(x - 15, y, z + 30);
    glVertex3f(x - 15, y + 15, z + 30);
    glVertex3f(x, y + 15, z + 30);
    glEnd();

    // right
    glColor3f(0.01, 0.05, 0.3);
    glBegin(GL_POLYGON);
    glVertex3f(x - 15, y, z);
    glVertex3f(x - 15, y + 15, z);
    glVertex3f(x, y + 15, z);
    glVertex3f(x, y, z);
    glEnd();

    // glColor3f(0.01, 0.05, 1.5);
    // glBegin(GL_POLYGON);
    // glVertex3f(x - 15, y, z);
    // glVertex3f(x, y, z);
    // glVertex3f(x, y, z + 30);
    // glVertex3f(x - 15, y, z + 30);
    // glEnd();

    // right roof
    glColor3f(0.51, 0.015, 0.008);
    glBegin(GL_POLYGON);
    glVertex3f(x + 1.69 * 3, y + 3.5 * 3, z);
    glVertex3f(x - 2.5 * 3, y + 7.5 * 3, z);
    glVertex3f(x - 2.5 * 3, y + 7.5 * 3, z + 30);
    glVertex3f(x + 1.69 * 3, y + 3.5 * 3, z + 30);
    glEnd();

    // left roof
    glColor3f(0.51, 0.015, 0.008);
    glBegin(GL_POLYGON);
    glVertex3f(x - 6.69 * 3, y + 3.5 * 3, z);
    glVertex3f(x - 6.69 * 3, y + 3.5 * 3, z + 30);
    glVertex3f(x - 2.5 * 3, y + 7.5 * 3, z + 30);
    glVertex3f(x - 2.5 * 3, y + 7.5 * 3, z);
    glEnd();

    //* some triangle for front roof
    // glColor3f(0.1, 0.015, 0.13);
    // glBegin(GL_POLYGON);
    // glVertex3f(x, y + 15, z);
    // glVertex3f(x - 15, y + 5, z);
    // glVertex3f(x - 2.5 * 3, y + 7.5 * 3, z);
    // glEnd();

    //* some triangle for back roof
    // glColor3f(0.1, 0.015, 0.13);
    // glBegin(GL_POLYGON);
    // glVertex3f(x, y + 15, z + 30);
    // glVertex3f(x - 15, y + 15, z + 30);
    // glVertex3f(x - 2.5 * 3, y + 7.5 * 3, z + 30);
    // glEnd();
}

void scene() {
    //rendering some houses
    house(120, 0.1, 50);
    house(120, 0.1, 90);
    house(160, 0.1, 90);
    house(80, 0.1, 90);
    house(160, 0.1, 50);
    house(80, 0.1, 50);
    house(-130, 0.1, 120);
    house(-130, 0.1, 160);
    house(-90, 0.1, 120);
    house(-60, 0.1, 120);
    house(-90, 0.1, 160);
    house(-60, 0.1, 160);


    //rendering some buildings
    building(150, 0, -150);
    building(80, 0, -90);
    building(150, 0, -90);
    building(150, 0, -30);
    building(-150, 0, -30);
    building(-150, 0, -110);
    building(-150, 0, -180);
}

void init(void) { //initialize some openGL stuff we will use in our program (properties, data-structures like matrices, etc.)
    glClearColor(0.0, 0.0, 0.0, 0.0); // Set display-window or to be more clear the frame buffer clear-color to black
    glEnable(GL_DEPTH_TEST);    // Enable depth buffer for 3D graphics
    glMatrixMode(GL_MODELVIEW); //  telling openGL that we are going to use the model-view matrix 
}
void draw_star(GLfloat x, GLfloat y) {
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(x, y);
    glVertex2f(x + 1.5, y - 4);
    glVertex2f(x + 6.5, y - 5.5);
    glVertex2f(x + 2.5, y - 9);
    glVertex2f(x + 4.5, y - 14);
    glVertex2f(x, y - 11.5);
    glVertex2f(x - 4.5, y - 14);
    glVertex2f(x - 3, y - 9);
    glVertex2f(x - 6.5, y - 5.5);
    glVertex2f(x - 1.5, y - 5);
    glVertex2f(x, y);
    glEnd();
}
void display(void) { //display callback function passed to glutDisplayFunc()
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color & depth buffers with current clearing color

    /* draw the floor */
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.6, 0.4);
    glVertex3f(-200.0, 0.0, -200.0);
    glColor3f(0.8, 0.6, 0.4);
    glVertex3f(-200.0, 0.0, 200.0);
    glColor3f(0.8, 0.6, 0.4);
    glVertex3f(200.0, 0.0, 200.0);
    glColor3f(0.8, 0.6, 0.4);
    glVertex3f(200.0, 0.0, -200.0);
    glEnd();
    glFlush(); // Process all previous commands immediately (execute any pinding commands in the graphic buffer/pipline)    

    //some stars 
    draw_star(20, 240);
    draw_star(180, 220);
    draw_star(-30, 280);
    draw_star(190, 280);
    draw_star(100, 220);
    draw_star(-230, 250);
    draw_star(-190, 210);
    draw_star(-88, 260);
    draw_star(88, 270);
    draw_star(-170, 280);


    //some trees
    glColor3f(0.015, 0.3, 0.13);
    glPushMatrix();
    glTranslatef(-15, 24, 50); // to draw the tree relative to (on the) the floor
    glScalef(1.1, 2.3, 0.8); // to expand the circle
    glutSolidSphere(10, 15, 6);  // to draw the circle/sphere with radius 10, 15 slices/vertical segmants, 6 stacks/horizontal segmants 
    glFlush();
    glPopMatrix();

    glColor3f(0.015, 0.3, 0.13);
    glPushMatrix();
    glTranslatef(-15, 24, -40);
    glScalef(1.1, 2.3, 0.8);
    glutSolidSphere(10, 15, 4);
    glFlush();
    glPopMatrix();

    glColor3f(0.015, 0.3, 0.13);
    glPushMatrix();
    glTranslatef(-15, 24, 20);
    glScalef(1.1, 2.3, 0.8);
    glutSolidSphere(10, 15, 4);
    glFlush();
    glPopMatrix();

    glColor3f(0.015, 0.3, 0.13);
    glPushMatrix();
    glTranslatef(-15, 24, -10);
    glScalef(1.1, 2.3, 0.8);
    glutSolidSphere(10, 15, 4);
    glFlush();
    glPopMatrix();

    glColor3f(0.015, 0.3, 0.13);
    glPushMatrix();
    glTranslatef(-15, 24, -80);
    glScalef(1.1, 2.3, 0.8);
    glutSolidSphere(10, 15, 4);
    glFlush();
    glPopMatrix();

    glColor3f(0.015, 0.3, 0.13);
    glPushMatrix();
    glTranslatef(-15, 24, -120);
    glScalef(1.1, 2.3, 0.8);
    glutSolidSphere(10, 15, 4);
    glFlush();
    glPopMatrix();

    glColor3f(0.015, 0.3, 0.13);
    glPushMatrix();
    glTranslatef(-15, 24, -160);
    glScalef(1.1, 2.3, 0.8);
    glutSolidSphere(10, 15, 4);
    glFlush();
    glPopMatrix();
    // ....

    //the black middle road
    glBegin(GL_QUADS); //a polygon with 4 vertices/sides
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(0, 0.01, -200); /* road */
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(0, 0.01, 200);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(18, 0.01, 200);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(18, 0.01, -200);
    glEnd();

    //the white middle road
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(8.5, 0.02, -200); /* road */
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(8.5, 0.02, 200);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(9.5, 0.02, 200);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(9.5, 0.02, -200);
    glEnd();

    //middle road of the right side
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(44, 0.01, -200); /* road */
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(44, 0.01, 160);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(54, 0.01, 160);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(54, 0.01, -200);
    glEnd();

    //back road of the right side
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(54, 0.01, -180); /* road */
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(54, 0.01, -160);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(200, 0.01, -160);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(200, 0.01, -180);
    glEnd();

    //along the right side
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(18, 0.01, 160); /* road */
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(18, 0.01, 170);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(200, 0.01, 170);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(200, 0.01, 160);
    glEnd();

    //along of the left side
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(-200, 0.01, 90); /* road */
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(-200, 0.01, 100);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(0, 0.01, 100);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(0, 0.01, 90);
    glEnd();

    //middle left side 
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(-90, 0.01, -200); /* road */
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(-90, 0.01, 90);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(-80, 0.01, 90);
    glColor3f(0.2, 0.2, 0.2);
    glVertex3f(-80, 0.01, -200);
    glEnd();

    scene();
    glFlush();
    glutSwapBuffers(); //swap between display/double buffers created previously using (GLUT_DOUBLE), to speed up the rendering process
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'a': //left
    case 'A':
        glTranslatef(5.0, 0.0, 0.0);
        break;
    case 'd': //right
    case 'D':
        glTranslatef(-5.0, 0.0, 0.0);
        break;
    case 'w': //forward
    case 'W':
        glTranslatef(0.0, 0.0, 5.0);
        break;
    case 's': //backward
    case 'S':
        glTranslatef(0.0, 0.0, -5.0);
        break;
    case 'q': //up
    case 'Q':
        glRotatef(-2, 1.0, 0.0, 0.0);
        break;
    case 'e': //down
    case 'E':
        glRotatef(2, 0.0, 1.0, 0.0);
        break;
    case 'r': //reset
    case 'R':
        glLoadIdentity();
        gluPerspective(80.0, 1.0, 1.0, 600.0);
        glTranslatef(0.0, -15.0, -320.0);
        break;
    case 'z': //escape
    case 'Z':
        exit(0);
        break;
    default:
        break;
    }
    display();
}
void mousekey(int button, int state, int x, int y) {
    switch (button) {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN) {
            glTranslatef(0.0, 5.0, 0.0);
        }
        break;
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN) {
            glTranslatef(0.0, -5.0, 0.0);
        }
        break;
    default:
        break;
    }
    display();
}

void resize(int width, int height) { // a call-back function passed to glutReshapeFunc(), called at the first render and when the window is resized.
    glLoadIdentity(); // reset the current matrix to identity matrix
    gluPerspective(80.0, width / height, 1.0, 600.0); // to make the view angle relative to the window size, used to set the perspective projection matrix for a virtual camera
    glTranslatef(0.0, -15.0, -320.0); // to move the camera to the position we want
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1100, 900);
    glutInitWindowPosition(100, 10);
    glutCreateWindow("3D map");
    init();

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mousekey);
    glutReshapeFunc(resize);
    glutMainLoop();
}