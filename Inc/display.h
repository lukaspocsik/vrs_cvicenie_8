/*
 * display.c
 *
 *  Created on: Nov 23, 2020
 *      Author: Stancoj
 */

#include "main.h"
#include <stdio.h>
#include <string.h>

#define SEGMENTA_PIN	LL_GPIO_PIN_1
#define SEGMENTA_PORT	GPIOA

#define SEGMENTB_PIN	LL_GPIO_PIN_0
#define SEGMENTB_PORT	GPIOA

#define SEGMENTC_PIN	LL_GPIO_PIN_8
#define SEGMENTC_PORT	GPIOA

#define SEGMENTD_PIN	LL_GPIO_PIN_5
#define SEGMENTD_PORT	GPIOB

#define SEGMENTE_PIN 	LL_GPIO_PIN_11
#define SEGMENTE_PORT	GPIOA

#define SEGMENTF_PIN 	LL_GPIO_PIN_3
#define SEGMENTF_PORT	GPIOA

#define SEGMENTG_PIN	LL_GPIO_PIN_4
#define SEGMENTG_PORT	GPIOB

#define SEGMENTDP_PIN	LL_GPIO_PIN_1
#define SEGMENTDP_PORT	GPIOB

#define DIGIT_1_ON		LL_GPIO_SetOutputPin(GPIOA, LL_GPIO_PIN_5)
#define DIGIT_2_ON		LL_GPIO_SetOutputPin(GPIOA, LL_GPIO_PIN_4)
#define DIGIT_3_ON		LL_GPIO_SetOutputPin(GPIOA, LL_GPIO_PIN_6)
#define DIGIT_4_ON		LL_GPIO_SetOutputPin(GPIOA, LL_GPIO_PIN_2)
#define DIGIT_TIME_ON	LL_GPIO_SetOutputPin(GPIOA, LL_GPIO_PIN_7)

void resetDigits(void);
void setDigits(void);
void resetSegments(void);
void setSegments(void);

void displaySign(char *c);