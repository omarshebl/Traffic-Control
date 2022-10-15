/*
    This header file contains type definiton for enumeurator for (prescalars available).
    Also conatins function defintion.
*/

#ifndef _TIMER_H_
#define	_TIMER_H_
#include "../registers.h"

// enumerator for available prescalars for TIMER0 in ATmega328P
typedef enum EN_prescalar_t {
    PRE_NO=1, PRE_8=2, PRE_64=3, PRE_256=4, PRE_1024=5, PRE_EX_F=6, PRE_EX_R=7
} EN_prescalar_t;

// used to set the TIMER0 registers before intiating a timer
void TIMER0_init();
// takes a EN_prescalar_t, to start TIMER0 using prescalar chosen
void TIMER0_start(EN_prescalar_t prescalar);
// stops TIMER0 by clearing specific registers.
void TIMER0_stop();
// takes an int, to start a timer by using the functions above.
void TIMER0_second(uint8_t sec);

#endif	/* TIMER_H */

