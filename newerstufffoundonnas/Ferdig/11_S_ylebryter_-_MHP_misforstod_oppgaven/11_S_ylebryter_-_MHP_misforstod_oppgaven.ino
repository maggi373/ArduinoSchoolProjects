// Oppgave 11 - Søylebryter - 30.01.2018 - MHP

// KONSTANTER:
const byte bryter = 11;
const byte led13 = 13;

// VARIABLER:
int lesbryter;
int time_delay = 30;
byte led = 2;
byte rund = 0;
byte allow = 0;

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
  Serial.print("something, something, something, dark side");
}

// FUNKSJONER:

// HOVUDPROGRAM:
void loop() {
  lesbryter = digitalRead(bryter);
  delay(time_delay);
  if (lesbryter == HIGH) {
    Serial.print("SWITCHLED, 1, ");
    Serial.println(led);
    if (rund == 0) {
      if (allow == 1) {
        digitalWrite(led, LOW);
        led = led - 1;
        Serial.println("Going down");
        if (led == 1) {
          allow = 0;
          Serial.println("Switching to going up");
        }
      }
      if (allow == 0) {
        digitalWrite(led, HIGH);
        led = led + 1;
        Serial.println("Going up");
        if (led == 10) {
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
  }
}
