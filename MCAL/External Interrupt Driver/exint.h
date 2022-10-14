 #ifndef _EXINT_H_
#define	_EXINT_H_
#include "../registers.h"


# define sei()  __asm__ __volatile__ ("sei" ::: "memory")
# define cli()  __asm__ __volatile__ ("cli" ::: "memory")

#define EXT_INT_0 __vector_1

#define ISR(INT_VECT) void INT_VECT(void) __attribute__ ((signal, used)); \
void INT_VECT(void)

typedef enum EN_interrupt_t {
    INT0, INT1
} EN_interrupt_t;

typedef enum EN_intSense_t {
    LOW_LEVEL, HIGH_LEVEL, FALL_EDGE, RISE_EDGE
} EN_intSense_t;

void INT_init(EN_interrupt_t inter, EN_intSense_t intSense);
#endif	/* EXINT_H */

