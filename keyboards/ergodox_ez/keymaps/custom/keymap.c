// Netable differences vs. the default firmware for the ErgoDox EZ:
// 1. The Cmd key is now on the right side, making Cmd+Space easier.
// 2. The media keys work on OSX (But not on Windows).
#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"

#define BASE 0 // default layer
#define QWER 1 // symbols
#define SYMB 2 // media keys
#define PLOV 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = KEYMAP(  // layer 0 : default
        // left hand
        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_ESC,
        KC_TAB,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_G,       KC_BSLS,
        KC_BSPC,    KC_A,       KC_R,       KC_S,       KC_T,       KC_D,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_SLSH,
        MO(2),      LALT(KC_E), LALT(KC_I), LALT(KC_GRV),LALT(KC_U),
                                            TG(2),                  TG(3),
                                                                    KC_LCTL,
                                            KC_SPC,     KC_LGUI,    KC_LALT,
        // right hand
        TG(1),     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,            KC_EQL,
        KC_LBRC,       KC_J,         KC_L,   KC_U,   KC_Y,   KC_SCLN,             KC_MINS,
                  KC_H,         KC_N,   KC_E,   KC_I,   KC_O,KC_QUOT,
        KC_RBRC,KC_K,   KC_M,   KC_COMM,KC_DOT, LSFT(KC_SLSH),   KC_RSFT,
                          KC_LEFT,  KC_DOWN,KC_UP,KC_RGHT,          MO(2),
        KC_VOLD,        KC_VOLU,
        KC_RCTL,
        KC_RALT,KC_ENT, KC_SPC
    ),
[QWER] = KEYMAP(
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_Q,         KC_W,   KC_E,   KC_R,   KC_T, KC_TRNS,
       KC_TRNS, KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
       KC_TRNS, KC_Z,  KC_X,   KC_C,   KC_V,   KC_B, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_NO,
                                                    KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,
    // right hand
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, KC_TRNS,
                 KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_TRNS,
       KC_TRNS,  KC_N, KC_M, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS
),
[SYMB] = KEYMAP(
       // left hand
       RESET,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F11,
       KC_TRNS,KC_EXLM,KC_AT,  KC_LCBR,KC_RCBR,KC_PIPE,KC_TRNS,
       KC_DELT,KC_HASH,KC_DLR, KC_LPRN,KC_RPRN,KC_GRV,
       KC_TRNS,KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                       KC_TRNS,KC_NO,
                                               KC_TRNS,
                               KC_TRNS,KC_TRNS,KC_TRNS,
       // right hand
       KC_F12, KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
       KC_TRNS, KC_UP,   KC_7,   KC_8,    KC_9,    KC_ASTR, KC_TRNS,
                KC_DOWN, KC_4,   KC_5,    KC_6,    KC_PLUS, KC_TRNS,
       KC_TRNS, KC_AMPR, KC_1,   KC_2,    KC_3,    KC_BSLS, KC_EQL,
                         KC_HOME,KC_PGDN,  KC_PGUP,    KC_END,  KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_DOT, KC_0
),
[PLOV] = KEYMAP(
        // left hand
        KC_NO,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC_NO,
        KC_NO,        KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   KC_NO,
        KC_NO,        KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
        KC_NO,        KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,KC_NO,      KC_NO,  KC_NO,KC_NO,
                                              KC_NO,  KC_TRNS,
                                                              KC_NO,
                                               KC_C,KC_V,KC_NO,
        // right hand
             KC_NO,     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,             KC_NO,
             KC_NO,       KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,             KC_LBRC,
                          KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,
             KC_NO,KC_NO,   KC_NO,   KC_NO,KC_NO, KC_NO,   KC_NO,
                                  KC_NO,  KC_NO,KC_NO,KC_NO,          KC_NO,
             KC_NO,        KC_NO,
             KC_NO,
             KC_NO,KC_N, KC_M
),
};

const uint16_t PROGMEM fn_actions[] = {
    //[1] = ACTION_LAYER_TAP_TOGGLE(SYMB)                // FN1 - Momentary Layer 1 (Symbols)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          register_code(KC_RSFT);
        } else {
          unregister_code(KC_RSFT);
        }
        break;
      }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    ergodox_board_led_off();
    (layer_state & 2) == 2 ? ergodox_right_led_1_on() : ergodox_right_led_1_off();
    (layer_state & 4) == 4 ? ergodox_right_led_2_on() : ergodox_right_led_2_off();
    (layer_state & 8) == 8 ? ergodox_right_led_3_on() : ergodox_right_led_3_off();

};
