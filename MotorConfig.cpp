// 
// 
// 

#include "MotorConfig.h"

void MotorDriver::init() {
    

    pinMode(ENA_PIN, OUTPUT);
    pinMode(IN1_PIN, OUTPUT);
    pinMode(IN2_PIN, OUTPUT);

    pinMode(ENB_PIN, OUTPUT);
    pinMode(IN3_PIN, OUTPUT);
    pinMode(IN4_PIN, OUTPUT);

    pinMode(ENA_PIN2, OUTPUT);
    pinMode(IN1_PIN2, OUTPUT);
    pinMode(IN2_PIN2, OUTPUT);

    pinMode(ENB_PIN2, OUTPUT);
    pinMode(IN3_PIN2, OUTPUT);
    pinMode(IN4_PIN2, OUTPUT);


    ledcAttachPin(ENA_PIN, ENA_PIN_CHANNEL);
    ledcAttachPin(ENB_PIN, ENB_PIN_CHANNEL);
    ledcAttachPin(ENA_PIN2, ENA_PIN2_CHANNEL);
    ledcAttachPin(ENB_PIN2, ENB_PIN2_CHANNEL);

    ledcSetup(ENA_PIN_CHANNEL, FREQUENCY, RESOLUTION);
    ledcSetup(ENB_PIN_CHANNEL, FREQUENCY, RESOLUTION);
    ledcSetup(ENA_PIN2_CHANNEL, FREQUENCY, RESOLUTION);
    ledcSetup(ENB_PIN2_CHANNEL, FREQUENCY, RESOLUTION);

    ledcWrite(ENA_PIN_CHANNEL, MAX_PWM);
    ledcWrite(ENB_PIN_CHANNEL, MAX_PWM);
    ledcWrite(ENA_PIN2_CHANNEL, MAX_PWM);
    ledcWrite(ENB_PIN2_CHANNEL, MAX_PWM);
}

void MotorDriver::Control() {
    //Forward
    //MotorFL
    //CCW
   // digitalWrite(IN1_PIN, LOW);
   // digitalWrite(IN2_PIN, HIGH);
    delay(1000);
    //
   // digitalWrite(IN1_PIN, HIGH);
   // digitalWrite(IN2_PIN, LOW);
    //MotorFR
    //CW
    digitalWrite(IN3_PIN, HIGH);
    digitalWrite(IN4_PIN, LOW);
    //MotorBR
    //CW
  //  digitalWrite(IN1_PIN2, HIGH);
  //  digitalWrite(IN2_PIN2, LOW);
    //MotorBL
   //CCW
   // digitalWrite(IN3_PIN2, HIGH);
   // digitalWrite(IN4_PIN2, LOW);
    //delay(5000);

}
