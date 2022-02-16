// Oppgave 8 - Dobbelbryter - 30.01.2018 - MHP

// KONSTANTER:
const byte led1 = 2;
const byte led2 = 3;
const byte bryter = 11;

// VARIABLER:
int lesbryter;

// SETUP:
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(bryter, INPUT);
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  lesbryter = digitalRead(bryter);
  delay(10);
  if (lesbryter == HIGH) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
}
