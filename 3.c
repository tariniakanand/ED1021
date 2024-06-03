


#include <glut.h>

void
reshape(int w, int h)
{
   

    glViewport(0, 0, w, h);       /* Establish viewing area to cover entire window. */
    glMatrixMode(GL_PROJECTION);  /* Start modifying the projection matrix. */
    glLoadIdentity();             /* Reset project matrix. */
    glOrtho(0, w, 0, h, -1, 1);   /* Map abstract coords directly to window coords. */
}

void
display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 1.0);  /* blue */
    glVertex2i(0, 0);
    glColor3f(0.0, 1.0, 0.0);  /* green */
    glVertex2i(100, 0);
    glColor3f(1.0, 0.0, 0.0);  /* red */
    glVertex2i(0, 100);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2i(500, 500);
    glVertex2i(250, 500);
    glVertex2i(250, 250);
    glVertex2i(500, 250);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2i(500, 0);
    glVertex2i(500, 100);
    glVertex2i(400, 100);
    glVertex2i(300, 75);
    glVertex2i(400, 0);
    glEnd();
    glFlush(); 
}

int
main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Multiple shapes");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;             
}