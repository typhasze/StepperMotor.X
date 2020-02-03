
#include <xc.h>
#include <stdio.h>
#include "Motor.h"
#include "amt.h"
#pragma config XINST = OFF
#pragma config FOSC = HS
#pragma config WDT = OFF
#define steps 100

// Going to left is Clockwise
// Going to Right is Anti Clockwise
// 0 = CW | 1 = AW
// Everything will be done in full-drive (highest torque)

void startMotor() {
    TRISD = 0;       // Setting PortD to Output
}

void stopMotor() {
    PORTD = 0x00;       // Clearing bits in Port D;
    TRISD = 0xFF;       // Setting PORTD to Input 
}

void spinMotor(int rate, int direction) {
    int i = 0;
    for (; i < steps; i++) {
        if (direction == 0 ){
            PORTD = 0b00000011;
            delay_ms(rate);
            PORTD = 0b00000110;
            delay_ms(rate);
            PORTD = 0b00001100;
            delay_ms(rate);
            PORTD = 0b00001001;
            delay_ms(rate);
            PORTD = 0b00000011;
            delay_ms(rate);
        }
        else if (direction == 1){
            PORTD = 0b00001001;
            delay_ms(rate);
            PORTD = 0b00001100;
            delay_ms(rate);
            PORTD = 0b00000110;
            delay_ms(rate);
            PORTD = 0b00000011;
            delay_ms(rate);
            PORTD = 0b00001001;
            delay_ms(rate);
        }
    }
} 

void oscillateMotor (int rate, int step) {
    int j = 0;
    
    // Going Clockwise direction
    for (; j < step ; j ++) {
            PORTD = 0b00000011;
            delay_ms(rate);
            PORTD = 0b00000110;
            delay_ms(rate);
            PORTD = 0b00001100;
            delay_ms(rate);
            PORTD = 0b00001001;
            delay_ms(rate);
            PORTD = 0b00000011;
            delay_ms(rate);
    }
    
    // Going Anticlockwise direction
    for (j = 0 ; j < step ; j++) {
            PORTD = 0b00001001;
            delay_ms(rate);
            PORTD = 0b00001100;
            delay_ms(rate);
            PORTD = 0b00000110;
            delay_ms(rate);
            PORTD = 0b00000011;
            delay_ms(rate);
            PORTD = 0b00001001;
            delay_ms(rate);
    }
}

void rinse (int cycle) {
    for (int i = 0; i < cycle; i++) {
        oscillateMotor(10, 100);
    }
}

void wash (int cycle) {
    for (int i = 0; i < cycle; i++) {
        spinMotor(5, 0); // Change CW / ACW to 1 /0
    }
}

void dry (int cycle) {
    for (int i = 0; i < cycle; i++) {
        spinMotor(10, 1);
    }
}

void normalWashMode() {
    // IDK how to start this
}

void quickWashMode () {
    // Wtf is this actually
}

void cottonWashMode () {
    // omg staph
}

void allergyWashMode () {
    // JUST STAPH
}

void turboDry(int cycle) {
     for (int i = 0; i < cycle; i++) {
        oscillateMotor(2, 120);
    }
}

