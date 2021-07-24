

#include "Coordinates.h"

using namespace std ;
Coordinates::Coordinates(){
	xaxsis=0;
	yaxsis=0;
	check=false;
	array=new int*[2]();
	for(int j=0;j<2;j++){
		array[j]=new int[51]();
	}
	for(int j=0;j<2;j++){
		for(int k=0,z=0;k<51;k++){
				array[j][k]=0+z;
				z=z+20;
		}
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	 arry=new int*[5];
	 for(int k=0;k<5;k++){
		 arry[k]=new int[5];
	 }
	 arrx=new int*[5];
	 for(int k=0;k<5;k++){
		 arrx[k]=new int [5];
	 }
for(int z, k=0;k<5;k++){
	z=180;
	for(int j=0;j<5;j++){
arrx[k][j]=z;
z=z+160;
	}
}
for(int z=100, k=0;k<5;k++){


	for(int j=0;j<5;j++){
arry[k][j]=z;
	}
	z=z+140;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

int**Coordinates:: getArray() const {
	return array;
}

int Coordinates::getxaxsis(){
	return xaxsis;}

int Coordinates::getyaxsis(){
	return yaxsis;}
bool Coordinates::getcheck(){
	return check;}
void Coordinates::setyaxsis(int y){
	yaxsis=y;}
void Coordinates::setxaxsis(int x){
	xaxsis=x;}
void Coordinates::setcheck(bool c){
	check=c;}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int** Coordinates::getArrx() {
	return arrx;
}

int** Coordinates::getArry() {
	return arry;
}
Coordinates::~Coordinates(){
	for(int i = 0; i < 5; ++i) {
	    delete [] arry[i];
	}
	delete [] arry;
	for(int i = 0; i < 5; ++i) {
	    delete [] arrx[i];
	}
	delete [] arrx;

}

