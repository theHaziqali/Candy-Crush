/*
 * Mainmenu.h
 *
 *  Created on: May 17, 2020
 *      Author: haziq
 */

#ifndef MAINMENU_H_
#define MAINMENU_H_
#include <iostream>
#include "Profile.h"
namespace std {

class Mainmenu {
protected:
	char play;
	//Profile *player;
public:
	Mainmenu();
	char getplay();
	void setplay(char);
	void operations();

	virtual ~Mainmenu();
};

} /* namespace std */

#endif /* MAINMENU_H_ */
