#include<GL/glut.h>
void display (){
	glClearColor (0.0,1.0,1.0,0.0);
	glClear (GL_COLOR_BUFFER_BIT);
	glFlush();
}
void main (int argc, char **argv){
	glutInit (&argc, argv);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow ("Example1");
	glutDisplayFunc (display); 
	glutMainLoop (); 
}