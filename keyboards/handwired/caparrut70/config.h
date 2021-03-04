#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    DIY
#define PRODUCT         caparrut70
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { F5, F6, F7, B1, B3, B2, B6, F0, C7, F1 }
#define MATRIX_COL_PINS { D5, B7, B5, B4, E6, D7, C6, D4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* number of backlight levels */
/*
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 0
#endif
*/
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#define FORCE_NKRO

#ifdef OLED_DRIVER_ENABLE
#    define OLED_DISPLAY_64x128
#    define OLED_TIMEOUT 60000
#   define OLED_FONT_H "keyboards/handwired/caparrut70/glcdfont.c"
#endif