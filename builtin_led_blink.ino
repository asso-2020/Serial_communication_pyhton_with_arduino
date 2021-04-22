
void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop(){
  if (Serial.available()){
      char c = Serial.read();
      if (c == 'H'){
        digitalWrite(LED_BUILTIN, HIGH);
      }
      else{
        digitalWrite(LED_BUILTIN, LOW);
      }
  }
}
