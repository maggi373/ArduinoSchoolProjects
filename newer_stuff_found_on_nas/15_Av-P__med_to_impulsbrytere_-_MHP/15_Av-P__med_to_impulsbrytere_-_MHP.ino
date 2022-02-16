 // Oppgave 15 - Av/På med to impulsbrytere - 05.04.2018 - MHP

// KONSTANTER:
const byte knapp1 = A5;
const byte knapp2 = A4;
const byte led13 = 13;

// VARIABLER:
int lesknapp1;
int lesknapp2;

// SETUP:
void setup() {
  Serial.begin(9600);
  pinMode(led13, OUTPUT);
  Serial.print("i'm doing something");
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  lesknapp1 = digitalRead(knapp1);
  lesknapp2 = digitalRead(knapp2);
  delay(10);
  lesknapp1 = digitalRead(knapp1);
  lesknapp2 = digitalRead(knapp2);
  if (lesknapp1 == HIGH && lesknapp2 == LOW){
    digitalWrite(led13, HIGH);
  }
  if (lesknapp2 == HIGH && lesknapp1 == LOW){
    digitalWrite(led13, LOW);
  }
}
