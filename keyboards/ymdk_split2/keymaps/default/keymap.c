#include QMK_KEYBOARD_H

#define _NP 0
#define _BL 1

enum custom_keycodes {
  NP = SAFE_RANGE,
  BL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Qwerty */

  [_NP] = LAYOUT_ortho_6x8(
    KC_ESC,  KC_TAB,  KC_BSPC, MO(_BL), KC_ESC,  KC_TAB,  KC_BSPC, MO(_BL),
    KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
    KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
    KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    KC_P0,   KC_DOT,  KC_PDOT, KC_PENT, KC_P0,   KC_DOT,  KC_PDOT, KC_PENT,
  ),

  [_BL] = LAYOUT_ortho_6x8(
    _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______,
    _______, BL_ON,   _______, BL_INC,  _______, BL_ON,   _______, BL_INC,
    _______, BL_TOGG, _______, BL_INC,  _______, BL_TOGG, _______, BL_INC,
    _______, BL_OFF,  _______, BL_DEC,  _______, BL_OFF,  _______, BL_DEC,
    BL_BRTG, _______, _______, BL_DEC,  BL_BRTG, _______, _______, BL_DEC
  )

};
