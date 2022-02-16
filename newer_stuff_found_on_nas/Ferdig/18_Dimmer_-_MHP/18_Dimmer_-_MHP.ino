// Oppgave 18 - Dimmer - 30.01.2018 - MHP

// KONSTANTER:
const byte led = 3;
const byte analogPin = A0;

// VARIABLER:
int val;

// SETUP:
void setup() {
  pinMode(led, OUTPUT);
  pinMode(analogPin, INPUT);
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  val = analogRead(analogPin);
  analogWrite(led, val / 4);
}
