// Copyright 2026 Tano Karbou (github: karbou12 / X: @karbou_12)
// SPDX-License-Identifier: MIT
#pragma once

#ifndef OS_MAC_BASE
#define OS_MAC_BASE 0
#endif

#define OS_MAC_RAISE  (OS_MAC_BASE + 1)
#define OS_MAC_LOWER  (OS_MAC_BASE + 2)
#define OS_MAC_ADJUST (OS_MAC_BASE + 3)

#ifndef OS_WIN_BASE
#define OS_WIN_BASE 4
#endif

#define OS_WIN_RAISE  (OS_WIN_BASE + 1)
#define OS_WIN_LOWER  (OS_WIN_BASE + 2)
#define OS_WIN_ADJUST (OS_WIN_BASE + 3)

// Mac
#define OS_MAC_SHORT     LGUI

#define OS_MAC_0         KP_N0
#define OS_MAC_1         KP_N1
#define OS_MAC_2         KP_N2
#define OS_MAC_3         KP_N3
#define OS_MAC_4         KP_N4
#define OS_MAC_5         KP_N5
#define OS_MAC_6         KP_N6
#define OS_MAC_7         KP_N7
#define OS_MAC_8         KP_N8
#define OS_MAC_9         KP_N9
#define OS_MAC_PLUS      KP_PLUS
#define OS_MAC_MINUS     KP_MINUS
#define OS_MAC_MULTIPLY  LS(N8)
#define OS_MAC_DIVIDE    KP_DIVIDE
#define OS_MAC_EQUAL     KP_EQUAL
#define OS_MAC_DOT       KP_DOT

#define OS_MAC_CAPTURE_1 LG(LS(N3))
#define OS_MAC_CAPTURE_2 LG(LS(N4))
#define OS_MAC_CAPTURE_3 LG(LS(N5))
#define OS_MAC_LOCK      &kp LG(LC(Q))
#define OS_MAC_UNLOCK    &studio_unlock
#define OS_MAC_DF        &to WIN(BASE)

#define MAC(x) OS_MAC_ ## x

// ==========   QAZ   ==========
// Layer 0  Mac Base
#define MAC_QAZ_BASE_LEFT_TOP     &kp Q             &kp W           &kp E               &kp R             &kp T
#define MAC_QAZ_BASE_LEFT_MIDDLE  &kp A             &hml LALT S     &hml LCTRL D        &hml LGUI F       &kp G
#define MAC_QAZ_BASE_LEFT_BOTTOM  &mtb LSHFT Z      &kp X           &kp C               &kp V             &kp B

#define MAC_QAZ_BASE_RIGHT_TOP    &kp Y             &kp U           &kp I               &kp O             &kp P
#define MAC_QAZ_BASE_RIGHT_MIDDLE &kp H             &kp J           &kp K               &kp L             &mt RCTRL SEMI
#define MAC_QAZ_BASE_RIGHT_BOTTOM &kp N             &kp M           &kp COMMA           &mtb RALT DOT     &mtb RSHFT FSLH

#define MAC_QAZ_BASE_LEFT_THUMBS  &kp ESC           &mo MAC(LOWER)  &mt MAC(SHORT) TAB
#define MAC_QAZ_BASE_RIGHT_THUMBS &mtb RSHFT SPACE  &mo MAC(RAISE)  &kp RGUI


// Layer 1  Mac Raise : Numbers and Arrows
#define MAC_QAZ_RAISE_LEFT_TOP     &kp MAC(DIVIDE)    &kp MAC(7)        &kp MAC(8)         &kp MAC(9)        &kp MAC(MINUS)
#define MAC_QAZ_RAISE_LEFT_MIDDLE  &kp MAC(MULTIPLY)  &hml LALT MAC(4)  &hml LCTRL MAC(5)  &hml LGUI MAC(6)  &kp MAC(PLUS)
#define MAC_QAZ_RAISE_LEFT_BOTTOM  &mtb LSHFT MAC(0)  &kp MAC(1)        &kp MAC(2)         &kp MAC(3)        &kp MAC(EQUAL)

