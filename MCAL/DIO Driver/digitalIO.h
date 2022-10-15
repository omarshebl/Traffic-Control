/*
    This header file contains type definitons for enumeurators for (pin status, pin directions, ports available).
    Also conatins type definition for structure for including (pin, port) in one variable to ease use.
    Also conatins function defintions.
*/

#ifndef _DIO_H_
#define _DIO_H_
#include "../registers.h"

// enumerator for LOW or HIGH state of pins
typedef enum EN_pinState_t {
    LOW, HIGH
} EN_pinState_t;

// enumerator for INPUT or OUTPUT direction of pins
typedef enum EN_pinDirection_t {
    INPUT, OUTPUT
} EN_pinDirection_t;

// enumerator for ports available in ATmega328P
typedef enum EN_ports_t {
    PORT_B, PORT_C, PORT_D
} EN_ports_t;

// structure to ease use of accessing specific pin in ports available in ATmega328P
// so it would be send in one capsule
typedef struct ST_pinPort_t {
    uint8_t pin;
    EN_ports_t port;
} ST_pinPort_t;


// takes a ST_pinPort_t and a direction, then sets the registers accordingly
void DIO_init(ST_pinPort_t pinPort, EN_pinDirection_t dir);

// takes a ST_pinPort_t, then toggle the bit in the registers chosen
void DIO_toggle(ST_pinPort_t pinPort);

// takes a ST_pinPort_t and a value, then sets the registers accordingly
void DIO_write(ST_pinPort_t pinPort, EN_pinState_t val);

// takes a ST_pinPort_t and a value pointer, then reads the registers accordingly and returns the value in *val argument
void DIO_read(ST_pinPort_t pinPort, EN_pinState_t *val);

#endif