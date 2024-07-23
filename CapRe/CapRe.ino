#define touchCmd 4
#define touchRtrn 6
#define LED 8
void setup() {
  // put your setup code here, to run once:
  //TouchSensor.set_CS_AutocaL_Millis(0xFFFFFFFF);
  pinMode(LED, OUTPUT);
  pinMode(touchCmd, OUTPUT);
  pinMode(touchRtrn, INPUT);
  Serial.begin(9600);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(touchCmd, HIGH);
  if(digitalRead(touchRtrn)==1){
    digitalWrite(LED, HIGH);
    //delay(100);
  }
  else{
    digitalWrite(LED, LOW);
    //delay(100);
  }

  // if (total1 > TouchThreshold){
  //   digitalWrite(LED, HIGH);
  //   delay(300);
  // }
  // else{
  //   digitalWrite(LED, LOW);
  //   delay(300);
  // }
}
