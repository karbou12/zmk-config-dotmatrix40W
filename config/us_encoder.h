/*
 * Copyright 2026 Tano Karbou (github: karbou12 / X: @karbou_12)
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#define NEXT_APP kp LG(TAB)
#define PREV_APP kp LS(LG(TAB))

#define NEXT_TAB kp LS(LG(RBRC))
#define PREV_TAB kp LS(LG(LBRC))

#define NEXT_HIST kp LG(RBKT)
#define PREV_HIST kp LG(LBKT)

#define ZOOM_IN kp LG(PLUS)
#define ZOOM_OUT kp LG(MINUS)
#define ZOOM_RESET kp LG(N0)

#define NEXT_SPACE_APP kp LC(LG(RIGHT))
#define PREV_SPACE_APP kp LC(LG(LEFT))

#define NEXT_SPACE kp LG(RIGHT)
#define PREV_SPACE kp LG(LEFT)

#define NEXT_MONITOR_APP kp LA(LC(LG(RIGHT)))

#define ZOOM2_IN kp LA(LG(EQUAL))
#define ZOOM2_OUT kp LA(LG(MINUS))
#define ZOOM2_RESET kp LA(LG(N8))

#define MAC_REDO kp LS(LG(Z))
#define MAC_UNDO kp LG(Z)

#define WIN_REDO kp LC(Y)
#define WIN_UNDO kp LC(Z)

#if 1
#define SCRL_UP_FAST    SCRL_UP
#define SCRL_DOWN_FAST  SCRL_DOWN
#define SCRL_LEFT_FAST  SCRL_LEFT
#define SCRL_RIGHT_FAST SCRL_RIGHT
#else
#define SCRL_UP_FAST    MOVE_Y(30)
#define SCRL_DOWN_FAST  MOVE_Y(-30)
#define SCRL_LEFT_FAST  MOVE_X(-30)
#define SCRL_RIGHT_FAST MOVE_X(30)
#endif

#define CONFIG_ZMK_BACKLIGHT
#ifdef CONFIG_ZMK_BACKLIGHT
#define BACKLIGHT_INC bl BL_INC
#define BACKLIGHT_DEC bl BL_DEC
#else
#define BACKLIGHT_INC none
#define BACKLIGHT_DEC none
#endif


/ {
        // for encoder on base layer
        enc_base_root: encorder_base_root {
            compatible = "zmk,behavior-sensor-rotate";
            #sensor-binding-cells = <0>;
            bindings = <&enc_base_cw>, <&enc_base_ccw>;

            tap-ms = <50>;
        };

        enc_base_cw: encorder_base_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&msc SCRL_DOWN_FAST>, <&enc_base_all_modifiers_cw>;
            mods = <(MOD_LSFT|MOD_LALT|MOD_LCTL|MOD_LGUI|MOD_RGUI)>;
        };

        enc_base_ccw: encorder_base_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;

            bindings = <&msc SCRL_UP_FAST>, <&enc_base_all_modifiers_ccw>;
            mods = <(MOD_LSFT|MOD_LALT|MOD_LCTL|MOD_LGUI|MOD_RGUI)>;
        };

        enc_base_all_modifiers_cw: encorder_base_all_modifiers_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_base_left_all_modifiers_cw>, <&BACKLIGHT_INC>;

            mods = <MOD_RGUI>;
        };

        enc_base_all_modifiers_ccw: encorder_base_all_modifiers_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_base_left_all_modifiers_ccw>, <&BACKLIGHT_DEC>;

            mods = <MOD_RGUI>;
        };

        enc_base_left_all_modifiers_cw: encorder_base_left_all_modifiers_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_base_shift_alt_ctrl_cw>, <&NEXT_APP>;

            mods = <MOD_LGUI>;
            // needs keep-mods to display app selector
            keep-mods = <(MOD_LGUI)>;
        };

        enc_base_left_all_modifiers_ccw: encorder_base_left_all_modifiers_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_base_shift_alt_ctrl_ccw>, <&PREV_APP>;

            mods = <MOD_LGUI>;
            // needs keep-mods to display app selector
            keep-mods = <(MOD_LGUI)>;
        };

        enc_base_shift_alt_ctrl_cw: encorder_base_shift_alt_ctrl_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_base_shift_alt_cw>, <&NEXT_TAB>;

            mods = <MOD_LCTL>;
        };

        enc_base_shift_alt_ctrl_ccw: encorder_base_shift_alt_ctrl_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_base_shift_alt_ccw>, <&PREV_TAB>;

            mods = <MOD_LCTL>;
        };

        enc_base_shift_alt_cw: encorder_base_shift_alt_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&msc SCRL_LEFT_FAST>, <&NEXT_HIST>;

            mods = <MOD_LALT>;
        };

        enc_base_shift_alt_ccw: encorder_base_shift_alt_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&msc SCRL_RIGHT_FAST>, <&PREV_HIST>;

            mods = <MOD_LALT>;
        };

        // for encoder on raise layer
        enc_raise_root: encorder_raise_root {
            compatible = "zmk,behavior-sensor-rotate";
            #sensor-binding-cells = <0>;
            bindings = <&enc_raise_cw>, <&enc_raise_ccw>;

            tap-ms = <50>;
        };

        enc_raise_cw: encorder_raise_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&kp C_BRI_UP>, <&enc_raise_all_modifiers_cw>;

            mods = <(MOD_LSFT|MOD_LALT|MOD_LCTL|MOD_LGUI)>;
        };

        enc_raise_ccw: encorder_raise_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&kp C_BRI_DN>, <&enc_raise_all_modifiers_ccw>;

            mods = <(MOD_LSFT|MOD_LALT|MOD_LCTL|MOD_LGUI)>;
        };

        enc_raise_all_modifiers_cw: encorder_raise_all_modifiers_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_raise_shift_alt_ctrl_cw>, <&kp DOWN>;

            mods = <MOD_LGUI>;
        };

        enc_raise_all_modifiers_ccw: encorder_raise_all_modifiers_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_raise_shift_alt_ctrl_ccw>, <&kp UP>;

            mods = <MOD_LGUI>;
        };

        enc_raise_shift_alt_ctrl_cw: encorder_raise_shift_alt_ctrl_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&none>, <&kp RIGHT>;

            mods = <MOD_LCTL>;
            // needs keep-mods to select text
            keep-mods = <(MOD_LSFT|MOD_LALT)>;
        };

        enc_raise_shift_alt_ctrl_ccw: encorder_raise_shift_alt_ctrl_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&none>, <&kp LEFT>;

            mods = <MOD_LCTL>;
            // needs keep-mods to select text
            keep-mods = <(MOD_LSFT|MOD_LALT)>;
        };

        // for encoder on lower layer
        enc_lower_root: encorder_lower_root {
            compatible = "zmk,behavior-sensor-rotate";
            #sensor-binding-cells = <0>;
            bindings = <&enc_lower_cw>, <&enc_lower_ccw>;

            tap-ms = <50>;
        };

        enc_lower_cw: encorder_lower_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&ZOOM_IN>, <&enc_lower_all_modifiers_cw>;

            mods = <(MOD_LSFT|MOD_LALT|MOD_LCTL|MOD_LGUI|MOD_RSFT|MOD_RALT|MOD_RCTL|MOD_RGUI)>;
        };

        enc_lower_ccw: encorder_lower_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&ZOOM_OUT>, <&enc_lower_all_modifiers_ccw>;

            mods = <(MOD_LSFT|MOD_LALT|MOD_LCTL|MOD_LGUI|MOD_RSFT|MOD_RALT|MOD_RCTL|MOD_RGUI)>;
        };

        enc_lower_all_modifiers_cw: encorder_lower_all_modifiers_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_lower_shift_alt_ctrl_cw>, <&NEXT_SPACE_APP>;

            mods = <(MOD_LGUI|MOD_RGUI)>;
        };

        enc_lower_all_modifiers_ccw: encorder_lower_all_modifiers_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_lower_shift_alt_ctrl_ccw>, <&PREV_SPACE_APP>;

            mods = <(MOD_LGUI|MOD_RGUI)>;
        };

        enc_lower_shift_alt_ctrl_cw: encorder_lower_shift_alt_ctrl_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_lower_shift_alt_cw>, <&NEXT_SPACE>;

            mods = <(MOD_LCTL|MOD_RCTL)>;
        };

        enc_lower_shift_alt_ctrl_ccw: encorder_lower_shift_alt_ctrl_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_lower_shift_alt_ccw>, <&PREV_SPACE>;

            mods = <(MOD_LCTL|MOD_RCTL)>;
        };

        enc_lower_shift_alt_cw: encorder_lower_shift_alt_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&ZOOM2_IN>, <&NEXT_MONITOR_APP>;

            mods = <(MOD_LALT|MOD_RALT)>;
        };

        enc_lower_shift_alt_ccw: encorder_lower_shift_alt_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&ZOOM2_OUT>, <&none>;

            mods = <(MOD_LALT|MOD_RALT)>;
        };

        // for encoder on adjust layer
        enc_adjust_root: encorder_adjust_root {
            compatible = "zmk,behavior-sensor-rotate";
            #sensor-binding-cells = <0>;
            bindings = <&enc_adjust_cw>, <&enc_adjust_ccw>;

            tap-ms = <50>;
        };

        enc_adjust_cw: encorder_adjust_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&kp C_VOL_UP>, <&enc_adjust_all_modifiers_cw>;

            mods = <(MOD_LSFT|MOD_LALT|MOD_LCTL|MOD_LGUI)>;
        };

        enc_adjust_ccw: encorder_adjust_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&kp C_VOL_DN>, <&enc_adjust_all_modifiers_ccw>;

            mods = <(MOD_LSFT|MOD_LALT|MOD_LCTL|MOD_LGUI)>;
        };

        enc_adjust_all_modifiers_cw: encorder_adjust_all_modifiers_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_adjust_shift_alt_ctrl_cw>, <&mmv MOVE_DOWN>;

            mods = <MOD_LGUI>;
        };

        enc_adjust_all_modifiers_ccw: encorder_adjust_all_modifiers_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_adjust_shift_alt_ctrl_ccw>, <&mmv MOVE_UP>;

            mods = <MOD_LGUI>;
        };

        enc_adjust_shift_alt_ctrl_cw: encorder_adjust_shift_alt_ctrl_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_adjust_shift_alt_cw>, <&mmv MOVE_RIGHT>;

            mods = <MOD_LCTL>;
        };

        enc_adjust_shift_alt_ctrl_ccw: encorder_adjust_shift_alt_ctrl_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&enc_adjust_shift_alt_ccw>, <&mmv MOVE_LEFT>;

            mods = <MOD_LCTL>;
        };

        enc_adjust_shift_alt_cw: encorder_adjust_shift_alt_cw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&MAC_REDO>, <&none>;

            mods = <MOD_LALT>;
        };

        enc_adjust_shift_alt_ccw: encorder_adjust_shift_alt_ccw {
            compatible = "zmk,behavior-mod-morph";
            #binding-cells = <0>;
            bindings = <&MAC_UNDO>, <&none>;

            mods = <MOD_LALT>;
        };

};
