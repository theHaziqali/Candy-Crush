/*
 * Food.cpp
 *
 *  Created on: May 20, 2020
 *      Author: haziq
 */

#include "Food.h"

namespace std {

Food::Food() {
	// TODO Auto-generated constructor stub
	 for(int j=0;j<25;j++){
			food[j]=-1;
				}
n=1;
a[0]=0;
a[1]=0;

b[0]=0;
b[1]=0;
	nscore=0;
	life=3;
	nlevel=1;
	moves=50;

}
void Food::levelcomplete(){
if(nscore>50){
//cout<<"helo"<<endl;
	//ofstream ofil;
	  ofil.open("highscore.txt", ios::app);

//ofil <<endl << str[0];


ofil.close();


}
}

void Food::drawfood(){
//cout<<"draw food"<<endl;
	 for(int j=0;j<25;j++){
		 //if((food[j]!=0))
if((food[j]==0)or(food[j]==-1))
				food[j]=GetRandInRange(1, 5);
		}
		// for(int j=0;j<25;j++)


//if(food[0]!=0)
	{
			 if(food[0]==1)
			 	 DrawRoundRect(arrx[0][4],arry[0][4],30,80,colors[HONEYDEW],50);
			 if(food[0]==2)
			 	 DrawRoundRect(arrx[0][4]-20,arry[0][4],80,30,colors[DARK_GREEN],10);
			 if(food[0]==3)
				 DrawRoundRect(arrx[0][4],arry[0][4],30,80,colors[ORANGE],10);
			 if(food[0]==4)
					DrawSquare( arrx[0][4]-20, arry[0][4],50,colors[MEDIUM_VIOLET_RED]);

			 		//DrawRoundRect(arrx[0][4]-20,arry[0][4],80,30,colors[RED],20);
			 if(food[0]==5)
				 DrawRoundRect(arrx[0][4],arry[0][4],80,30,colors[PURPLE],20);
	//		 if(food[0]==5)
	//				DrawCircle(780,100,10,colors[RED]);
			// foodcheck();

	}//if(food[1]!=0)
	{
			 if(food[1]==1)
			 	 DrawRoundRect(arrx[0][3],arry[0][3],30,80,colors[HONEYDEW],50);
			 if(food[1]==2)
			 	 DrawRoundRect(arrx[0][3],arry[0][3],80,30,colors[DARK_GREEN],10);
			 if(food[1]==3)
				 DrawRoundRect(arrx[0][3],arry[0][3],30,80,colors[ORANGE],10);
			 if(food[1]==4)
					DrawSquare( arrx[0][3], arry[0][3],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[1]==5)
				 DrawRoundRect(arrx[0][3],arry[0][3],80,30,colors[PURPLE],20);
	//		 if(food[1]==5)
	//				DrawCircle(640,100,10,colors[RED]);

	}//if(food[2]!=0)
	{
			 if(food[2]==1)
			 	 DrawRoundRect(arrx[0][2],arry[0][2],30,80,colors[HONEYDEW],50);
			 if(food[2]==2)
			 	 DrawRoundRect(arrx[0][2],arry[0][2],80,30,colors[DARK_GREEN],10);
			 if(food[2]==3)
				 DrawRoundRect(arrx[0][2],arry[0][2],30,80,colors[ORANGE],10);
			 if(food[2]==4)
					DrawSquare( arrx[0][2], arry[0][2],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[2]==5)
				 DrawRoundRect(arrx[0][2],arry[0][2],80,30,colors[PURPLE],20);
	//		 if(food[2]==5)
	//				DrawCircle(500,100,10,colors[RED]);

	}
	{
			 if(food[3]==1)
			 	 DrawRoundRect(arrx[0][1],arry[0][1],30,80,colors[HONEYDEW],50);
			 if(food[3]==2)
			 	 DrawRoundRect(arrx[0][1],arry[0][1],80,30,colors[DARK_GREEN],10);
			 if(food[3]==3)
				 DrawRoundRect(arrx[0][1],arry[0][1],30,80,colors[ORANGE],10);
			 if(food[3]==4)
					DrawSquare( arrx[0][1], arry[0][1],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[3]==5)
				 DrawRoundRect(arrx[0][1],arry[0][1],80,30,colors[PURPLE],20);
	}
	{
			 if(food[4]==1)
			 	 DrawRoundRect(arrx[0][0],arry[0][0],30,80,colors[HONEYDEW],50);
			 if(food[4]==2)
			 	 DrawRoundRect(arrx[0][0],arry[0][0],80,30,colors[DARK_GREEN],10);
			 if(food[4]==3)
				 DrawRoundRect(arrx[0][0],arry[0][0],30,80,colors[ORANGE],10);
			 if(food[4]==4)
					DrawSquare( arrx[0][0], arry[0][0],50,colors[MEDIUM_VIOLET_RED]);

			 if(food[4]==5)
				 DrawRoundRect(arrx[0][0],arry[0][0],80,30,colors[PURPLE],20);
	}
	{
			 if(food[5]==1)
			 	 DrawRoundRect(arrx[1][0],arry[1][0],30,80,colors[HONEYDEW],50);
			 if(food[5]==2)
			 	 DrawRoundRect(arrx[1][0],arry[1][0],80,30,colors[DARK_GREEN],10);
			 if(food[5]==3)
				 DrawRoundRect(arrx[1][0],arry[1][0],30,80,colors[ORANGE],10);
			 if(food[5]==4)
					DrawSquare( arrx[1][0], arry[1][0],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[5]==5)
				 DrawRoundRect(arrx[1][0],arry[1][0],80,30,colors[PURPLE],20);
	}
	{
			 if(food[6]==1)
			 	 DrawRoundRect(arrx[1][1],arry[1][1],30,80,colors[HONEYDEW],50);
			 if(food[6]==2)
			 	 DrawRoundRect(arrx[1][1],arry[1][1],80,30,colors[DARK_GREEN],10);
			 if(food[6]==3)
				 DrawRoundRect(arrx[1][1],arry[1][1],30,80,colors[ORANGE],10);
			 if(food[6]==4)
					DrawSquare( arrx[1][1], arry[1][1],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[6]==5)
				 DrawRoundRect(arrx[1][1],arry[1][1],80,30,colors[PURPLE],20);
	}
	{
			 if(food[7]==1)
			 	 DrawRoundRect(arrx[1][2],arry[1][2],30,80,colors[HONEYDEW],50);
			 if(food[7]==2)
			 	 DrawRoundRect(arrx[1][2],arry[1][2],80,30,colors[DARK_GREEN],10);
			 if(food[7]==3)
				 DrawRoundRect(arrx[1][2],arry[1][2],30,80,colors[ORANGE],10);
			 if(food[7]==4)
					DrawSquare( arrx[1][2], arry[1][2],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[7]==5)
				 DrawRoundRect(arrx[1][2],arry[1][2],80,30,colors[PURPLE],20);
	}
	{
			 if(food[8]==1)
			 	 DrawRoundRect(arrx[1][3],arry[1][3],30,80,colors[HONEYDEW],50);
			 if(food[8]==2)
			 	 DrawRoundRect(arrx[1][3],arry[1][3],80,30,colors[DARK_GREEN],10);
			 if(food[8]==3)
				 DrawRoundRect(arrx[1][3],arry[1][3],30,80,colors[ORANGE],10);
			 if(food[8]==4)
					DrawSquare( arrx[1][3], arry[1][3],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[8]==5)
				 DrawRoundRect(arrx[1][3],arry[1][3],80,30,colors[PURPLE],20);
	}
	{
			 if(food[9]==1)
			 	 DrawRoundRect(arrx[1][4],arry[1][4],30,80,colors[HONEYDEW],50);
			 if(food[9]==2)
			 	 DrawRoundRect(arrx[1][4]-20,arry[1][4],80,30,colors[DARK_GREEN],10);
			 if(food[9]==3)
				 DrawRoundRect(arrx[1][4],arry[1][4],30,80,colors[ORANGE],10);
			 if(food[9]==4)
					DrawSquare( arrx[1][4], arry[1][4],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[9]==5)
				 DrawRoundRect(arrx[1][4],arry[1][4],80,30,colors[PURPLE],20);
	}
	{
			 if(food[10]==1)
			 	 DrawRoundRect(arrx[2][4],arry[2][4],30,80,colors[HONEYDEW],50);
			 if(food[10]==2)
			 	 DrawRoundRect(arrx[2][4]-20,arry[2][4],80,30,colors[DARK_GREEN],10);
			 if(food[10]==3)
				 DrawRoundRect(arrx[2][4],arry[2][4],30,80,colors[ORANGE],10);
			 if(food[10]==4)
					DrawSquare( arrx[2][4], arry[2][4],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[10]==5)
				 DrawRoundRect(arrx[2][4],arry[2][4],80,30,colors[PURPLE],20);
	}
	{
			 if(food[11]==1)
			 	 DrawRoundRect(arrx[2][3],arry[2][3],30,80,colors[HONEYDEW],50);
			 if(food[11]==2)
			 	 DrawRoundRect(arrx[2][3],arry[2][3],80,30,colors[DARK_GREEN],10);
			 if(food[11]==3)
				 DrawRoundRect(arrx[2][3],arry[2][3],30,80,colors[ORANGE],10);
			 if(food[11]==4)
					DrawSquare( arrx[2][3], arry[2][3],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[11]==5)
				 DrawRoundRect(arrx[2][3],arry[2][3],80,30,colors[PURPLE],20);
	}
	{
			 if(food[12]==1)
			 	 DrawRoundRect(arrx[2][2],arry[2][2],30,80,colors[HONEYDEW],50);
			 if(food[12]==2)
			 	 DrawRoundRect(arrx[2][2],arry[2][2],80,30,colors[DARK_GREEN],10);
			 if(food[12]==3)
				 DrawRoundRect(arrx[2][2],arry[2][2],30,80,colors[ORANGE],10);
			 if(food[12]==4)
					DrawSquare( arrx[2][2], arry[2][2],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[12]==5)
				 DrawRoundRect(arrx[2][2],arry[2][2],80,30,colors[PURPLE],20);
	}
	{
			 if(food[13]==1)
			 	 DrawRoundRect(arrx[2][1],arry[2][1],30,80,colors[HONEYDEW],50);
			 if(food[13]==2)
			 	 DrawRoundRect(arrx[2][1],arry[2][1],80,30,colors[DARK_GREEN],10);
			 if(food[13]==3)
				 DrawRoundRect(arrx[2][1],arry[2][1],30,80,colors[ORANGE],10);
			 if(food[13]==4)
					DrawSquare( arrx[2][1], arry[2][1],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[13]==5)
				 DrawRoundRect(arrx[2][1],arry[2][1],80,30,colors[PURPLE],20);
	}
	{
			 if(food[14]==1)
			 	 DrawRoundRect(arrx[2][0],arry[2][0],30,80,colors[HONEYDEW],50);
			 if(food[14]==2)
			 	 DrawRoundRect(arrx[2][0],arry[2][0],80,30,colors[DARK_GREEN],10);
			 if(food[14]==3)
				 DrawRoundRect(arrx[2][0],arry[2][0],30,80,colors[ORANGE],10);
			 if(food[14]==4)
					DrawSquare( arrx[2][0], arry[2][0],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[14]==5)
				 DrawRoundRect(arrx[2][0],arry[2][0],80,30,colors[PURPLE],20);
	}
	{
			 if(food[15]==1)
			 	 DrawRoundRect(arrx[3][0],arry[3][0],30,80,colors[HONEYDEW],50);
			 if(food[15]==2)
			 	 DrawRoundRect(arrx[3][0],arry[3][0],80,30,colors[DARK_GREEN],10);
			 if(food[15]==3)
				 DrawRoundRect(arrx[3][0],arry[3][0],30,80,colors[ORANGE],10);
			 if(food[15]==4)
					DrawSquare( arrx[3][0], arry[3][0],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[15]==5)
				 DrawRoundRect(arrx[3][0],arry[3][0],80,30,colors[PURPLE],20);
	}
	{
			 if(food[16]==1)
			 	 DrawRoundRect(arrx[3][1],arry[3][1],30,80,colors[HONEYDEW],50);
			 if(food[16]==2)
			 	 DrawRoundRect(arrx[3][1],arry[3][1],80,30,colors[DARK_GREEN],10);
			 if(food[16]==3)
				 DrawRoundRect(arrx[3][1],arry[3][1],30,80,colors[ORANGE],10);
			 if(food[16]==4)
					DrawSquare( arrx[3][1], arry[3][1],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[16]==5)
				 DrawRoundRect(arrx[3][1],arry[3][1],80,30,colors[PURPLE],20);
	}
	{
			 if(food[17]==1)
			 	 DrawRoundRect(arrx[3][2],arry[3][2],30,80,colors[HONEYDEW],50);
			 if(food[17]==2)
			 	 DrawRoundRect(arrx[3][2],arry[3][2],80,30,colors[DARK_GREEN],10);
			 if(food[17]==3)
				 DrawRoundRect(arrx[3][2],arry[3][2],30,80,colors[ORANGE],10);
			 if(food[17]==4)
					DrawSquare( arrx[3][2], arry[3][2],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[17]==5)
				 DrawRoundRect(arrx[3][2],arry[3][2],80,30,colors[PURPLE],20);
	}
	{
			 if(food[18]==1)
			 	 DrawRoundRect(arrx[3][3],arry[3][3],30,80,colors[HONEYDEW],50);
			 if(food[18]==2)
			 	 DrawRoundRect(arrx[3][3],arry[3][3],80,30,colors[DARK_GREEN],10);
			 if(food[18]==3)
				 DrawRoundRect(arrx[3][3],arry[3][3],30,80,colors[ORANGE],10);
			 if(food[18]==4)
					DrawSquare( arrx[3][3], arry[3][3],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[18]==5)
				 DrawRoundRect(arrx[3][3],arry[3][3],80,30,colors[PURPLE],20);
	}
	{
			 if(food[19]==1)
			 	 DrawRoundRect(arrx[3][4],arry[3][4],30,80,colors[HONEYDEW],50);
			 if(food[19]==2)
			 	 DrawRoundRect(arrx[3][4]-20,arry[3][4],80,30,colors[DARK_GREEN],10);
			 if(food[19]==3)
				 DrawRoundRect(arrx[3][4],arry[3][4],30,80,colors[ORANGE],10);
			 if(food[19]==4)
					DrawSquare( arrx[3][4], arry[3][4],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[19]==5)
				 DrawRoundRect(arrx[3][4],arry[3][4],80,30,colors[PURPLE],20);
	}
	{
			 if(food[20]==1)
			 	 DrawRoundRect(arrx[4][4],arry[4][4]-20,30,80,colors[HONEYDEW],50);
			 if(food[20]==2)
			 	 DrawRoundRect(arrx[4][4]-20,arry[4][4],80,30,colors[DARK_GREEN],10);
			 if(food[20]==3)
				 DrawRoundRect(arrx[4][4],arry[4][4]-20,30,80,colors[ORANGE],10);
			 if(food[20]==4)
					DrawSquare( arrx[4][4], arry[4][4],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[20]==5)
				 DrawRoundRect(arrx[4][4],arry[4][4],80,30,colors[PURPLE],20);
	}
	{
			 if(food[21]==1)
			 	 DrawRoundRect(arrx[4][3],arry[4][3]-20,30,80,colors[HONEYDEW],50);
			 if(food[21]==2)
			 	 DrawRoundRect(arrx[4][3],arry[4][3],80,30,colors[DARK_GREEN],10);
			 if(food[21]==3)
				 DrawRoundRect(arrx[4][3],arry[4][3]-20,30,80,colors[ORANGE],10);
			 if(food[21]==4)
					DrawSquare( arrx[4][3], arry[4][3],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[21]==5)
				 DrawRoundRect(arrx[4][3],arry[4][3],80,30,colors[PURPLE],20);
	}
	{
			 if(food[22]==1)
			 	 DrawRoundRect(arrx[4][2],arry[4][2]-20,30,80,colors[HONEYDEW],50);
			 if(food[22]==2)
			 	 DrawRoundRect(arrx[4][2],arry[4][2],80,30,colors[DARK_GREEN],10);
			 if(food[22]==3)
				 DrawRoundRect(arrx[4][2],arry[4][2]-20,30,80,colors[ORANGE],10);
			 if(food[22]==4)
					DrawSquare( arrx[4][2], arry[4][2],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[22]==5)
				 DrawRoundRect(arrx[4][2],arry[4][2],80,30,colors[PURPLE],20);
	}
	{
			 if(food[23]==1)
			 	 DrawRoundRect(arrx[4][1],arry[4][1]-20,30,80,colors[HONEYDEW],50);
			 if(food[23]==2)
			 	 DrawRoundRect(arrx[4][1],arry[4][1],80,30,colors[DARK_GREEN],10);
			 if(food[23]==3)
				 DrawRoundRect(arrx[4][1],arry[4][1]-20,30,80,colors[ORANGE],10);
			 if(food[23]==4)
					DrawSquare( arrx[4][1], arry[4][1],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[23]==5)
				 DrawRoundRect(arrx[4][1],arry[4][1],80,30,colors[PURPLE],20);
	}
	{
			 if(food[24]==1)
			 	 DrawRoundRect(arrx[4][0],arry[4][0]-20,30,80,colors[HONEYDEW],50);
			 if(food[24]==2)
			 	 DrawRoundRect(arrx[4][0],arry[4][0],80,30,colors[DARK_GREEN],10);
			 if(food[24]==3)
				 DrawRoundRect(arrx[4][0],arry[4][0]-20,30,80,colors[ORANGE],10);
			 if(food[24]==4)
					DrawSquare( arrx[4][0], arry[4][0],50,colors[MEDIUM_VIOLET_RED]);
			 if(food[24]==5)
				 DrawRoundRect(arrx[4][0],arry[4][0],80,30,colors[PURPLE],20);
	}
	foodcheck();
}
void Food::foodcheck(){

	if((food[2]==food[3])and (food[2]==food[4])){
		if ((food[0]==food[2])and (food[1]==food[4])){
			DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
			food[0]=0;food[1]=0;food[2]=0;food[3]=0;food[4]=0;

		}
		nscore=nscore+1;
		DrawString(500,340,"Match",colors[DARK_VIOLET]);

		food[2]=0;food[3]=0;food[4]=0;//cout<<"hello"<<endl;

			food[3]=food[6];food[2]=food[7];food[4]=food[5];//cout<<"hello"<<endl;
			food[7]=food[12];food[6]=food[13];food[5]=food[14];//cout<<"hello"<<endl;
			food[12]=food[17];food[13]=food[16];food[14]=food[15];
			food[17]=food[22];food[16]=food[23];food[15]=food[24];
			food[22]=0;food[23]=0;food[24]=0;
	}



	if((food[1]==food[2])and (food[2]==food[3])){
		if ((food[0]==food[1])and (food[1]==food[4])){
			DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
			food[0]=0;food[1]=0;food[2]=0;food[3]=0;food[4]=0;

		}
		nscore=nscore+1;
		DrawString(500,340,"Match",colors[DARK_VIOLET]);

		food[1]=0;food[2]=0;food[3]=0;//cout<<"hello"<<endl;

			food[1]=food[8];food[2]=food[7];food[3]=food[6];//cout<<"hello"<<endl;

			food[8]=food[11];food[7]=food[12];food[6]=food[13];//cout<<"hello"<<endl;
			food[13]=food[16];food[12]=food[17];food[11]=food[18];
			food[16]=food[23];food[17]=food[22];food[18]=food[21];
			food[22]=0;food[23]=0;food[21]=0;


	}

	if(((food[0]==food[1])and(food[1]==food[2]))){// or((food[1]==food[2])and(food[2]==food[3]))or((food[2]==food[3])and(food[3]==food[4]))){
		if((food[3]==food[1])and(food[4]==food[0])){
			DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
			food[0]=0;food[1]=0;food[2]=0;food[3]=0;food[4]=0;

		}nscore=nscore+1;
		DrawString(500,340,"Match",colors[DARK_VIOLET]);

		food[0]=0;food[1]=0;food[2]=0;//cout<<"hello"<<endl;

			food[0]=food[9];food[1]=food[8];food[2]=food[7];//cout<<"hello"<<endl;
			food[9]=0;food[8]=0;food[7]=0;//cout<<"hello"<<endl;

	}
if(((food[0]==food[9])and(food[9]==food[10]))){
	if((food[0]==food[19])and(food[0]==food[20])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[0]=0;food[9]=0;food[10]=0;food[19]=0;food[20]=0;
	}
	nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);


	food[0]=0;food[9]=0;food[10]=0;
	food[0]=food[19];food[9]=food[20];

	food[19]=0;food[20]=0;


}

if(((food[19]==food[9])and(food[9]==food[10]))){
	if((food[0]==food[19])and(food[9]==food[20])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);		food[0]=0;food[9]=0;food[10]=0;food[19]=0;food[20]=0;
	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);


