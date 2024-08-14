#include QMK_KEYBOARD_H


enum my_layers {
    _BASE = 0,
    _LOWER,
    _RAISE,
    _POINTER,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_4(
  //|-----------------------------------------------------------------------------------------------|                    |-----------------------------------------------------------------------------------------------|
     KC_LGUI,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPC,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     KC_LCTL,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_ESC,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
                     KC_Z,           KC_Z,           LT(1,KC_SPC),   LT(3,KC_MINS),  KC_D,                                KC_H,           LT(3,KC_EQL),   LT(2,KC_BSPC)
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|

  ),
  [1] = LAYOUT_split_3x6_4(
  //|-----------------------------------------------------------------------------------------------|                    |-----------------------------------------------------------------------------------------------|
     KC_LGUI,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPC,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     KC_LCTL,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_ESC,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
                     KC_Z,           KC_Z,           LT(1,KC_SPC),   LT(3,KC_MINS),  KC_D,                                KC_H,           LT(3,KC_EQL),   LT(2,KC_BSPC)
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|

  ),

  [1] = LAYOUT_split_3x6_4(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     _______,  _______, _______, _______, _______, _______,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //|---------------+---------------+---------------+---------------+---------------+--------|                    |---------------+---------------+---------------+---------------+---------------+--------|
     KC_ESC,    C(KC_A), C(KC_S), C(KC_D), C(KC_F), C(KC_G),                         KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,    KC_SCLN, KC_QUOT,
  //|---------------+---------------+---------------+---------------+---------------+--------|                    |---------------+---------------+---------------+---------------+---------------+--------|
     C(S(KC_Z)), C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B),                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ESC,
  //|---------------+---------------+---------------+---------------+---------------+---------------+--------|  |---------------+---------------+---------------+---------------+---------------+---------------+--------|
                    _______,    _______,    _______,   _______, _______,   _______,     _______,    _______
                        //`----------------------------------------'  `--------------------------'

  ),

  [2] = LAYOUT_split_3x6_4(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_TAB,  RGB_VAI, RGB_SAI, MU_NEXT, AU_NEXT, MU_TOGG,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //|---------------+---------------+---------------+---------------+---------------+--------|                    |---------------+---------------+---------------+---------------+---------------+--------|
     KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                     KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,    KC_SCLN, KC_QUOT,
  //|---------------+---------------+---------------+---------------+---------------+--------|                    |---------------+---------------+---------------+---------------+---------------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ESC,
  //|---------------+---------------+---------------+---------------+---------------+---------------+--------|  |---------------+---------------+---------------+---------------+---------------+---------------+--------|
                           KC_Z,    KC_Z,    _______,   _______,   KC_D,    KC_H,   _______,    KC_B
                        //`----------------------------------------'  `--------------------------'

  ),
  [3] = LAYOUT_split_3x6_4(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,  RGB_VAI, RGB_SAI, MU_NEXT, AU_NEXT, MU_TOGG,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  //|---------------+---------------+---------------+---------------+---------------+--------|                    |---------------+---------------+---------------+---------------+---------------+--------|
      KC_LSFT,    KC_A,    KC_S,    KC_D, QK_BOOT, RGB_TOG,                     KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,    KC_SCLN, KC_QUOT,
  //|---------------+---------------+---------------+---------------+---------------+--------|                    |---------------+---------------+---------------+---------------+---------------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ESC,
  //|---------------+---------------+---------------+---------------+---------------+---------------+--------|  |---------------+---------------+---------------+---------------+---------------+---------------+--------|
                           _______,    _______,   _______,   _______,   _______,    _______,   _______,    _______
                        //`----------------------------------------'  `--------------------------'

  ),

};

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//         [0] = LAYOUT_split_3x6_4(KC_Q, KC_W, KC_TAB, KC_Q, KC_W, RGB_TOG, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_ESC, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_RSFT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RCTL, KC_LSFT, MO(1), KC_SPC, KC_LNG2, KC_INT2, KC_ENT, MO(2), KC_BSPC),
//         [1] = LAYOUT_split_3x6_4(KC_Q, KC_W, KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_UP, KC_LPRN, KC_RPRN, KC_DEL, KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_0, KC_ENT, KC_UNDS, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, KC_FIND, KC_TRNS, KC_TRNS, KC_COMM,
// KC_DOT, KC_SLSH, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS),
//         [2] = LAYOUT_split_3x6_4(KC_Q, KC_W, KC_TRNS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, S(A(KC_LEFT)), KC_UP, S(A(KC_RGHT)), KC_TRNS, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_PGUP, KC_TRNS, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_PGDN, KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS),
//         [3] = LAYOUT_split_3x6_4(KC_Q, KC_W, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_MUSIC_TOGGLE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPI, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
// };

const uint8_t music_map[MATRIX_ROWS][MATRIX_COLS] = LAYOUT_split_3x6_4(
	17, 18, 19, 20, 21, 22,   23, 24, 25, 26, 27, 28,
	11, 12, 13, 14, 15, 16,   17, 18, 19, 20, 21, 22,
	5,  6,  7,  8,  9,  10,   11, 12, 13, 14, 15, 16,
	0,  1,  2,  3,  4,        5,  6,  7
);

#if defined(RGB_MATRIX_ENABLE)
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index < led_max && index != NO_LED &&
                keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                    rgb_matrix_set_color(index, RGB_GREEN);
                }
            }
        }
    }
    return false;
}
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT), ENCODER_CCW_CW(KC_RIGHT, KC_LEFT)  },
    [1] = { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT), ENCODER_CCW_CW(KC_RIGHT, KC_LEFT)  },
    [2] = { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT), ENCODER_CCW_CW(KC_RIGHT, KC_LEFT)  },
    [3] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),  ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  }
};
#endif
