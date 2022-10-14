#include "timer.h"

void TIMER0_init() {
    CLR_REG(TCCR0A);
    CLR_REG(TCCR0B);
    CLR_REG(TCNT0);
}

void TIMER0_start(EN_prescalar_t prescalar) {
    CLR_REG(TCNT0);
    SET_MBIT(TCCR0B, 0x07, prescalar);
}

void TIMER0_stop() {
    SET_BIT(TIFR0, 0);
    SET_MBIT(TCCR0B, 0x07, 0x00);
}

void TIMER0_second(uint8_t sec) {
    uint8_t count = 0;
    uint8_t sec4 = sec*4;
    TIMER0_start(PRE_1024);
    while (count < sec4) {
        TCNT0 = 15;
        while(NCHK_BIT(TIFR0, 0));
        SET_BIT(TIFR0, 0);
        count++;
    }
    TIMER0_stop();
}
