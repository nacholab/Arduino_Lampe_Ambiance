void setup() {
  Serial.begin(9600);
  for(int pin = 9 ; pin < 12 ;pin++)
  {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  int redValue = analogRead(A0)/4;
  delay(5);
  int greenValue = analogRead(A1)/4;
  delay(5);
  int blueValue = analogRead(A2)/4;

  Serial.println(redValue);
  Serial.println(greenValue);
  Serial.println(blueValue);

  analogWrite(11,redValue);
  analogWrite(9,greenValue);
  analogWrite(11,blueValue);
}
