#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = {
{
  { 0, 1, 2, 3, 4, 5},
  { 6, 7, 8, 9, 10, 11},
  { 12, 13, 14, 15, 16, 17},
  { NO_LED, NO_LED, 18, 19, 20, NO_LED},
  { 21, 22, 23, 24, 25, 26},
  { 27, 28, 29, 30, 31, 32},
  { 33, 34, 35, 36, 37, 38},
  { NO_LED, NO_LED, 39, 40, 41, NO_LED}
},
{
{0,0}, {20,0}, {40,0}, {60,0}, {80,0}, {100,0},
{0,21}, {20,21}, {40,21}, {60,21}, {80,21}, {100,21},
{0,42}, {20,42}, {40,42}, {60,42}, {80,42}, {100,42},
{60,63}, {80,63}, {100,63},

{220,0}, {200,0}, {180,0}, {160,0}, {140,0}, {120,0},
{220,21}, {200,21}, {180,21}, {160,21}, {140,21}, {120,21},
{220,42}, {200,42}, {180,42}, {160,42}, {140,42}, {120,42},
{160,63}, {140,63}, {120,63}
},
{
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
}
};
#endif