	food[19]=0;food[9]=0;food[10]=0;
	food[9]=food[20];

	food[20]=0;
}
if(((food[19]==food[9])and(food[9]==food[10]))){
	if((food[0]==food[19])and(food[9]==food[20])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[0]=0;food[9]=0;food[10]=0;food[19]=0;food[20]=0;
	}
	nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);


	food[19]=0;food[9]=0;food[10]=0;
	food[9]=food[20];

	food[20]=0;
}
if(((food[10]==food[19])and(food[19]==food[20]))){
	if((food[10]==food[9])and(food[19]==food[0])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[0]=0;food[9]=0;food[10]=0;food[19]=0;food[20]=0;
	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);


	food[10]=0;food[19]=0;food[20]=0;

}

if(((food[9]==food[8])and(food[9]==food[7]))){// or((food[1]==food[2])and(food[2]==food[3]))or((food[2]==food[3])and(food[3]==food[4]))){
	if((food[9]==food[6])and(food[9]==food[5])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[9]=0;food[8]=0;food[7]=0;food[6]=0;food[5]=0;

	}
	nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);

	food[9]=0;food[8]=0;food[7]=0;//cout<<"hello"<<endl;

		food[9]=food[10];food[8]=food[11];food[7]=food[12];
		food[10]=food[19];food[11]=food[18];food[12]=food[17];
		food[19]=food[20];food[18]=food[21];food[17]=food[22];

		food[20]=0;food[21]=0;food[22]=0;//cout<<"hello"<<endl;

}
if(((food[6]==food[8])and(food[6]==food[7]))){// or((food[1]==food[2])and(food[2]==food[3]))or((food[2]==food[3])and(food[3]==food[4]))){
	if((food[9]==food[6])and(food[9]==food[5])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[9]=0;food[8]=0;food[7]=0;food[6]=0;food[5]=0;


	}
	nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);
