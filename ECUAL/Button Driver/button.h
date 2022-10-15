/*
	This header file conatins function defintion.
*/

#ifndef _BUTTON_H_
#define	_BUTTON_H_
#include "../../MCAL/DIO Driver/digitalIO.c"

// takes ST_pinPort_t, then sets the pin chosen to be an input using specified registers
void BUTTON_init(ST_pinPort_t pinPort);
// takes ST_pinPort_t, and EN_pinState_t pointer, then reads the pin chosen using specified registers
void BUTTON_read(ST_pinPort_t pinPort, EN_pinState_t *val);

#endif	/* BUTTON_H */