#define MAC_QAZ_RAISE_RIGHT_TOP    &none              &kp BSPC          &kp DEL            &kp TAB           &kp MINUS
#define MAC_QAZ_RAISE_RIGHT_MIDDLE &kp LEFT           &kp DOWN          &kp UP             &kp RIGHT         &kp RET
#define MAC_QAZ_RAISE_RIGHT_BOTTOM &kp HOME           &kp PG_DN         &kp PG_UP          &mtb RALT END     &kp RSHFT

#define MAC_QAZ_RAISE_LEFT_THUMBS  &kp SPACE          &lt MAC(ADJUST) MAC(DOT)             &mt MAC(SHORT) BSPC
#define MAC_QAZ_RAISE_RIGHT_THUMBS &none              &none                                &none

// Layer 2  Mac Lower : Symbols
#define MAC_QAZ_LOWER_LEFT_TOP     &kp QMARK       &kp DQT          &kp EXCL   &kp BSPC  &kp TILDE
#define MAC_QAZ_LOWER_LEFT_MIDDLE  &kp AT          &hml LALT SQT    &kp DLLR   &kp DEL   &kp FSLH
#define MAC_QAZ_LOWER_LEFT_BOTTOM  &mtb LSHFT RET  &kp GRAVE        &kp CARET  &kp PIPE  &kp BSLH

#define MAC_QAZ_LOWER_RIGHT_TOP    &none           &kp UNDER        &kp LPAR   &kp RPAR  &kp PRCNT
#define MAC_QAZ_LOWER_RIGHT_MIDDLE &kp HASH        &none            &kp LBKT   &kp RBKT  &kp RCTRL
#define MAC_QAZ_LOWER_RIGHT_BOTTOM &kp AMPS        &none            &kp LBRC   &kp RBRC  &kp RSHFT

#define MAC_QAZ_LOWER_LEFT_THUMBS  &kp SPACE       &none            &none
#define MAC_QAZ_LOWER_RIGHT_THUMBS &mtb RSHFT RET  &mo MAC(ADJUST)  &none

// Layer 3  Mac Adjust : Functions and Mouse
#define MAC_QAZ_ADJUST_LEFT_TOP           &kp C_MUTE           &kp F7          &kp F8         &kp F9           &kp F12
#define MAC_QAZ_ADJUST_LEFT_MIDDLE        &kp C_VOL_UP         &hml LALT F4    &hml LCTRL F5  &hml LGUI F6     &kp F11
#define MAC_QAZ_ADJUST_LEFT_BOTTOM        &mtb LSHFT C_VOL_DN  &kp F1          &kp F2         &kp F3           &kp F10

#define MAC_QAZ_ADJUST_RIGHT_TOP          &msc SCRL_LEFT       &msc SCRL_DOWN  &msc SCRL_UP   &msc SCRL_RIGHT  &kp MAC(CAPTURE_3)
#define MAC_QAZ_ADJUST_RIGHT_MIDDLE       &mmv MOVE_LEFT       &mmv MOVE_DOWN  &mmv MOVE_UP   &mmv MOVE_RIGHT  &mtb RCTRL C_BRI_UP
#define MAC_QAZ_ADJUST_RIGHT_BOTTOM       &none                &kp LGUI        &kp LCTRL      &kp LALT         &mtb LSHFT C_BRI_DN

#define MAC_QAZ_ADJUST_LEFT_THUMBS        MAC(LOCK)            MAC(DF)         MAC(UNLOCK)
#define MAC_QAZ_ADJUST_LEFT_THUMBS_WO_DF  MAC(LOCK)            &none           MAC(UNLOCK)
#define MAC_QAZ_ADJUST_RIGHT_THUMBS       &mkp LCLK            &mkp MCLK       &mkp RCLK

// ==========   40% QAZ   ==========
// Layer 0  Mac Base
#define MAC_QAZ40_BASE_LEFT_TOP       MAC_QAZ_BASE_LEFT_TOP     &none
#define MAC_QAZ40_BASE_LEFT_MIDDLE    MAC_QAZ_BASE_LEFT_MIDDLE  &none
#define MAC_QAZ40_BASE_LEFT_BOTTOM    MAC_QAZ_BASE_LEFT_BOTTOM  &none

