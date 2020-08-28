#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

double th = 0;

void display()
{
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();

  glFlush();
  glutSwapBuffers();
}

void special(int key)
{
  if (key == GLUT_KEY_RIGHT)
    th+=5;
  else if (key == GLUT_KEY_LEFT)
    th+=-5;
}

int main(int argc, char* argv[])
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
  glutCreateWindow("Random!");
  glutDisplayFunc(display);
  glutSpecialFunc(special);
  glEnable(GL_DEPTH TEST); //Enables depth testing, checks z values before drawing
  glutMainLoop();
}
