#include "app.h"
#include "../MCAL/External Interrupt Driver/exint.c"
#include "../MCAL/Timer Driver/timer.c"
#include "../ECUAL/LED Driver/led.c"
#include "../ECUAL/Button Driver/button.c"

ST_pinPort_t CAR_RED_LED = {0, PORT_C};
ST_pinPort_t CAR_YELLOW_LED = {1, PORT_C};
ST_pinPort_t CAR_GREEN_LED = {2, PORT_C};
ST_pinPort_t HUMAN_RED_LED = {0, PORT_B};
ST_pinPort_t HUMAN_YELLOW_LED = {1, PORT_B};
ST_pinPort_t HUMAN_GREEN_LED = {2, PORT_B};

ST_pinPort_t HUMAN_BUTTON = {2, PORT_D };

uint8_t ledstate = 0;

void APP_init() {
    LED_init(CAR_RED_LED);
    LED_init(CAR_YELLOW_LED);
    LED_init(CAR_GREEN_LED);
    LED_init(HUMAN_RED_LED);
    LED_init(HUMAN_YELLOW_LED);
    LED_init(HUMAN_GREEN_LED);
    
    BUTTON_init(HUMAN_BUTTON);
    
    sei();
    INT_init(INT0, RISE_EDGE);
}

void APP_main() {
    
    while (1) {
        
    }
}

ISR(EXT_INT_0) {
    if(ledstate < 3) ledstate++;
    else ledstate=0;
}