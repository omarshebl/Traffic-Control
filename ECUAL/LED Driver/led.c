#include "led.h"

void LED_init(ST_pinPort_t pinPort) {
    DIO_init(pinPort, OUTPUT);
}

void LED_on(ST_pinPort_t pinPort) {
    DIO_write(pinPort, HIGH);
}

void LED_off(ST_pinPort_t pinPort) {
    DIO_write(pinPort, LOW);
}

void LED_tog(ST_pinPort_t pinPort) {
    DIO_toggle(pinPort);
}