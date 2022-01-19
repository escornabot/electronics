/*
  AnalogReadSerial (modficado XDeSIG)
  This example code is in the public domain.
*/

// A7 Escornabot Singularis (2.12)
#define input A7

int sensorValue;
int sensorValue_old;

void setup() {
  Serial.begin(9600);
  pinMode(input, INPUT);
  Serial.println ("press a button");
}

void loop() {
  sensorValue = analogRead(input);

  if (sensorValue_old != sensorValue) {
    Serial.println(sensorValue);
  }
  sensorValue_old = sensorValue;
  delay(100);
}
