#include "DCMotor.h"

#define PIN_PWM1 0
#define PIN_PWM2 1
#define PWM_FREQ 400

Motor motor(PIN_PWM1, PIN_PWM2, PWM_FREQ);

void setup() {

}

void loop() {
    motor.setSpeed(100);
    delay(1000);
    motor.setSpeed(-100);
    delay(1000);
    motor.stop();
    delay(1000);
}