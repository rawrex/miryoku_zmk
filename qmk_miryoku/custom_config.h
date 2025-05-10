#pragma once
// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

// Blank key
#define ___ KC_NO

// Layers customizations

// Base layer 
// with Symbols and Numbers layers switched places
#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,               KC_J,              KC_L,               KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,               KC_M,              LSFT_T(KC_N),       LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,               KC_K,              KC_H,               KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB), LT(U_NUM,KC_ENT),  LT(U_SYM,KC_BSPC),  LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
KC_W,              KC_R,              KC_K,              KC_COMM,           KC_Q,               KC_RBRC,           KC_S,              KC_Z,              KC_QUOT,           KC_A,              \
LGUI_T(KC_P),      LALT_T(KC_D),      LCTL_T(KC_Y),      LSFT_T(KC_N),      KC_L,               KC_B,              LSFT_T(KC_F),      LCTL_T(KC_J),      LALT_T(KC_T),      LGUI_T(KC_C),      \
LT(U_BUTTON,KC_LBRC), ALGR_T(KC_G),   KC_H,              KC_V,              KC_U,               KC_M,              KC_E,              KC_QUES,           KC_SLSH,           KC_PIPE,           \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC), LT(U_NAV,KC_SPC), LT(U_MOUSE,KC_TAB), LT(U_NUM,KC_ENT),  LT(U_SYM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP


// Symbols layer 
// Many symbols changed places to fit some of my preferences
#define MIRYOKU_LAYER_SYM \
KC_PIPE,    KC_EXLM,    KC_QUES,    KC_DLR,     KC_PLUS,    U_NA,   TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_CIRC,    KC_AMPR,    KC_GRV,     KC_PERC,    KC_MINS,    U_NA,   KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_HASH,    KC_TILD,    KC_ASTR,    KC_UNDS,    KC_AT,      U_NA,   TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  KC_ALGR,           U_NA,              \
U_NP,       U_NP,       KC_LPRN,    KC_RPRN,    KC_EQL,     U_NA,   U_NA,              U_NA,              U_NP,              U_NP

// Numbers layer 
// Minor changes in accordance with the symbols layer edits
#define MIRYOKU_LAYER_NUM \
KC_ASTR,    KC_7,       KC_8,       KC_9,       KC_PLUS,    U_NA,   TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_SLSH,    KC_4,       KC_5,       KC_6,       KC_MINS,    U_NA,   KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_DOT,     KC_1,       KC_2,       KC_3,       KC_CIRC,    U_NA,   TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    KC_ALGR,           U_NA,              \
U_NP,       U_NP,       KC_DOT,     KC_0,       KC_EQL,     U_NA,   U_NA,              U_NA,              U_NP,              U_NP


// Mappings customizations

#ifdef KEYBOARD_cantor
// Base layer 
// With added outer-pinky columns
#define MIRYOKU_LAYERMAPPING_BASE( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_LT,   K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_GT,   \
KC_SCLN, K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_COLN, \
KC_LCBR, K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  KC_RCBR, \
                     K32,  K33,  K34,         K35,  K36,  K37 \
)

// Extra layer
#define MIRYOKU_LAYERMAPPING_EXTRA( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_O,    K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_I,   \
KC_X,    K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_DOT, \
KC_SCLN, K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  KC_GT, \
                     K32,  K33,  K34,         K35,  K36,  K37 \
)

// Symbols layer 
// Additional underscore for the left outer-pinky 
#define MIRYOKU_LAYERMAPPING_SYM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_BSLS,  K00,  K01,  K02,  K03,  K04,       K05,  K06,  K07,  K08,  K09,  ___,   \
KC_LBRC,  K10,  K11,  K12,  K13,  K14,       K15,  K16,  K17,  K18,  K19,  ___, \
KC_RBRC,  K20,  K21,  K22,  K23,  K24,       K25,  K26,  K27,  K28,  K29,  ___, \
                      K32,  K33,  K34,       K35,  K36,  K37 \
)
#endif
