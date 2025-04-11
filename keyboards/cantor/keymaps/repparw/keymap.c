// Copyright 2025 Ulises Britos (@repparw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

// Home row mods aliases
#define GUI_A GUI_T(KC_A)
#define ALT_S ALT_T(KC_S)
#define CTL_D CTL_T(KC_D)
#define SFT_F SFT_T(KC_F)
#define SFT_J SFT_T(KC_J)
#define CTL_K CTL_T(KC_K)
#define ALT_L ALT_T(KC_L)
#define GUI_SC GUI_T(KC_SCLN)

#define OSM_SFT OSM(MOD_LSFT)
#define OSM_GUI OSM(MOD_LGUI)
#define OSM_RALT OSM(MOD_RALT) // TODO layer+alt?
#define NL_SPC LT(_NL, KC_SPC)
#define NL_BSPC LT(_NL, KC_BSPC)
#define FL_DEL LT(_FL, KC_DEL)

enum layer_names {
    _BL, // base
    _NL, // num
    _FL, // func
    _GL // game
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_split_3x6_3(
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,    KC_Y,    KC_U,     KC_I,     KC_O,     KC_P,    KC_BSPC,
        XXXXXXX,  GUI_A,    ALT_S,    CTL_D,    SFT_F,    KC_G,    KC_H,    SFT_J,    CTL_K,    ALT_L,    GUI_SC,  KC_QUOT,
        OSM_SFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,    KC_N,    KC_M,     KC_COMM,  KC_DOT,   KC_SLSH, OSM_RALT,
                            QK_GESC,  NL_SPC,   KC_TAB,             KC_ENT,  NL_BSPC,  FL_DEL
    ),
    [_NL] = LAYOUT_split_3x6_3(
        _______, XXXXXXX, KC_7,     KC_8,     KC_9,     KC_COMM,   XXXXXXX, XXXXXXX,  KC_LPRN,  KC_RPRN,  XXXXXXX, KC_BSPC,
        _______, XXXXXXX, KC_4,     KC_5,     KC_6,     KC_EQL,    KC_PMNS, KC_PEQL,  KC_LBRC,  KC_RBRC,  XXXXXXX, KC_BSLS,
        _______, XXXXXXX, KC_1,     KC_2,     KC_3,     _______,   KC_UNDS, KC_PLUS,  KC_LCBR,  KC_RCBR,  XXXXXXX, _______,
                            KC_DOT, KC_0,  _______,             _______, _______, _______
    ),
    [_FL] = LAYOUT_split_3x6_3(
        XXXXXXX, KC_F12,  KC_F7,    KC_F8,    KC_F9,    XXXXXXX,    KC_HOME, KC_PGDN,  KC_PGUP,  KC_END,   KC_PSCR, XXXXXXX,
        _______, KC_F11,  KC_F4,    KC_F5,    KC_F6,    XXXXXXX,    KC_LEFT, KC_DOWN,  KC_UP,    KC_RGHT,  XXXXXXX, XXXXXXX,
        _______, KC_F10,  KC_F1,    KC_F2,    KC_F3,    XXXXXXX,    XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, TG(_GL),
                            _______, _______,  _______,             _______, _______, _______
    ),
    [_GL] = LAYOUT_split_3x6_3(
        _______, _______, _______,  _______,  _______,  _______,   _______, _______,  _______,  _______,  _______, _______,
        KC_LCTL, KC_A,    KC_S,     KC_D,     KC_F,     KC_G,      _______, KC_J,     KC_K,     KC_L,     KC_SCLN, _______,
        KC_LSFT, _______, _______,  _______,  _______,  _______,   _______, _______,  _______,  _______,  _______, _______,
                            _______, KC_SPC,   _______,             _______, _______, KC_LALT
    )
};

#ifdef CHORDAL_HOLD
__attribute__((weak)) const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_split_3x6_3(
        'L',     'L',     'L',     'L',     'L',      'L',       'R',     'R',     'R',     'R',     'R',      'R',
        '*',     'L',     'L',     'L',     'L',      'L',       'R',     'R',     'R',     'R',     'R',      'R',
        'L',     'L',     'L',     'L',     'L',      'L',       'R',     'R',     'R',     'R',     'R',      'R',
                          'L',     'L',      'L',                  'R',     'R',     'R'
    );
#endif