#define MAC_QAZ40_BASE_RIGHT_TOP      &none  MAC_QAZ_BASE_RIGHT_TOP
#define MAC_QAZ40_BASE_RIGHT_MIDDLE   &none  MAC_QAZ_BASE_RIGHT_MIDDLE
#define MAC_QAZ40_BASE_RIGHT_BOTTOM   &none  MAC_QAZ_BASE_RIGHT_BOTTOM

// Layer 1  Mac Raise : Numbers and Arrows
#define MAC_QAZ40_RAISE_LEFT_TOP      MAC_QAZ_RAISE_LEFT_TOP     &none
#define MAC_QAZ40_RAISE_LEFT_MIDDLE   MAC_QAZ_RAISE_LEFT_MIDDLE  &none
#define MAC_QAZ40_RAISE_LEFT_BOTTOM   MAC_QAZ_RAISE_LEFT_BOTTOM  &none

#define MAC_QAZ40_RAISE_RIGHT_TOP     &none  MAC_QAZ_RAISE_RIGHT_TOP
#define MAC_QAZ40_RAISE_RIGHT_MIDDLE  &none  MAC_QAZ_RAISE_RIGHT_MIDDLE
#define MAC_QAZ40_RAISE_RIGHT_BOTTOM  &none  MAC_QAZ_RAISE_RIGHT_BOTTOM

// Layer 2  Mac Lower : Symbols
#define MAC_QAZ40_LOWER_LEFT_TOP      MAC_QAZ_LOWER_LEFT_TOP     &none
#define MAC_QAZ40_LOWER_LEFT_MIDDLE   MAC_QAZ_LOWER_LEFT_MIDDLE  &none
#define MAC_QAZ40_LOWER_LEFT_BOTTOM   MAC_QAZ_LOWER_LEFT_BOTTOM  &none

#define MAC_QAZ40_LOWER_RIGHT_TOP     &none  MAC_QAZ_LOWER_RIGHT_TOP
#define MAC_QAZ40_LOWER_RIGHT_MIDDLE  &none  MAC_QAZ_LOWER_RIGHT_MIDDLE
#define MAC_QAZ40_LOWER_RIGHT_BOTTOM  &none  MAC_QAZ_LOWER_RIGHT_BOTTOM

// Layer 3  Mac Adjust : Functions and Mouse
#define MAC_QAZ40_ADJUST_LEFT_TOP     MAC_QAZ_ADJUST_LEFT_TOP     &none
#define MAC_QAZ40_ADJUST_LEFT_MIDDLE  MAC_QAZ_ADJUST_LEFT_MIDDLE  &kp MAC(CAPTURE_2)
#define MAC_QAZ40_ADJUST_LEFT_BOTTOM  MAC_QAZ_ADJUST_LEFT_BOTTOM  &kp MAC(CAPTURE_3)

#define MAC_QAZ40_ADJUST_RIGHT_TOP    &none  MAC_QAZ_ADJUST_RIGHT_TOP
#define MAC_QAZ40_ADJUST_RIGHT_MIDDLE &none  MAC_QAZ_ADJUST_RIGHT_MIDDLE
#define MAC_QAZ40_ADJUST_RIGHT_BOTTOM &none  MAC_QAZ_ADJUST_RIGHT_BOTTOM

// ==========   40% Normal   ==========
// Layer 0  Mac Base
#define MAC_NOR40_BASE_LEFT_TOP        &kp TAB    MAC_QAZ_BASE_LEFT_TOP
#define MAC_NOR40_BASE_LEFT_MIDDLE     &kp LCTRL  MAC_QAZ_BASE_LEFT_MIDDLE
#define MAC_NOR40_BASE_LEFT_BOTTOM     &kp LSHFT  MAC_QAZ_BASE_LEFT_BOTTOM

#define MAC_NOR40_BASE_RIGHT_TOP       MAC_QAZ_BASE_RIGHT_TOP     &kp BSPC
#define MAC_NOR40_BASE_RIGHT_MIDDLE    MAC_QAZ_BASE_RIGHT_MIDDLE  &kp RET
#define MAC_NOR40_BASE_RIGHT_BOTTOM    MAC_QAZ_BASE_RIGHT_BOTTOM  &kp RSHFT

