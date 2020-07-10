#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include "image.h"
#define TEXTURA_DO_PLANO "davinci.rgb"

static int up = 0, left = 0, win= 0;

GLfloat angleCube = 0.0f;     // Rotational angle for cube [NEW]
int refreshMills = 15;        // refresh interval in milliseconds [NEW]

GLuint  textura_plano;


GLfloat parede_difusa[]    = { 1.0, 0.0, 0.0, 1.0 };
GLfloat parede_especular[] = { 1.0, 0.0, 1.0, 1.0 };
GLfloat parede_brilho[]    = { 50.0 };

GLfloat teto_difusa[]    = { 1.0, 0.0, 1.0, 1.0 };
GLfloat teto_especular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat teto_brilho[]    = { 40.0 };

GLfloat cor_luz[]        = { 1.0, 0.0, 1.0, 1.0};
GLfloat cor_luz_amb[]    = { 1.0, 1.0, 0.0, 1.0};
GLfloat posicao_luz[]    = { -3.0, 5.0, 4.0, 1.0};
GLfloat posicao_Bluz[]    = { 2.0, 6.0, 4.0, 1.0};

static int shoulder = 0, elbow = 0, elbow2 = 0;
void opendoor (int passo);
GLint movedoor=0;
GLint direction=1;


GLfloat planotext[4][2]={
  {0,0},
  {+1,0},
  {+1,+1},
  {0,+1}
};

void init(void){
    glShadeModel(GL_FLAT);
    
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, cor_luz);
  	glLightfv(GL_LIGHT0, GL_SPECULAR, cor_luz);
 	glLightfv(GL_LIGHT0, GL_AMBIENT, cor_luz_amb);
 	glLightfv(GL_LIGHT0, GL_POSITION, posicao_luz);
 	glLightfv(GL_LIGHT0, GL_POSITION, posicao_Bluz);

  
  	glEnable(GL_LIGHTING);
 	glEnable(GL_LIGHT0);


 	glEnable(GL_AUTO_NORMAL);
  	glEnable(GL_NORMALIZE);
    carregar_texturas();
    win = 1;
}

void display(void){
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
  glClear (GL_COLOR_BUFFER_BIT);
  glPushMatrix();
  
  glTexEnvf(GL_TEXTURE_ENV,GL_TEXTURE_ENV_MODE,GL_DECAL);
  glBindTexture(GL_TEXTURE_2D,textura_plano);
  
  
  /* origem posicionada da Sala*/
  glTranslatef (0.0, 0.0, 0.0);
  glRotatef ((GLfloat) left, 0.0, 1.0, 0.0);
  glRotatef ((GLfloat) up, 1.0, 0.0, 0.0);
  

  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, teto_difusa);
  glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, teto_especular);
  glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, teto_brilho);
  
  /* lampada */
  glColor3f(255, 255, 0);
  glPushMatrix();
  glRotatef(180.0, 0.0, 1.0, 0.0);
   glRotatef ((GLfloat) shoulder, 20.0, 120.0, 10.0);
  glTranslatef(0.0, 3.3, 0.0);
  glutSolidSphere(0.4, 25, 25);
  glPopMatrix();

  /* quadro da vinci - textura*/

  glEnable(GL_TEXTURE_2D);  
  glBegin(GL_QUADS);  
  glTexCoord2fv(planotext[0]);  glVertex3f(0.7,-1,-0.7);
  glTexCoord2fv(planotext[1]);  glVertex3f(-0.7,-1,-0.7);
  glTexCoord2fv(planotext[2]);  glVertex3f(-0.7,1,-0.7);
  glTexCoord2fv(planotext[3]);  glVertex3f(0.7,1,-0.7);
  glEnd();
  glTranslatef(-2, -1, 2);
  glDisable(GL_TEXTURE_2D);
  
  
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, parede_difusa);
  glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, parede_especular);
  glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, parede_brilho);
  
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
   glColor3f(7.0, 0.0, 0.0);
   glColor3f(0.0, 101.0, 0.0);
   glColor3f(0.0, 0.0, 168.0);
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
  
  
  /* barra 2 */
  glColor3f(1.0, 0.0, 1.0);
  glPushMatrix();
  glRotatef(90.0, 0.0, 1.0, 0.0);
  glTranslatef(3.45, -1.0, -2.05);
  glScalef(0.5, 4.8, 0.5);
  glutSolidCube(0.5);
  glPopMatrix();

   angleCube -= 0.15f;
  /* origem volta para o sistema de coordenadas original */
  glPopMatrix();
  glutSwapBuffers();
}
/* Called back when timer expired [NEW] */
void timer(int value) {
   glutPostRedisplay();      // Post re-paint request to activate display()
   glutTimerFunc(refreshMills, timer, 0); // next timer call milliseconds later
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
void opendoor (int passo){
	if(direction == 1){
		shoulder = (shoulder+1) % 360;
	}
	glutPostRedisplay();
	glutTimerFunc(10, opendoor,1);
}
void carregar_texturas(void){
  IMAGE *img;
  GLenum gluerr;

  /* textura do plano */
  glGenTextures(1, &textura_plano);
  glBindTexture(GL_TEXTURE_2D, textura_plano);
  
  if(!(img=ImageLoad(TEXTURA_DO_PLANO))) {
    fprintf(stderr,"Error reading a texture.\n");
    exit(-1);
  }

  gluerr=gluBuild2DMipmaps(GL_TEXTURE_2D, 3, 
			   img->sizeX, img->sizeY, 
			   GL_RGB, GL_UNSIGNED_BYTE, 
			   (GLvoid *)(img->data));
  if(gluerr){
    fprintf(stderr,"GLULib%s\n",gluErrorString(gluerr));
    exit(-1);
  }

  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_REPEAT);
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_REPEAT);
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_LINEAR);
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
  glTexEnvf(GL_TEXTURE_ENV,GL_TEXTURE_ENV_MODE,GL_DECAL);

}

int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize (500, 500); 
  glutInitWindowPosition (100, 100);
  glutCreateWindow (argv[0]);
  init ();
  glutDisplayFunc(display); 
  glutTimerFunc(10, opendoor, 1);
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
     glutMouseFunc(clickmouse);
  glutMainLoop();
   glutTimerFunc(0, timer, 0);     // First timer call immediately [NEW]
  return 0;
}


