
int button=2;
int sensorValue=0;

void setup() {
  // put your setup code here, to run once:

  pinMode(button,INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  sensorValue=digitalRead(button);

  Serial.println(sensorValue);
  delay(1);
}
