#ifndef _BUTTON_H_
#define	_BUTTON_H_
#include "../../MCAL/DIO Driver/digitalIO.c"

void BUTTON_init(ST_pinPort_t pinPort);
void BUTTON_read(ST_pinPort_t pinPort, EN_pinState_t *val);

#endif	/* BUTTON_H */

