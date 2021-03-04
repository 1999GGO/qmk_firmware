#include QMK_KEYBOARD_H

#define _MAIN 0
#define _FN 1
#define _NUM 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_NUM]= LAYOUT(/*Numpad*/
	//
	  KC_GRV,		KC_ESC,		KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		KC_6,		KC_7,		KC_8,		KC_9,		KC_PEQL,	KC_PSLS,	KC_PAST,	KC_DEL, KC_TRNS,

	  KC_F1,		KC_TAB,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_P7,		KC_P8,		KC_P9,		KC_PMNS,	KC_BSPC, 

	  KC_F1,		KC_CAPS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_P4,		KC_P5,		KC_P6,		KC_PPLS,	KC_ENT, 

	  KC_F1,		KC_LSFT,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_P1,		KC_P2,		KC_P3,		KC_PENT,	KC_RSFT, 

	  KC_F1,		KC_LCTL,	KC_LGUI,	KC_LALT,								KC_SPC,										TO(_MAIN),	KC_RALT,	KC_PDOT,	KC_PENT,	KC_COMM
	),

	[_MAIN]= LAYOUT(/*BASE*/
	//
	  KC_GRV,		KC_ESC,		KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		KC_6,		KC_7,		KC_8,		KC_9,		KC_0,		KC_MINS,	KC_EQL,		KC_DEL, KC__MUTE,

	  KC_F1,		KC_TAB,		KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,		KC_LBRC,	KC_RBRC,	KC_BSPC, 

	  KC_F2,		KC_CAPS,	KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		KC_H,		KC_J,		KC_K,		KC_L,		KC_SCLN,	KC_QUOT,	KC_NUHS,	KC_ENT, 

	  KC_F3,		KC_LSFT,	KC_NUBS,	KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,		KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,	KC_UP,		KC_RSFT, 

	  KC_F4,		KC_LCTL,	KC_LGUI,	KC_LALT,								KC_SPC,										MO(_FN),	KC_RALT,	KC_LEFT,	KC_DOWN,	KC_RIGHT

	),

	[_FN]= LAYOUT(/*Modifiers*/
	//
	  KC_NO,		KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,		KC_NO,		KC_NO,  KC_TRNS,
	//
	  KC_F1,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO, 
	// 
	  KC_F1,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO, 
	// 
	  KC_F1,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		TG(_NUM),	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO, 
	// 
	  KC_F1,		KC_NO,		KC_NO,		KC_NO,									KC_NO,										TO(_MAIN),	KC_NO,		KC_NO,		KC_NO,		KC_NO
	//
	),

};

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;  // flips the display 180 degrees if offhand
}

void oled_task_user(void) {
  // Host Keyboard Layer Status
  oled_write_ln_P(PSTR("Cu 29"), false);
  oled_write_P(PSTR("Layer"), false);

  switch (get_highest_layer(layer_state)) {
    case _MAIN:
      oled_write_ln_P(PSTR("Main"), false);
      break;
    case _FN:
      oled_write_ln_P(PSTR("FN"), false);
      break;
    case _NUM:
      oled_write_ln_P(PSTR("NUM"), false);
      break;
    default:
      // Or use the write_ln shortcut over adding '\n' to the end of your string
      oled_write_ln_P(PSTR("N/A"), false);
  }

}
#endif

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0){
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }    
}

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}

