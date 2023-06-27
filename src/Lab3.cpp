/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/michaeljosephcherchi/Desktop/labs/Lab3/src/Lab3.ino"
void setup();
void loop();
#line 1 "/Users/michaeljosephcherchi/Desktop/labs/Lab3/src/Lab3.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup()
{
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT);
}

void loop()
{
  analogWrite(D7,255);
  analogWrite(D6,0);
  analogWrite(D5,0);
  delay(1000);
  analogWrite(D7,0);
  analogWrite(D6,255);
  analogWrite(D5,0);
  delay(1000);
  analogWrite(D7,0);
  analogWrite(D6,0);
  analogWrite(D5,255);
  delay(1000);
  analogWrite(D7,255);
  analogWrite(D6,165);
  analogWrite(D5,0);
  delay(1000);
  analogWrite(D7,255);
  analogWrite(D6,255);
  analogWrite(D5,0);
  delay(1000);
  analogWrite(D7,160);
  analogWrite(D6,32);
  analogWrite(D5,240);
  delay(1000);
  analogWrite(D7,0);
  analogWrite(D6,100);
  analogWrite(D5,100);
}

// pinMode(A0, OUTPUT);
// analogWrite(pin,255); //100% duty cycle
// analogWrite(pin,127); //50% duty cycle
// analogWrite(pin,0); //0% duty cycle
//pinMode(D6, OUTPUT); 
//analogWrite(D6, 128);