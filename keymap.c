#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, OSM(MOD_LSFT), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, OSM(MOD_LGUI), OSL(1), LSFT_T(KC_SPC), KC_ENT, OSL(2), OSM(MOD_RALT)),
    [1] = LAYOUT_split_3x6_3(KC_GRV, KC_NO, KC_7, KC_8, KC_9, KC_COMM, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_BSPC, KC_TRNS, OSM(MOD_LALT), KC_4, KC_5, KC_6, KC_DOT, KC_PMNS, KC_PEQL, KC_LBRC, KC_RBRC, KC_NO, KC_BSLS, KC_TRNS, KC_NO, KC_1, KC_2, KC_3, KC_0, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [2] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F12, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_PSCR, KC_DEL, KC_TRNS, KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_F1, KC_F2, KC_F3, KC_F10, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