// Layer 1  Mac Raise : Numbers and Arrows
#define MAC_NOR40_RAISE_LEFT_TOP       &kp TAB    MAC_QAZ_RAISE_LEFT_TOP
#define MAC_NOR40_RAISE_LEFT_MIDDLE    &kp LCTRL  MAC_QAZ_RAISE_LEFT_MIDDLE
#define MAC_NOR40_RAISE_LEFT_BOTTOM    &kp LSHFT  MAC_QAZ_RAISE_LEFT_BOTTOM

#define MAC_NOR40_RAISE_RIGHT_TOP      MAC_QAZ_RAISE_RIGHT_TOP     &none
#define MAC_NOR40_RAISE_RIGHT_MIDDLE   MAC_QAZ_RAISE_RIGHT_MIDDLE  &none
#define MAC_NOR40_RAISE_RIGHT_BOTTOM   MAC_QAZ_RAISE_RIGHT_BOTTOM  &none

// Layer 2  Mac Lower : Symbols
#define MAC_NOR40_LOWER_LEFT_TOP       &kp TAB    MAC_QAZ_LOWER_LEFT_TOP
#define MAC_NOR40_LOWER_LEFT_MIDDLE    &kp LCTRL  MAC_QAZ_LOWER_LEFT_MIDDLE
#define MAC_NOR40_LOWER_LEFT_BOTTOM    &kp LSHFT  MAC_QAZ_LOWER_LEFT_BOTTOM

#define MAC_NOR40_LOWER_RIGHT_TOP      MAC_QAZ_LOWER_RIGHT_TOP     &none
#define MAC_NOR40_LOWER_RIGHT_MIDDLE   MAC_QAZ_LOWER_RIGHT_MIDDLE  &none
#define MAC_NOR40_LOWER_RIGHT_BOTTOM   MAC_QAZ_LOWER_RIGHT_BOTTOM  &none

// Layer 3  Mac Adjust : Functions and Mouse
#define MAC_NOR40_ADJUST_LEFT_TOP      &kp TAB    MAC_QAZ_ADJUST_LEFT_TOP
#define MAC_NOR40_ADJUST_LEFT_MIDDLE   &kp LCTRL  MAC_QAZ_ADJUST_LEFT_MIDDLE
#define MAC_NOR40_ADJUST_LEFT_BOTTOM   &kp LSHFT  MAC_QAZ_ADJUST_LEFT_BOTTOM

#define MAC_NOR40_ADJUST_RIGHT_TOP     MAC_QAZ_ADJUST_RIGHT_TOP     &kp MAC(CAPTURE_1)
#define MAC_NOR40_ADJUST_RIGHT_MIDDLE  MAC_QAZ_ADJUST_RIGHT_MIDDLE  &kp MAC(CAPTURE_2)
#define MAC_NOR40_ADJUST_RIGHT_BOTTOM  MAC_QAZ_ADJUST_RIGHT_BOTTOM  &kp MAC(CAPTURE_3)

// Win
#define OS_WIN_SHORT LCTRL

#define OS_WIN_0         N0
#define OS_WIN_1         N1
#define OS_WIN_2         N2
#define OS_WIN_3         N3
#define OS_WIN_4         N4
#define OS_WIN_5         N5
#define OS_WIN_6         N6
#define OS_WIN_7         N7
#define OS_WIN_8         N8
#define OS_WIN_9         N9
#define OS_WIN_PLUS      PLUS
#define OS_WIN_MINUS     MINUS
#define OS_WIN_MULTIPLY  LS(N8)
#define OS_WIN_DIVIDE    SLASH
#define OS_WIN_EQUAL     EQUAL
#define OS_WIN_DOT       DOT

#define OS_WIN_CAPTURE_1 PRINTSCREEN
#define OS_WIN_CAPTURE_2 LA(PRINTSCREEN)
#define OS_WIN_CAPTURE_3 LS(LG(S))
#define OS_WIN_LOCK      &kp LG(L)
#define OS_WIN_UNLOCK    OS_MAC_UNLOCK
#define OS_WIN_DF        &to MAC(BASE)

#define WIN(x) OS_WIN_ ## x

// ==========   QAZ   ==========
// Layer 4  Win Base
#define WIN_QAZ_BASE_LEFT_TOP     MAC_QAZ_BASE_LEFT_TOP
#define WIN_QAZ_BASE_LEFT_MIDDLE  MAC_QAZ_BASE_LEFT_MIDDLE
#define WIN_QAZ_BASE_LEFT_BOTTOM  MAC_QAZ_BASE_LEFT_BOTTOM

