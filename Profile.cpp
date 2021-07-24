/*
 * Profile.cpp
 *
 *  Created on: Jun 2, 2020
 *      Author: haziq
 */

#include "Profile.h"

namespace std {

Profile::Profile() {

	// TODO Auto-generated constructor stub
for(int n=0;n<3;n++){
	str[n]='\0';
}
highscore=0;
login=NULL;
}
void Profile::writedata(){
	  ofile.open("profilelog.txt", ios::app);
	  do{
cout<<"use of spacebar is  invalid"<<endl;
cout<<"Enter username :"<<endl;
cin>>str[0];
cout<<"Enter gmail :"<<endl;
cin>>str[1];
cout<<"Enter Password "<<endl;
cin>>str[2];
	  }while(checkid() ? 0:1);
ofile <<endl << str[0];
ofile  <<endl<< str[1];
ofile  <<endl<< str[2];


ofile.close();

}
void Profile::signup(){
	  ofile.open("profilelog.txt", ios::app);
	  do{
cout<<"use of spacebar is  invalid"<<endl;
cout<<"Enter username :"<<endl;
cin>>str[0];
cout<<"Enter gmail :"<<endl;
cin>>str[1];
cout<<"Enter Password "<<endl;
cin>>str[2];
	  }while(checkid());
ofile <<endl << str[0];
ofile  <<endl<< str[1];
ofile  <<endl<< str[2];


ofile.close();


}

void Profile::readdata(){
	string word;
    ifile.open("profilelog.txt");
    while( ! ifile.eof( ))
      {
          getline(ifile, word);
          cout << word<<endl;

      }
    ifile.close();
}
bool Profile::checkid(){
cout<<"profile"<<endl;
	ifile.open("profilelog.txt");
    bool foundp = false,foundn = false,foundg = false;
	    string pword,nword,gword;

	    while( (! ifile.eof( )) || (foundp = false))
	    {
	    	//cout<<"boss"<<endl;
            ifile>> pword;

            if(pword == str[2])
            {
            	//cout<<word;
                foundp = true;
                break;
            }
    }

	    while( (! ifile.eof( )) || (foundn = false))
	    {
	    	//cout<<"boss"<<endl;
            ifile>> pword;

            if(pword == str[0])
            {
            	//cout<<word;
                foundn = true;
                break;
            }
    }

	    while( (! ifile.eof( )) || (foundg = false))
	    {
	    	//cout<<"boss"<<endl;
            ifile>> gword;

            if(gword == str[1])
            {
            	//cout<<word;
                foundg = true;
                break;
            }
    }

	    if((foundn == true)and(foundp == true)) {
	        cout<<"\n id found"<<endl;
	    return true;}
	    else
	    	cout<<"\n id not found"<<endl;
	    	     return false;
}
void Profile::loginorsignup(){

	cout<<"Do you want to login(l/L) or Sign up(s/S)?"<<endl;
	cin.get(login);
if((login=='l')or(login=='L')){
	writedata();
}
if((login=='s')or(login=='S')){
	signup();
}

}
Profile::~Profile() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
