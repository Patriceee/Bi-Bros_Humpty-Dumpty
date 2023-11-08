#include <Servo.h>

Servo servo1;
Servo servo2;
const int buttonPin = 2;


void setup() {
  servo1.attach(4);
  servo2.attach(5);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {  //Activates the first servo to make Humpty Dumpty climb the wall
    servo1.write(90);
  } else {
    servo1.write(0);
  }

  if (digitalRead(buttonPin) == HIGH) {  //Activates the second servo to flip the wall 180 degrees
    servo2.write(180);
  } else {
    servo2.write(0);
  }
}
