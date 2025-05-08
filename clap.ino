#include <Servo.h> 

Servo mgServo1;
Servo mgServo2;
Servo leftServo;
Servo rightServo;

void setup() {
  mgServo1.attach(6);
  mgServo2.attach(9);
  leftServo.attach(10);
  rightServo.attach(11);
}


void loop() {
  // default
  mgServo2.write(90);
  delay(700);
  leftServo.write(75);
  rightServo.write(180-75);
  delay(700);
  mgServo1.write(0);
  delay(700);

  // Clap
  mgServo2.write(90);
  delay(700);
  leftServo.write(65);
  rightServo.write(180-65);
  delay(700);
  leftServo.write(103);
  rightServo.write(180-103);
  delay(700);
  leftServo.write(65);
  rightServo.write(180-65);
  delay(700);
  leftServo.write(103);
  rightServo.write(180-103);
  delay(700);
  leftServo.write(65);
  rightServo.write(180-65);
  delay(700);
  // leftServo.write(103);
  // rightServo.write(180-103);
  // delay(700);
  // leftServo.write(65);
  // rightServo.write(180-65);
  // delay(700);
  while(true){}
}


