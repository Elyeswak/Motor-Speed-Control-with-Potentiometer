#include <Stepper.h>

int potPin = A0;
int potVal;
int stepsPerRevolution = 2048;

Stepper myStepper (stepsPerRevolution, 8, 10, 9, 11);

void setup() {
}

void loop() {
  potVal = analogRead(potPin);
  int stepSpeed = map(potVal, 0 , 1023, 0, 17);

  if (stepSpeed > 0) {
    myStepper.setSpeed(stepSpeed);
    myStepper.step(stepsPerRevolution / 100);
  }
}
