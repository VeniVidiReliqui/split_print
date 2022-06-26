#include QMK_KEYBOARD_H

#include "split_print.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Standard QWERTY layer
	KEYMAP(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,     KC_9,    KC_0,    KC_BSPC, \
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    KC_BSLS, \
		MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN, KC_ENT, \
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT, \
		KC_LCTL, MO(3),   KC_NO,   KC_LALT, KC_RGUI, KC_SPC,       KC_SPC,  KC_BSPC, KC_LBRC,  KC_RBRC, KC_GRV,  TG(3) \
        ),

    // Pok3r inspired function layer
	KEYMAP(
		KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_DEL, \
		KC_TAB,  KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,   KC_NO,        KC_TILD, KC_PGUP, KC_UP,    KC_PGDN, KC_MINS, KC_F11, \
		MO(1),   KC_NO,   KC_VOLD, KC_VOLU, KC_MUTE, KC_NO,        KC_HOME, KC_LEFT, KC_DOWN,  KC_RGHT, KC_EQL,  KC_F12, \
		KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_END,  KC_QUOT, KC_DQUO,  KC_DOT,  KC_SLSH, KC_RSFT, \
		KC_LCTL, KC_NO,   KC_NO,   KC_LALT, KC_RGUI, KC_SPC,       KC_SPC,  KC_DEL,  KC_LBRC,  KC_RBRC, KC_GRV,  KC_RCTL \
        ),

    // Gaming layer
	KEYMAP(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,     KC_9,    KC_0,    KC_BSPC, \
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    KC_BSLS, \
		KC_O,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN, KC_ENT, \
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT, \
		KC_LCTL, KC_M,    KC_I,    KC_F1,   KC_SPC,  KC_H,         KC_SPC,  KC_UP,   KC_DOWN,  KC_LEFT, KC_RGHT,  TG(2) \
        ),

    // Right-half numpad layer
	KEYMAP(
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RESET,        KC_ESC,  KC_TAB,  KC_SLSH,  KC_ASTR, KC_DEL,  KC_BSPC, \
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_LPRN, KC_7,    KC_8,     KC_9,    KC_MINS, KC_BSLS, \
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_RPRN, KC_4,    KC_5,     KC_6,    KC_PLUS, KC_ENT, \
		KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_LBRC, KC_1,    KC_2,     KC_3,    KC_EQL,  KC_RSFT, \
		KC_NO,   MO(3),   TG(2),   KC_NO,   KC_NO,   KC_NO,        KC_RBRC, KC_0,    KC_0,     KC_DOT,  KC_PENT, TG(3) \
        )

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}
