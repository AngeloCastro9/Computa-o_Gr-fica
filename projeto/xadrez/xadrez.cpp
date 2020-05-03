// OpenGL.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include<GLFW/glut.h>
#include<Windows.h>
#include<time.h> //necessário p/ função time()

typedef struct {
	float x;
	float y;
} wcPt2D;

wcPt2D dataPts[6];

void init(void) {
	
	glClearColor(1.0, 1.0, 1.0, 0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 1700, 0, 800);
}

void lineSegment(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	GLubyte fillPattern[] = {
		0x00, 0x1f, 0xff, 0xff,
		0x00, 0x1f, 0xff, 0xff,
		0x00, 0x1f, 0xff, 0xff,
		0x00, 0x1f, 0xff, 0xff,
		0x00, 0x1f, 0xff, 0xff,
		0x00, 0x1f, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff,
		0x00, 0x1f, 0xff, 0xff,
		0x00, 0x1f, 0xff, 0xff,
		0x00, 0x1f, 0xff, 0xff,
		0x00, 0x1f, 0xff, 0xff,
		0x00, 0x1f, 0xff, 0xff,
		0x00, 0x1f, 0xff, 0xff,
	};
	
	glPolygonStipple(fillPattern);
	glEnable(GL_POLYGON_STIPPLE);
	
	glColor3f(0.0, 0.0, 0.0);
	glRecti(600,50,0,539);
	
	glDisable(GL_POLYGON_STIPPLE);
	glFlush();
}

int main(int argc, char** argv)
{

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(400, 300);
	glutCreateWindow("Capitulo 5");
	init();
	glutDisplayFunc(lineSegment);
	glutMainLoop();

	return 0;
}