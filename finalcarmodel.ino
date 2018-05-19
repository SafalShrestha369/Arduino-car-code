int sensorPin = A0; // ir sensor out pin
int buzz = 7;
int sensorValue = 0;
int led = 12;

char data;

void forward();
void backward();
void right();
void left();
void rok();

void setup() {
  // put your setup code here, to run once:
  pinMode(buzz , OUTPUT);
  Serial.begin(9600);
  pinMode(11 , OUTPUT); //lsft motor forward
  pinMode(10 , OUTPUT); //left motor backward
  pinMode(9 , OUTPUT);  //right motor forward
  pinMode(8 , OUTPUT);  //right motor backward
}

void loop() {
  // put your main code here, to run repeatedly:

 sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
   if(Serial.available()>0)
  {
     data = Serial.read();
    Serial.println(data);
  }

  if (sensorValue > 1000)
  {
    digitalWrite(led, LOW);
    digitalWrite(buzz, LOW);
    
  }
  else
  {
     // rok();
    digitalWrite(led, HIGH);
     digitalWrite(buzz, HIGH);
   
  }

  forward();
  backward();
  right();
  left();
  rok();
}


void forward(){
  if(data == '1') // move forward direction
  {
    digitalWrite(11 , HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9 , HIGH);
    digitalWrite(8 , LOW);
   delay(100);
   // rok();
  }
}

void backward(){
  if(data == '4') // move backward direction
  {
    digitalWrite(11 , LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9 , LOW);
    digitalWrite(8 , HIGH);
    delay(100);
       //rok();
  }
}

void left(){
  if(data == '2') // move left direction
  {
    digitalWrite(11 , HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9 , LOW);
    digitalWrite(8 , LOW);
    delay(100);
      // rok();
  }
}

void right(){
  if(data == '3') // move left direction
  {
    digitalWrite(11 , LOW);
    digitalWrite(10, LOW);
    digitalWrite(9 , HIGH);
    digitalWrite(8 , LOW);
   delay(100);
      // rok();
  }
}
void rok()
{
  if (data == '5') 
  {
 digitalWrite(11 , LOW);
    digitalWrite(10, LOW);
    digitalWrite(9 , LOW);
    digitalWrite(8 , LOW);
    delay(100); 
  }
  }
