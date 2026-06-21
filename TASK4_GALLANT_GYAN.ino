void setup() {
  
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
Serial.println("=== Countdown beginning ===");

int counter = 5; 

while (counter > 0) { 
Serial.print("Counter is: ");
Serial.println(counter);
delay(1000); 

}

Serial.println("Liftoff!");

digitalWrite(ledPin, HIGH); delay(200); digitalWrite(ledPin, LOW); delay(200);
digitalWrite(ledPin, HIGH); delay(200); digitalWrite(ledPin, LOW); delay(200);
digitalWrite(ledPin, HIGH); delay(200); digitalWrite(ledPin, LOW); delay(200);

}

void loop() {


}
