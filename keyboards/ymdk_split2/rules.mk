# MCU name
MCU = atmega32a

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = bootloadHID

# build options
BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = yes

BACKLIGHT_ENABLE = no

RGBLIGHT_ENABLE = no
#WS2812_DRIVER = i2c

SPLIT_KEYBOARD = yes

LAYOUTS = ortho_4x12

KEY_LOCK_ENABLE = yes

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend

OPT_DEFS = -DDEBUG_LEVEL=0
