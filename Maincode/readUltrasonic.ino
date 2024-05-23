int readUltrasonicSensor()  {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance in centimeters
  int distance = duration * 0.034 / 2;

  // Serial.print("Ultrasonic Sensor Distance ");
  // Serial.println(distance);

  currentDistance = distance;
}