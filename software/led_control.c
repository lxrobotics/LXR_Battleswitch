/** 
 * @author Alexander Entinger, MSc / LXRobotics
 * @brief allows for control of the leds of the battleswitch
 * @file led_control.c
 * @license
 */

/* INCLUDES */

#include "led_control.h"

#include "hal.h"

/* FUNCTIONS */

/** 
 * @brief initialize the led control
 */
void led_control_init()
{
	LED_OUT_1_DDR |= LED_OUT_1_bm;
	LED_OUT_2_DDR |= LED_OUT_2_bm;
	
	led_control_set_led(LED_OUT_1, LED_OFF);
	led_control_set_led(LED_OUT_2, LED_OFF);
}

/**
 * @brief set led state
 */
void led_control_set_led(E_LED_SELECT const led, E_LED_MODE const mode)
{
	switch(mode)
	{
		case LED_OFF:
		{
			switch(led)
			{
				case LED_OUT_1: LED_OUT_1_PORT &= ~LED_OUT_1_bm; break;
				case LED_OUT_2: LED_OUT_2_PORT &= ~LED_OUT_2_bm; break;				
				default: break;
			}
		}
		break;
		case LED_ON:
		{
			switch(led)
			{
				case LED_OUT_1: LED_OUT_1_PORT |= LED_OUT_1_bm; break;
				case LED_OUT_2: LED_OUT_2_PORT |= LED_OUT_2_bm; break;
				default: break;
			}
		}
		break;
		case LED_TOOGLE:
		{
			switch(led)
			{
				case LED_OUT_1: LED_OUT_1_PORT ^= LED_OUT_1_bm; break;
				case LED_OUT_2: LED_OUT_2_PORT ^= LED_OUT_2_bm; break;
				default: break;
			}
		}
		break;
		default: break;
	}
}
