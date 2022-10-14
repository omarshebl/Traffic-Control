/*
 * File:   main.c
 * Author: omarshebl
 *
 * Created on October 8, 2022, 6:42 PM
 */

#include "MCAL/External Interrupt Driver/exint.c"
#include "MCAL/Timer Driver/timer.c"
#include "ECUAL/LED Driver/led.c"
#include "ECUAL/Button Driver/button.c"

ST_pinPort_t CAR_RED_LED = {0, PORT_C};
ST_pinPort_t CAR_YELLOW_LED = {1, PORT_C};
ST_pinPort_t CAR_GREEN_LED = {2, PORT_C};

ST_pinPort_t HUMAN_RED_LED = {0, PORT_B};
ST_pinPort_t HUMAN_YELLOW_LED = {1, PORT_B};
ST_pinPort_t HUMAN_GREEN_LED = {2, PORT_B};

ST_pinPort_t HUMAN_BUTTON = {2, PORT_D };
    
int main(void) {
    LED_init(CAR_RED_LED);
    LED_init(CAR_YELLOW_LED);
    LED_init(CAR_GREEN_LED);
    LED_init(HUMAN_RED_LED);
    LED_init(HUMAN_YELLOW_LED);
    LED_init(HUMAN_GREEN_LED);

    BUTTON_init(HUMAN_BUTTON);
    
    while (1) {
        LED_tog(CAR_RED_LED);
        TIMER0_second(5);
    }
    
    return 0;
}
