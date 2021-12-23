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
	for (int a=0; a<=255;a++) { //循环语句，控制PWM亮度的增加
		analogWrite(ledPin,a);
    		delay(8); //当前亮度级别维持的时间,单位毫秒            
	}
	for (int a=255; a>=0;a--) { //循环语句，控制PWM亮度减小
		analogWrite(ledPin,a);
    		delay(8); //当前亮度的维持的时间,单位毫秒  
	}
}

