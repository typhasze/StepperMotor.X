
#include <xc.h>
#include <stdio.h>
#include "Motor.h"
#include "amt.h"
#pragma config XINST = OFF
#pragma config FOSC = HS
#pragma config WDT = OFF
#define steps 250

// Going to left is Clockwise
// Going to Right is Anti Clockwise
// Everything will be done in full-drive (highest torque)
//void startMotor();
//void stopMotor();
//void spinMotor(int rate, char direction[]);
//void oscillateMotor(int rate);
//void rinse (int cycle);
//void wash (int cycle);
//void dry (int cycle);

void startMotor() {
    TRISD = 0x00;       // Setting PortD to Output
}

void stopMotor() {
    PORTD = 0x00;       // Clearing bits in Port D;
    TRISD = 0xFF;       // Setting PORTD to Input 
}

void spinMotor(int rate, char direction[]) {
    for (int i = 0; i < steps; i++) {
        if (direction == "anti_clockwise"){
            PORTD = 0b00000011;
            delay_us(rate);
            PORTD = 0b00000110;
            delay_us(rate);
            PORTD = 0b00001100;
            delay_us(rate);
            PORTD = 0b00001001;
            delay_us(rate);
            PORTD = 0b00000011;
            delay_us(rate);
        }
        if (direction == "clockwise"){
            PORTD = 0b00001001;
            delay_us(rate);
            PORTD = 0b00001100;
            delay_us(rate);
            PORTD = 0b00000110;
            delay_us(rate);
            PORTD = 0b00000011;
            delay_us(rate);
            PORTD = 0b00001001;
            delay_us(rate);
        }
    }
} //clockwise or anti_clockwise

void oscillateMotor (int rate) {
               
            // Anti-clockwise
            PORTD = 0b00000011;
            delay_us(rate);
            PORTD = 0b00000110;
            delay_us(rate);
            PORTD = 0b00001100;
            delay_us(rate);
            PORTD = 0b00001001;
            delay_us(rate);
            PORTD = 0b00000011;
            delay_us(rate);
        
            //Clockwise
            PORTD = 0b00001001;
            delay_us(rate);
            PORTD = 0b00001100;
            delay_us(rate);
            PORTD = 0b00000110;
            delay_us(rate);
            PORTD = 0b00000011;
            delay_us(rate);
            PORTD = 0b00001001;
            delay_us(rate);
    
}

void rinse (int cycle) {
    for (int i = 0; i < cycle; i++) {
        oscillateMotor(50);
    }
}

void wash (int cycle) {
    for (int i = 0; i < cycle; i++) {
        spinMotor(5, "clockwise");
    }
}

void dry (int cycle) {
    for (int i = 0; i < cycle; i++) {
        spinMotor(10, "anti_clockwise");
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
    // i think this one just repeat of dry :pepethink:
}

