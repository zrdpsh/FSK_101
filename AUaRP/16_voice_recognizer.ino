int sensorPint = A0;
int ledPin = 13;
int sensorValue = 0;

void setup () {
  pinMode (ledPin, OUTPUT);
  Serial.begin (9600);
}

void loop () {
  sensorValue = analogRead (sensorPin);
  
  digitalWrite (ledPin, HIGH);
  delay (sensorValue);
  
  digitalWrite (ledPin, LOW);
  delay (sensorValue);
  
  Serial.println(sensorValue, DEC);
  
}
