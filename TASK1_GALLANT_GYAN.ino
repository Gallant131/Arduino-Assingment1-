void setup() {
  // put your setup code here, to run once:
 
Serial.begin(9600);

int myAge = 20;
float myHeight = 1.75;
String myName = "Gallant";
bool isStudent = true;
float myGpa= 4.0;

Serial.print("My name is: ");
Serial.println(myName);

Serial.print("My age is: ");
Serial.println(myAge);

Serial.print("My height is: ");
Serial.println(myHeight);

Serial.print("My gpa is: ");
Serial.println(myGpa);

Serial.print("Am I a student? ");
Serial.println(isStudent);

}

void loop() {
  // put your main code here, to run repeatedly:

}
