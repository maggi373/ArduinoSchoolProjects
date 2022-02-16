// Oppgave 17 - LED Søyle Volum - 30.01.2018 - MHP

/*
  FORORD
  Eg fikk lyst å kunne vise at eg mestret swtich case men den ville bli dårlig kode her men eg kom med et komprimiss
  Så hvis du endrer til [ja] på define vil koden automatisk bruke switch case koden og ikkje forloopen men hvis du bruker [nei] vil du bruke forloopen
  Opplevelsen er den samme
*/

#define choice nei


// KONSTANTER:
const byte led1 = 2;
const byte led2 = 3;
const byte led3 = 4;
const byte led4 = 5;
const byte led5 = 6;
const byte led6 = 7;
const byte led7 = 8;
const byte led8 = 9;
const byte analogPin = A0;
const byte nei;
const byte ja = 1;

// VARIABLER:
int val;
int i;
int leds[8] = {led1, led2, led3, led4, led5, led6, led7, led8};
int valt;

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
  pinMode(analogPin, INPUT);
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  val = analogRead(analogPin);
  valt = val / 113.777777777778;
  if (choice == 0) {
    for (i = -1; i <= valt - 1; i++) {
      digitalWrite(leds[i], HIGH);
    }
    for (i = 8; i >= valt; i--) {
      digitalWrite(leds[i], LOW);
    }
  }
  if (choice == 1) {
    switch (valt) {
      case 0:
        for (i = 0; i <= 7; i++) {
          digitalWrite(leds[i], LOW);
        }
        break;
      case 1:
        digitalWrite(led1, HIGH);
        for (i = 1; i <= 7; i++) {
          digitalWrite(leds[i], LOW);
        }
        break;
      case 2:
        for (i = 0; i <= 1; i++) {
          digitalWrite(leds[i], HIGH);
        }
        for (i = 2; i <= 7; i++) {
          digitalWrite(leds[i], LOW);
        }
        break;
      case 3:
        for (i = 0; i <= 2; i++) {
          digitalWrite(leds[i], HIGH);
        }
        for (i = 3; i <= 7; i++) {
          digitalWrite(leds[i], LOW);
        }
        break;
      case 4:
        for (i = 0; i <= 3; i++) {
          digitalWrite(leds[i], HIGH);
        }
        for (i = 4; i <= 7; i++) {
          digitalWrite(leds[i], LOW);
        }
        break;
      case 5:
        for (i = 0; i <= 4; i++) {
          digitalWrite(leds[i], HIGH);
        }
        for (i = 5; i <= 7; i++) {
          digitalWrite(leds[i], LOW);
        }
        break;
      case 6:
        for (i = 0; i <= 5; i++) {
          digitalWrite(leds[i], HIGH);
        }
        for (i = 6; i <= 7; i++) {
          digitalWrite(leds[i], LOW);
        }
        break;
      case 7:
        for (i = 0; i <= 6; i++) {
          digitalWrite(leds[i], HIGH);
        }
        digitalWrite(led8, LOW);
        break;
      default:
        for (i = 0; i <= 7; i++) {
          digitalWrite(leds[i], HIGH);
        }
        break;
    }
  }
}
