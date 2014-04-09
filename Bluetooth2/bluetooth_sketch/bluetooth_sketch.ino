int ledPin = 13;
int state;

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Go on, type something and press Send");
}

void loop(){
  while(Serial.available()>0) {
    state = Serial.read();
    if (state == '0'){
      digitalWrite(ledPin, LOW);
      Serial.println("LED is now OFF");
    }
    else if (state=='1'){
      digitalWrite(ledPin, HIGH);
      Serial.println("LED is now ON");
    }
  }
}
  