//	food[20]=0;
	food[6]=0;food[7]=0;food[8]=0;//cout<<"hello"<<endl;

		food[8]=food[11];food[7]=food[12];food[6]=food[13];
		food[11]=food[18];food[12]=food[17];food[13]=food[16];
		food[18]=food[21];food[17]=food[22];food[16]=food[23];

		food[21]=0;food[22]=0;food[23]=0;//cout<<"hello"<<endl;

}
if(((food[7]==food[6])and(food[6]==food[5]))){// or((food[1]==food[2])and(food[2]==food[3]))or((food[2]==food[3])and(food[3]==food[4]))){
	if((food[9]==food[6])and(food[8]==food[5])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[9]=0;food[8]=0;food[7]=0;food[6]=0;food[5]=0;

	}
	nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);
//	food[20]=0;
	food[7]=0;food[6]=0;food[5]=0;//cout<<"hello"<<endl;

		food[7]=food[12];food[6]=food[13];food[5]=food[14];
		food[12]=food[17];food[13]=food[16];food[14]=food[15];
		food[17]=food[22];food[16]=food[23];food[15]=food[24];

		food[22]=0;food[23]=0;food[24]=0;

}

if(((food[5]==food[14])and(food[14]==food[15]))){
	if((food[15]==food[4])and(food[24]==food[5])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[5]=0;food[4]=0;food[15]=0;food[24]=0;food[14]=0;

	}
	nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);
