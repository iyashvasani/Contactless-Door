#define sensor_pin 4

int val;

void setup() {
  pinMode(sensor_pin, INPUT);
  Serial.begin(38400);
}

void loop() {
  val = digitalRead(sensor_pin);

  if (val == LOW)
  {
    Serial.print("Obstacle Found!:");
    Serial.println("1");
    delay(2000);
  }
  if (val == HIGH)
  {
    Serial.print("Object not Found!:");
    Serial.println("0");
    delay(2000);
  }
}
