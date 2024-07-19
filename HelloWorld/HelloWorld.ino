<<<<<<< HEAD
#include <CapacitiveSensor.h>
CapacitiveSensor TouchSensor = CapacitiveSensor(4, 2);
const int TouchThreshold = 140;
=======
#define accelerometer = N/A;

//Yubin Wu git comment



//Additional pins if we choose a multi-axis Accelerometer
#define capacitiveTouch = N/A;
#define trigger = N/A;
#define display = N/A;
#define speaker = N/A;

//Kevin's Hello World
//David's Hello World Comment

int score = 0;
bool success = 1;
>>>>>>> 92737698c0405f4bee49eae2061b8d005ef49dfa
void setup() {
  // put your setup code here, to run once:
  //TouchSensor.set_CS_AutocaL_Millis(0xFFFFFFFF);
  Serial.begin(9600);
  delay(2000);
}
void loop() {
  // put your main code here, to run repeatedly:
  long start = millis();
  long total1 = TouchSensor.capacitiveSensor(30);
  char Value[] = "Touch Value: ";
  Serial.print(Value);      // check on performance in milliseconds
  Serial.println(total1);
  delay(100);
}
