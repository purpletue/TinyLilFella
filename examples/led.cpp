#include <Arduino.h>
// A basic firmware detailing the RGB LED pins of the microcontroller.
// PC51 is blue, PB3 is green, and PB7 is red!
#define BLUE PC15
#define GREEN PB3
#define RED PB7
void setup() {
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
} void loop() {
  digitalWrite(RED, HIGH);
  digitalWrite(BLUE, LOW);
  delay(500);
  digitalWrite(BLUE, HIGH);
  digitalWrite(GREEN, LOW);
  delay(500);
  digitalWrite(GREEN, HIGH);
  digitalWrite(RED, LOW);
  delay(500);
}
