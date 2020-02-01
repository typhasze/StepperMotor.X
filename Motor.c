
#include <xc.h>
#include <stdio.h>
#include "Motor.h"
#include "amt.h"
#pragma config XINST = OFF
#pragma config FOSC = HS
#pragma config WDT = OFF

// Going to left is Clockwise
// Going to Right is Anti Clockwise

void startMotor() {
    TRISD = 0x00;       // Setting PortD to Output
}

void stopMotor() {
    PORTD = 0x00;      // Clearing bits in Port D;
    TRISD = 0xFF;       // Setting PORTD to Input 
}

void spinMotor(int rate) {
    
}
void main(void) {
    //Configure PORTD as output
    TRISD = 0;

    while (1) {
        
        for (int j = 0; j < 100; j++) {
            PORTDbits.RD0 = 1;
            for (; ;) {
                delay_us(50);
                PORTD = PORTD << 1;
                if (PORTD == 0x08) PORTDbits.RD0 = 1;
            }
        }
//        for (int j = 0; j < 100; j++) {
//            PORTDbits.RD3 = 1;
//            for (int i = 0; i < 4; i++) {
//                delay_us(50);
//                PORTD = PORTD >> 1;
//            }
//        }
    }
}