#include "caparrut70.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[2]= LAYOUT (/*Numpad*/
	/
	  KC_GRV,		KC_ESC,		KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		KC_6,		KC_7,		KC_8,		KC_9,		KC_PEQL,	KC_PSLS,	KC_PAST,	KC_BSPC,

	  KC_F1,		KC_TAB,		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_P7,		KC_P8,		KC_P9,		KC_PMNS,	KC_DEL, 

	  KC_F1,		KC_CAPS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_P4,		KC_P5,		KC_P6,		KC_PPLS,	KC_ENT, 

	  KC_F1,		KC_LSFT,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_P1,		KC_P2,		KC_P3,		KC_PENT,	KC_RSFT, 

	  KC_F1,		KC_LCTL,	KC_LGUI,	KC_LALT,								KC_SPC,										TG(1),		KC_RALT,	KC_PDOT,	KC_PENT,	KC_PCOMM, 
	),

	[1]= LAYOUT (/*BASE*/
	//
	  KC_GRV,		KC_ESC,		KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		KC_6,		KC_7,		KC_8,		KC_9,		KC_0,		KC_MINS,	KC_EQL,		KC_BSPC,

	  KC_F1,		KC_TAB,		KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,		KC_LBRC,	KC_RBRC,	KC_DEL, 

	  KC_F1,		KC_CAPS,	KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		KC_H,		KC_J,		KC_K,		KC_L,		KC_SCLN,	KC_QUOT,	KC_NUHS,	KC_ENT, 

	  KC_F1,		KC_LSFT,	KC_NUBS,	KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,		KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,	KC_UP,		KC_RSFT, 

	  KC_F1,		KC_LCTL,	KC_LGUI,	KC_LALT,								KC_SPC,										MO(0),		KC_RALT,	KC_LEFT,	KC_DOWN,	KC_RIGHT, 

	),

	[0]= LAYOUT (/*Modifiers*/
	//
	  KC_NO,		KC_F1,		KC-F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,		KC_NO,		KC_NO, 
	//
	  KC_F1,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO, 
	// 
	  KC_F1,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO, 
	// 
	  KC_F1,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		TG(2),		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO, 
	// 
	  KC_F1,		KC_NO,		KC_NO,		KC_NO,									KC_NO,										TG(1),		KC_NO,		KC_NO,		KC_NO,		KC_NO, 
	//
	),

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
