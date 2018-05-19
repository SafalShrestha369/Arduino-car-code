int led = 13;
int button = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(7, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button)== HIGH)
  {
  digitalWrite(led, HIGH);
  delay(100);
  }
  else{
  digitalWrite(led, LOW);
    delay(100);

  }
}
