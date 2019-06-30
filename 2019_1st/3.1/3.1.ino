int tilt=2;
int sensorValue=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(tilt,INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue=digitalRead(tilt);

  Serial.println(sensorValue);
  delay(1);
}
