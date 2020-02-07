
#include <xc.h>
#include "amt.h" 
#include "Motor.h"
#include <stdio.h>
#include <string.h>

#pragma config XINST = OFF
#pragma config FOSC = HS
#pragma config WDT = OFF  

void main(void) {
    startMotor();
    while (1) {    
    //spinMotor(5, 0);
    //rinse(5);
    //turboDry(5);
    //oscillateMotor(50, 100);
    //wash(5);
    //dry(5);
    //normalWashMode();
    //quickWashMode();
    stopMotor();
    }
}
