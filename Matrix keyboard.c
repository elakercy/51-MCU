#include <REGX52.H>
#include "Delay.h"
int MatrixKeyboard()
{
	int key=0;
	P1=0xFF;
	P1_7=0;
	if(P1_3==0){Delay(2000);while(P1_3==0);Delay(2000);key=1;}
	if(P1_2==0){Delay(2000);while(P1_2==0);Delay(2000);key=2;}
	if(P1_1==0){Delay(2000);while(P1_1==0);Delay(2000);key=3;}
	if(P1_0==0){Delay(2000);while(P1_0==0);Delay(2000);key=4;}
	P1=0xFF;
	P1_6=0;
	if(P1_3==0){Delay(2000);while(P1_3==0);Delay(2000);key=5;}
	if(P1_2==0){Delay(2000);while(P1_2==0);Delay(2000);key=6;}
	if(P1_1==0){Delay(2000);while(P1_1==0);Delay(2000);key=7;}
	if(P1_0==0){Delay(2000);while(P1_0==0);Delay(2000);key=8;}
	P1=0xFF;
	P1_5=0;
	if(P1_3==0){Delay(2000);while(P1_3==0);Delay(2000);key=9;}
	if(P1_2==0){Delay(2000);while(P1_2==0);Delay(2000);key=10;}
	if(P1_1==0){Delay(2000);while(P1_1==0);Delay(2000);key=11;}
	if(P1_0==0){Delay(2000);while(P1_0==0);Delay(2000);key=12;}
	P1=0xFF;
	P1_4=0;
	if(P1_3==0){Delay(2000);while(P1_3==0);Delay(2000);key=13;}
	if(P1_2==0){Delay(2000);while(P1_2==0);Delay(2000);key=14;}
	if(P1_1==0){Delay(2000);while(P1_1==0);Delay(2000);key=15;}
	if(P1_0==0){Delay(2000);while(P1_0==0);Delay(2000);key=16;}
	return key;
}