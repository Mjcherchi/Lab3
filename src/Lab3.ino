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
  analogWrite(D7, 0);
  analogWrite(D6, 255);
  analogWrite(D5, 255);
  delay(1000);
  analogWrite(D7, 255);
  analogWrite(D6, 0);
  analogWrite(D5, 255);
  delay(1000);
  analogWrite(D7, 255);
  analogWrite(D6, 255);
  analogWrite(D5, 0);
  delay(1000);
  analogWrite(D7, 0);
  analogWrite(D6, 90);
  analogWrite(D5, 255);
  delay(1000);
  analogWrite(D7, 0);
  analogWrite(D6, 0);
  analogWrite(D5, 255);
  delay(1000);
  analogWrite(D7, 95);
  analogWrite(D6, 223);
  analogWrite(D5, 15);
  delay(1000);
  analogWrite(D7, 255);
  analogWrite(D6, 155);
  analogWrite(D5, 155);
  delay(1000);
}

// pinMode(A0, OUTPUT);
// analogWrite(pin,255); //100% duty cycle
// analogWrite(pin,127); //50% duty cycle
// analogWrite(pin,0); //0% duty cycle
// pinMode(D6, OUTPUT);
// analogWrite(D6, 128);