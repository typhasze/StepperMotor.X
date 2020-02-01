
#include <xc.h>
#include"amt.h"  
#include "Motor.h"
#include <stdio.h>
#include <string.h>

void main(void) {
    startMotor();
    spinMotor(5, "clockwise");
    oscillateMotor(5);
    rinse(5);
    wash(5);
    dry(10);
}
