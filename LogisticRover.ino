/*
 Name:		LogisticRover.ino
 Created:	9/15/2023 12:45:39 PM
 Author:	Imami Joel Betofe
*/
#include "MotorConfig.h"

MotorDriver motordriver;
// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
	motordriver.init();
}

// the loop function runs over and over again until power down or reset
void loop() {
	motordriver.Control();
	/*
	Serial.println("l");
	delay(500);*/
}
