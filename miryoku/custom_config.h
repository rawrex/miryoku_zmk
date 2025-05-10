// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

// Blank key
#define ___ &none

// Base layer 
// with Symbols and Numbers layers switched places
#define MIRYOKU_LAYER_BASE \
&kp Q,              &kp W,              &kp F,              &kp P,              &kp B,               &kp J,              &kp L,               &kp U,              &kp Y,              &kp SQT,           \
&lt LGUI A,      &lt LALT R,      &lt LCTRL S,      &lt LSHIFT T,      &kp G,               &kp M,              &lt LSHIFT N,       &lt LCTRL E,      &lt LALT I,      &lt LGUI O,      \
&lt U_BTN Z, &lt RALT X,      &kp C,              &kp D,              &kp V,               &kp K,              &kp H,               &kp COMMA,           &lt RALT DOT,    &lt U_BTN FSLH,\
U_NP,              U_NP,              &lt U_MEDIA ESC,      &lt U_NAV SPACE,      &lt U_MS TAB,        &lt U_NUM ENTER,     &lt U_SYM BSPC,      &lt U_FUN DELETE,  U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
&kp W,              &kp R,              &kp K,              &kp COMMA,           &kp Q,               &kp RBKT,           &kp S,              &kp Z,              &kp SQT,           &kp A,              \
&lt LGUI P,      &lt LALT D,      &lt LCTRL Y,      &lt LSHIFT N,      &kp L,               &kp B,              &lt LSHIFT F,      &lt LCTRL J,      &lt LALT T,      &lt LGUI C,      \
&lt U_BTN LBKT, &lt RALT G,      &kp H,              &kp V,              &kp U,               &kp M,              &kp E,              &kp QMARK,           &kp FSLH,           &kp PIPE,           \
U_NP,              U_NP,              &lt U_MEDIA ESC,      &lt U_NAV SPACE,      &lt U_MS TAB,        &lt U_NUM ENTER,     &lt U_SYM BSPC,      &lt U_FUN DELETE,  U_NP,              U_NP

// Symbols layer 
// Many symbols changed places to fit some of my preferences
#define MIRYOKU_LAYER_SYM \
&kp PIPE,    &kp EXCL,    &kp QMARK,    &kp DLLR,     &kp PLUS,    U_NA,   &mt U_BASE,           &mt U_EXTRA,        &mt U_TAP,          &mt U_BOOT,         \
&kp CARET,    &kp AMPS,    &kp GRAVE,     &kp PRCNT,    &kp MINUS,    U_NA,   &kp LSHFT,           &kp LCTRL,           &kp LALT,           &kp LGUI,           \
&kp HASH,    &kp TILDE,    &kp ASTRK,    &kp UNDER,    &kp AT,      U_NA,   &mt U_SYM,           &mt U_MS,           &kp RALT,           U_NA,              \
U_NP,       U_NP,       &kp LPAR,    &kp RPAR,    &kp EQUAL,     U_NA,   U_NA,              U_NA,              U_NP,              U_NP

// Numbers layer 
// Minor changes in accordance with the symbols layer edits
#define MIRYOKU_LAYER_NUM \
&kp ASTRK,    &kp N7,       &kp N8,       &kp N9,       &kp PLUS,    U_NA,   &mt U_BASE,           &mt U_EXTRA,        &mt U_TAP,          &mt U_BOOT,         \
&kp FSLH,    &kp N4,       &kp N5,       &kp N6,       &kp MINUS,    U_NA,   &kp LSHFT,           &kp LCTRL,           &kp LALT,           &kp LGUI,           \
&kp DOT,     &kp N1,       &kp N2,       &kp N3,       &kp CARET,    U_NA,   &mt U_NUM,           &mt U_NAV,           &kp RALT,           U_NA,              \
U_NP,       U_NP,       &kp DOT,     &kp N0,       &kp EQUAL,     U_NA,   U_NA,              U_NA,              U_NP,              U_NP

