/* 
 * File: Motor.h
 * Author: Hafiz Kosno
 * Comments:
 * Revision history: 
 */

#ifndef     MOTOR_H
#define	MOTOR_H


#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    void startMotor();  
    
    void stopMotor(); 
    
    void oscillateMotor(int rate); 
        
    void spinMotor(int rate);
    
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
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

