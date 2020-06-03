//Prof. Marco Antonio, abr/2020, ST765 FT UNICAMP

#include<stdlib.h>
#include<GL/glut.h>


static int rodatudo = 0;

void init(void){
  glClearColor (0.0, 0.0, 0.0, 0.0);
}

void displayGangorra(void){
//Gangorra
  glPushMatrix();
  glTranslatef (1.0, 0.9, 8.0);
  glScalef (0.1, 1.8, 0.1);
  glutWireCube (1.0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef (1.6, 0.9, 8.0);
  glScalef (0.1, 1.8, 0.1);
  glutWireCube (1.0);
  glPopMatrix();
 
  glPushMatrix();
  glTranslatef (1.2, 0.9, 4.0);
  glScalef (0.1, 1.8, 0.1);
  glutWireCube (1.0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef (1.8, 0.9, 4.0);
  glScalef (0.1, 1.8, 0.1);
  glutWireCube (1.0);
  glPopMatrix();
}

void display(void){
  glClear (GL_COLOR_BUFFER_BIT);
  glPushMatrix();

  glRotatef ((GLfloat) rodatudo, 0.0, 1.0, 0.0);
  
  /* chao */
  glPushMatrix();
  glScalef (30.0, 1.0, 20.0);
  glutWireCube (1.0);
  glPopMatrix();
   
  displayGangorra();
   
//BASE DO BRINQUEDO
  /* Coluna1a*/ 
  glPushMatrix();
  glTranslatef (9.0, 0.9, 8.0);
  glScalef (0.1, 1.8, 0.1);
  glutWireCube (1.0);
  glPopMatrix();

  /* Coluna1b*/ 
  glPushMatrix();
  glTranslatef (9.6, 0.9, 8.0);
  glScalef (0.1, 1.8, 0.1);
  glutWireCube (1.0);
  glPopMatrix();

  /* Coluna2a*/ 
  glPushMatrix();
  glTranslatef (9.0, 0.9, 6.0);
  glScalef (0.1, 1.8, 0.1);
  glutWireCube (1.0);
  glPopMatrix();

  /* Coluna2b*/ 
  glPushMatrix();
  glTranslatef (9.6, 0.9, 6.0);
  glScalef (0.1, 1.8, 0.1);
  glutWireCube (1.0);
  glPopMatrix();

//"ESCADA" das colunas

  /* Escada1a*/ 
  glPushMatrix();
  glTranslatef (9.3, 0.6, 8.0);
  glScalef (0.6, 0.1, 0.1);
  glutWireCube (1.0);
  glPopMatrix();

/* Escada1b*/ 
  glPushMatrix();
  glTranslatef (9.3, 0.6, 6.0);
  glScalef (0.6, 0.1, 0.1);
  glutWireCube (1.0);
  glPopMatrix();


//PONTE ou "ESCADA DEITADA" 

  /* haste3a*/ 
  glPushMatrix();
  glTranslatef (9.0, 1.9, 7.0);
  glScalef (0.1, 0.1, 2.1);
  glutWireCube (1.0);
  glPopMatrix();

  /* haste3b*/ 
  glPushMatrix();
  glTranslatef (9.6, 1.9, 7.0);
  glScalef (0.1, 0.1, 2.1);
  glutWireCube (1.0);
  glPopMatrix();


  /* escada4a*/ 
  glPushMatrix();
  glTranslatef (9.3, 1.9, 7.9);
  glScalef (0.6, 0.1, 0.1);
  glutWireCube (1.0);
  glPopMatrix();

  /* escada4b*/ 
  glPushMatrix();
  glTranslatef (9.3, 1.9, 6.7);
  glScalef (0.6, 0.1, 0.1);
  glutWireCube (1.0);
  glPopMatrix();

  /* escada4c*/ 
  glPushMatrix();
  glTranslatef (9.3, 1.9, 7.3);
  glScalef (0.6, 0.1, 0.1);
  glutWireCube (1.0);
  glPopMatrix();

  /* escada4d*/ 
  glPushMatrix();
  glTranslatef (9.3, 1.9, 6.1);
  glScalef (0.6, 0.1, 0.1);
  glutWireCube (1.0);
  glPopMatrix();

  glPopMatrix();
  glutSwapBuffers();
}




void reshape (int w, int h){
  glViewport (0, 0, (GLsizei) w, (GLsizei) h);
  glMatrixMode (GL_PROJECTION);
  glLoadIdentity ();
  gluPerspective(55.0, (GLfloat) w/(GLfloat) h, 1.0, 60.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glTranslatef (0.0, -8.0, -30.0);
}
void keyboard(unsigned char key, int x, int y){
  switch (key) {
 case 'r':
    rodatudo = (rodatudo + 5) % 360;
    glutPostRedisplay();
    break;
  case 'R':
    rodatudo = (rodatudo - 5) % 360;
    glutPostRedisplay();
    break;
   case 27:                                         // tecla Esc (encerra o programa)
	exit(0);
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
