// Oppgave 5 - Vandreblink - 30.01.2018 - MHP

// KONSTANTER:
const byte led1 = 2;
const byte led2 = 3;
const byte led3 = 4;
const byte led4 = 5;
const byte led5 = 6;
const byte led6 = 7;
const byte led7 = 8;
const byte led8 = 9;

// VARIABLER:
int time_delay = 300;
byte i;
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
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  for (i = 0; i <= 7; i++) {
    digitalWrite(leds[i], HIGH);
    digitalWrite(leds[i - 1], LOW);
    delay(time_delay);
    digitalWrite(led8, LOW);
  }
}
