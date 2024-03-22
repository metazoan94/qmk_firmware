#include QMK_KEYBOARD_H

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



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.
       KC_F,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
  //|--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
  //|--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
  //|--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_SPC
                                      //`--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.
       KC_F,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
  //|--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
  //|--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
  //|--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_SPC
                                      //`--------------------------'

  )
};
  const is31fl3746a_led_t PROGMEM g_is31fl3746a_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |        G location
 *   |  |        |        B location
 *   |  |        |        | */
    {0, SW3_CS3, SW3_CS1, SW3_CS2}
};

