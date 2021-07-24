/*
 * Mainmenu.cpp
 *
 *  Created on: May 17, 2020
 *      Author: haziq
 */

#include "Mainmenu.h"

namespace std {

Mainmenu::Mainmenu() {
	// TODO Auto-generated constructor stub
play=NULL;
//player=NULL;
}
void Mainmenu::setplay(char p){
	play=p;
}char Mainmenu::getplay(){
	return play;
}
Mainmenu::~Mainmenu() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
