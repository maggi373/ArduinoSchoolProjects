// Oppgave 7 - Lysbryter - 30.01.2018 - MHP

// KONSTANTER:
const byte motor = 10;
const byte bryter = 11;
const byte led13 = 13;

// VARIABLER:
int lesbryter;

// SETUP:
void setup() {
  pinMode(motor, OUTPUT);
  pinMode(led13, OUTPUT);
  pinMode(bryter, INPUT);
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  lesbryter = digitalRead(bryter);
  delay(10);
  if (lesbryter == HIGH) {
    digitalWrite(motor, HIGH);
    digitalWrite(led13, HIGH);
  }
  else {
    digitalWrite(motor, LOW);
    digitalWrite(led13, LOW);
  }
}
