#include QMK_KEYBOARD_H


enum my_layers {
    _BASE = 0,
    _ED,
    _NV,
    _FT,
    _FN,
    _MS,
    _MI,
};
static const uint8_t
    // { 5,  4,  3,  2,  1,  0  }, // { 22, 23, 24, 25, 26, 27 },
    // { 6,  7,  8,  9,  10, 11 }, // { 33, 32, 31, 30, 29, 28 },
    // { 17, 16, 15, 14, 13, 12 }, // { 34, 35, 36, 37, 38, 39 },
    // {         21, 20, 19, 18 }, // { 40, 41,   ,   ,   ,    },
    LEFT_INDEX_FINGER_HOME   = 10, RIGHT_INDEX_FINGER_HOME   = 32,
    LEFT_MIDDLE_FINGER_HOME  = 9,  RIGHT_MIDDLE_FINGER_HOME  = 31,
    LEFT_RING_FINGER_HOME    = 8,  RIGHT_RING_FINGER_HOME    = 30,
    LEFT_PINKY_FINGER_HOME   = 7,  RIGHT_PINKY_FINGER_HOME   = 29,
    LEFT_THUMB_CLUSTER_HOME  = 19, RIGHT_THUMB_CLUSTER_HOME  = 41,
    LEFT_THUMB_CLUSTER_INNER = 20, RIGHT_THUMB_CLUSTER_INNER = 21,
    LEFT_THUMB_CLUSTER_OUTER = 18, RIGHT_THUMB_CLUSTER_OUTER = 40,
    LEFT_CAPS_LOCK           = 6,  RIGHT_CAPS_LOCK           = 28;


