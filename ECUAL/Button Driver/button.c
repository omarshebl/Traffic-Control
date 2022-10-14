#include "button.h"

void BUTTON_init(ST_pinPort_t pinPort) {
    DIO_init(pinPort, INPUT);
}

void BUTTON_read(ST_pinPort_t pinPort, EN_pinState_t *val) {
    DIO_read(pinPort, val);
}
