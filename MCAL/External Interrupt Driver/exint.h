/*
    This header file contains type definitons for enumeurators for (interrupts available, interrupts sense available).
    Also conatins macro function defintions.
    Also conatins function defintion.
*/

#ifndef _EXINT_H_
#define	_EXINT_H_
#include "../registers.h"

// Macro function use to set external interrupt bit in microcontroller
#define sei()  __asm__ __volatile__ ("sei" ::: "memory")
// Macro function use to clear external interrupt bit in microcontroller
#define cli()  __asm__ __volatile__ ("cli" ::: "memory")
// Macro function use to define interrupt service routine function
#define ISR(INT_VECT) void INT_VECT(void) __attribute__ ((signal, used)); \
void INT_VECT(void)

// Macro defintion for external interrupt 1 (PORT_D2), used to define which interrupt vector to use.
// Extracted from ATmega328P datasheet.
#define EXT_INT_0 __vector_1


// enumerator for INT0 or INT1, which are the available external interrupts in ATmega328P
typedef enum EN_interrupt_t {
    INT0, INT1
} EN_interrupt_t;

// enumerator for interrupt sense available for INT0 or INT1
typedef enum EN_intSense_t {
    LOW_LEVEL, HIGH_LEVEL, FALL_EDGE, RISE_EDGE
} EN_intSense_t;

// takes an EN_interrupt_t and EN_intSense_t, to initiate the interrupt specifed with the sense required,
// then modifies the registers accordingly
void INT_init(EN_interrupt_t inter, EN_intSense_t intSense);
#endif	/* EXINT_H */

