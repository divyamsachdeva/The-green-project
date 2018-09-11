const int switchPin = 2;
const int motorPin = 9;
int switchState = 0;
int ledPin = 12;

void setup() {
  // put your setup code here, to run once:
pinMode(motorPin, OUTPUT);
pinMode(switchPin, INPUT);
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
switchState = digitalRead(switchPin);
if (switchState == HIGH) {
  digitalWrite(motorPin, HIGH);
  digitalWrite(ledPin, LOW);
  delay(5000); 
} else {1
  digitalWrite(motorPin, LOW);
  digitalWrite(ledPin, HIGH);
}