#define INDEX_FINGER_COLOR  RGB_YELLOW
#define MIDDLE_FINGER_COLOR RGB_GREEN
#define RING_FINGER_COLOR   RGB_CYAN
#define PINKY_FINGER_COLOR  RGB_MAGENTA
#define LEFT_THUMB_COLOR    RGB_RED
#define RIGHT_THUMB_COLOR   RGB_PURPLE
#define CAPS_LOCK_COLOR     RGB_BLUE
#define CAPS_WORD_COLOR     RGB_SPRINGGREEN

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_3x6_4(
  //|-----------------------------------------------------------------------------------------------|                    |-----------------------------------------------------------------------------------------------|
     KC_LGUI,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPC,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     LT(_NV,KC_ESC), LGUI_T(KC_A),   LALT_T(KC_S),   LSFT_T(KC_D),   LCTL_T(KC_F),   KC_G,                                KC_H,           RCTL_T(KC_J),   RSFT_T(KC_K),   LALT_T(KC_L),   RGUI_T(KC_SCLN),LT(_ED,KC_QUOT),
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_ESC,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
                     LT(_MI,KC_EQL), LT(_MS,KC_BSPC),LT(_ED,KC_SPC), LT(_FN,KC_ENT), KC_B,                                KC_H,           LT(_MS,KC_EQL), LT(_NV,KC_BSPC)
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
  ),
  [_ED] = LAYOUT_split_3x6_4(
  //|-----------------------------------------------------------------------------------------------|                    |-----------------------------------------------------------------------------------------------|
     KC_GRV,         KC_6,           KC_7,           KC_8,           KC_9,           KC_0,                                KC_PLUS,        KC_LPRN,        KC_LCBR,        KC_LBRC,        KC_BSLS,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     KC_DEL,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                KC_EQL,         RCTL_T(KC_J),   RSFT_T(KC_K),   LALT_T(KC_L),   RGUI_T(KC_SCLN),KC_UNDS,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     C(KC_Y),        C(KC_Z),        C(KC_X),        C(KC_C),        C(KC_V),        C(KC_F),                             KC_MINS,        KC_RPRN,        KC_RCBR,        KC_RBRC,        KC_PIPE,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
                     _______,        _______,        _______,        _______,        DT_PRNT,                             _______,        _______,        MO(_FT)
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|

  ),
  [_NV] = LAYOUT_split_3x6_4(
  //|-----------------------------------------------------------------------------------------------|                    |-----------------------------------------------------------------------------------------------|
     _______,        _______,        _______,        _______,        _______,        _______,                             _______,        KC_PGUP,        KC_UP,          KC_PGDN,        _______,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     _______,        LGUI_T(KC_A),   LALT_T(KC_S),   LSFT_T(KC_D),   LCTL_T(KC_F),   _______,                             KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       _______,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     _______,        _______,        _______,        _______,        _______,        _______,                             KC_INS,         _______,        _______,        _______,        _______,        _______,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
                     _______,        _______,        MO(_FT),          _______,        _______,                         _______,        _______,        _______
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|

  ),
  [_FT] = LAYOUT_split_3x6_4(
  //|-----------------------------------------------------------------------------------------------|                    |-----------------------------------------------------------------------------------------------|
     QK_BOOT,        XXXXXXX,        XXXXXXX,        XXXXXXX,        DT_PRNT,        CW_TOGG,                             XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     KC_LSFT,        RGB_TOG,        RGB_MOD,        RGB_VAI,        RGB_SAI,        RGB_TOG,                             XXXXXXX,        RCTL_T(KC_J),   RSFT_T(KC_K),   LALT_T(KC_L),   RGUI_T(KC_SCLN),XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     CK_DOWN,        CK_DOWN,        AU_NEXT,        AU_TOGG,        MU_NEXT,        MU_TOGG,                             XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
                     XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                             XXXXXXX,        XXXXXXX,        XXXXXXX
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|

  ),
  [_FN] = LAYOUT_split_3x6_4(
  //|-----------------------------------------------------------------------------------------------|                    |-----------------------------------------------------------------------------------------------|
     XXXXXXX,        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,                              XXXXXXX,        KC_LPRN,        KC_RPRN,        KC_WH_U,        KC_WH_D,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     XXXXXXX,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                               XXXXXXX,        RCTL_T(KC_J),   RSFT_T(KC_K),   LALT_T(KC_L),   RGUI_T(KC_SCLN),XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     XXXXXXX,        KC_F11,         KC_F12,         XXXXXXX,        XXXXXXX,        XXXXXXX,                             XXXXXXX,        KC_BTN5,        KC_BTN6,        KC_BTN7,        KC_BTN8,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
                     XXXXXXX,       XXXXXXX,         XXXXXXX,        XXXXXXX,        XXXXXXX,                             XXXXXXX,        XXXXXXX,        XXXXXXX
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
  ),
  [_MS] = LAYOUT_split_3x6_4(
  //|-----------------------------------------------------------------------------------------------|                    |-----------------------------------------------------------------------------------------------|
     XXXXXXX,        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,                              XXXXXXX,        KC_WH_L,        KC_WH_R,        KC_WH_U,        KC_WH_D,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     XXXXXXX,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                               XXXXXXX,        KC_BTN1,        KC_BTN2,        KC_BTN3,        KC_BTN4,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     XXXXXXX,        KC_F11,         KC_F12,         XXXXXXX,        XXXXXXX,        XXXXXXX,                             XXXXXXX,        KC_BTN5,        KC_BTN6,        KC_BTN7,        KC_BTN8,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
                     XXXXXXX,       XXXXXXX,         XXXXXXX,        XXXXXXX,        XXXXXXX,                             XXXXXXX,        XXXXXXX,        XXXXXXX
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
  ),
  [_MI] = LAYOUT_split_3x6_4(
  //|-----------------------------------------------------------------------------------------------|                    |-----------------------------------------------------------------------------------------------|
     XXXXXXX,        KC_WH_L,        KC_WH_R,        KC_WH_U,        KC_WH_D,        XXXXXXX,                             XXXXXXX,        XXXXXXX,        KC_MS_U,        XXXXXXX,        XXXXXXX,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     XXXXXXX,        KC_BTN4,        KC_BTN3,        KC_BTN2,        KC_BTN1,        XXXXXXX,                             XXXXXXX,        KC_MS_L,        KC_MS_D,        KC_MS_R,        XXXXXXX,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
     XXXXXXX,        KC_BTN8,        KC_BTN7,        KC_BTN6,        KC_BTN5,        XXXXXXX,                             XXXXXXX,        KC_ACL0,        KC_ACL1,        KC_ACL2,        XXXXXXX,        XXXXXXX,
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
                     XXXXXXX,       XXXXXXX,         XXXXXXX,        XXXXXXX,        XXXXXXX,                             XXXXXXX,        XXXXXXX,        XXXXXXX
  //|---------------+---------------+---------------+---------------+---------------+---------------|                    |---------------+---------------+---------------+---------------+---------------+---------------|
  )
};

