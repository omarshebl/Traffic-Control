/*
 * File:   main.c
 * Author: omarshebl
 *
 * Created on October 8, 2022, 6:42 PM
 */


#include <avr/io.h>


int main(void) {
    /* Replace with your application code */
    DDRB |= (1<<0);

    while (1) {
        PORTB |= (1<<0);
    }
}
