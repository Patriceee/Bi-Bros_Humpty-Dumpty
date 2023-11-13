#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
const int buttonPin1 = 2;
const int buttonPin2 = 7;
const int buttonPin3 = 10;



void setup() {
  servo1.attach(4);
  servo2.attach(5);
  servo3.attach(6);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void loop() {
  if (digitalRead(buttonPin1) == HIGH) {  //Activates the first servo to make Humpty Dumpty climb the wall
    servo1.write(90);
  } else {
    servo1.write(0);
  }

  if (digitalRead(buttonPin2) == HIGH) {  //Activates the second servo to flip the wall 180 degrees
    servo2.write(180);
  } else {
    servo2.write(0);
  }

    if (digitalRead(buttonPin3) == HIGH) {  //Activates the third servo to flip the crown 180 degrees
    servo3.write(180);
  } else {
    servo3.write(0);
  }
}
