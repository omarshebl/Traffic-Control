/*
 * File:   main.c
 * Author: omarshebl
 *
 * Created on October 8, 2022, 6:42 PM
 */

// Including the application logic code to main.c
#include "Application/app.c"

int main(void) {
    // APP_init(), used to initate pin's direction & enable interrupts
    APP_init();
    // APP_main(), main loop for the main logic
    APP_main();
    return 0;
}

