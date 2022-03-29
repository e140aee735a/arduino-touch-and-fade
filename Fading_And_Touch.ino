
// inputs
int touch = 7;
int photo = A0;

// outputs
int blueLedPinTwo = 3;    // LED connected to digital pin 3
int redLedPin = 6;
int blueLedPinFour = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, INPUT);
  pinMode(A0, INPUT);
}

void loop() {

  // read our values from the sensors   
  int photoSensorValue = analogRead(photo);
  int touchSensorValue = digitalRead(touch);

  // Control LEDs
  analogWrite(blueLedPinTwo, photoSensorValue);
    
  digitalWrite(redLedPin, touchSensorValue);
  digitalWrite(blueLedPinFour, touchSensorValue);
  
  delay(2);
}