#define WIN_QAZ_BASE_RIGHT_TOP    MAC_QAZ_BASE_RIGHT_TOP
#define WIN_QAZ_BASE_RIGHT_MIDDLE MAC_QAZ_BASE_RIGHT_MIDDLE
#define WIN_QAZ_BASE_RIGHT_BOTTOM MAC_QAZ_BASE_RIGHT_BOTTOM

#define WIN_QAZ_BASE_LEFT_THUMBS  &kp ESC           &mo WIN(LOWER)  &mt WIN(SHORT) TAB
#define WIN_QAZ_BASE_RIGHT_THUMBS &mtb RSHFT SPACE  &mo WIN(RAISE)  &kp RGUI

// Layer 5  Win Raise : Numbers and Arrows
#define WIN_QAZ_RAISE_LEFT_TOP     &kp WIN(DIVIDE)    &kp WIN(7)        &kp WIN(8)         &kp WIN(9)         &kp WIN(MINUS)
#define WIN_QAZ_RAISE_LEFT_MIDDLE  &kp WIN(MULTIPLY)  &hml LALT WIN(4)  &hml LCTRL WIN(5)  &hml LGUI WIN(6)   &kp WIN(PLUS)
#define WIN_QAZ_RAISE_LEFT_BOTTOM  &mtb LSHFT WIN(0)  &kp WIN(1)        &kp WIN(2)         &kp WIN(3)         &kp WIN(EQUAL)

#define WIN_QAZ_RAISE_RIGHT_TOP    MAC_QAZ_RAISE_RIGHT_TOP
#define WIN_QAZ_RAISE_RIGHT_MIDDLE MAC_QAZ_RAISE_RIGHT_MIDDLE
#define WIN_QAZ_RAISE_RIGHT_BOTTOM MAC_QAZ_RAISE_RIGHT_BOTTOM

#define WIN_QAZ_RAISE_LEFT_THUMBS  &kp SPACE  &lt WIN(ADJUST) WIN(DOT)  &mt WIN(SHORT) BSPC
#define WIN_QAZ_RAISE_RIGHT_THUMBS MAC_QAZ_RAISE_RIGHT_THUMBS

// Layer 6  Win Lower : Symbols
#define WIN_QAZ_LOWER_LEFT_TOP     MAC_QAZ_LOWER_LEFT_TOP
#define WIN_QAZ_LOWER_LEFT_MIDDLE  MAC_QAZ_LOWER_LEFT_MIDDLE
#define WIN_QAZ_LOWER_LEFT_BOTTOM  MAC_QAZ_LOWER_LEFT_BOTTOM

#define WIN_QAZ_LOWER_RIGHT_TOP    MAC_QAZ_LOWER_RIGHT_TOP
#define WIN_QAZ_LOWER_RIGHT_MIDDLE MAC_QAZ_LOWER_RIGHT_MIDDLE
#define WIN_QAZ_LOWER_RIGHT_BOTTOM MAC_QAZ_LOWER_RIGHT_BOTTOM

#define WIN_QAZ_LOWER_LEFT_THUMBS  MAC_QAZ_LOWER_LEFT_THUMBS
#define WIN_QAZ_LOWER_RIGHT_THUMBS &mtb RSHFT RET  &mo WIN(ADJUST)  &none

// Layer 7  Win Adjust : Functions and Mouse
#define WIN_QAZ_ADJUST_LEFT_TOP     MAC_QAZ_ADJUST_LEFT_TOP
#define WIN_QAZ_ADJUST_LEFT_MIDDLE  MAC_QAZ_ADJUST_LEFT_MIDDLE
#define WIN_QAZ_ADJUST_LEFT_BOTTOM  MAC_QAZ_ADJUST_LEFT_BOTTOM

#define WIN_QAZ_ADJUST_RIGHT_TOP    &msc SCRL_LEFT  &msc SCRL_DOWN  &msc SCRL_UP  &msc SCRL_RIGHT  &kp WIN(CAPTURE_3)
#define WIN_QAZ_ADJUST_RIGHT_MIDDLE MAC_QAZ_ADJUST_RIGHT_MIDDLE
#define WIN_QAZ_ADJUST_RIGHT_BOTTOM MAC_QAZ_ADJUST_RIGHT_BOTTOM

