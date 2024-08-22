// MotorConfig.h
#pragma once
#include<Arduino.h>

#define ENA_PIN  32
#define IN1_PIN	 27
#define IN2_PIN	 26

#define ENB_PIN	 25
#define IN3_PIN	 12
#define IN4_PIN	 14


#define ENA_PIN2 23
#define IN1_PIN2 33
#define IN2_PIN2 4

#define ENB_PIN2 13
#define IN3_PIN2 19
#define IN4_PIN2 18


#define FREQUENCY 400
#define ENA_PIN_CHANNEL 0
#define ENB_PIN_CHANNEL 1
#define ENA_PIN2_CHANNEL 2
#define ENB_PIN2_CHANNEL 3
#define RESOLUTION 8
#define MAX_PWM 200
#define MIN_PWM 100

class MotorDriver {
private:

public:
	void init();
	void Control();
};