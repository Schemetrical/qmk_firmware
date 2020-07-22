#include "lefthanded.h"

// enum custom_keycodes {
// 	USER = KC_F21,
// 	PASS = KC_F22,
// };
#define TSKMGR LCTL(LSFT(KC_ESC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  	[0] = KEYMAP( /* LeftHanded - QWERTY */
		KC_ESC,  	KC_1,  KC_2,  KC_3,  KC_4,   \
		KC_TAB,  	KC_Q,  KC_W,  KC_E,  KC_R,   \
		KC_BSPC,   	KC_A,  KC_S,  KC_D,  KC_F,   \
		KC_LSFT, 	KC_Z,  KC_X,  KC_C,  KC_V,   \
					MO(1), KC_B, KC_G, 				KC_SPC  \
		),
	  	[1] = KEYMAP( /* LeftHanded - Macros */
	  	RESET,			TSKMGR, KC_TRNS, KC_TRNS, KC_TRNS, \
	  	KC_TRNS,   		KC_5, 	KC_6, KC_7, KC_8, \
	 	LGUI(KC_TAB), 	PASS, 	PASS, PASS, PASS, \
	 	KC_TRNS, 		LALT(KC_F10), 	M(0), KC_J, KC_K, \
	 				   KC_TRNS, KC_T, KC_H, 			PASS  \
  	),
};

/*
	  	RESET, M(1), KC_TRNS, KC_TRNS, KC_TRNS, \
	  	KC_TRNS, KC_F21, KC_6, KC_7, KC_8, \
	 	M(0), KC_F22, KC_Y, KC_U, KC_I, \
	 	KC_TRNS, M(2), KC_N, KC_J, KC_K, \
	 			KC_TRNS, KC_T, KC_5, 			KC_4  \
*/

const uint16_t PROGMEM fn_actions[] = {

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	// if (record->event.pressed) {
	// 	switch(keycode) {
	// 		case USER:
	// 			SEND_STRING("Schemetrical@icloud.com");
	// 			return false; break;
	// 		case PASS:
	// 			SEND_STRING("yicheenisbad2k16");
	// 			return false; break;
	// 	}
	// }
	return true;
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{

  // MACRODOWN only works in this function
	if (record->event.pressed) {
		switch(id) {
			case 0:
				clear_keyboard();
		}
	}
	return MACRO_NONE;
};
