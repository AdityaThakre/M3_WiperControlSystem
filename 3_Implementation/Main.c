#include "driver.h"
#include <stdio.h>

void ignition_on(void);
void led_cycle1(void);
void led_cycle2(void);
void led_cycle3(void);
void ignition_off(void);
//int power(void);

void ignition_on(void){
	led_on(LED_RED);
}

void ignition_off(void){
	led_off(LED_RED);
}


void led_cycle1(void){
	led_on(LED_BLUE);
	delay_ms(1000);          //1hz -> 1000ms(1s)
	led_off(LED_BLUE);
	delay_ms(1000);
	led_on(LED_GREEN);
	delay_ms(1000);
	led_off(LED_GREEN);
	delay_ms(1000);
	led_on(LED_ORANGE);
	delay_ms(1000);
	led_off(LED_ORANGE);
	delay_ms(1000);
	led_on(LED_GREEN);
	delay_ms(1000);
	led_off(LED_GREEN);
	delay_ms(1000);
	led_on(LED_BLUE);
	delay_ms(1000);          
	led_off(LED_BLUE);
	delay_ms(1000);
}
void led_cycle2(void){
	led_on(LED_BLUE);
	delay_ms(250);			//4hz -> 1000/4 =250ms
	led_off(LED_BLUE);
	delay_ms(250);
	led_on(LED_GREEN);
	delay_ms(250);
	led_off(LED_GREEN);
	delay_ms(250);
	led_on(LED_ORANGE);
	delay_ms(250);
	led_off(LED_ORANGE);
	delay_ms(250);
	led_on(LED_GREEN);
	delay_ms(250);
	led_off(LED_GREEN);
	delay_ms(250);
	led_on(LED_BLUE);
	delay_ms(250);			
	led_off(LED_BLUE);
	delay_ms(250);
}

void led_cycle3(void){
	led_on(LED_BLUE);
	delay_ms(125);			//8hz -> 1000/8 =125ms
	led_off(LED_BLUE);
	delay_ms(125);
	led_on(LED_GREEN);
	delay_ms(125);
	led_off(LED_GREEN);
	delay_ms(125);
	led_on(LED_ORANGE);
	delay_ms(125);
	led_off(LED_ORANGE);
	delay_ms(125);
	led_on(LED_GREEN);
	delay_ms(125);
	led_off(LED_GREEN);
	delay_ms(125);
	led_on(LED_BLUE);
	delay_ms(125);			
	led_off(LED_BLUE);
	delay_ms(125);
}
/*
int power(void){
	init_button();
	int count = 0, power_up=0;
	unsigned char but_count = 0;
	uint32_t *pGpiodDataReg1 = (uint32_t *)0x40020010; 
	while (1){
		if ((*pGpiodDataReg1) & (1 << user_button)){
			if(++but_count >= 150){
				power_up = 1;
				but_count=0;
			}
		}else{
			but_count=0;
		}
	}delay_ms(150);
	return power_up;
}
int main(void){
	init_all_led();				// LED Initialisation
	init_button();				// Butoon Initialiasation	
	
	while (1)
	{
		volatile int flag = power();
		if (flag==1){
			ignition_on();
			flag = 0;
		}
	}
}*/
int main(void)
{

	init_all_led();				// LED Initialisation
	init_button();				// Butoon Initialiasation

	while (1)
	{
		volatile int flag = button_count();
		if (flag == 1)                        //Activate buttons count according to function
		{	
			ignition_on();
			flag = 0;
		}
		else if (flag == 2)                        //Activate buttons count according to function
		{
			led_cycle1();
			flag = 0;
		}
		else if (flag == 3)
		{
			led_cycle2();
			flag = 0;
		}
		else if (flag == 4)
		{
			led_cycle3();
			flag = 0;
		}
		else if (flag == 5)
		{
			led_cycle1();
			ignition_off();
			flag = 0;
		}
	}
}