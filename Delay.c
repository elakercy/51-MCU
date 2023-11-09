#include <intrins.h>
void Delay(int x)	//@12.000MHz
{
	while(x--)
	{
		_nop_();
	  _nop_();
	  _nop_();
	  _nop_();
	}
}
