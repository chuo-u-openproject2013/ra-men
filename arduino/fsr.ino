#define FSR_PIN 0
int fsr;

void setup(){
  Serial.begin(9600);
}

void loop(){
  fsr=analogRead(FSR_PIN);
  Serial.println(fsr);
}