const uint8_t music_map[MATRIX_ROWS][MATRIX_COLS] = LAYOUT_split_3x6_4(
	17, 18, 19, 20, 21, 22,   23, 24, 25, 26, 27, 28,
	11, 12, 13, 14, 15, 16,   17, 18, 19, 20, 21, 22,
	5,  6,  7,  8,  9,  10,   11, 12, 13, 14, 15, 16,
	0,  1,  2,  3,  4,        5,  6,  7
);

#if defined(RGB_MATRIX_ENABLE)
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

    uint8_t mods = get_mods();
    if (mods & MOD_MASK_CTRL) {
        rgb_matrix_set_color( LEFT_INDEX_FINGER_HOME, INDEX_FINGER_COLOR);
        rgb_matrix_set_color(RIGHT_INDEX_FINGER_HOME, INDEX_FINGER_COLOR);
    }
    else {
        rgb_matrix_set_color( LEFT_INDEX_FINGER_HOME, RGB_OFF);
        rgb_matrix_set_color(RIGHT_INDEX_FINGER_HOME, RGB_OFF);
    }

    if (mods & MOD_MASK_SHIFT) {
        rgb_matrix_set_color( LEFT_MIDDLE_FINGER_HOME, MIDDLE_FINGER_COLOR);
        rgb_matrix_set_color(RIGHT_MIDDLE_FINGER_HOME, MIDDLE_FINGER_COLOR);
    }
    else {
        rgb_matrix_set_color( LEFT_MIDDLE_FINGER_HOME, RGB_OFF);
        rgb_matrix_set_color(RIGHT_MIDDLE_FINGER_HOME, RGB_OFF);
    }

    if (mods & MOD_MASK_ALT) {
        rgb_matrix_set_color( LEFT_RING_FINGER_HOME, RING_FINGER_COLOR);
        rgb_matrix_set_color(RIGHT_RING_FINGER_HOME, RING_FINGER_COLOR);
    }
    else {
        rgb_matrix_set_color( LEFT_RING_FINGER_HOME, RGB_OFF);
        rgb_matrix_set_color(RIGHT_RING_FINGER_HOME, RGB_OFF);
    }

    if (mods & MOD_MASK_GUI) {
        rgb_matrix_set_color( LEFT_PINKY_FINGER_HOME, PINKY_FINGER_COLOR);
        rgb_matrix_set_color(RIGHT_PINKY_FINGER_HOME, PINKY_FINGER_COLOR);
    }
    else {
        rgb_matrix_set_color( LEFT_PINKY_FINGER_HOME, RGB_OFF);
        rgb_matrix_set_color(RIGHT_PINKY_FINGER_HOME, RGB_OFF);
    }

    switch (get_highest_layer(layer_state|default_layer_state)) {
        case _ED:
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_HOME,  LEFT_THUMB_COLOR);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_HOME,  LEFT_THUMB_COLOR);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_INNER, RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_INNER, RGB_OFF);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_OUTER, RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_OUTER, RGB_OFF);
            break;

        case _NV:
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_HOME,  RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_HOME,  RGB_OFF);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_INNER, LEFT_THUMB_COLOR);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_INNER, LEFT_THUMB_COLOR);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_OUTER, RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_OUTER, RGB_OFF);
            break;

        case _FT:
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_HOME,  RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_HOME,  RGB_OFF);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_INNER, RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_INNER, RGB_OFF);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_OUTER, LEFT_THUMB_COLOR);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_OUTER, LEFT_THUMB_COLOR);
            break;

        case _FN:
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_HOME,  RIGHT_THUMB_COLOR);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_HOME,  RIGHT_THUMB_COLOR);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_INNER, RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_INNER, RGB_OFF);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_OUTER, RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_OUTER, RGB_OFF);
            break;

        case _MS:
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_HOME,  RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_HOME,  RGB_OFF);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_INNER, RIGHT_THUMB_COLOR);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_INNER, RIGHT_THUMB_COLOR);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_OUTER, RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_OUTER, RGB_OFF);
            break;

        case _MI:
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_HOME,  RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_HOME,  RGB_OFF);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_INNER, RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_INNER, RGB_OFF);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_OUTER, RIGHT_THUMB_COLOR);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_OUTER, RIGHT_THUMB_COLOR);
            break;

        default:
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_HOME,  RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_HOME,  RGB_OFF);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_INNER, RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_INNER, RGB_OFF);
            rgb_matrix_set_color( LEFT_THUMB_CLUSTER_OUTER, RGB_OFF);
            rgb_matrix_set_color(RIGHT_THUMB_CLUSTER_OUTER, RGB_OFF);
            break;
    }

    if (host_keyboard_led_state().caps_lock) {
      rgb_matrix_set_color( LEFT_CAPS_LOCK, CAPS_LOCK_COLOR);
      rgb_matrix_set_color(RIGHT_CAPS_LOCK, CAPS_LOCK_COLOR);
    }
    else if (is_caps_word_on()) {
      rgb_matrix_set_color( LEFT_CAPS_LOCK, CAPS_WORD_COLOR);
      rgb_matrix_set_color(RIGHT_CAPS_LOCK, CAPS_WORD_COLOR);
    }
    else {
      rgb_matrix_set_color( LEFT_CAPS_LOCK, RGB_OFF);
      rgb_matrix_set_color(RIGHT_CAPS_LOCK, RGB_OFF);
    }

    // if (!HAS_FLAGS(g_led_config.flags[index], LED_FLAG_MODIFIER)) continue;
    // if (get_highest_layer(layer_state) > 0) {
    //     uint8_t layer = get_highest_layer(layer_state);

    //     for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
    //         for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
    //             uint8_t index = g_led_config.matrix_co[row][col];
    //             if (index < led_min || index >= led_max || index == NO_LED) continue;
    //             // if (!HAS_FLAGS(g_led_config.flags[index], LED_FLAG_INDICATOR)) continue;
    //             if (keymap_key_to_keycode(layer, (keypos_t){col, row}) > KC_TRNS) {
    //                 switch (layer) {
    //                     case _ED:
    //                         rgb_matrix_set_color(index, RGB_GREEN);
    //                         break;
    //                     case _NV:
    //                         rgb_matrix_set_color(index, RGB_RED);
    //                         break;
    //                     case _FT:
    //                         rgb_matrix_set_color(index, RGB_BLUE);
    //                         break;
    //                     case _FN:
    //                         rgb_matrix_set_color(index, RGB_ORANGE);
    //                         break;
    //                     case _MS:
    //                         rgb_matrix_set_color(index, RGB_PURPLE);
    //                         break;
    //                     case _MI:
    //                         rgb_matrix_set_color(index, RGB_PURPLE);
    //                         break;
    //                     default:
    //                         break;
    //                 }
    //             }
    //         }
    //     }
    // }
    return false;
}
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT), ENCODER_CCW_CW(KC_RIGHT, KC_LEFT)  },
    [_ED] = { ENCODER_CCW_CW(DT_UP, DT_DOWN), ENCODER_CCW_CW(KC_RIGHT, KC_LEFT)  },
    [_NV] = { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT), ENCODER_CCW_CW(KC_RIGHT, KC_LEFT)  },
    [_FT] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),  ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [_FN] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),  ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [_MS] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),  ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [_MI] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),  ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  }
};
#endif
