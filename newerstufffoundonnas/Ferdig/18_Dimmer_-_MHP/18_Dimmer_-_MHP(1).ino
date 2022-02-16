// Oppgave 18 - Dimmer - 30.01.2018 - MHP

// KONSTANTER:
const byte bryter = 11;
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
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(led13, OUTPUT);
  pinMode(bryter, INPUT);
  pinMode(A3, INPUT);
  Serial.print("something, something, something, dark side");
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  val = analogRead(analogPin);
  if (A3 = HIGH) {
    for (s < val; s += 128; g++) {

    }
    if (i < g) {
      i ++;
      c ++;
    }
    if (i > g) {
      i --;
      c --;
    }
    digitalWrite(c, HIGH);
    Serial.print("c");
    Serial.println(c);
    Serial.print("i");
    Serial.println(i);
    Serial.print("val");
    Serial.println(val);
  }
  /*lesbryter = digitalRead(bryter);
    delay(time_delay);
    if (lesbryter == HIGH) {
    Serial.print("SWITCHLED, 1, ");
    Serial.println(led);
    if (rund == 0){
      if (allow == 1){
        digitalWrite(led, LOW);
        led = led - 1;
        Serial.println("Going down");
        if (led == 1){
          allow = 0;
          Serial.println("Switching to going up");
        }
       }
      if (allow == 0){
        digitalWrite(led, HIGH);
        led = led + 1;
        Serial.println("Going up");
        if (led == 10){
          allow = 1;
          led = led - 1;
          Serial.println("Switching to going down");
        }
      }
      rund = 1;
    }
    digitalWrite(led13, HIGH);
    }
    else {
    Serial.print("SWITCHLED, 0, ");
    Serial.println(led);
    rund = 0;
    digitalWrite(led13, LOW);
    }*/
}
