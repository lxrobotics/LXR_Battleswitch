/** 
 * @author Alexander Entinger, MSc / LXRobotics
 * @brief allows for control of the leds of the battleswitch
 * @file led_control.h
 * @license
 */

#ifndef LED_CONTROL_H_
#define LED_CONTROL_H_

/* TYPEDEFS */

typedef enum {LED_OUT_1 = 0, LED_OUT_2 = 1} E_LED_SELECT;
typedef enum {LED_OFF = 0, LED_ON = 1, LED_TOOGLE = 2} E_LED_MODE;

/* PROTOTYPES */

/** 
 * @brief initialize the led control
 */
void led_control_init();

/**
 * @brief set led state
 */
void led_control_set_led(E_LED_SELECT const led, E_LED_MODE const mode);

#endif /* LED_CONTROL_H_ */
