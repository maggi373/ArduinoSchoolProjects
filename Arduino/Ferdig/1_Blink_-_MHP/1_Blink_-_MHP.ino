// Oppgave 1 - Blink - 30.01.2018 - MHP

// KONSTANTER:
const byte led = 13;

// VARIABLER:
int time_on = 1000;
int time_off = 500;

// SETUP:
void setup() {
  pinMode(led, OUTPUT);
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  digitalWrite(led, HIGH);
  delay(time_on);
  digitalWrite(led, LOW);
  delay(time_off);
}
