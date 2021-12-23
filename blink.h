/*
 blink.h - Simple example in creating your own Arduino Library
 Copyright (c) 2017 op of TMM. All right reserved.

 A pin is blinked automatically by one second intervals or by a specified interval
 Methods:
 
 Blink(pin) - Constructor. Specify pin to blink
 blink(value) - Enable blinking. Accepts 1, 0 or ON and OFF
 blink(value, length) - Enable blinking and specify interval of blinking.
*/

#ifndef Blink_h
#define Blink_h

#include <arduino.h>


int ledPin = 3;
void setup (){
	pinMode(ledPin,OUTPUT);
}
void loop(){
	for (int a=0; a<=255;a++) { //ѭ����䣬����PWM���ȵ�����
		analogWrite(ledPin,a);
    		delay(8); //��ǰ���ȼ���ά�ֵ�ʱ��,��λ����            
	}
	for (int a=255; a>=0;a--) { //ѭ����䣬����PWM���ȼ�С
		analogWrite(ledPin,a);
    		delay(8); //��ǰ���ȵ�ά�ֵ�ʱ��,��λ����  
	}
}

