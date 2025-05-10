#pragma once
// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

// Blank key
#define ___ &none

// Layers customizations

// Base layer 
// with Symbols and Numbers layers switched places
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_NUM, RET),  U_LT(U_SYM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
&kp W,             &kp R,             &kp K,             &kp COMMA,         &kp Q,             &kp RBRC,          &kp S,             &kp Z,             &kp SQT,           &kp A,             \
U_MT(LGUI, P),     U_MT(LALT, D),     U_MT(LCTRL, Y),    U_MT(LSHFT, N),    &kp L,             &kp B,             U_MT(LSHFT, F),    U_MT(LCTRL, J),    U_MT(LALT, T),     U_MT(LGUI, C),     \
U_LT(U_BUTTON, LBRC), U_MT(RALT, G),  &kp H,             &kp V,             &kp U,             &kp M,             &kp E,             &kp QUES,          &kp SLASH,         &kp PIPE,          \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_NUM, RET),  U_LT(U_SYM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// Symbols layer 
// Many symbols changed places to fit some of my preferences
#define MIRYOKU_LAYER_SYM \
&kp PIPE,          &kp EXCL,          &kp QUES,          &kp DLLR,          &kp PLUS,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp CARET,         &kp AMPS,          &kp GRAVE,         &kp PRCNT,         &kp MINUS,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp HASH,          &kp TILDE,         &kp ASTRK,         &kp UNDER,         &kp AT,            U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp EQUAL,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Numbers layer 
// Minor changes in accordance with the symbols layer edits
#define MIRYOKU_LAYER_NUM \
&kp ASTRK,         &kp N7,            &kp N8,            &kp N9,            &kp PLUS,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SLASH,         &kp N4,            &kp N5,            &kp N6,            &kp MINUS,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp DOT,           &kp N1,            &kp N2,            &kp N3,            &kp CARET,         U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp EQUAL,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

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
&kp LT,    K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  &kp GT,    \
&kp SEMI,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  &kp COLON, \
&kp LCBR,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  &kp RCBR, \
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
&kp O,     K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  &kp I,    \
&kp X,     K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  &kp DOT,  \
&kp SEMI,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  &kp GT,   \
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
&kp BSLH,  K00,  K01,  K02,  K03,  K04,       K05,  K06,  K07,  K08,  K09,  ___,   \
&kp LBRC,  K10,  K11,  K12,  K13,  K14,       K15,  K16,  K17,  K18,  K19,  ___,   \
&kp RBRC,  K20,  K21,  K22,  K23,  K24,       K25,  K26,  K27,  K28,  K29,  ___,   \
                      K32,  K33,  K34,       K35,  K36,  K37 \
)
#endif
