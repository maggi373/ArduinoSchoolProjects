// Oppgave 2 - Dobbelblink - 30.01.2018 - MHP

// KONSTANTER:
const byte led1 = 2;
const byte led2 = 3;

// VARIABLER:
int time_on = 1000;
int time_off = 1000;

// SETUP:
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(time_on);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(time_off);
}
