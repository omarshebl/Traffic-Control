/*
This header file contains the registers physical address, extracted from ATmega328P datasheet.
*/

#ifndef _REGISTERS_MAP_H_
#define _REGISTERS_MAP_H_

#define PORTB_REG   0x25
#define DDRB_REG    0x24
#define PINB_REG    0x23

#define PORTC_REG   0x28
#define DDRC_REG    0x27
#define PINC_REG    0x26

#define PORTD_REG   0x2B
#define DDRD_REG    0x2A
#define PIND_REG    0x29

#define TCCR0A_REG  0x44
#define TCCR0B_REG  0x45
#define TCNT0_REG   0x46
#define OCR0A_REG   0x47
#define OCR0B_REG   0x48
#define TIMSK0_REG  0x6E
#define TIFR0_REG   0x35

#define EICRA_REG   0x69
#define EIMSK_REG   0x3D
#define EIFR_REG    0x3C

#endif