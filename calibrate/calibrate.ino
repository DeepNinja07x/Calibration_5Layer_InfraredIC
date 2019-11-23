
void setup() {
  Serial.begin(9600);

}

void loop() {
  int LSensor=digitalRead(7);
  int LCSensor=digitalRead(6);
  int C1Sensor=digitalRead(5);
  int C2Sensor=digitalRead(4);
  int RCSensor=digitalRead(3);
  int RSensor=digitalRead(2);

  Serial.print(LSensor);
  Serial.print(" -- ");
  Serial.print(LCSensor);
  Serial.print(" -- ");
  Serial.print(C1Sensor);
  Serial.print(" -- ");
  Serial.print(C2Sensor);
  Serial.print(" -- ");
  Serial.print(RCSensor);
  Serial.print(" -- ");
  Serial.print(RSensor);
  Serial.println(" -- ");
  delay(100);
}
