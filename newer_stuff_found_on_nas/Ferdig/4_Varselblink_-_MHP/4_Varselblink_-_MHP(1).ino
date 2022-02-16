// Oppgave 4 - Varselblink - 30.01.2018 - MHP

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
int time_on = 200;
int time_off = 200;

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
  digitalWrite (led1, HIGH);
  digitalWrite (led2, HIGH);
  digitalWrite (led3, HIGH);
  digitalWrite (led4, HIGH);
  digitalWrite (led5, LOW);
  digitalWrite (led6, LOW);
  digitalWrite (led7, LOW);
  digitalWrite (led8, LOW);
  delay(time_on);
  digitalWrite (led5, HIGH);
  digitalWrite (led6, HIGH);
  digitalWrite (led7, HIGH);
  digitalWrite (led8, HIGH);
  digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
  digitalWrite (led4, LOW);
  delay(time_off);
}
