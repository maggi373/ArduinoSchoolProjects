// Oppgave 13 - Blinklys - 30.01.2018 - MHP

// KONSTANTER:
const byte knapp1 = A5;
const byte knapp2 = A4;
const byte knapp3 = A3;
const byte knapp4 = A2;
const byte bryter = 11;
const byte led13 = 13;

// VARIABLER:
int lesknapp1;
int lesknapp2;
int lesknapp3;
int lesknapp4;
int lesbryter;
int lesknapper;
int time_delay = 30;
byte led = 2;
byte rund = 0;
byte allow = 0; 
int knapper[] = {lesknapp1, lesknapp2, lesknapp3, lesknapp4};

// SETUP:
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(led13, OUTPUT);
  Serial.print("something, something, something, dark side");
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  lesknapp1 = digitalRead(knapp1);
  lesknapp2 = digitalRead(knapp2);
  lesknapp3 = digitalRead(knapp3);
  lesknapp4 = digitalRead(knapp4);
  lesbryter = digitalRead(bryter);
  time_delay;
  if (knapper == HIGH){
    digitalWrite(led13, HIGH);
    if (lesbryter == HIGH){
      digitalWrite(9, HIGH);
    }
    if (lesknapp1 == HIGH){
      digitalWrite(2, HIGH);
    }
    if (lesknapp2 == HIGH){
      digitalWrite(3, HIGH);
    }
    if (lesknapp3 == HIGH){
      digitalWrite(4, HIGH);
    }
    if (lesknapp4 == HIGH){
      digitalWrite(5, HIGH);
    }
  }
  else {
   digitalWrite(led13, LOW);
   digitalWrite(9, LOW);
   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
  }
}