//	food[20]=0;
	food[5]=0;food[14]=0;food[15]=0;//cout<<"hello"<<endl;


		food[5]=food[24];food[24]=0;

}
if(((food[24]==food[14])and(food[14]==food[15]))){
	if((food[15]==food[4])and(food[24]==food[5])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[5]=0;food[4]=0;food[15]=0;food[24]=0;food[14]=0;

	}
	nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);
//	food[20]=0;
	food[24]=0;food[14]=0;food[15]=0;//cout<<"hello"<<endl;



}
if(((food[6]==food[13])and(food[13]==food[16]))){
	if((food[16]==food[3])and(food[3]==food[23])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[6]=0;food[13]=0;food[16]=0;food[23]=0;food[3]=0;

	}else{
		nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);
//	food[20]=0;
	food[16]=0;food[13]=0;food[6]=0;//cout<<"hello"<<endl;


		food[6]=food[23];food[23]=0;
	}
}
if(((food[23]==food[13])and(food[13]==food[16]))){
	if((food[16]==food[3])and(food[3]==food[23])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[6]=0;food[13]=0;food[16]=0;food[23]=0;food[3]=0;

	}else{
		nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);
//	food[20]=0;
	food[16]=0;food[13]=0;food[23]=0;//cout<<"hello"<<endl;
	}


}
if(((food[7]==food[12])and(food[12]==food[17]))){
	if((food[17]==food[2])and(food[2]==food[22])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[7]=0;food[12]=0;food[17]=0;food[22]=0;food[2]=0;

	}else{nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);
//	food[20]=0;
	food[7]=0;food[12]=0;food[17]=0;//cout<<"hello"<<endl;


		food[7]=food[22];food[22]=0;
	}
}
if(((food[22]==food[12])and(food[12]==food[17]))){
	if((food[17]==food[2])and(food[2]==food[22])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[7]=0;food[12]=0;food[17]=0;food[22]=0;food[2]=0;

	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);
//	food[20]=0;
	food[22]=0;food[12]=0;food[17]=0;//cout<<"hello"<<endl;



}

if(((food[8]==food[11])and(food[11]==food[18]))){
	if((food[18]==food[1])and(food[1]==food[21])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[8]=0;food[11]=0;food[18]=0;food[21]=0;food[1]=0;

	}else{nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);
//	food[20]=0;
	food[8]=0;food[11]=0;food[18]=0;//cout<<"hello"<<endl;


		food[8]=food[21];food[21]=0;
	}
}
if(((food[21]==food[11])and(food[11]==food[18]))){
	if((food[18]==food[1])and(food[1]==food[21])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[8]=0;food[11]=0;food[18]=0;food[21]=0;food[1]=0;

	}else{nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);
//	food[20]=0;
	food[21]=0;food[11]=0;food[18]=0;//cout<<"hello"<<endl;
	}


}

