
int currentRandm = 0;
bool shouldClick = false;


void setup() {
  // open the serial port:
  Serial.begin(9600);
  pinMode(2, OUTPUT);

  digitalWrite(2, HIGH);
}

void loop() {
  if (Serial.available() > 0) {
    // read incoming serial data:
    char inChar = Serial.read();
    if(inChar == '2') {
      
      digitalWrite(2, HIGH);
    } else {
      digitalWrite(2, LOW);
//      delay(300);
      
    }
  } 
  
}
