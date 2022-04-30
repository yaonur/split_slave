
#include <Arduino.h>
#include "Keys.cpp"

int c1 = 2;
int c2 = 4;
int c3 = 3;
int c4 = 5;
int c5 = 6;
int c6 = 7;
int rest = 9;
int r1 = 15;
int r2 = 14;
int r3 = 16;
int r4 = 10;

bool isPressed = false;
;
;
;
;
char ss[5];
void setup()
{
  // put your setup code here, to run once:
  pinMode(c1, INPUT_PULLUP);
  pinMode(c2, INPUT_PULLUP);
  pinMode(c3, INPUT_PULLUP);
  pinMode(c4, INPUT_PULLUP);
  pinMode(c5, INPUT_PULLUP);
  pinMode(c6, INPUT_PULLUP);
  pinMode(rest, INPUT_PULLUP);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);

  Serial.begin(9600);
  Serial1.begin(9600);
}

void swrite()
{
  // ss = "hello";
  // Serial.write(123);
  // Serial.write("heyya",5);
  // Serial.write(ss);
}

void sread()
{
  Serial.readBytes(ss, 5);
  Serial.println(ss);
}
void loop()
{
  if (digitalRead(rest) == LOW)
    delay(5000);

  digitalWrite(r1, LOW);
  r1c1.process(c1);
  r1c2.process(c2);
  r1c3.process(c3);
  r1c4.process(c4);
  r1c5.process(c5);
  r1c6.process(c6);
  digitalWrite(r1, HIGH);

  digitalWrite(r2, LOW);
  r2c1.process(c1);
  r2c2.process(c2);
  r2c3.process(c3);
  r2c4.process(c4);
  r2c5.process(c5);
  r2c6.process(c6);
  digitalWrite(r2, HIGH);

  digitalWrite(r3, LOW);
  r3c1.process(c1);
  r3c2.process(c2);
  r3c3.process(c3);
  r3c4.process(c4);
  r3c5.process(c5);
  r3c6.process(c6);
  digitalWrite(r3, HIGH);

  digitalWrite(r4, LOW);
  r4c3.process(c3);
  r4c4.process(c4);
  r4c5.process(c5);
  r4c6.process(c6);
  digitalWrite(r4, HIGH);

  // swrite();
  // swrite();
  // sread();
  delay(4);
}