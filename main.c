#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "Matrix keyboard.h"
int key;
unsigned int password=0;
unsigned int inputs=0;
int n=0;
int m=0;
void main()
{
	while(1)
	{
		LCD_Init();
		LCD_ShowString(1,1,"choose mode:");//总共有两种模式，一种为设置密码模式，一种为输入密码模式
		key=MatrixKeyboard();
		if(key<3)
		{
			switch(key)
			{
				case 1:n=1;break;//设置密码模式
				case 2:n=2;break;//输入密码模式
			}
		}
		if(n==1)//设置密码
		{
			LCD_Init();
			LCD_ShowString(1,1,"set password:");
			while(1)
			{
				LCD_ShowNum(2,1,password,4);
				key=MatrixKeyboard();
				if(key<=10&&key!=0)
				{
					if(m<4)
					{
						password=password*10;
						password=password+key%10;
						LCD_ShowNum(2,1,password,4);
						m++;
					}
				}
				if(key==11)
				{
					LCD_ShowString(1,1,"password set");
					Delay(100000000);
					m=0;
					break;
				}
				else if(key==12)
				{
					password=0;
					m=0;
				}
			}
			n=0;
		}
		else if(n==2)
		{
			LCD_Init();
			while(1)
			{
				LCD_ShowString(1,1,"input password:");
				LCD_ShowNum(2,1,inputs,4);
				key=MatrixKeyboard();
				if(key<=10&&key!=0)
				{
					if(m<4)
					{
						inputs=inputs*10;
						inputs=inputs+key%10;
						LCD_ShowNum(2,1,inputs,4);
						m++;
					}
				}
				if(key==11)
				{
					if(password==inputs)
					{
						LCD_ShowString(1,1,"password correct");
						Delay(100000000);
						m=0;
						break;
					}
					else
					{
						LCD_ShowString(1,1,"password wrong");
						LCD_ShowString(2,1,"input again");
						Delay(100000000);
						inputs=0;
						m=0;
					}
				}
				else if(key==12)
				{
					inputs=0;
					m=0;
				}
			}
			n=0;
		}
		}
	
}