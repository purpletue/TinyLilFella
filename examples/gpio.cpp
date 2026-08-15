#include <Arduino.h>
#include <Servo.h>
// Just a simple servo and potentiometer example to demonstrate the GPIO.
// the servo's Ground is plugged into GND, VCC is plugged into VBUS, and Data into PA0, and the potentiometer's ground into ground, VCC into 3V3, and Data into PA1.
// This example has the MCU read the position of the pot and spin the servo to that position.
Servo myServo;
void setup() {
  pinMode(POT_PIN, INPUT);
  myServo.attach(SERVO_PIN);
} void loop() {
  int potValue = analogRead(POT_PIN);
  int servoAngle = map(potValue, 0, 1023, 0, 180);
  myServo.write(servoAngle);
  delay(15);
}
