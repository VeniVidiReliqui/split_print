#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6E61 // set to the nullbits VID because the BIT-C doesn't seem to boot without it...
#define PRODUCT_ID      0x6060

#define DEVICE_VER      0x0002
#define MANUFACTURER    VeniVidiReliqui
#define PRODUCT         splitprintv2
#define DESCRIPTION     keyboard

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { D7, C6, D4, D2, D3 }
#define MATRIX_COL_PINS { B6, B2, E6, B4, B5, B3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

//#define F_SCL                   400000L // default
#define USE_I2C
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT       1000
#define SPLIT_USB_TIMEOUT_POLL  10

/* Select hand configuration */
#define MASTER_LEFT // this is the default
// #define MASTER_RIGHT

#endif
