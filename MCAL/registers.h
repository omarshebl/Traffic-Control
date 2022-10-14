#ifndef _REGISTERS_H_
#define _REGISTERS_H_
#include "registers_map.h"
#include "bitop.h"

typedef unsigned char uint8_t;

// PORTB Registers

#define PORTB   *((volatile uint8_t*) PORTB_REG)
#define DDRB    *((volatile uint8_t*) DDRB_REG)
#define PINB    *((volatile uint8_t*) PINB_REG)

// ===============================================
// PORTC Registers

#define PORTC   *((volatile uint8_t*) PORTC_REG)
#define DDRC    *((volatile uint8_t*) DDRC_REG)
#define PINC    *((volatile uint8_t*) PINC_REG)

// ===============================================
// PORTD Registers

#define PORTD   *((volatile uint8_t*) PORTD_REG)
#define DDRD    *((volatile uint8_t*) DDRD_REG)
#define PIND    *((volatile uint8_t*) PIND_REG)

// ===============================================
// TIMER0 (8-bit) Registers

#define TCCR0A  *((volatile uint8_t*) TCCR0A_REG)
#define TCCR0B  *((volatile uint8_t*) TCCR0B_REG)
#define TCNT0   *((volatile uint8_t*) TCNT0_REG)
#define OCR0A   *((volatile uint8_t*) OCR0A_REG)
#define OCR0B   *((volatile uint8_t*) OCR0B_REG)
#define TIMSK0  *((volatile uint8_t*) TIMSK0_REG)
#define TIFR0   *((volatile uint8_t*) TIFR0_REG)

// ===============================================
// External Interrupt Registers

#define EICRA   *((volatile uint8_t*)  EICRA_REG)
#define EIMSK   *((volatile uint8_t*)  EIMSK_REG)  
#define EIFR    *((volatile uint8_t*)  EIFR_REG) 

// ===============================================

#endif