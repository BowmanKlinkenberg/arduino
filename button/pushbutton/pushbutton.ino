const int inputPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(inputPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int status = digitalRead(inputPin);
  if (status == HIGH) {
   digitalWrite(ledPin, HIGH);
  } else {
   digitalWrite(ledPin, LOW);
  }
}
