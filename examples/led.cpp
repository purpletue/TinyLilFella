#include <Arduino.h>
// A basic firmware detailing the RGB LED pins of the microcontroller.
// PA5 is blue, PA6 is green, and PA7 is red!
#define BLUE PA5
#define GREEN PA6
#define RED PA7
void setup() {
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
}
void loop() {
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
