// Oppgave 11 - Søylebryter - 30.01.2018 - MHP

// KONSTANTER:
const byte led1 = 2;
const byte led2 = 3;
const byte led3 = 4;
const byte led4 = 5;
const byte led5 = 6;
const byte led6 = 7;
const byte led7 = 8;
const byte led8 = 9;
const byte bryter = 11;
const byte led13 = 13;

// VARIABLER:
int lesbryter;
int x = -1;
int i;
int leds[8] = {led1, led2, led3, led4, led5, led6, led7, led8};
byte rundt;

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
  pinMode(led13, OUTPUT);
  pinMode(bryter, INPUT);
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  lesbryter = digitalRead(bryter);
  delay(10);
  if (lesbryter == HIGH && rundt == 0) {
    x += 1;
    if (x == 8) {
      x = -1;
    }
    rundt = 1;
  }
  if (lesbryter == LOW && rundt == 1) {
    rundt = 0;
  }
  for (i = 0; i <= x; i++) {
    digitalWrite(leds[i], HIGH);
  }
  for (i = 7; i >= x + 1; i--) {
    digitalWrite(leds[i], LOW);
  }
}
