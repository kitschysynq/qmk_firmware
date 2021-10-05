#include "lets_split.h"
#include "drivers/issi/is31fl3731-simple.h"

#ifdef SSD1306OLED
void led_set_kb(uint8_t usb_led) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
    led_set_user(usb_led);
}
#endif

const is31_led g_is31_leds[LED_DRIVER_LED_COUNT] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  LED address
 *   |  | */
    {0, C3_1}, {0, C4_1}, {0, C5_1}, {0, C6_1}, {0, C7_1}, {0, C8_1},
    {0, C3_2}, {0, C4_2}, {0, C5_2}, {0, C6_2}, {0, C7_2}, {0, C8_2},
    {0, C3_3}, {0, C3_4}, {0, C5_3}, {0, C6_3}, {0, C7_3}, {0, C8_3},
    {0, C4_3}, {0, C4_4}, {0, C5_4}, {0, C6_4}, {0, C7_4}, {0, C8_4},
};
// const is31_led g_is31_leds[LED_DRIVER_LED_COUNT] = {
// /* Refer to IS31 manual for these locations
//  *   driver
//  *   |  LED address
//  *   |  | */
//     {0, C3_1}, {0, C4_1}, {0, C5_1}, {0, C6_1}, {0, C7_1}, {0, C8_1},
//     {0, C3_2}, {0, C4_2}, {0, C5_2}, {0, C6_2}, {0, C7_2}, {0, C8_2},
//     {0, C3_3}, {0, C3_4}, {0, C5_3}, {0, C6_3}, {0, C7_3}, {0, C8_3},
//     {0, C4_3}, {0, C4_4}, {0, C5_4}, {0, C6_4}, {0, C7_4}, {0, C8_4},
//     {1, C3_1}, {1, C4_1}, {1, C5_1}, {1, C6_1}, {1, C7_1}, {1, C8_1},
//     {1, C3_2}, {1, C4_2}, {1, C5_2}, {1, C6_2}, {1, C7_2}, {1, C8_2},
//     {1, C3_3}, {1, C3_4}, {1, C5_3}, {1, C6_3}, {1, C7_3}, {1, C8_3},
//     {1, C4_4}, {1, C4_4}, {1, C5_4}, {1, C6_4}, {1, C7_4}, {0, C8_4},
// };


void matrix_init_kb(void) {

    // // green led on
    // DDRD |= (1<<5);
    // PORTD &= ~(1<<5);

    // // orange led on
    // DDRB |= (1<<0);
    // PORTB &= ~(1<<0);

	matrix_init_user();
};

