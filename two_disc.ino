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

  // pass 1
  mgServo1.write(43);
  mgServo2.write(5);
  delay(700);
  leftServo.write(96);
  rightServo.write(180-96);
  delay(700);
  mgServo2.write(35);
  delay(700);
  mgServo1.write(125);
  delay(700);
  //drop
  mgServo2.write(25);
  delay(700);
  leftServo.write(75);
  rightServo.write(180-75);
  delay(700);
  mgServo2.write(35);
  delay(700);

  // pass 2
  mgServo1.write(43);
  delay(700);
  mgServo2.write(0);
  delay(700);
  leftServo.write(93);
  rightServo.write(180-93);
  delay(700);
  mgServo2.write(35);
  delay(700);
  mgServo1.write(85);
  delay(700);
  mgServo2.write(25);
  delay(700);
  leftServo.write(75);
  rightServo.write(180-75);
  delay(700);
  mgServo2.write(35);
  delay(700);

  // pass 3
  mgServo1.write(125);
  delay(700);
  mgServo2.write(0);
  delay(700);
  leftServo.write(96);
  rightServo.write(180-96);
  delay(700);
  mgServo2.write(35);
  delay(700);
  mgServo1.write(85);
  delay(700);
  mgServo2.write(25);
  delay(700);
  leftServo.write(75);
  rightServo.write(180-75);
  delay(700);
  mgServo2.write(35);
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

