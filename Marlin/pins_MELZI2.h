/**
 * Melzi 2.0 with ATmega1284 pin assignments
 */

#undef MOTHERBOARD
#define MOTHERBOARD BOARD_MELZI
#define SANGUINOLOLU_V_1_2

#if defined(__AVR_ATmega1284P__)
  #define LARGE_FLASH true
#endif

#include "pins_SANGUINOLOLU_11.h"
