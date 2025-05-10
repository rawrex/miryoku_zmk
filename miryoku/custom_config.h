// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

// Blank key
#define ___ &none

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

