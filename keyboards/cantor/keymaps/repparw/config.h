// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#define ONESHOT_TAP_TOGGLE 3 /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 30000 /* Time (in ms) before the one shot key is released */
#define TAPPING_TERM 180 /* Time (in ms) before a tap is considered a hold. QUICK_TAP_TERM defaults to this value too*/
//#define PERMISSIVE_HOLD /* Allow nested taps */
//#define CHORDAL_HOLD

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
