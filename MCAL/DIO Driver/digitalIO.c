/*
 * File:   dio.c
 * Author: omarshebl
 *
 * Created on October 13, 2022, 12:24 PM
 */
#ifndef _IO_C_
#define _IO_C_
#include "digitalIO.h"

void DIO_init(ST_pinPort_t pinPort, EN_pinDirection_t dir) {
    switch(pinPort.port) {
        case PORT_B:
            if (dir == INPUT) CLR_BIT(DDRB, pinPort.pin);
            else SET_BIT(DDRB, pinPort.pin);
            break;
        case PORT_C:
            if (dir == INPUT) CLR_BIT(DDRC, pinPort.pin);
            else SET_BIT(DDRC, pinPort.pin);          
            break;
        case PORT_D:
            if (dir == INPUT) CLR_BIT(DDRD, pinPort.pin);
            else SET_BIT(DDRD, pinPort.pin);           
            break;
    }
}

void DIO_toggle(ST_pinPort_t pinPort) {
    switch(pinPort.port) {
        case PORT_B:
            TOG_BIT(PORTB, pinPort.pin);
            break;
        case PORT_C:
            TOG_BIT(PORTC, pinPort.pin);
            break;
        case PORT_D:
            TOG_BIT(PORTD, pinPort.pin);
            break;
    }
}

void DIO_write(ST_pinPort_t pinPort, EN_pinState_t val) {
    switch(pinPort.port) {
        case PORT_B:
            if (val == LOW) CLR_BIT(PORTB, pinPort.pin);
            else SET_BIT(PORTB, pinPort.pin);
            break;
        case PORT_C:
            if (val == LOW) CLR_BIT(PORTC, pinPort.pin);
            else SET_BIT(PORTC, pinPort.pin);          
            break;
        case PORT_D:
            if (val == LOW) CLR_BIT(PORTD, pinPort.pin);
            else SET_BIT(PORTD, pinPort.pin);           
            break;
    }
}

void DIO_read(ST_pinPort_t pinPort, EN_pinState_t *val) {
    switch(pinPort.port) {
        case PORT_B:
            *val = READ_BIT(PINB, pinPort.pin);
            break;
        case PORT_C:
            *val = READ_BIT(PINC, pinPort.pin);
            break;
        case PORT_D:
            *val = READ_BIT(PIND, pinPort.pin);
            break;
    }
} 
#endif