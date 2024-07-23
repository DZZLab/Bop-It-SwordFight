#include <CapacitiveSensor.h>
CapacitiveSensor TouchSensor = CapacitiveSensor(2, 3);
#define ctrlPin  10
#define returnPin  8
const int TouchThreshold = 125;

void setup() {
  // put your setup code here, to run once:
  //TouchSensor.set_CS_AutocaL_Millis(0xFFFFFFFF);
  //pinMode(LED, OUTPUT);
  pinMode(ctrlPin, INPUT);
  pinMode(returnPin, OUTPUT);
  Serial.begin(9600);
  //delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Test");
  if(digitalRead(ctrlPin)==HIGH){
    float total1 = TouchSensor.capacitiveSensor(50);
    // String Value = "Touch Value: ";
    Serial.println(total1);
    if (total1 > TouchThreshold){
      //Serial.print(Value);      // check on performance in milliseconds
      //Serial.println(total1);
      digitalWrite(returnPin, HIGH); //returns pin 8 high if touch is read. 
      delay(100);
    }
    else{
      digitalWrite(returnPin, LOW);
      delay(100);

    }
  }
  else{
    digitalWrite(returnPin, LOW);
    delay(100);

  }
}
