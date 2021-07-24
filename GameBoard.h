/*
 * GameBoard.h
 *
 *  Created on: May 19, 2020
 *      Author: haziq
 */

#ifndef GAMEBOARD_H_
#define GAMEBOARD_H_
#include"util.h"
#include"Food.h"

#include<cstring>
#include<sstream>

namespace std {

class GameBoard :public Profile{
protected:
	public:
//		stringstream score;
//						stringstream lives,level;
void winner();
	GameBoard();
//	GameBoard(int,int,int);

	//void drawfood();
	void display();
	void score_n_etc();
	//void display_score_n_etc();
	virtual ~GameBoard();
};

} /* namespace std */

#endif /* GAMEBOARD_H_ */
