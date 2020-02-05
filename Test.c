
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
    spinMotor(5, 0);
    rinse(100);
    turboDry(100);
    oscillateMotor(50, 100);
    rinse(5);
    wash(5);
    dry(10);
    normalWashMode();
    quickWashMode();
    stopMotor();
    }
}
