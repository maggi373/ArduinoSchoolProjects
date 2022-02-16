// Oppgave 14 - Terningkast - 05.04.2018 - MHP

//DEFINASJONER

#define ledtidrod 100
#define ledtidblaa 500
#define ledtidgronn 500
#define prell 300
#define prells 700
#define lydtid 25
#define lydferdig 500

// KONSTANTER:
const byte led1 = 2;
const byte led2 = 3;
const byte led3 = 4;
const byte led4 = 5;
const byte led6 = 7;
const byte led7 = 8;
const byte led8 = 9;
const byte bryter = 11;
const byte lyd = 12;
const byte led13 = 13;
const byte knapp1 = A5;
const byte knapp2 = A4;
const byte knapp3 = A3;
const byte knapp4 = A2;
const byte dummyKnapp = LOW;

// VARIABLER:
byte ran;
int i;
int leds[4] = {led1, led2, led3, led4};
int knapps[5] = {knapp1, knapp2, knapp3, knapp4, dummyKnapp};
int ledState = LOW;
unsigned long previousMillis;
unsigned long previousMillis2;
unsigned long previousMillis3;
unsigned long previousMillis4;
unsigned long previousMillis5;
unsigned long previousMillis6;
byte again = 1;
int tidran;
int totaltime;
byte rounds;
byte activates;
byte once;
byte maks;
char thelight[] = "You should do that"
                  " just dont press before the light"
                  " a light that may or may not show your way ";

// SETUP:
void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(lyd, OUTPUT);
  pinMode(knapp1, INPUT);
  pinMode(knapp2, INPUT);
  pinMode(knapp3, INPUT);
  pinMode(knapp4, INPUT);
  pinMode(bryter, INPUT);
  Serial.println("Press a button to start a game");
}

// FUNKSJONER:



// HOVUDPROGRAM:
void loop() {
  unsigned long currentMillis = millis();
  if (rounds == 11) {
    Serial.print("Average in milliseconds ");
    Serial.println(totaltime / 10); //print averge time
    rounds = 0; //reset rounds
    totaltime = 0;  //reset average time
    Serial.println("Press a button to start a game");
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    previousMillis5 = currentMillis;
    previousMillis6 = currentMillis; //referense for prell when starting after a set
    tone(lyd, 4000, lydferdig);

  }
  if (rounds == 0 && currentMillis - previousMillis6 >= prell) {
    for (i = 0; i <= 3; i++) {
      if (digitalRead(knapps[i]) == HIGH) {
        activates = 1; // if a button is activated it activate
      }
    }

    if (activates == 1) { // this
      Serial.println("Game started");
      tone(lyd, 4000, lydtid);
      digitalWrite(led8, HIGH);
      again = 1;
      ran = 4;
      rounds++;
      tidran = random(100, 3000);
      previousMillis2 = currentMillis;
      previousMillis4 = currentMillis;
    }
  }
  activates = 0;

  if (currentMillis - previousMillis4 >= ledtidrod) {
    digitalWrite(led8, LOW);
  }
  if (currentMillis - previousMillis5 >= ledtidblaa) {
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
  }

  if (rounds != 11 && rounds != 0) {
    if (currentMillis - previousMillis2 >= tidran && again == 1) {
      ran = random(0, 4);
      digitalWrite(leds[ran], HIGH);
      again = 0;
      previousMillis3 = currentMillis;
    }


    if (digitalRead(knapps[ran]) == HIGH && ran != 4) {
      tone(lyd, 4000, lydtid);
      Serial.println("Correct");
      Serial.println("\t");
      Serial.print("Round ");
      Serial.println(rounds);
      Serial.println("\t");
      Serial.print("Time in milliseconds ");
      Serial.println(currentMillis - previousMillis3);
      totaltime = totaltime + currentMillis - previousMillis3;
      Serial.println("\t");
      Serial.println("\t");
      for (i = 0; i <= 3; i++) {
        digitalWrite(leds[i], LOW);
      }
      again = 1;
      ran = 4;
      rounds++;
      tidran = random(100, 3000);
      previousMillis2 = currentMillis;
    }
    if (ran == 4 && currentMillis - previousMillis2 >= prells) {
      for (i = 0; i <= 3; i++) {
        if (digitalRead(knapps[i]) == HIGH) {
          maks++;
        }
      }
      if (maks >= 2) {
        Serial.println(thelight);
        tone(lyd, 2000, lydferdig);
        Serial.println("Press a button to start a game");
        previousMillis6 = currentMillis;
        maks = 0;
        rounds = 0;
      }
    }

  }
  if (digitalRead(bryter) == HIGH) {
    if (currentMillis - previousMillis >= ledtidgronn) {
      previousMillis = currentMillis;
      if (ledState == LOW) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }
      digitalWrite(led13, ledState);
    }
  } else {
    digitalWrite(led13, LOW);
  }
}

