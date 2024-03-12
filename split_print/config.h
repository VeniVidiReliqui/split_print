#ifndef CONFIG_H
#define CONFIG_H

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6E61
#define PRODUCT_ID      0x6060

#define DEVICE_VER      0x0002
#define MANUFACTURER    "VeniVidiReliqui"
#define PRODUCT         "splitprintv2"
#define DESCRIPTION     "keyboard"

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { B7, B3, B2, B1, B0 }
#define MATRIX_COL_PINS { D6, D7, F7, B6, B5, B4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* Mouse configuration */
//#define MK_3_SPEED                        // Enable constant cursor speeds
#define MK_KINETIC_SPEED                    // Enable quadratic cursor movement

#ifdef MK_3_SPEED
/* Constant cursor mouse settings */
#define MOUSEKEY_DELAY              5       // Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL           10      // Time between cursor movements in milliseconds
#define MOUSEKEY_MOVE_DELTA         5       // Step size
#define MOUSEKEY_MAX_SPEED          5       // Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX        100     // Time until maximum cursor speed is reached
/* Mouse Wheel settings */
#define MOUSEKEY_WHEEL_DELAY        10      // Delay between pressing a wheel key and wheel movement
#define MOUSEKEY_WHEEL_INTERVAL     80      // Time between wheel movements
#define MOUSEKEY_WHEEL_MAX_SPEED    8       // Maximum number of scroll steps per scroll action
#define MOUSEKEY_WHEEL_TIME_TO_MAX  40      // Time until maximum scroll speed is reached
#endif /*MK_3_SPEED*/

#ifdef MK_KINETIC_SPEED
/* Kinetic cursor mouse settings */
#define MOUSEKEY_DELAY                          5       // Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL                       10      // Time between cursor movements in milliseconds
#define MOUSEKEY_MOVE_DELTA                     2       // Step size
#define MOUSEKEY_INITIAL_SPEED                  100     // Iinitial speed of the cursor in pixel per second
#define MOUSEKEY_BASE_SPEED                     500     // Maximum cursor speed at which acceleration stops
#define MOUSEKEY_DECELERATED_SPEED              400     // Decelerated cursor speed
#define MOUSEKEY_ACCELERATED_SPEED              3000    // Accelerated cursor speed
/* Mouse wheel settings */
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS        16      // Initial number of movements of the mouse wheel
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS           32      // Maximum number of movements at which acceleration stops
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS    48      // Accelerated wheel movements
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS    8       // Decelerated wheel movements
#endif /*MK_KINETIC_SPEED*/

#define F_SCL                   400000L // default
#define USE_I2C
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT       1000
#define SPLIT_USB_TIMEOUT_POLL  10

/* Select hand configuration */
#define MASTER_LEFT // this is the default
// #define MASTER_RIGHT

#endif
