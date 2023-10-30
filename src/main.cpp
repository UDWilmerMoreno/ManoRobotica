#include <Arduino.h>
#include <Servo.h>
#define Dedo A0
int ValorDelDedo = 0;
int ValorDelServo;

Servo myservo;

void setup()
{
  myservo.attach(2);
  Serial.begin(115200);
  pinMode(Dedo, INPUT);
}

void loop()
{
  ValorDelDedo = analogRead(Dedo);
  ValorDelServo = map(ValorDelDedo, 750, 1000, 0, 180);
  myservo.write(ValorDelServo);
  Serial.print(ValorDelDedo);
  Serial.print(" ");
  Serial.println(ValorDelServo);
  delay(150);
}