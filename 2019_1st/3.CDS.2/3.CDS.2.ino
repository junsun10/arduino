const int cds=A0;
const int led=9;

int sensorValue=0;

void setup() {
  // put your setup code here, to run once:

  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  sensorValue=analogRead(cds);
  sensorValue=map(sensorValue,700,1000,0,255);

  analogWrite(led,sensorValue);

  delay(2);
}
