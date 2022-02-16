// Årsprøve - 08.05.2018 - MHP

// KONSTANTER:
const byte knapp1 = A5;
const byte knapp2 = A4;
const byte knapp3 = A3;
const byte knapp4 = A2;
const byte bryter = 11;

// VARIABLER:
int lesknapp1;
int lesknapp2;
int lesknapp3;
int lesknapp4;
int delays;
byte ran = 0;
byte rans = 0;
byte i = 0;
byte val = 0;
int analogPin = A0;
int bryters;

// SETUP:
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(analogPin, INPUT);
  Serial.print("i'm doing something");
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  lesknapp1 = digitalRead(knapp1);
  lesknapp2 = digitalRead(knapp2);
  lesknapp3 = digitalRead(knapp3);
  lesknapp4 = digitalRead(knapp4);
  bryters = digitalRead(bryter);
  delay(10);
  lesknapp1 = digitalRead(knapp1);
  lesknapp2 = digitalRead(knapp2);
  lesknapp3 = digitalRead(knapp3);
  lesknapp4 = digitalRead(knapp4);
  bryters = digitalRead(bryter);
  delays = analogRead(analogPin);
  if (delays >= 5) {
    if (bryters == HIGH) {
      if (lesknapp1 == HIGH && lesknapp2 == LOW) {
        val = 1;
      }
      if (lesknapp1 == HIGH && lesknapp2 == HIGH) {
        val = 5;
      }
      if (lesknapp2 == HIGH && lesknapp1 == LOW) {
        val = 2;
      }
      if (lesknapp3 == HIGH && lesknapp4 == LOW) {
        val = 3;
      }
      if (lesknapp3 == HIGH && lesknapp4 == HIGH) {
        val = 6;
      }
      if (lesknapp4 == HIGH && lesknapp3 == LOW) {
        val = 4;
      }
    }
    if (bryters == LOW) {
      val = 0;
      for (i = 2; i <= 9; i++) {
        digitalWrite(i, LOW);
      }
    }

    Serial.println(delays);
    if (val == 1) {
      for (i = 2; i <= 7; i++) {
        digitalWrite(i, LOW);
      }
      for (i = 2; i <= 9; i++) {
        digitalWrite(i, HIGH);
        delays = analogRead(analogPin);
        delay(delays);
      }
      for (i = 9; i >= 2; i--) {
        digitalWrite(i, LOW);
        delays = analogRead(analogPin);
        delay(delays);
      }
    }
    if (val == 2) {
      ran = random(2, 10);
      digitalWrite(ran, HIGH);
      rans = random(2, 10);
      digitalWrite(rans, HIGH);
      delay(delays);
      digitalWrite(ran, LOW);
      digitalWrite(rans, LOW);
    }
    if (val == 3) {
      ran = random(2, 10);
      digitalWrite(ran, HIGH);
      delay(delays);
      digitalWrite(ran, LOW);
    }
    if (val == 4) {
      ran = random(2, 10);
      for (i = 2; i <= 10; i++) {
        digitalWrite(i, HIGH);
      }
      digitalWrite(ran, LOW);
      delay(delays);
    }
    if (val == 5) {
      ran = random(2, 7);
      digitalWrite(ran, HIGH);
      for (i = 7; i <= 8; i++) {
        digitalWrite(i, HIGH);
      }
      delay(delays);
      digitalWrite(ran, LOW);
      for (i = 7; i <= 8; i++) {
        digitalWrite(i, LOW);
      }
    }
    if (val == 6) {
      digitalWrite(9, LOW);
      for (i = 2; i <= 6; i++) {
        digitalWrite(i, HIGH);
      }
      delay(delays);
      for (i = 2; i <= 6; i++) {
        digitalWrite(i, LOW);
      }
      for (i = 7; i <= 8; i++) {
        digitalWrite(i, HIGH);
      }
      delay(delays);
      for (i = 7; i <= 8; i++) {
        digitalWrite(i, LOW);
      }
    }
  }
  else {
    for (i = 2; i <= 9; i++) {
      digitalWrite(i, LOW);
    }
  }
}
