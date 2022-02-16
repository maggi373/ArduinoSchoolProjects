// Oppgave 14 - Terningkast - 05.04.2018 - MHP

// KONSTANTER:
const byte led1 = 2;
const byte led2 = 3;
const byte led3 = 4;
const byte led4 = 5;
const byte led5 = 6;
const byte led6 = 7;
const byte led7 = 8;
const byte led8 = 9;
const byte knapp1 = A5;
const byte knapp2 = A4;

// VARIABLER:
int lesknapp1;
int lesknapp2;
byte ran = 0;
int i;
int leds[8] = {led1, led2, led3, led4, led5, led6, led7, led8};

// SETUP:
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(knapp1, INPUT);
  pinMode(knapp2, INPUT);
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  lesknapp1 = digitalRead(knapp1);
  lesknapp2 = digitalRead(knapp2);
  delay(10);
  if (lesknapp1 == HIGH) {
    for (i = 0; i <= 7; i++) {
      digitalWrite(leds[i], LOW);
    }
    for (i = 0; i <= 7; i++) {
      digitalWrite(leds[i], HIGH);
      delay(100);
    }
    for (i = 7; i >= 0; i--) {
      digitalWrite(leds[i], LOW);
      delay(100);
    }
    ran = random(0, 6);
    for (i = 0; i <= ran; i++) {
      digitalWrite(leds[i], HIGH);
    }
    delay(500);
  }
  if (lesknapp2 == HIGH) {
    for (i = 0; i <= 7; i++) {
      digitalWrite(leds[i], LOW);
    }
  }
}