if(((food[1]==food[8])and(food[8]==food[11]))){
	if((food[1]==food[18])and(food[1]==food[21])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[1]=0;food[8]=0;food[11]=0;food[18]=0;food[21]=0;
	}else{nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);


	food[1]=0;food[8]=0;food[11]=0;
	food[1]=food[18];food[8]=food[21];

	food[18]=0;food[21]=0;
	}
	}
if(((food[2]==food[7])and(food[7]==food[12]))){
	if((food[2]==food[17])and(food[2]==food[22])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[2]=0;food[7]=0;food[12]=0;food[17]=0;food[22]=0;
	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);


	food[2]=0;food[7]=0;food[12]=0;
	food[2]=food[17];food[7]=food[22];

	food[17]=0;food[22]=0;
}
if(((food[3]==food[6])and(food[6]==food[13]))){
	if((food[3]==food[16])and(food[3]==food[23])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[3]=0;food[6]=0;food[13]=0;food[16]=0;food[23]=0;
	}
	else{nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);


	food[3]=0;food[6]=0;food[13]=0;
	food[3]=food[16];food[6]=food[23];

	food[16]=0;food[23]=0;
	}
	}
if(((food[4]==food[5])and(food[5]==food[14]))){
	if((food[4]==food[15])and(food[4]==food[24])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[4]=0;food[5]=0;food[14]=0;food[15]=0;food[24]=0;
	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);


	food[4]=0;food[5]=0;food[14]=0;
	food[4]=food[15];food[5]=food[24];

	food[15]=0;food[24]=0;
}
if(((food[14]==food[13])and(food[12]==food[14]))){
	if(food[14]!=0)
	if((food[11]==food[12])and(food[14]==food[10])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[12]=0;food[13]=0;food[14]=0;food[10]=0;food[11]=0;
	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);

	food[14]=0;food[13]=0;food[12]=0;
	food[14]=food[15];food[13]=food[16];food[12]=food[17];//;food[11]=food[18];food[10]=food[19];
	food[15]=food[24];food[16]=food[23];food[17]=food[22];//;food[11]=food[18];food[10]=food[19];

	food[23]=0;food[24]=0;food[22]=0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(((food[11]==food[13])and(food[12]==food[11]))){
	if(food[13]!=0)
	if((food[11]==food[14])and(food[11]==food[10])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[12]=0;food[13]=0;food[14]=0;food[10]=0;food[11]=0;
	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);

food[13]=0;food[12]=0;	food[11]=0;
	food[13]=food[16];food[12]=food[17];food[11]=food[18];
	food[16]=food[23];food[17]=food[22];	food[18]=food[21];

	food[23]=0;food[22]=0;food[21]=0;
}
/////////////////////////////////////////////////////////////////////////////////////////
if(((food[11]==food[12])and(food[12]==food[10]))){
	if(food[12]!=0)
	if((food[11]==food[14])and(food[11]==food[10])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[12]=0;food[13]=0;food[14]=0;food[10]=0;food[11]=0;
	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);

food[12]=0;	food[11]=0;food[10]=0;
	food[12]=food[17];food[11]=food[18];food[10]=food[19];
	food[17]=food[22];food[18]=food[21];food[19]=food[20];

	food[20]=0;food[22]=0;food[21]=0;
}
///////////////////////////////////////////////////////////////////////////////////////
if(((food[17]==food[18])and(food[18]==food[19]))){
	if(food[18]!=0)
	if((food[17]==food[16])and(food[15]==food[19])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[15]=0;food[16]=0;food[17]=0;food[18]=0;food[19]=0;
	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);

food[17]=0;	food[18]=0;food[19]=0;
//	food[17]=0;food[18]=0;food[19]=0;
	food[17]=food[22];food[18]=food[21];food[19]=food[20];

	food[20]=0;food[22]=0;food[21]=0;
}
////////////////////////////////////////////////////////////////////////////////////////
if(((food[18]==food[16])and(food[17]==food[18]))){
	if(food[17]!=0)
	if((food[15]==food[16])and(food[18]==food[19])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[15]=0;food[16]=0;food[17]=0;food[18]=0;food[19]=0;

	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);

	food[16]=0;food[17]=0;food[18]=0;
	food[16]=food[23];food[17]=food[22];	food[18]=food[21];

	food[23]=0;food[22]=0;food[21]=0;
}
/////////////////////////////////////////////////////////////////////////////////////////
if(((food[15]==food[16])and(food[17]==food[16]))){
	if(food[16]!=0)
	if((food[11]==food[12])and(food[14]==food[10])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[12]=0;food[13]=0;food[14]=0;food[10]=0;food[11]=0;
	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);

	food[15]=0;food[16]=0;food[17]=0;//;food[11]=food[18];food[10]=food[19];
	food[15]=food[24];food[16]=food[23];food[17]=food[22];//;food[11]=food[18];food[10]=food[19];

	food[23]=0;food[24]=0;food[22]=0;
}
//////////////////////////////////////////////////////////////////////////////////////
if(((food[24]==food[23])and(food[24]==food[22]))){
	if(food[21]!=0)
	if((food[21]==food[22])and(food[21]==food[20])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[22]=0;food[23]=0;food[24]=0;food[21]=0;food[20]=0;
	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);

//	food[15]=0;food[16]=0;food[17]=0;//;food[11]=food[18];food[10]=food[19];
//	food[15]=food[24];food[16]=food[23];food[17]=food[22];//;food[11]=food[18];food[10]=food[19];

	food[23]=0;food[24]=0;food[22]=0;
}
//////////////////////////////////////////////////////////////////////////////////////
if(((food[21]==food[23])and(food[23]==food[22]))){
	if(food[21]!=0)
	if((food[21]==food[22])and(food[21]==food[20])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[22]=0;food[23]=0;food[24]=0;food[21]=0;food[20]=0;

	}nscore=nscore+1;
	DrawString(500,340,"Match",colors[DARK_VIOLET]);

//	food[15]=0;food[16]=0;food[17]=0;//;food[11]=food[18];food[10]=food[19];
//	food[15]=food[24];food[16]=food[23];food[17]=food[22];//;food[11]=food[18];food[10]=food[19];

	food[23]=0;food[21]=0;food[22]=0;
}
//////////////////////////////////////////////////////////////////////////////////////
if(((food[20]==food[22])and(food[21]==food[22]))){
	if(food[21]!=0)
	if((food[21]==food[22])and(food[21]==food[20])){
		DrawString(500,340,"MEGA MATCH",colors[DARK_VIOLET]);
		food[22]=0;food[23]=0;food[24]=0;food[21]=0;food[20]=0;

	}nscore=nscore+1;
//nscore=nscore+2;s
	DrawString(500,340,"Match",colors[DARK_VIOLET]);

//	food[15]=0;food[16]=0;food[17]=0;//;food[11]=food[18];food[10]=food[19];
//	food[15]=food[24];food[16]=food[23];food[17]=food[22];//;food[11]=food[18];food[10]=food[19];

	food[20]=0;food[21]=0;food[22]=0;
}
//////////////////////////////////////////////////////////////////////////////////////

}

