// Oppgave 6 - LED-Søyle - 30.01.2018 - MHP

// KONSTANTER:
const byte led1 = 2;
const byte led2 = 3;
const byte led3 = 4;
const byte led4 = 5;
const byte led5 = 6;
const byte led6 = 7;
const byte led7 = 8;
const byte led8 = 9;

// VARIABLER:
int time_delay = 300;

// SETUP:
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  digitalWrite (led1, HIGH);
  delay(time_delay);
  digitalWrite (led2, HIGH);
  delay(time_delay);
  digitalWrite (led3, HIGH);
  delay(time_delay);
  digitalWrite (led4, HIGH);
  delay(time_delay);
  digitalWrite (led5, HIGH);
  delay(time_delay);
  digitalWrite (led6, HIGH);
  delay(time_delay);
  digitalWrite (led7, HIGH);
  delay(time_delay);
  digitalWrite (led8, HIGH);
  delay(time_delay);
  digitalWrite (led8, LOW);
  delay(time_delay);
  digitalWrite (led7, LOW);
  delay(time_delay);
  digitalWrite (led6, LOW);
  delay(time_delay);
  digitalWrite (led5, LOW);
  delay(time_delay);
  digitalWrite (led4, LOW);
  delay(time_delay);
  digitalWrite (led3, LOW);
  delay(time_delay);
  digitalWrite (led2, LOW);
  delay(time_delay);
  digitalWrite (led1, LOW);
  delay(time_delay);
}
