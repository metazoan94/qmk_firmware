#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE 
led_config_t g_led_config = { 
{
  { 0, 1, 2, 3, 4, 5},
  { 6, 7, 8, 9, 10, 11},
  { NO_LED, 12, 13, 14, 15, 16},
  { NO_LED, NO_LED, NO_LED, 17, 18, 19},
  { 20, 21, 22, 23, 24, 25},
  { 26, 27, 28, 29, 30, 31},
  { NO_LED, 32, 33, 34, 35, 36},
  { NO_LED, NO_LED, NO_LED, 37, 38, 39}
}, 
{
{0,0}, {20,0}, {40,0}, {60,0}, {80,0}, {100,0},
{0,21}, {20,21}, {40,21}, {60,21}, {80,21}, {100,21},
{20,42}, {40,42}, {60,42}, {80,42}, {100,42},
{60,63}, {80,63}, {100,63},

{220,0}, {200,0}, {180,0}, {160,0}, {140,0}, {120,0},
{220,21}, {200,21}, {180,21}, {160,21}, {140,21}, {120,21}, 
{200,42}, {180,42}, {160,42}, {140,42}, {120,42}, 
{160,63}, {140,63}, {120,63}
}, 
{
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, 
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
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
