#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE 
const is31fl3746a_led_t PROGMEM g_is31fl3746a_leds[RGB_MATRIX_LED_COUNT] = {
    {0, SW4_CS6, SW4_CS13, SW4_CS18},
    {0, SW4_CS5, SW4_CS12, SW4_CS17},
    {0, SW4_CS4, SW4_CS11, SW4_CS16},
    {0, SW4_CS3, SW4_CS9, SW4_CS15},
    {0, SW4_CS2, SW4_CS8, SW4_CS14},
    {0, SW4_CS1, SW4_CS7, SW4_CS13},

    {0, SW3_CS6, SW3_CS13, SW3_CS18},
    {0, SW3_CS5, SW3_CS12, SW3_CS17},
    {0, SW3_CS4, SW3_CS11, SW3_CS16},
    {0, SW3_CS3, SW3_CS9, SW3_CS15},
    {0, SW3_CS2, SW3_CS8, SW3_CS14},
    {0, SW3_CS1, SW3_CS7, SW3_CS13},

    {0, SW2_CS6, SW2_CS13, SW2_CS18},
    {0, SW2_CS5, SW2_CS12, SW2_CS17},
    {0, SW2_CS4, SW2_CS11, SW2_CS16},
    {0, SW2_CS3, SW2_CS9, SW2_CS15},
    {0, SW2_CS2, SW2_CS8, SW2_CS14},
    {0, SW2_CS1, SW2_CS7, SW2_CS13},

    {0, SW1_CS3, SW1_CS9, SW1_CS15},
    {0, SW1_CS2, SW1_CS8, SW1_CS14},
    {0, SW1_CS1, SW1_CS7, SW1_CS13},

    {0, SW4_CS6, SW4_CS13, SW4_CS18},
    {0, SW4_CS5, SW4_CS12, SW4_CS17},
    {0, SW4_CS4, SW4_CS11, SW4_CS16},
    {0, SW4_CS3, SW4_CS9, SW4_CS15},
    {0, SW4_CS2, SW4_CS8, SW4_CS14},
    {0, SW4_CS1, SW4_CS7, SW4_CS13},

    {0, SW3_CS6, SW3_CS13, SW3_CS18},
    {0, SW3_CS5, SW3_CS12, SW3_CS17},
    {0, SW3_CS4, SW3_CS11, SW3_CS16},
    {0, SW3_CS3, SW3_CS9, SW3_CS15},
    {0, SW3_CS2, SW3_CS8, SW3_CS14},
    {0, SW3_CS1, SW3_CS7, SW3_CS13},

    {0, SW2_CS6, SW2_CS13, SW2_CS18},
    {0, SW2_CS5, SW2_CS12, SW2_CS17},
    {0, SW2_CS4, SW2_CS11, SW2_CS16},
    {0, SW2_CS3, SW2_CS9, SW2_CS15},
    {0, SW2_CS2, SW2_CS8, SW2_CS14},
    {0, SW2_CS1, SW2_CS7, SW2_CS13},

    {0, SW1_CS3, SW1_CS9, SW1_CS15},
    {0, SW1_CS2, SW1_CS8, SW1_CS14},
    {0, SW1_CS1, SW1_CS7, SW1_CS13},
};
led_config_t g_led_config = { 
{
  { 0, 1, 2, 3, 4, 5},
  { 6, 7, 8, 9, 10, 11},
  { 12, 13, 14, 15, 16, 17},
  { NO_LED, NO_LED, NO_LED, 18, 19, 20},
  { 21, 22, 23, 24, 25, 26},
  { 27, 28, 29, 30, 31, 32},
  { 33, 34, 35, 36, 37, 38},
  { NO_LED, NO_LED, NO_LED, 39, 40, 41}
}, 
{
{0,0}, {20,0}, {40,0}, {60,0}, {80,0}, {100,0},
{0,21}, {20,21}, {40,21}, {60,21}, {80,21}, {100,21},
{0,42}, {20,42}, {40,42}, {60,42}, {80,42}, {100,42},
{60,63}, {80,63}, {100,63},

{120,0}, {140,0}, {160,0}, {180,0}, {200,0}, {220,0},
{120,21}, {140,21}, {160,21}, {180,21}, {200,21}, {220,21},
{120,42}, {140,42}, {160,42}, {180,42}, {200,42}, {220,42},
{120,63}, {140,63}, {160,63}
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

#ifdef OLED_ENABLE
__attribute__((weak)) void oled_render_logo(void) {
    // clang-format off
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    // clang-format on
    oled_write_P(crkbd_logo, false);
}
bool oled_task_user(void) {
    oled_write_P(PSTR("oled_task_user"), false);
    oled_render_logo();
    // Host Keyboard LED Status
    // led_t led_state = host_keyboard_led_state();
    // oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    // oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    // oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
// bool oled_task_kb(void) {
//     oled_write_P(PSTR("oled_task_kb"), false);
//     oled_render_logo();
//     return false;
// }
#endif