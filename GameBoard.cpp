/*
 * GameBoard.cpp
 *
 *  Created on: May 19, 2020
 *      Author: haziq
 */

#include "GameBoard.h"

namespace std {

void GameBoard::winner(){
	DrawString(400,500,"Winner",colors[WHITE]);
	DrawString(400,400,"GAME OVER",colors[WHITE]);

}
GameBoard::GameBoard() {

}

//GameBoard::GameBoard(int,int,int) {
//	nscore=0;
//	life=3;
//	nlevel=1;
//
//}
void GameBoard::display(){
	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)

	//DrawString( 50, 800, "Score=0", colors[MISTY_ROSE]);
//display_score_n_etc();

	DrawLine( 900 , 58 ,  900 , 744 , 5 , colors[NAVY] );//left outside
	DrawLine( 140 , 58 ,  140 , 744 , 5 , colors[MIDNIGHT_BLUE] );//right outside
	DrawLine( 140 , 60 ,  900 , 60 , 5 , colors[NAVY] );//bottom outside
	DrawLine( 140 , 742 ,  900 , 742 , 5 , colors[NAVY] );//top outside

	DrawLine( 760 , 58 ,  760 , 744 , 5 , colors[NAVY] );
	DrawLine( 600 , 58 ,  600 , 744 , 5 , colors[NAVY] );
	DrawLine( 440 , 58 ,  440 , 744 , 5 , colors[NAVY] );
	DrawLine( 280 , 58 ,  280 , 744 , 5 , colors[NAVY] );
	DrawLine( 140 , 200 ,  900 , 200 , 5 , colors[NAVY] );
	DrawLine( 140 , 340 ,  900 , 340 , 5 , colors[NAVY] );
	DrawLine( 140 , 480 ,  900 , 480 , 5 , colors[NAVY] );
	DrawLine( 140 , 620 ,  900 , 620 , 5 , colors[NAVY] );
}

GameBoard::~GameBoard() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
