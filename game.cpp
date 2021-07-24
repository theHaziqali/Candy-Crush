//============================================================================
// Name        : .cpp
// Author      : Sibt ul Hussain
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Centipede...
//============================================================================

#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include"Coordinates.h"
#include<cmath> // for basic math functions such as cos, sin, sqrt

using namespace std;
Mainmenu obj;
Coordinates axis;
Food f;
Profile p;
// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


/*
 * Main Canvas drawing function.
 * */
 
/*void operations(){
Coordinates obj;
obj.setxaxsis(300);
obj.setyaxsis(300);

//obj.getxaxsis();

}*/

void GameDisplay()/**/{
	//cout<<"hjkm;"<<endl;

	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.
	
	glClearColor(.6/*Red Component*/, .80,	//148.0/255/*Green Component*/,
			0.7/*Blue Component*/, 10 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Fire Gun
	//glutPostRedisplay();
	//Mushroom
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//int **axis0=axis.getArray();
GameBoard j1;

if(obj.getplay()=='\0'){
	DrawString( 300, 500, "Press P to play game", colors[BLUE]);
	DrawString( 300, 400, "Press H to for help", colors[BLUE]);
	DrawString( 300, 300, "Press Esc to exit", colors[BLUE]);
	//DrawSquare( 400 , 500 ,40,colors[RED]);
//	DrawSquare( 400 , 300 ,40,colors[PINK]);

	//cin>>p;
	}

if((obj.getplay()=='g')){
	DrawString(400,600,"Paused",colors[BLUE]);
	DrawString(400,400,"To continue press P",colors[BLUE]);

}

if((obj.getplay()=='P')|| (obj.getplay()=='p'))
{if(f.getLife()>0){
	//if(f.getMoves()>0)
	{
j1.display();
	//j1.score_n_etc();
	//cout<<"food"<<endl;
	f.drawfood();
	
	f.display_score_n_etc();
	if(f.getMoves()==0){
		f.setLife(f.getLife()-1);
f.setNscore(0);}
	}
	if(f.getNscore()>50){
		//f.levelcomplete();
		obj.setplay('\0');
	}
	//f.setMoves(50);
}

	if(f.getMoves()==0){

		DrawString(500,500,"GAME OVER",colors[WHITE]);
		{

		DrawString( 300, 500, "Click to play again", colors[BLUE]);
//		DrawString( 300, 400, "Press H to for help", colors[BLUE]);
//		DrawString( 300, 300, "Press Esc to exit", colors[BLUE]);
				//f.setLife(3);
f.setMoves(50);
		}
	}

//
//	if((obj.getplay()=='t'))
//	{
//		f.setMoves(20);
//	}
//	glutPostRedisplay();

	//j1.drawfood();

	//DrawLine( 550 , 50 ,  550 , 480 , 10 , colors[BLACK] );


	//Display Score
	//DrawString( 50, 800, "Score=0", colors[MISTY_ROSE]);
	//Spider
//;
//	DrawRoundRect(500,200,50,10,colors[YELLOW],70);
//	DrawRoundRect(500,200,50,100,colors[DARK_SEA_GREEN],70);
//		DrawRoundRect(100,200,100,50,colors[DARK_GREEN],20);
//		DrawRoundRect(100,100,50,100,colors[GREEN],30);
		//DrawRoundRect(200,100,100,50,colors[RED],40);
		//DrawRoundRect(350,100,100,50,colors[LIME_GREEN],20);

}

if(obj.getplay()=='h'){
	DrawString( 300, 500, "Use mouse to play game", colors[BLUE]);
	DrawString( 300, 400, "Swap the matching stones", colors[BLUE]);
	DrawString( 300, 300, "Press P to play game", colors[BLUE]);
	}






//Triangle Vertices v1(300,50) , v2(500,50) , v3(400,250);


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	//DrawCircle(70,670,10,colors[RED]);
	//DrawCircle(90,670,10,colors[RED]);
	//DrawRoundRect(500,200,50,100,colors[DARK_SEA_GREEN],70);
	//DrawRoundRect(100,200,100,50,colors[DARK_OLIVE_GREEN],20);	
	//DrawRoundRect(100,100,50,100,colors[DARK_OLIVE_GREEN],30);
	//DrawRoundRect(200,100,100,50,colors[LIME_GREEN],40);
	//DrawRoundRect(350,100,100,50,colors[LIME_GREEN],20);
	
	glutSwapBuffers(); // do not modify this line..

}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {

	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {

	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'p' || key == 'P') //Key for placing the bomb
			{
		obj.setplay('p');
	}
	if (key == 'h' || key == 'H') //Key for placing the bomb
			{
		obj.setplay('h');
	}
	if (key == 'g' || key == 'G') //Key for placing the bomb
				{
			obj.setplay('g');
		}
	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	//int swap;
//	cout << x << " " << y << endl;
//	cout<<"drag"<<endl;
	glutPostRedisplay();
//	f.getArrx()[0][3]=swap;

}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout<<"left hero"<<endl;
cout<<x<<endl;
		f.stoneswap(x,y,state);

		//cout<<"left Button Pressed"<<endl;
		//DrawSquare( 980, 00,45,colors[BLUE]);
	//	cout<<x <<" " <<y<<endl;
		//cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	p.loginorsignup();	//	Coordinates obj;
//obj.setxaxsis(300);
//obj.setyaxsis(300);


	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("OOP Project"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.
	//operations();
	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse
	

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
