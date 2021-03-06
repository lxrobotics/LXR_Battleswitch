/** 
 * @author Alexander Entinger, MSc / LXRobotics
 * @brief hardware abstraction layer file contains all definitions for the i/o ports of the battleswitch
 * @file hal.h
 * @license
 */

#ifndef HAL_H_
#define HAL_H_

/* INCLUDES */

#include <avr/io.h>

/* DEFINES */

// LED's

#define LED_OUT_1_DDR		DDRB
#define LED_OUT_1_PORT		PORTB
#define LED_OUT_1_bm		(1<<PORTB1)

#define LED_OUT_2_DDR		DDRD
#define LED_OUT_2_PORT		PORTD
#define LED_OUT_2_bm		(1<<PORTD5)

// MOSFET's

#define OUT_1_DDR			DDRB
#define OUT_1_PORT			PORTB
#define OUT_1_bm			(1<<PORTB2)

#define OUT_2_DDR			DDRD
#define OUT_2_PORT			PORTD
#define OUT_2_bm			(1<<PORTD6)

// RC INPUT

#define RC_DDR				DDRD
#define RC_PORT				PORTD
#define RC_bm				(1<<PORTD2)

#endif /* HAL_H_ */
