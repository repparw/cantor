// Copyright 2025 Ulises Britos (@repparw)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif
// Home row mods aliases
#define LGUI_A LGUI_T(KC_A)
#define LALT_S LALT_T(KC_S)
#define LSFT_D LSFT_T(KC_D)
#define LCTL_F LCTL_T(KC_F)
#define RCTL_J RCTL_T(KC_J)
#define RSFT_K RSFT_T(KC_K)
#define RALT_L RALT_T(KC_L)
#define RGUI_SC RGUI_T(KC_SCLN)

#define OSM_LSFT OSM(MOD_LSFT)
#define OSM_LGUI OSM(MOD_LGUI)
#define OSM_RALT OSM(MOD_RALT)
#define SFT_SPC LSFT_T(KC_SPC)
#define CTL_ESC LCTL_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,      KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,
        CTL_ESC, LGUI_A,  LALT_S,  LSFT_D,  LCTL_F,   KC_G,      KC_H,   RCTL_J,  RSFT_K,  RALT_L,  RGUI_SC,  KC_QUOT,
        OSM_LSFT,KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,      KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                          OSM_LGUI, OSL(1),  SFT_SPC,             KC_ENT, OSL(2),  OSM_RALT
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_GRV,  KC_NO,   KC_7,    KC_8,    KC_9,     KC_COMM,   KC_NO,   KC_NO,   KC_LPRN, KC_RPRN, KC_NO,    KC_BSPC,
        KC_TRNS, KC_NO,   KC_4,    KC_5,    KC_6,     KC_DOT,    KC_PMNS, KC_PEQL, KC_LBRC, KC_RBRC, KC_NO,    KC_BSLS,
        KC_TRNS, KC_NO,   KC_1,    KC_2,    KC_3,     KC_0,      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_NO,    KC_TRNS,
                          KC_TRNS, KC_TRNS,  KC_TRNS,             KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_NO,   KC_NO,   KC_F7,   KC_F8,   KC_F9,    KC_F12,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PSCR,  KC_DEL,
        KC_TRNS, KC_NO,   KC_F4,   KC_F5,   KC_F6,    KC_F11,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,    KC_NO,
        KC_TRNS, KC_NO,   KC_F1,   KC_F2,   KC_F3,    KC_F10,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    TG(3),
                          KC_TRNS, KC_TRNS,  KC_TRNS,             KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [3] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,     KC_G,      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_TRNS,
                          KC_ESC,  KC_TRNS,  KC_SPC,              KC_ENT,  KC_TRNS, KC_LALT
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

