#include "exint.h"

void INT_init(EN_interrupt_t inter, EN_intSense_t intSense) {
    switch (inter) {
        case INT0:
            SET_MBIT(EICRA, 0x03, intSense);
            SET_BIT(EIMSK, 0);
            break;
        case INT1:
            SET_MBIT(EICRA, 0x06, intSense);
            SET_BIT(EIMSK, 1);
            break;
    }
}