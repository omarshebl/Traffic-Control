/*
This header file contains the registers definitions to access said registers, using registers_map.h
*/

#ifndef _REGISTERS_H_
#define _REGISTERS_H_
#include "registers_map.h"
#include "bitop.h"

typedef unsigned char uint8_t;

// PORTB Registers

// Port B Data Register
#define PORTB   *((volatile uint8_t*) PORTB_REG)
// Port B Data Direction Register
#define DDRB    *((volatile uint8_t*) DDRB_REG)
// Port B Input Pins Address
#define PINB    *((volatile uint8_t*) PINB_REG)

// ===============================================
// PORTC Registers

// Port C Data Register
#define PORTC   *((volatile uint8_t*) PORTC_REG)
// Port C Data Direction Register
#define DDRC    *((volatile uint8_t*) DDRC_REG)
// Port C Input Pins Address
#define PINC    *((volatile uint8_t*) PINC_REG)

// ===============================================
// PORTD Registers

// Port D Data Register
#define PORTD   *((volatile uint8_t*) PORTD_REG)
// Port D Data Direction Register
#define DDRD    *((volatile uint8_t*) DDRD_REG)
// Port D Input Pins Address
#define PIND    *((volatile uint8_t*) PIND_REG)

// ===============================================
// TIMER0 (8-bit) Registers

// Timer/Counter Control Register A
#define TCCR0A  *((volatile uint8_t*) TCCR0A_REG)
// Timer/Counter Control Register B
#define TCCR0B  *((volatile uint8_t*) TCCR0B_REG)
// Timer/Counter Register
#define TCNT0   *((volatile uint8_t*) TCNT0_REG)
// Output Compare Register A
#define OCR0A   *((volatile uint8_t*) OCR0A_REG)
// Output Compare Register B
#define OCR0B   *((volatile uint8_t*) OCR0B_REG)
// Timer/Counter Interrupet Mask Register
#define TIMSK0  *((volatile uint8_t*) TIMSK0_REG)
// Timer/Counter 0 Interrupt Flag Register
#define TIFR0   *((volatile uint8_t*) TIFR0_REG)

// ===============================================
// External Interrupt Registers

// External Interrupt Control Register A
#define EICRA   *((volatile uint8_t*)  EICRA_REG)
// External Interrupt Mask Register
#define EIMSK   *((volatile uint8_t*)  EIMSK_REG)
// External Interrupt Flag Register
#define EIFR    *((volatile uint8_t*)  EIFR_REG)

// ===============================================

#endif