#define WIN_QAZ_ADJUST_LEFT_THUMBS        WIN(LOCK)  WIN(DF)  &none
#define WIN_QAZ_ADJUST_LEFT_THUMBS_WO_DF  WIN(LOCK)  &none    &none
#define WIN_QAZ_ADJUST_RIGHT_THUMBS       MAC_QAZ_ADJUST_RIGHT_THUMBS

// ==========   40% QAZ   ==========
// Layer 4  Win Base
#define WIN_QAZ40_BASE_LEFT_TOP       WIN_QAZ_BASE_LEFT_TOP     &none
#define WIN_QAZ40_BASE_LEFT_MIDDLE    WIN_QAZ_BASE_LEFT_MIDDLE  &none
#define WIN_QAZ40_BASE_LEFT_BOTTOM    WIN_QAZ_BASE_LEFT_BOTTOM  &none

#define WIN_QAZ40_BASE_RIGHT_TOP      &none  WIN_QAZ_BASE_RIGHT_TOP
#define WIN_QAZ40_BASE_RIGHT_MIDDLE   &none  WIN_QAZ_BASE_RIGHT_MIDDLE
#define WIN_QAZ40_BASE_RIGHT_BOTTOM   &none  WIN_QAZ_BASE_RIGHT_BOTTOM

// Layer 5  Win Raise : Numbers and Arrows
#define WIN_QAZ40_RAISE_LEFT_TOP      WIN_QAZ_RAISE_LEFT_TOP     &none
#define WIN_QAZ40_RAISE_LEFT_MIDDLE   WIN_QAZ_RAISE_LEFT_MIDDLE  &none
#define WIN_QAZ40_RAISE_LEFT_BOTTOM   WIN_QAZ_RAISE_LEFT_BOTTOM  &none

#define WIN_QAZ40_RAISE_RIGHT_TOP     &none  WIN_QAZ_RAISE_RIGHT_TOP
#define WIN_QAZ40_RAISE_RIGHT_MIDDLE  &none  WIN_QAZ_RAISE_RIGHT_MIDDLE
#define WIN_QAZ40_RAISE_RIGHT_BOTTOM  &none  WIN_QAZ_RAISE_RIGHT_BOTTOM

// Layer 6  Win Lower : Symbols
#define WIN_QAZ40_LOWER_LEFT_TOP      WIN_QAZ_LOWER_LEFT_TOP     &none
#define WIN_QAZ40_LOWER_LEFT_MIDDLE   WIN_QAZ_LOWER_LEFT_MIDDLE  &none
#define WIN_QAZ40_LOWER_LEFT_BOTTOM   WIN_QAZ_LOWER_LEFT_BOTTOM  &none

#define WIN_QAZ40_LOWER_RIGHT_TOP     &none  WIN_QAZ_LOWER_RIGHT_TOP
#define WIN_QAZ40_LOWER_RIGHT_MIDDLE  &none  WIN_QAZ_LOWER_RIGHT_MIDDLE
#define WIN_QAZ40_LOWER_RIGHT_BOTTOM  &none  WIN_QAZ_LOWER_RIGHT_BOTTOM

// Layer 7  Win Adjust : Functions and Mouse
#define WIN_QAZ40_ADJUST_LEFT_TOP     WIN_QAZ_ADJUST_LEFT_TOP     &kp WIN(CAPTURE_1)
#define WIN_QAZ40_ADJUST_LEFT_MIDDLE  WIN_QAZ_ADJUST_LEFT_MIDDLE  &kp WIN(CAPTURE_2)
#define WIN_QAZ40_ADJUST_LEFT_BOTTOM  WIN_QAZ_ADJUST_LEFT_BOTTOM  &kp WIN(CAPTURE_3)

#define WIN_QAZ40_ADJUST_RIGHT_TOP    &none  WIN_QAZ_ADJUST_RIGHT_TOP
#define WIN_QAZ40_ADJUST_RIGHT_MIDDLE &none  WIN_QAZ_ADJUST_RIGHT_MIDDLE
#define WIN_QAZ40_ADJUST_RIGHT_BOTTOM &none  WIN_QAZ_ADJUST_RIGHT_BOTTOM

