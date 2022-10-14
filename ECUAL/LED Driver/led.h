#ifndef _LED_H_
#define	_LED_H_

#include "../../MCAL/DIO Driver/digitalIO.c"

void LED_init(ST_pinPort_t pinPort);
void LED_on(ST_pinPort_t pinPort);
void LED_off(ST_pinPort_t pinPort);
void LED_tog(ST_pinPort_t pinPort);


#endif	/* LED_H */

