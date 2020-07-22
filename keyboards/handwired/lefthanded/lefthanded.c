#include "lefthanded.h"

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up

        // Turn on debug LED
        // DDRC |= (1<<7);
        // PORTC |= (1<<7);
	matrix_init_user();
}
