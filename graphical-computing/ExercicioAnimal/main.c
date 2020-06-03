// CICERO ROBERTO NOBRE DE OLIVEIRA   RA:214581

#include <glut.h>
#include <stdlib.h>
#include <stdio.h>

GLfloat r, g, b;

void init(void);
void display(void);
void keyboard(unsigned char key, int x, int y);
void mouse(int button, int state, int x, int y);

float px1[25];
float py1[25];
float px2[25];
float py2[25];
int i=0, aux, aux2;

int main(int argc, char** argv){
  FILE *arq;
  char linha[100];
  char *result;
  
  arq = fopen("coord.txt", "r");
  if (arq == NULL){
  	printf("Problemas na Abertura do Arquivo\n");
  	return;
  }
  
  while((fscanf(arq,"%f,%f %f,%f\n",&px1[i],&py1[i],&px2[i],&py2[i]))!=EOF){
  		i++;
	}
  	fclose(arq);
  	
  glutInit(&argc, argv);                              
  glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);           
  glutInitWindowSize (400, 300);                          
  glutInitWindowPosition (100, 100);                      
  glutCreateWindow ("Desenhando uma galinha");              
  init();
  glutDisplayFunc(display);                               
  glutKeyboardFunc(keyboard); 
  glutMouseFunc(mouse);					                  
  glutMainLoop();                                         
  return 0;
}

void init(void){
  glClearColor(1.0, 1.0, 1.0, 1.0);    
  glOrtho (0, 256, 0, 256, -1 ,1);     
} 

void display(void){
  glClear(GL_COLOR_BUFFER_BIT);      
  glColor3f (0.0, 0.0, 0.0);      
  glBegin(GL_LINES);
  aux=0;
  while(aux!=15){	
  	glVertex2i((px1[aux]*2)+100,py1[aux]*2);  glVertex2i((px2[aux]*2)+100,py2[aux]*2);
  	
  	aux++;
  }
  
  glEnd();
  
  //TIVE PROBLEMAS PARA A RENDERIZACAO CORRETA UTILIZANDO O GL_POLYGON :(
  aux=0;
  while(aux!=15){														
  	glPolygonMode(GL_BACK, GL_FILL);
  	glColor3f(r, g, b);
  	glBegin(GL_POLYGON);												
    glVertex2i(15*2,1*2);  glVertex2i(25*2,1*2);
  	glVertex2i(px1[aux]*2,py1[aux]*2);  glVertex2i(px2[aux]*2,py2[aux]*2);
  	glEnd();
  	
  	aux++;
  }

  glFlush();
  glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y){
  switch (key) {
  case 27:                                      
	exit(0);
	break;
  }
}

void mouse(int button, int state, int x, int y){
  switch (button) {
  case GLUT_LEFT_BUTTON:
	if (state == GLUT_DOWN) {
	  r=(GLfloat)rand()/(RAND_MAX+1.0);
	  g=(GLfloat)rand()/(RAND_MAX+1.0);
	  b=(GLfloat)rand()/(RAND_MAX+1.0);
	  glutPostRedisplay();
	}
	break;
  }
}
