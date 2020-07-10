#include <GL/glut.h>
#include <stdlib.h>

static int up = 0, left = 0, win= 0;

void init(void){
  glClearColor (0.0, 0.0, 0.0, 0.0);
  win = 1;
}

void display(void){
  glClear (GL_COLOR_BUFFER_BIT);
  glPushMatrix();
  
  //origem
  glTranslatef(0.0, 0.0, 0.0);
  glRotatef((GLfloat) left, 0.0, 1.0, 0.0);
  glRotatef((GLfloat) up, 0.0, 0.0, 1.0);

  
  /* quarto */
  glColor3f(0.0, 0.0, 1.0);
  glPushMatrix();
  glTranslatef(0.0, 0.0, 0.0);
  glutSolidCube(5.0);
  glPopMatrix();
  
  /* pe 2 */
  glColor3f(1.0, 0.0, .0);
  glPushMatrix();
  glRotatef(90.0, 0.0, 1.0, 0.0);
  glTranslatef(1.3, -2, 1.45);
  glScalef(1.0, 0.4, 1.0);
  glutSolidCube(0.5);
  glPopMatrix();
  
  /* pe 4 */
  glColor3f(1.0, 1.0, .0);
  glPushMatrix();
  glRotatef(90.0, 0.0, 1.0, 0.0);
  glTranslatef(3.21, -2.2, 1.45);
  glScalef(1.0, 0.4, 1.0);
  glutSolidCube(0.5);
  glPopMatrix();
  
  
  /* cama */
  glColor3f(0.0, 1.0, .0);
  glPushMatrix();
  glRotatef(90.0, 0.0, 1.0, 0.0);
  glTranslatef(2.21, -1.5, 0.0);
  glScalef(4.0, 1.9, 7.7);
  glutSolidCube(0.5);
  glPopMatrix();
  
  /* travesseiro */
  glColor3f(1.0, 1.0, 1.0);
  glPushMatrix();
  glRotatef(90.0, 0.0, 1.0, 0.0);
  glTranslatef(2.31, -1.0, -1.6);
  glScalef(3.5, 0.5, 1.7);
  glutSolidCube(0.5);
  glPopMatrix();
  
  /* barra 1 */
  glColor3f(1.0, 0.0, 1.0);
  glPushMatrix();
  glRotatef(90.0, 0.0, 1.0, 0.0);
  glTranslatef(1.45, -1.0, -2.05);
  glScalef(0.5, 4.8, 0.5);
  glutSolidCube(0.5);
  glPopMatrix();
  
  /* lampada */
  glColor3f(0.3, 0.0, 0.6);
  glPushMatrix();
  glTranslatef(0.0, 3.3, 0.0);
  glutSolidSphere(0.2, 16, 16);
  glPopMatrix();
  
  /* barra 2 */
  glColor3f(1.0, 0.0, 1.0);
  glPushMatrix();
  glRotatef(90.0, 0.0, 1.0, 0.0);
  glTranslatef(3.45, -1.0, -2.05);
  glScalef(0.5, 4.8, 0.5);
  glutSolidCube(0.5);
  glPopMatrix();
  

  /* origem volta para o sistema de coordenadas original */
  glPopMatrix();
  glutSwapBuffers();
}

void clickmouse(int button, int state, int x, int y){
	switch(button){	
		case GLUT_LEFT_BUTTON:
			if(state == GLUT_DOWN) {
				win-=1;
				gluOrtho2D (-win, win, -win, win) ;
				glutPostRedisplay();
			}
		break;
	
		case GLUT_RIGHT_BUTTON:
			if (state==GLUT_DOWN){
				win+=1;
				gluOrtho2D (-win, win, -win, win);
				glutPostRedisplay();
			}	
		break;		
	}
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
    left = (left + 5) % 360;
    glutPostRedisplay();
    break;
  case 'S':
    left = (left - 5) % 360;
    glutPostRedisplay();
    break;
  case 'e':
    up = (up + 5) % 360;
    glutPostRedisplay();
    break;
  case 'E':
    up = (up - 5) % 360;
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
     glutMouseFunc(clickmouse);
  glutMainLoop();
  return 0;
}
