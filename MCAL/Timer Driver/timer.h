#ifndef TIMER_H
#define	TIMER_H
#include "../registers.h"

typedef enum EN_prescalar_t {
    PRE_NO=1, PRE_8=2, PRE_64=3, PRE_256=4, PRE_1024=5, PRE_EX_F=6, PRE_EX_R=7
} EN_prescalar_t;

void TIMER0_init();
void TIMER0_start(EN_prescalar_t prescalar);
void TIMER0_stop();

void TIMER0_second(uint8_t sec);
#endif	/* TIMER_H */

