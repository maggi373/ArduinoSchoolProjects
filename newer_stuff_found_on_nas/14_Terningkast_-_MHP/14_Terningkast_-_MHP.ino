// Oppgave 14 - Terningkast - 05.04.2018 - MHP

// KONSTANTER:
const byte knapp1 = A5;
const byte knapp2 = A4;

// VARIABLER:
int lesknapp1;
int lesknapp2;
byte ran = 0;
byte i = 0; 

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
  if (lesknapp1 == HIGH){
    for (i = 2; i <= 7; i++){
     digitalWrite(i, LOW);
    }
    for (i = 2; i <= 9; i++){
     digitalWrite(i, HIGH);
     delay(100);
    }
    for (i = 9; i >= 2; i--){
     digitalWrite(i, LOW);
     delay(100);
    }
    ran = random(2,8);
    for (i = 2; i <= ran; i++){
     digitalWrite(i, HIGH);
    }
    delay(500); 
  }
  if (lesknapp2 == HIGH){
    for (i = 2; i <= 7; i++){
     digitalWrite(i, LOW);
    }
  }
}
