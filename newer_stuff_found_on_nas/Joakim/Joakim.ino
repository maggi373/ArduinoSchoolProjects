// Oppgave 1 - Blink - 30.01.2018 - MHP

// KONSTANTER:
const byte led = 13;
const byte led2 = 2;

// VARIABLER:
int time_on = 1000;
int time_off = 500;
byte LYD;

// SETUP:
void setup() {
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(A2, INPUT);
  Serial.begin(9600);
  Serial.print("i'm doing something");
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  LYD = analogRead(A2);
  Serial.print(LYD);
  Serial.print("\t");
  if (LYD <= 10) {
    digitalWrite(led2, HIGH);
    digitalWrite(5, LOW);
    Serial.print(0);
  }
  if (LYD >= 11) {
    digitalWrite(led2, LOW);
    digitalWrite(5, HIGH);
    Serial.print(10);
  }
  Serial.print("\t");
  if (LYD <= 20) {
    digitalWrite(led, LOW);
    Serial.print(0);
  }
  if (LYD >= 21) {
    digitalWrite(led, HIGH);
    Serial.print(20);
  }
  Serial.println();
  /*digitalWrite(led, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay(time_on);
    digitalWrite(led, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    delay(time_off);*/
}
