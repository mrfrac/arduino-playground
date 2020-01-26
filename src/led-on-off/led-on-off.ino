void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
}

void loop() {
  int val;

  if (Serial.available()) {
    val = Serial.read();

    if (val == '1') {
      digitalWrite(13, HIGH);
    }

    if (val == '2') {
      digitalWrite(13, LOW);
    }
  }
}
