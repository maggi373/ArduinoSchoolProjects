// Oppgave 7 - Lysbryter - 30.01.2018 - MHP

// KONSTANTER:
const byte led1 = 2;
const byte bryter = 11;

// VARIABLER:
int lesbryter;

// SETUP:
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(bryter, INPUT);
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  lesbryter = digitalRead(bryter);
  delay(10);
  if (lesbryter == HIGH) {
    digitalWrite(led1, HIGH);
  }
  else {
    digitalWrite(led1, LOW);
  }
}
