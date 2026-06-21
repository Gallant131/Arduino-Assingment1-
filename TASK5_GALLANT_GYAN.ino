int startValue = 5;
int ledPin13 = 13;

void flashLED(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(ledPin13, HIGH);
    delay(200);
    digitalWrite(ledPin13, LOW);
    delay(200);
  }
}

void setup() {
  pinMode(ledPin13, OUTPUT);
  Serial.begin(9600);

  Serial.print('\n');
  Serial.println("=== Smart Countdown Starting ===");

  int countdwn = startValue;
  while (countdwn>= 1) {
    Serial.print("Count: ");
    Serial.println(countdwn);

    flashLED(countdwn);  // blink the LED

    delay(1000);
    countdwn = countdwn - 1;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {}