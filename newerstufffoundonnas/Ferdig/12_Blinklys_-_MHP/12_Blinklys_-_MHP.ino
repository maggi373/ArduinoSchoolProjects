// Oppgave 12 - Blinklys - 30.01.2018 - MHP

// KONSTANTER:
const byte knapp1 = A5;
const byte knapp2 = A4;
const byte knapp3 = A3;
const byte knapp4 = A2;
const byte led1 = 2;
const byte led2 = 3;
const byte led3 = 4;
const byte led4 = 5;

// VARIABLER:
int lesknapp1;
int lesknapp2;
int lesknapp3;
int lesknapp4;

// SETUP:
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(knapp1, INPUT);
  pinMode(knapp2, INPUT);
  pinMode(knapp3, INPUT);
  pinMode(knapp4, INPUT);
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  lesknapp1 = digitalRead(knapp1);
  lesknapp2 = digitalRead(knapp2);
  lesknapp3 = digitalRead(knapp3);
  lesknapp4 = digitalRead(knapp4);
  delay(10);
  if (lesknapp1 == HIGH) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  if (lesknapp2 == HIGH) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  if (lesknapp3 == HIGH) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
  if (lesknapp4 == HIGH) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
}
