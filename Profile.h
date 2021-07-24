/*
 * Profile.h
 *
 *  Created on: Jun 2, 2020
 *      Author: haziq
 */

#ifndef PROFILE_H_
#define PROFILE_H_
#include<string>
#include<fstream>
#include<string.h>
#include<iostream>
namespace std {

class Profile {
protected:
	string str[3];
	int highscore;
	ofstream ofile;
	ofstream ofil;
		ifstream ifile;
		char login;
public:
	Profile();
	void writedata();

	void signup();
	void readdata();
	bool checkid();
	void loginorsignup();
	virtual ~Profile();
};

} /* namespace std */

#endif /* PROFILE_H_ */
