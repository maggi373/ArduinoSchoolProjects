// Oppgave 18 - Dimmer - 30.01.2018 - MHP

// KONSTANTER:
const byte bryter = 11;
const byte led1 = 2;
const byte led2 = 3;
const byte led3 = 4;
const byte led4 = 5;
const byte led5 = 6;
const byte led6 = 7;
const byte led7 = 8;
const byte led8 = 9;
const byte led13 = 13;

// VARIABLER:
int lesbryter;
int time_delay = 30;
byte led = 2;
byte rund = 0;
byte allow = 0;
int analogPin = A0;
int val = 0;
int i = 0;
int c = 1;
int x = 128;
int s = 0;
int g = 0;

// SETUP:
void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led13, OUTPUT);
  pinMode(bryter, INPUT);
  pinMode(analogPin, INPUT);
  Serial.print("something, something, something, dark side");
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  val = analogRead(analogPin);
  analogWrite(led2, val / 4);
  Serial.println(led2);
  Serial.print(val);
}
