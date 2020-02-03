/* 
 * File: Motor.h
 * Author: Hafiz Kosno
 * Comments:
 * Revision history: 
 */

#ifndef MOTOR_H
#define	MOTOR_H


#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    void startMotor();  
    
    void stopMotor(); 
    
    void spinMotor(int rate, int direction);
    
    void oscillateMotor(int rate, int step); 
    
    void rinse (int cycle);
    
    void wash (int cycle);
    
    void dry (int cycle);
    
    void normalWashMode (); 
    
    void quickWashMode();
    
    void cottonWashMode();
    
    void allergyWashMode();
    
    void turboDry(int cycle); 

#ifdef	__cplusplus
}
#endif

#endif	/*MOTOR_H*/