void Food:: stoneswap(int x,int y,int state){
	if((x>100)and (x<900)and(y<550)and(y>50))
moves=moves-1;
if(moves>0)
{
	if(n%2==0)
state=1;
	else
		state=0;
	n++;
if(state==0){
a[0]=x;
b[0]=y;
}
else if(state==1)
{	a[1]=x;
b[1]=y;}
if(a[0]!=a[1]){
cout<<b[0]<<endl;
cout<<b[1]<<endl;

if((b[0]>550)and(b[1]>550)){
//cout<<"maihoon"<<endl;
if((((a[1]<=arrx[0][4]+40)and(a[1]>=arrx[0][4]-40) ) and((a[0]<=arrx[0][3]+60)and(a[0]>=arrx[0][3]-40) )) or(((a[0]<=arrx[0][4]+40)and(a[0]>=arrx[0][4]-40) ) and((a[1]<=arrx[0][3]+60)and(a[1]>=arrx[0][3]-40) )))
{swap(food[0],food[1]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][3]+40)and(a[1]>=arrx[0][3]-40) ) and((a[0]<=arrx[0][2]+60)and(a[0]>=arrx[0][2]-40) )) or(((a[0]<=arrx[0][3]+40)and(a[0]>=arrx[0][3]-40) ) and((a[1]<=arrx[0][2]+60)and(a[1]>=arrx[0][2]-40) )))
{swap(food[2],food[1]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][2]+40)and(a[1]>=arrx[0][2]-40) ) and((a[0]<=arrx[0][1]+60)and(a[0]>=arrx[0][1]-40) )) or(((a[0]<=arrx[0][2]+40)and(a[0]>=arrx[0][2]-40) ) and((a[1]<=arrx[0][1]+60)and(a[1]>=arrx[0][1]-40) )))
{swap(food[3],food[2]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][1]+40)and(a[1]>=arrx[0][1]-40) ) and((a[0]<=arrx[0][0]+60)and(a[0]>=arrx[0][0]-40) )) or(((a[0]<=arrx[0][1]+40)and(a[0]>=arrx[0][1]-40) ) and((a[1]<=arrx[0][0]+60)and(a[1]>=arrx[0][0]-40) )))
{swap(food[4],food[3]);//cout<<"to kya"<<endl;
}

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(((b[0]<550)and (b[0]>400))and((b[1]<550)and (b[1]>400))){
//cout<<"maihoon"<<endl;
if((((a[1]<=arrx[0][4]+40)and(a[1]>=arrx[0][4]-40) ) and((a[0]<=arrx[0][3]+60)and(a[0]>=arrx[0][3]-40) )) or(((a[0]<=arrx[0][4]+40)and(a[0]>=arrx[0][4]-40) ) and((a[1]<=arrx[0][3]+60)and(a[1]>=arrx[0][3]-40) )))
{swap(food[9],food[8]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][3]+40)and(a[1]>=arrx[0][3]-40) ) and((a[0]<=arrx[0][2]+60)and(a[0]>=arrx[0][2]-40) )) or(((a[0]<=arrx[0][3]+40)and(a[0]>=arrx[0][3]-40) ) and((a[1]<=arrx[0][2]+60)and(a[1]>=arrx[0][2]-40) )))
{swap(food[8],food[7]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][2]+40)and(a[1]>=arrx[0][2]-40) ) and((a[0]<=arrx[0][1]+60)and(a[0]>=arrx[0][1]-40) )) or(((a[0]<=arrx[0][2]+40)and(a[0]>=arrx[0][2]-40) ) and((a[1]<=arrx[0][1]+60)and(a[1]>=arrx[0][1]-40) )))
{swap(food[7],food[6]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][1]+40)and(a[1]>=arrx[0][1]-40) ) and((a[0]<=arrx[0][0]+60)and(a[0]>=arrx[0][0]-40) )) or(((a[0]<=arrx[0][1]+40)and(a[0]>=arrx[0][1]-40) ) and((a[1]<=arrx[0][0]+60)and(a[1]>=arrx[0][0]-40) )))
{swap(food[6],food[5]);//cout<<"to kya"<<endl;
}

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(((b[0]<420)and (b[0]>300))and(((b[1]<420)and (b[1]>300)))){
//cout<<"maihoon"<<endl;
if((((a[1]<=arrx[0][4]+40)and(a[1]>=arrx[0][4]-40) ) and((a[0]<=arrx[0][3]+60)and(a[0]>=arrx[0][3]-40) )) or(((a[0]<=arrx[0][4]+40)and(a[0]>=arrx[0][4]-40) ) and((a[1]<=arrx[0][3]+60)and(a[1]>=arrx[0][3]-40) )))
{swap(food[10],food[11]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][3]+40)and(a[1]>=arrx[0][3]-40) ) and((a[0]<=arrx[0][2]+60)and(a[0]>=arrx[0][2]-40) )) or(((a[0]<=arrx[0][3]+40)and(a[0]>=arrx[0][3]-40) ) and((a[1]<=arrx[0][2]+60)and(a[1]>=arrx[0][2]-40) )))
{swap(food[11],food[12]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][2]+40)and(a[1]>=arrx[0][2]-40) ) and((a[0]<=arrx[0][1]+60)and(a[0]>=arrx[0][1]-40) )) or(((a[0]<=arrx[0][2]+40)and(a[0]>=arrx[0][2]-40) ) and((a[1]<=arrx[0][1]+60)and(a[1]>=arrx[0][1]-40) )))
{swap(food[12],food[13]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][1]+40)and(a[1]>=arrx[0][1]-40) ) and((a[0]<=arrx[0][0]+60)and(a[0]>=arrx[0][0]-40) )) or(((a[0]<=arrx[0][1]+40)and(a[0]>=arrx[0][1]-40) ) and((a[1]<=arrx[0][0]+60)and(a[1]>=arrx[0][0]-40) )))
{swap(food[13],food[14]);//cout<<"to kya"<<endl;
}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(((b[0]<300)and (b[0]>190))and(((b[1]<300)and (b[1]>190)))){
//cout<<"maihoon"<<endl;
if((((a[1]<=arrx[0][4]+40)and(a[1]>=arrx[0][4]-40) ) and((a[0]<=arrx[0][3]+60)and(a[0]>=arrx[0][3]-40) )) or(((a[0]<=arrx[0][4]+40)and(a[0]>=arrx[0][4]-40) ) and((a[1]<=arrx[0][3]+60)and(a[1]>=arrx[0][3]-40) )))
{swap(food[19],food[18]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][3]+40)and(a[1]>=arrx[0][3]-40) ) and((a[0]<=arrx[0][2]+60)and(a[0]>=arrx[0][2]-40) )) or(((a[0]<=arrx[0][3]+40)and(a[0]>=arrx[0][3]-40) ) and((a[1]<=arrx[0][2]+60)and(a[1]>=arrx[0][2]-40) )))
{swap(food[18],food[17]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][2]+40)and(a[1]>=arrx[0][2]-40) ) and((a[0]<=arrx[0][1]+60)and(a[0]>=arrx[0][1]-40) )) or(((a[0]<=arrx[0][2]+40)and(a[0]>=arrx[0][2]-40) ) and((a[1]<=arrx[0][1]+60)and(a[1]>=arrx[0][1]-40) )))
{swap(food[17],food[16]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][1]+40)and(a[1]>=arrx[0][1]-40) ) and((a[0]<=arrx[0][0]+60)and(a[0]>=arrx[0][0]-40) )) or(((a[0]<=arrx[0][1]+40)and(a[0]>=arrx[0][1]-40) ) and((a[1]<=arrx[0][0]+60)and(a[1]>=arrx[0][0]-40) )))
{swap(food[16],food[15]);//cout<<"to kya"<<endl;
}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(((b[0]<190)and (b[0]>80))and((b[1]<190)and (b[1]>80))){
//cout<<"maihoon"<<endl;
if((((a[1]<=arrx[0][4]+40)and(a[1]>=arrx[0][4]-40) ) and((a[0]<=arrx[0][3]+60)and(a[0]>=arrx[0][3]-40) )) or(((a[0]<=arrx[0][4]+40)and(a[0]>=arrx[0][4]-40) ) and((a[1]<=arrx[0][3]+60)and(a[1]>=arrx[0][3]-40) )))
{swap(food[20],food[21]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][3]+40)and(a[1]>=arrx[0][3]-40) ) and((a[0]<=arrx[0][2]+60)and(a[0]>=arrx[0][2]-40) )) or(((a[0]<=arrx[0][3]+40)and(a[0]>=arrx[0][3]-40) ) and((a[1]<=arrx[0][2]+60)and(a[1]>=arrx[0][2]-40) )))
{swap(food[21],food[22]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][2]+40)and(a[1]>=arrx[0][2]-40) ) and((a[0]<=arrx[0][1]+60)and(a[0]>=arrx[0][1]-40) )) or(((a[0]<=arrx[0][2]+40)and(a[0]>=arrx[0][2]-40) ) and((a[1]<=arrx[0][1]+60)and(a[1]>=arrx[0][1]-40) )))
{swap(food[22],food[23]);//cout<<"to kya"<<endl;
}
if((((a[1]<=arrx[0][1]+40)and(a[1]>=arrx[0][1]-40) ) and((a[0]<=arrx[0][0]+60)and(a[0]>=arrx[0][0]-40) )) or(((a[0]<=arrx[0][1]+40)and(a[0]>=arrx[0][1]-40) ) and((a[1]<=arrx[0][0]+60)and(a[1]>=arrx[0][0]-40) )))
{swap(food[23],food[24]);//cout<<"to kya"<<endl;
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(b[0]!=b[1]){
if(((a[0]>120)and(a[0]<280))and(((a[1]>120)and(a[1]<280)))){

if((((b[1]<=arry[0][0]+40)and(b[1]>=arry[0][0]-40) ) and((b[0]<=arry[1][0]+60)and(b[0]>=arry[1][0]-40) )) or(((b[0]<=arrx[0][0]+40)and(b[0]>=arry[0][0]-40) ) and((b[1]<=arry[1][0]+60)and(b[1]>=arry[1][0]-40) )))
{		swap(food[24],food[15]);	}
if((((b[1]<=arry[1][0]+40)and(b[1]>=arry[1][0]-40) ) and((b[0]<=arry[2][0]+60)and(b[0]>=arry[2][0]-40) )) or(((b[0]<=arrx[1][0]+40)and(b[0]>=arry[1][0]-40) ) and((b[1]<=arry[2][0]+60)and(b[1]>=arry[2][0]-40) )))
{		swap(food[15],food[14]);}
if((((b[1]<=arry[2][0]+40)and(b[1]>=arry[2][0]-40) ) and((b[0]<=arry[3][0]+60)and(b[0]>=arry[3][0]-40) )) or(((b[0]<=arrx[2][0]+40)and(b[0]>=arry[2][0]-40) ) and((b[1]<=arry[3][0]+60)and(b[1]>=arry[3][0]-40) )))
{		swap(food[14],food[5]);}
if((((b[1]<=arry[3][0]+40)and(b[1]>=arry[3][0])-40 ) and((b[0]<=arry[4][0]+60)and(b[0]>=arry[4][0]-80) )) or(((b[0]<=arrx[3][0]+40)and(b[0]>=arry[3][0]-40) ) and((b[1]<=arry[4][0]+60)and(b[1]>=arry[4][0]-40) )))
{		swap(food[5],food[4]);//cout<<"tujhai kya hau "<<endl;
}


}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if(((a[0]>280)and(a[0]<440))and((a[1]>280)and(a[1]<440))){

if((((b[1]<=arry[0][0]+60)and(b[1]>=arry[0][0]-60) ) and((b[0]<=arry[1][0]+60)and(b[0]>=arry[1][0]-40) )) or(((b[0]<=arrx[0][0]+40)and(b[0]>=arry[0][0]-40) ) and((b[1]<=arry[1][0]+60)and(b[1]>=arry[1][0]-40) )))
{		swap(food[23],food[16]);	}
if((((b[1]<=arry[1][0]+60)and(b[1]>=arry[1][0]-60) ) and((b[0]<=arry[2][0]+60)and(b[0]>=arry[2][0]-40) )) or(((b[0]<=arrx[1][0]+40)and(b[0]>=arry[1][0]-40) ) and((b[1]<=arry[2][0]+60)and(b[1]>=arry[2][0]-40) )))
{		swap(food[16],food[13]);}
if((((b[1]<=arry[2][0]+60)and(b[1]>=arry[2][0]-60) ) and((b[0]<=arry[3][0]+60)and(b[0]>=arry[3][0]-40) )) or(((b[0]<=arrx[2][0]+40)and(b[0]>=arry[2][0]-40) ) and((b[1]<=arry[3][0]+60)and(b[1]>=arry[3][0]-40) )))
{		swap(food[13],food[6]);}
if((((b[1]<=arry[3][0]+60)and(b[1]>=arry[3][0])-60 ) and((b[0]<=arry[4][0]+60)and(b[0]>=arry[4][0]-80) )) or(((b[0]<=arrx[3][0]+40)and(b[0]>=arry[3][0]-40) ) and((b[1]<=arry[4][0]+60)and(b[1]>=arry[4][0]-40) )))
{		swap(food[6],food[3]);//cout<<"tujhai kya hau "<<endl;
}


}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(((a[0]>440)and(a[0]<600))and(((a[1]>440)and(a[1]<600)))){

if((((b[1]<=arry[0][0]+40)and(b[1]>=arry[0][0]-40) ) and((b[0]<=arry[1][0]+60)and(b[0]>=arry[1][0]-40) )) or(((b[0]<=arrx[0][0]+40)and(b[0]>=arry[0][0]-40) ) and((b[1]<=arry[1][0]+60)and(b[1]>=arry[1][0]-40) )))
{		swap(food[22],food[17]);	}
if((((b[1]<=arry[1][0]+40)and(b[1]>=arry[1][0]-40) ) and((b[0]<=arry[2][0]+60)and(b[0]>=arry[2][0]-40) )) or(((b[0]<=arrx[1][0]+40)and(b[0]>=arry[1][0]-40) ) and((b[1]<=arry[2][0]+60)and(b[1]>=arry[2][0]-40) )))
{		swap(food[17],food[12]);}
if((((b[1]<=arry[2][0]+40)and(b[1]>=arry[2][0]-40) ) and((b[0]<=arry[3][0]+60)and(b[0]>=arry[3][0]-40) )) or(((b[0]<=arrx[2][0]+40)and(b[0]>=arry[2][0]-40) ) and((b[1]<=arry[3][0]+60)and(b[1]>=arry[3][0]-40) )))
{		swap(food[12],food[7]);}
if((((b[1]<=arry[3][0]+40)and(b[1]>=arry[3][0])-40 ) and((b[0]<=arry[4][0]+60)and(b[0]>=arry[4][0]-80) )) or(((b[0]<=arrx[3][0]+40)and(b[0]>=arry[3][0]-40) ) and((b[1]<=arry[4][0]+60)and(b[1]>=arry[4][0]-40) )))
{		swap(food[7],food[2]);//cout<<"tujhai kya hau "<<endl;
}


}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(((a[0]>600)and(a[0]<760))and(((a[1]>600)and(a[1]<760)))){

if((((b[1]<=arry[0][0]+40)and(b[1]>=arry[0][0]-40) ) and((b[0]<=arry[1][0]+60)and(b[0]>=arry[1][0]-40) )) or(((b[0]<=arrx[0][0]+40)and(b[0]>=arry[0][0]-40) ) and((b[1]<=arry[1][0]+60)and(b[1]>=arry[1][0]-40) )))
{		swap(food[21],food[18]);	}
if((((b[1]<=arry[1][0]+40)and(b[1]>=arry[1][0]-40) ) and((b[0]<=arry[2][0]+60)and(b[0]>=arry[2][0]-40) )) or(((b[0]<=arrx[1][0]+40)and(b[0]>=arry[1][0]-40) ) and((b[1]<=arry[2][0]+60)and(b[1]>=arry[2][0]-40) )))
{		swap(food[18],food[11]);}
if((((b[1]<=arry[2][0]+40)and(b[1]>=arry[2][0]-40) ) and((b[0]<=arry[3][0]+60)and(b[0]>=arry[3][0]-40) )) or(((b[0]<=arrx[2][0]+40)and(b[0]>=arry[2][0]-40) ) and((b[1]<=arry[3][0]+60)and(b[1]>=arry[3][0]-40) )))
{		swap(food[11],food[8]);}
if((((b[1]<=arry[3][0]+40)and(b[1]>=arry[3][0])-40 ) and((b[0]<=arry[4][0]+60)and(b[0]>=arry[4][0]-80) )) or(((b[0]<=arrx[3][0]+40)and(b[0]>=arry[3][0]-40) ) and((b[1]<=arry[4][0]+60)and(b[1]>=arry[4][0]-40) )))
{		swap(food[8],food[1]);//cout<<"tujhai kya hau "<<endl;
}


}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(((a[0]>760)and(a[0]<900))and(((a[1]>760)and(a[1]<900)))){

if((((b[1]<=arry[0][0]+40)and(b[1]>=arry[0][0]-40) ) and((b[0]<=arry[1][0]+60)and(b[0]>=arry[1][0]-40) )) or(((b[0]<=arrx[0][0]+40)and(b[0]>=arry[0][0]-40) ) and((b[1]<=arry[1][0]+60)and(b[1]>=arry[1][0]-40) )))
{		swap(food[20],food[19]);	}
if((((b[1]<=arry[1][0]+40)and(b[1]>=arry[1][0]-40) ) and((b[0]<=arry[2][0]+60)and(b[0]>=arry[2][0]-40) )) or(((b[0]<=arrx[1][0]+40)and(b[0]>=arry[1][0]-40) ) and((b[1]<=arry[2][0]+60)and(b[1]>=arry[2][0]-40) )))
{		swap(food[19],food[10]);}
if((((b[1]<=arry[2][0]+40)and(b[1]>=arry[2][0]-40) ) and((b[0]<=arry[3][0]+60)and(b[0]>=arry[3][0]-40) )) or(((b[0]<=arrx[2][0]+40)and(b[0]>=arry[2][0]-40) ) and((b[1]<=arry[3][0]+60)and(b[1]>=arry[3][0]-40) )))
{		swap(food[10],food[9]);}
if((((b[1]<=arry[3][0]+40)and(b[1]>=arry[3][0])-40 ) and((b[0]<=arry[4][0]+60)and(b[0]>=arry[4][0]-80) )) or(((b[0]<=arrx[3][0]+40)and(b[0]>=arry[3][0]-40) ) and((b[1]<=arry[4][0]+60)and(b[1]>=arry[4][0]-40) )))
{		swap(food[9],food[0]);//cout<<"tujhai kya hau "<<endl;
}


}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
drawfood();
}
}

	}
}

int Food::getLife() const {
	return life;
}

int Food::getNscore() const {
	return nscore;
}

void Food::setNscore(int nscore) {
	this->nscore = nscore;
}

void Food::setLife(int life) {
	this->life = life;
}

void Food::setMoves(int moves) {
	this->moves = moves;
}

int Food::getMoves() const {
	return moves;
}

void Food:: display_score_n_etc(){
	stringstream score;
	score<<nscore;
	stringstream lives;
	lives<<life;
	stringstream level;
	level<<nlevel;
	stringstream nmoves;
	nmoves<<moves;

	DrawString(350,790,"Level :",colors[WHITE]);
	DrawString(450,790,level.str(),colors[WHITE]);
	DrawString(100,790,"Score=",colors[WHITE]);
	DrawString(200,790,score.str(),colors[WHITE]);
	DrawString(700,790,"lives=",colors[WHITE]);
		DrawString(770,790,lives.str(),colors[WHITE]);
		
	DrawString(500,790,"Moves :",colors[WHITE]);
	DrawString(600,790,nmoves.str(),colors[WHITE]);

	DrawString(800,790,"Required : 50",colors[WHITE]);

}

Food::~Food() {
	// TODO Auto-generated destructor stub
}

}
/* namespace std */
