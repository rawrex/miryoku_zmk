// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

// Blank key
#define ___ &none

// Mouse definitions
#define U_BTN1 &mkp MB1
#define U_BTN2 &mkp MB2
#define U_BTN3 &mkp MB3
#define U_MS_U &mmv MOVE_UP
#define U_MS_D &mmv MOVE_DOWN
#define U_MS_L &mmv MOVE_LEFT
#define U_MS_R &mmv MOVE_RIGHT
#define U_WH_U &msc SCRL_UP
#define U_WH_D &msc SCRL_DOWN
#define U_WH_L &msc SCRL_LEFT
#define U_WH_R &msc SCRL_RIGHT

// Base layer 
// with Symbols and Numbers layers switched places
#define MIRYOKU_LAYER_BASE \
&kp Q,              &kp W,              &kp F,              &kp P,              &kp B,               &kp J,              &kp L,               &kp U,              &kp Y,              &kp SQT,           \
&mt LGUI A,         &mt LALT R,         &mt LCTRL S,        &mt LSHFT T,        &kp G,               &kp M,              &mt RSHFT N,         &mt RCTRL E,         &mt RALT I,         &mt RGUI O,       \
&lt U_BUTTON Z,    &mt RALT X,         &kp C,              &kp D,              &kp V,               &kp K,              &kp H,               &kp COMMA,          &mt RALT DOT,       &lt U_BUTTON FSLH,\
&none,             &none,              &lt U_MEDIA ESC,    &lt U_NAV SPACE,    &lt U_MOUSE TAB,     &lt U_NUM RET,      &lt U_SYM BSPC,      &lt U_FUN DEL,      &none,              &none

// Extra layer
#define MIRYOKU_LAYER_EXTRA \
&kp W,              &kp R,              &kp K,              &kp COMMA,           &kp Q,               &kp RBKT,           &kp S,              &kp Z,              &kp SQT,           &kp A,              \
&mt LGUI P,         &mt LALT D,         &mt LCTRL Y,        &mt LSHFT N,         &kp L,               &kp B,              &mt RSHFT F,         &mt RCTRL J,         &mt RALT T,         &mt RGUI C,       \
&lt U_BUTTON LBKT, &mt RALT G,         &kp H,              &kp V,              &kp U,               &kp M,              &kp E,              &kp QMARK,          &kp FSLH,           &kp PIPE,           \
&none,             &none,              &lt U_MEDIA ESC,    &lt U_NAV SPACE,    &lt U_MOUSE TAB,     &lt U_NUM RET,      &lt U_SYM BSPC,      &lt U_FUN DEL,      &none,              &none

// Symbols layer 
// Many symbols changed places to fit some of my preferences
#define MIRYOKU_LAYER_SYM \
&kp PIPE,          &kp EXCL,          &kp QMARK,         &kp DLLR,          &kp PLUS,          &none,              &to U_BASE,          &to U_EXTRA,         &none,              &bootloader,        \
&kp CARET,         &kp AMPS,          &kp GRAVE,         &kp PRCNT,         &kp MINUS,         &none,              &kp LSHFT,          &kp LCTRL,          &kp LALT,           &kp LGUI,           \
&kp HASH,          &kp TILDE,         &kp ASTRK,         &kp UNDER,         &kp AT,            &none,              &to U_SYM,           &to U_MOUSE,         &kp RALT,           &none,              \
&none,             &none,             &kp LPAR,          &kp RPAR,          &kp EQUAL,         &none,              &none,              &none,              &none,              &none

// Numbers layer 
// Minor changes in accordance with the symbols layer edits
#define MIRYOKU_LAYER_NUM \
&kp ASTRK,         &kp N7,            &kp N8,            &kp N9,            &kp PLUS,          &none,              &to U_BASE,          &to U_EXTRA,         &none,              &bootloader,        \
&kp FSLH,          &kp N4,            &kp N5,            &kp N6,            &kp MINUS,         &none,              &kp LSHFT,          &kp LCTRL,          &kp LALT,           &kp LGUI,           \
&kp DOT,           &kp N1,            &kp N2,            &kp N3,            &kp CARET,         &none,              &to U_NUM,           &to U_NAV,           &kp RALT,           &none,              \
&none,             &none,             &kp DOT,           &kp N0,            &kp EQUAL,         &none,              &none,              &none,              &none,              &none

// Mouse layer
#define MIRYOKU_LAYER_MOUSE \
&bootloader,       &none,             &none,             &to U_BASE,        &none,             &kp K_UNDO,         &kp K_PASTE,        &kp K_COPY,         &kp K_CUT,          &kp K_REDO,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &none,             &none,              U_MS_L,             U_MS_D,             U_MS_U,             U_MS_R,             \
&none,             &kp RALT,          &to U_SYM,         &to U_MOUSE,       &none,             &none,              U_WH_L,             U_WH_D,             U_WH_U,             U_WH_R,             \
&none,             &none,             &none,             &none,             &none,             U_BTN2,             U_BTN1,             U_BTN3,             &none,              &none

