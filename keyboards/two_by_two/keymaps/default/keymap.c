#include QMK_KEYBOARD_H
#include "matrix.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_ENTER, KC_KP_SLASH, \
    KC_SPACE, KC_KP_ASTERISK  \
  )
};