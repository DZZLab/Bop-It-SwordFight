String inputString = "";   // a string to hold incoming data
bool stringComplete = false;  // whether the string is complete

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  inputString.reserve(200);  // reserve 200 bytes of space for the string
}

void loop() {
  // print the string when a newline arrives:
  if (stringComplete) {
    Serial.print("I received: ");
    Serial.println(inputString);
    // clear the string:
    inputString = "";
    stringComplete = false;
  }
}

void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag:
    if (inChar == '\n') {
      stringComplete = true;
    }
  }
}
