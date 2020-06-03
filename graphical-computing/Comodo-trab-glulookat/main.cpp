#include <GL/glut.h>
#include <stdlib.h>

static int shoulder = 0, elbow = 0;

void init(void){
  glClearColor (0.0, 0.0, 0.0, 0.0);
}

void display(void){
  glClear (GL_COLOR_BUFFER_BIT);
  glPushMatrix();
  
  //origem
  glTranslatef(0.0, 0.0, 0.0);
  //glRotatef((GLfloat), left, 0.0, 1.0, 0.0);
  //glRotatef((GLfloat), up, 0.0, 0.0, 1.0);

  
  /* quarto */
  glColor3f(1.0, 0.0, .0);
  glPushMatrix();
  glTranslatef(0.0, 0.0, 0.0);
  glutWireCube(5.0);
  glPopMatrix();
  
  /* guarda roupa */
  glColor3f(0.0, 1.0, .0);
  glPushMatrix();
  glRotatef(90.0, 0.0, 1.0, 0.0);
  glTranslatef(2.21, -0.7, 0.0);
  glScalef(1.0, 5.9, 4.7);
  glutSolidCube(0.5);
  glPopMatrix();
  
  /* lampada */
  glColor3f(0.0, 1.0, .0);
  glPushMatrix();
  glTranslatef(0.0, 23.3, 0.0);
  glutSolidSphere(0.2, 16, 16);
  glPushMatrix();
  
  /* gaveta */
  glColor3f(1.0, 1.0, .0);
  glPushMatrix();
  glRotatef(90.0, 0.0, 1.0, 0.0);
  glTranslatef(2.21, -1.9, 0.0);
  glScalef(1.0, 1.2, 4.7);
  glutSolidCube(0.5);
  glPopMatrix();
  
  
  	glBegin(GL_LINES);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-200,0);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(200,0);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(0,-200);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(0,200);
	glEnd();

  /* origem volta para o sistema de coordenadas original */
  glPopMatrix();
  glutSwapBuffers();
}

void reshape (int w, int h){
  glViewport (0, 0, (GLsizei) w, (GLsizei) h);
  glMatrixMode (GL_PROJECTION);
  glLoadIdentity ();
  gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glTranslatef (0.0, 0.0, -5.0);
}

void keyboard (unsigned char key, int x, int y){
  switch (key) {
  case 's':
    shoulder = (shoulder + 5) % 360;
    glutPostRedisplay();
    break;
  case 'S':
    shoulder = (shoulder - 5) % 360;
    glutPostRedisplay();
    break;
  case 'e':
    elbow = (elbow + 5) % 360;
    glutPostRedisplay();
    break;
  case 'E':
    elbow = (elbow - 5) % 360;
    glutPostRedisplay();
    break;
  case 27:
    exit(0);
    break;
  default:
    break;
  }
}

int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize (500, 500); 
  glutInitWindowPosition (100, 100);
  glutCreateWindow (argv[0]);
  init ();
  glutDisplayFunc(display); 
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  glutMainLoop();
  return 0;
}
