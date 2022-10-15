/*
	This header file conatins function defintion.
*/

#ifndef _LED_H_
#define	_LED_H_
#include "../../MCAL/DIO Driver/digitalIO.c"

// takes ST_pinPort_t, then sets the pin chosen to be an output using specified registers
void LED_init(ST_pinPort_t pinPort);
// takes ST_pinPort_t, then sets the pin to HIGH state using specified registers
void LED_on(ST_pinPort_t pinPort);
// takes ST_pinPort_t, then sets the pin to LOW state using specified registers
void LED_off(ST_pinPort_t pinPort);
// takes ST_pinPort_t, then toggle the pin's state using specified registers
void LED_tog(ST_pinPort_t pinPort);

#endif	/* LED_H */

