// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

#include <sendstring_brazilian_abnt2.h>

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#ifdef COMBO_ENABLE
#    include "combos.h"
#endif

enum ferris_layers {
  _QWERTY,
  _NUM,
  _NAV,
  _SYM,
  _GAME,
  _WEAP,
  _EDIT,
  _COMK
};

enum ferris_tap_dances {
  TD_SPC_TAB
};

/* QWERTY */
#define MY_SPC TD(TD_SPC_TAB)

#define GAME TG(_GAME)
#define BASE TG(_QWERTY)
#define COLK TG(_COMK)
#define EDIT TG(_EDIT)
#define MY_ESC LT(_NUM,KC_ESC)
#define MY_BSPC LT(_NAV,KC_BSPC)
#define MY_ENT LT(_SYM, KC_ENT)


#define WEAPON LT(_WEAP, KC_SPC)


#define MY_A LSFT_T(KC_A)
#define MY_S LCTL_T(KC_S)
#define MY_D LALT_T(KC_D)
#define MY_F LGUI_T(KC_F)



#define MY_J RGUI_T(KC_J)
#define MY_K RALT_T(KC_K)
#define MY_L RCTL_T(KC_L)
#define MY_SCLN RSFT_T(KC_SCLN)



/* NAV */
#define MY_TAB LGUI_T(KC_TAB)
#define MY_VOLD LALT_T(KC_VOLD)
#define MY_VOLU LCTL_T(KC_VOLU)
#define MY_MUTE LSFT_T(KC_MUTE)

#define MY_TILD LSFT_T(KC_TILD)


#define MY_SPCN RCTL_T(KC_SPC)
#define MY_ENTN RSFT_T(KC_ENT)
#define MY_BSLS RSFT_T(KC_BSLS)
#define MY_SLSH RCTL_T(KC_SLSH)


#define MY_T1     C(G(KC_LEFT))
#define MY_TD     C(G(KC_D))
#define MY_TT     C(G(KC_RIGHT))



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_split_3x5_2( /* QWERTY */
    KC_Q, KC_W, KC_E, KC_R, KC_T,                         KC_Y, KC_U, KC_I, KC_O, KC_P,
    MY_A, MY_S, MY_D, KC_F, KC_G,                         KC_H, MY_J, MY_K, MY_L, MY_SCLN,
    KC_Z, KC_X, KC_C, KC_V, KC_B,                         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                           MY_ESC,   MY_SPC,   MY_ENT,   MY_BSPC
  ),

[_NUM] = LAYOUT_split_3x5_2 ( /* [> NUM <] */
    KC_F1,  KC_F2,  KC_F3,  KC_F4, KC_F5,                          KC_PSLS,  KC_7,  KC_8,  KC_9,  KC_PPLS,
    KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10,                         KC_PAST,  KC_4,  KC_5,  KC_6,  KC_PMNS,
    KC_F11, KC_F12, KC_VOLD, KC_VOLU, KC_MUTE,                     KC_PENT,  KC_1,  KC_2,  KC_3,  KC_0,
                                _______,  _______,   MY_SPCN,  MY_ENTN
  ),

[_NAV] = LAYOUT_split_3x5_2( /* [> NAV <] */
    KC_ESC,  XXXXXXX,  KC_UP,   XXXXXXX,  XXXXXXX,                    KC_PSCR,  KC_HOME, KC_PGUP, XXXXXXX, KC_BSPC,
    KC_TAB,  KC_LEFT,  KC_DOWN, KC_RIGHT, KC_MPLY,                    KC_DEL,   KC_END,  KC_PGDN, KC_RGHT, XXXXXXX,
    KC_LCTL, MY_T1 , MY_TT, MY_TD,   XXXXXXX,                    KC_COPY,  KC_PSTE, KC_UNDO, KC_CUT,  XXXXXXX,
                                         _______, KC_LGUI,    _______, _______
  ),
[_SYM] = LAYOUT_split_3x5_2( /* [> sym <] */
    KC_EXLM, KC_AT,  KC_HASH, KC_DLR, KC_PERC,                          KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_GRV,  XXXXXXX, XXXXXXX, XXXXXXX, KC_LGUI,                        KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_QUOT,
    MY_TILD, XXXXXXX, XXXXXXX, XXXXXXX, COLK,                        KC_MINS, KC_EQL, XXXXXXX, KC_PIPE, MY_BSLS,
                                            EDIT, GAME,   _______, BASE
  ),
[_GAME] = LAYOUT_split_3x5_2( /* [> game <] */
    KC_TAB,  KC_Q, KC_W, KC_E, KC_R,                                      KC_Y, KC_U, KC_I, KC_O,      BASE,
    KC_LSFT, KC_A, KC_S, KC_D, KC_F,                                      KC_H, KC_J, KC_K, KC_L,      MY_SCLN,
    KC_LCTL, KC_Z, KC_X, KC_C, KC_V,                                      KC_N, KC_M, KC_COMM, KC_DOT, MY_SLSH,
                                       KC_ESC,  WEAPON,  _______, _______
  ),
[_WEAP] = LAYOUT_split_3x5_2( /* [> armas <] */
    KC_ESC,   KC_1,  KC_2,  KC_3,  KC_4,                                         KC_Y,  KC_U,  KC_I,  KC_O, KC_BSPC,
    KC_LSFT,   KC_5,  KC_F1,  KC_F2,  KC_F3,                                      KC_H,  KC_J,  KC_K,  KC_L,  MY_SCLN,
    KC_LCTL,   KC_F4,  KC_F5,  KC_F6,  KC_M,                                      KC_N,  KC_M,  KC_COMM, KC_DOT, RCTL_T(KC_SLSH),
                                            _______, _______,  _______, _______
  ),
[_EDIT] = LAYOUT_split_3x5_2( /* [> edição <] */
    KC_Q, KC_W, KC_E, KC_R, KC_T,                         KC_Y, KC_U, KC_I, KC_O, KC_P,
    MY_A, MY_S, MY_D, MY_F, KC_G,                         KC_H, MY_J, MY_K, MY_L, MY_SCLN,
    KC_Z, KC_X, KC_C, KC_V, KC_B,                         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                           KC_MEH,   KC_SPC,   MY_ENT,   MY_BSPC
  ),

[_COMK] = LAYOUT_split_3x5_2( /* COLEMAK */
    KC_Q, KC_W, KC_F, KC_P, KC_G,              KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
    KC_A, KC_R, KC_S, KC_T, KC_D,              KC_H, KC_N, KC_E, KC_I, KC_O,
    KC_Z, KC_X, KC_C, KC_V, KC_B,              KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                MY_ESC,   MY_SPC,              MY_ENT,   MY_BSPC
  ),

};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Space, twice for Tab
    [TD_SPC_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_SPC, KC_TAB)
};


uint16_t get_autoshift_timeout(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case AUTO_SHIFT_NUMERIC:
            return 2 * get_generic_autoshift_timeout();
        case AUTO_SHIFT_SPECIAL:
            return get_generic_autoshift_timeout() + 50;
        case AUTO_SHIFT_ALPHA:
        default:
            return get_generic_autoshift_timeout();
    }
}
