const int pingPin1=8;
const int pingPin2=9;
long duration,cm;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pingPin1,OUTPUT);
  pinMode(pingPin2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pingPin1,LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin1,HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin1,LOW);

  duration=pulseIn(pingPin2,HIGH);

  cm = microsecondsToCentimeters(duration);
  
  Serial.print(cm);
  Serial.print("cm");
  delay(100);
}

long microsecondsToCentimeters(long microseconds){
  return microseconds / 29 / 2;
}
