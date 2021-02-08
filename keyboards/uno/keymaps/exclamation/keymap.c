/* Copyright 2020 Snipeye
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum uno_keycode
{
  UNO = SAFE_RANGE
};

static uint16_t pressTimer = 0xFFFF;
#define CUSTOM_LONGPRESS 1000
#define CUSTOM_LONGERPRESS 5000
#define CUSTOM_STRING "I can put a whole buncha text in here and type it all with a single keypress."
#define RESET_LENGTH 3000
const uint8_t PROGMEM RGBLED_RAINBOW_MOOD_INTERVALS[] = { 10, 25, 50 };

// char stringToSend[2] = "a";
// char maxLetter = 'z';

// uint8_t presetCounter = 0;

// #define COUNTER X_A


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      [0] = LAYOUT(
            UNO
          )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case UNO:
            if (record->event.pressed) {
                pressTimer = timer_read();
            } else {
                uint16_t timeElapsed = timer_elapsed(pressTimer);
                if (timeElapsed < CUSTOM_LONGPRESS) {
                    // Normal press.  We're going to send the current letter and increment the counter.
                    SEND_STRING("!");
                    //rgblight_step_noeeprom();
                } else if (timeElapsed < CUSTOM_LONGERPRESS) {
                    rgblight_toggle_noeeprom();
                } else {
                    reset_keyboard();
                }
                break;
            }
        break;
    }
    return false;
}

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
    rgblight_sethsv_noeeprom(HSV_PINK);
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
