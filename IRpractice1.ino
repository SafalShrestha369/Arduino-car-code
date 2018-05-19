int led = 13;
int sensorPin = 7;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(sensorPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 int value = digitalRead(sensorPin);
 if (value == 1)
 {
  digitalWrite(led,LOW);
 }
 else
 {
  digitalWrite(led, HIGH);
  }
  delay(100);
}
