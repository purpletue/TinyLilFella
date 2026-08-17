#include <Arduino.h>
// A demonstration of the programmable button at PA6. 
// This simple program will read the input and if the button is LOW, it'll turn the LED on or off at white.
#define SWC PA6
#define BLUE PC15
#define GREEN PB3
#define RED PB7
void setup(){
  pinMode(SWC, INPUT_PULLUP);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
} void loop(){
  int swcState = digitalRead(SWC);
  if (swcState == LOW) {
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, LOW);
  } else{
    digitalWrite(BLUE, HIGH);
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, HIGH);
  } delay(50);
}
