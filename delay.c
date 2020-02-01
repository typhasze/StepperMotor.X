#include <xc.h>
#define _XTAL_FREQ 25000000

void MSDelay(int x);
void delay_us(int x);

void MSDelay(int x) 
{
    for (int i = 0; i < x; i++) 
	{
        __delay_ms(1);
    }
}

void delay_us(int x) 
{
    for (int i = 0; i < x; i++) 
	{
        __delay_us(1);
    }
}


