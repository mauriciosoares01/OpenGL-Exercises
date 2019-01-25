/*
*	Exercícios OpenGL
*	Autor: Maurício Silva Soares
*	
*	AS JANELAS ABRE UMA EM CIMA DA OUTRA !
*/

#include <stdlib.h>
#include <gl/glut.h>

void Inicializa(void){
	glClearColor(0.0f,1.0f,0.0f,0.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-20.0,20.0,-20.0,20.0);
}

void Inicializa2(void){
	glClearColor(1.0f,1.0f,0.0f,0.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-20.0,20.0,-20.0,20.0);
}

void Inicializa3(void){
	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-20.0,20.0,-20.0,20.0);
}


void Desenha1(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
		glVertex3f(-5.0, 7.0, 0);
		glVertex3f(0.0, 2.0, 0);
		glVertex3f(5.0, 7.0, 0);
		glVertex3f(0.0, 12.0, 0);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex3f(-5.0, -7.0, 0);
		glVertex3f(0.0, -2.0, 0);
		glVertex3f(5.0, -7.0, 0);
		glVertex3f(0.0, -12.0, 0);	
	glEnd();
	
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
		glVertex3f(-12.0, 0.0, 0);
		glVertex3f(-7.0, -5.0, 0);
		glVertex3f(-2.0, 0.0, 0);
		glVertex3f(-7.0, 5.0, 0);	
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex3f(12.0, 0.0, 0);
		glVertex3f(7.0, -5.0, 0);
		glVertex3f(2.0, 0.0, 0);
		glVertex3f(7.0, 5.0, 0);	
	glEnd();
	
	glFlush();
}

void Desenha2(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex3f(-0.5, 1, 0);
		glVertex3f(0.5, 1, 0);
		glVertex3f(0.5, 20.0, 0);
		glVertex3f(-0.5, 20.0, 0);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex3f(-0.5, -1, 0);
		glVertex3f(0.5, -1, 0);
		glVertex3f(0.5, -20.0, 0);
		glVertex3f(-0.5, -20.0, 0);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex3f(-20.0, -0.5, 0);
		glVertex3f(-1, -0.5, 0);
		glVertex3f(-1, 0.5, 0);
		glVertex3f(-20.0, 0.5, 0);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex3f(20.0, -0.5, 0);
		glVertex3f(1, -0.5, 0);
		glVertex3f(1, 0.5, 0);
		glVertex3f(20.0, 0.5, 0);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex3f(-10.0, 9, 0);
		glVertex3f(10, 9, 0);
		glVertex3f(10, 10, 0);
		glVertex3f(-10.0, 10, 0);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex3f(-10.0, -9, 0);
		glVertex3f(10, -9, 0);
		glVertex3f(10, -10, 0);
		glVertex3f(-10.0, -10, 0);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex3f(-10.0, -10, 0);
		glVertex3f(-9, -10, 0);
		glVertex3f(-9, 10, 0);
		glVertex3f(-10.0, 10, 0);
	glEnd();
	
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex3f(10.0, -10, 0);
		glVertex3f(9, -10, 0);
		glVertex3f(9, 10, 0);
		glVertex3f(10.0, 10, 0);
	glEnd();
	
	glFlush();
}

void Desenha3(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glLineWidth(4.0f);
	glBegin(GL_LINE_STRIP);
		glColor3f(1.0,0.0,0.0);
		glVertex3f(-10,-10,0);
		glVertex3f(-3,0,0);
		glColor3f(0.0,1.0,0.0);
		glVertex3f(0,10,0);
		glVertex3f(3,0,0);
		glColor3f(0.0,0.0,1.0);
		glVertex3f(10,-10,0);
		glVertex3f(0,-6,0);
		glColor3f(1.0,0.0,0.0);
		glVertex3f(-10,-10,0);
	glEnd();
	
	glFlush();
}

int main(void){
	
	//janela Exercício1
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Exercício1");
	Inicializa();
	glutDisplayFunc(Desenha1);
	
	//janela Exercício2
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Exercício2");
	Inicializa2();
	glutDisplayFunc(Desenha2);
	
	//janela Exercício3
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Exercício3");
	Inicializa3();
	glutDisplayFunc(Desenha3);
	
	
	glutMainLoop();
}

