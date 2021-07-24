/*
 * Food.h
 *
 *  Created on: May 20, 2020
 *      Author: haziq
 */

#ifndef FOOD_H_
#define FOOD_H_
#include"GameBoard.h"
#include"Coordinates.h"
#include"Profile.h"
namespace std {

class Food  : public Coordinates,Profile{
protected:
int nscore,life,nlevel;
	
	int food[25];
	int n;
	int a[2],b[2];
	int moves;

public:
//nscore;

	Food();
	void levelcomplete();
	void drawfood();
	void foodcheck();
	////////////////////////
	void stoneswap(int ,int,int);

	virtual ~Food();
	void display_score_n_etc();
	int getMoves() const;
	void setMoves(int moves);
	int getLife() const;
	void setLife(int life);
	int getNscore() const;
	void setNscore(int nscore);
};

} /* namespace std */

#endif /* FOOD_H_ */
