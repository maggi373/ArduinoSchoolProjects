 // Oppgave 19 - Av/På med en impulsbryter - 05.04.2018 - MHP

// KONSTANTER:
const byte knapp1 = A2;
const byte led13 = 13;

// VARIABLER:
int lesknapp1;
byte runt = 0;
byte runtt = 0;

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
  delay(100);
  lesknapp1 = digitalRead(knapp1);
  if (lesknapp1 == HIGH){
    if (runt == 0){
      digitalWrite(led13, HIGH);
      runtt = 1;
    }
    if (runt == 1){
      digitalWrite(led13, LOW);
      runt = 0;
      runtt = 0;
    }
    if (runtt == 1){
      runt = 1;
    }
    delay(100);
  }
}
