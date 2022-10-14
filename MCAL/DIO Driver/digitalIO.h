#ifndef _DIO_H_
#define _DIO_H_
#include "../registers.h"

typedef enum EN_pinState_t {
    LOW, HIGH
} EN_pinState_t;

typedef enum EN_pinDirection_t {
    INPUT, OUTPUT
} EN_pinDirection_t;


typedef enum EN_ports_t {
    PORT_B, PORT_C, PORT_D
} EN_ports_t;

typedef struct ST_pinPort_t {
    uint8_t pin;
    EN_ports_t port;
} ST_pinPort_t;

void DIO_init(ST_pinPort_t pinPort, EN_pinDirection_t dir);

void DIO_toggle(ST_pinPort_t pinPort);

void DIO_write(ST_pinPort_t pinPort, EN_pinState_t val);

void DIO_read(ST_pinPort_t pinPort, EN_pinState_t *val);

#endif