#include <glut.h>

void
reshape(int w, int h)
{
         
    glMatrixMode(GL_PROJECTION);  /* Start modifying the projection matrix. */
    glLoadIdentity();             /* Reset project matrix. */
}

void
display(void)
{
    int w = 500, h = 500;
    glClear(GL_COLOR_BUFFER_BIT);
    glViewport(w / 2, h / 2, w / 2, h / 2);
    glLoadIdentity();
    glOrtho(0, w, 0, h, -1, 1);
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  /* blue */
    glVertex2i(150, 150);
    glColor3f(0.0, 1.0, 0.0);  /* green */
    glVertex2i(150, 300);
    glColor3f(1.0, 0.0, 0.0);  /* red */
    glVertex2i(300, 300);
    glVertex2i(300, 150);
    glEnd();
    glViewport(0, h / 2, w / 2, h / 2);
    glLoadIdentity();
    glOrtho(0, w, 0, h, -1, 1);
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  /* blue */
    glVertex2i(150, 150);
    glColor3f(0.0, 1.0, 0.0);  /* green */
    glVertex2i(150, 300);
    glColor3f(1.0, 0.0, 0.0);  /* red */
    glVertex2i(300, 300);
    glVertex2i(300, 150);
    glEnd();
    glViewport(0, 0, w / 2, h / 2);
    glLoadIdentity();
    glOrtho(0, w, 0, h, -1, 1);
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  /* blue */
    glVertex2i(150, 150);
    glColor3f(0.0, 1.0, 0.0);  /* green */
    glVertex2i(150, 300);
    glColor3f(1.0, 0.0, 0.0);  /* red */
    glVertex2i(300, 300);
    glVertex2i(300, 150);
    glEnd();
    glViewport(w / 2, 0, w / 2, h / 2);
    glLoadIdentity();
    glOrtho(0, w, 0, h, -1, 1);
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  /* blue */
    glVertex2i(150, 150);
    glColor3f(0.0, 1.0, 0.0);  /* green */
    glVertex2i(150, 300);
    glColor3f(1.0, 0.0, 0.0);  /* red */
    glVertex2i(300, 300);
    glVertex2i(300, 150);
    glEnd();
    glFlush();
}

int
main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutCreateWindow("multiple viewports");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}