// ==========   40% Normal   ==========
// Layer 4  Win Base
#define WIN_NOR40_BASE_LEFT_TOP        &kp TAB    WIN_QAZ_BASE_LEFT_TOP
#define WIN_NOR40_BASE_LEFT_MIDDLE     &kp LCTRL  WIN_QAZ_BASE_LEFT_MIDDLE
#define WIN_NOR40_BASE_LEFT_BOTTOM     &kp LSHFT  WIN_QAZ_BASE_LEFT_BOTTOM

#define WIN_NOR40_BASE_RIGHT_TOP       WIN_QAZ_BASE_RIGHT_TOP     &kp BSPC
#define WIN_NOR40_BASE_RIGHT_MIDDLE    WIN_QAZ_BASE_RIGHT_MIDDLE  &kp RET
#define WIN_NOR40_BASE_RIGHT_BOTTOM    WIN_QAZ_BASE_RIGHT_BOTTOM  &kp RSHFT

// Layer 5  Win Raise : Numbers and Arrows
#define WIN_NOR40_RAISE_LEFT_TOP       &kp TAB    WIN_QAZ_RAISE_LEFT_TOP
#define WIN_NOR40_RAISE_LEFT_MIDDLE    &kp LCTRL  WIN_QAZ_RAISE_LEFT_MIDDLE
#define WIN_NOR40_RAISE_LEFT_BOTTOM    &kp LSHFT  WIN_QAZ_RAISE_LEFT_BOTTOM

#define WIN_NOR40_RAISE_RIGHT_TOP      WIN_QAZ_RAISE_RIGHT_TOP     &none
#define WIN_NOR40_RAISE_RIGHT_MIDDLE   WIN_QAZ_RAISE_RIGHT_MIDDLE  &none
#define WIN_NOR40_RAISE_RIGHT_BOTTOM   WIN_QAZ_RAISE_RIGHT_BOTTOM  &none

// Layer 6  Win Lower : Symbols
#define WIN_NOR40_LOWER_LEFT_TOP       &kp TAB    WIN_QAZ_LOWER_LEFT_TOP
#define WIN_NOR40_LOWER_LEFT_MIDDLE    &kp LCTRL  WIN_QAZ_LOWER_LEFT_MIDDLE
#define WIN_NOR40_LOWER_LEFT_BOTTOM    &kp LSHFT  WIN_QAZ_LOWER_LEFT_BOTTOM

#define WIN_NOR40_LOWER_RIGHT_TOP      WIN_QAZ_LOWER_RIGHT_TOP     &none
#define WIN_NOR40_LOWER_RIGHT_MIDDLE   WIN_QAZ_LOWER_RIGHT_MIDDLE  &none
#define WIN_NOR40_LOWER_RIGHT_BOTTOM   WIN_QAZ_LOWER_RIGHT_BOTTOM  &none

// Layer 7  Win Adjust : Functions and Mouse
#define WIN_NOR40_ADJUST_LEFT_TOP      &kp TAB    WIN_QAZ_ADJUST_LEFT_TOP
#define WIN_NOR40_ADJUST_LEFT_MIDDLE   &kp LCTRL  WIN_QAZ_ADJUST_LEFT_MIDDLE
#define WIN_NOR40_ADJUST_LEFT_BOTTOM   &kp LSHFT  WIN_QAZ_ADJUST_LEFT_BOTTOM

#define WIN_NOR40_ADJUST_RIGHT_TOP      WIN_QAZ_ADJUST_RIGHT_TOP     &kp WIN(CAPTURE_1)
#define WIN_NOR40_ADJUST_RIGHT_MIDDLE   WIN_QAZ_ADJUST_RIGHT_MIDDLE  &kp WIN(CAPTURE_2)
#define WIN_NOR40_ADJUST_RIGHT_BOTTOM   WIN_QAZ_ADJUST_RIGHT_BOTTOM  &kp WIN(CAPTURE_3)

// ==========   Special   ==========
#define QAZ_NONE        &none &none &none &none &none 
#define QAZ40_NONE      &none &none &none &none &none &none
#define QAZ_NONE_THUMBS &none &none &none
