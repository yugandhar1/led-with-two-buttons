void setup() {
  pinMode(D0,OUTPUT);
  pinMode(D4,OUTPUT);
  Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(D0, LOW);
  digitalWrite(D4, HIGH);
  Serial.println("D0 is LOW and D4 is HIGH");
  delay(1000);
  digitalWrite(D0,HIGH);
  digitalWrite(D4,LOW);
  Serial.println("D0 is high and D4 is low");
  delay(1000);
  // put your main code here, to run repeatedly:

}
