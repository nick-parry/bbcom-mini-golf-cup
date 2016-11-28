/* This is the code for the golf cup challenge.
 *
 * More info about this can be found in the projects README.md
 *
 * Here is a link to a detailed pinout for this Arduino:
 * https://www.arduino.cc/en/uploads/Main/ArduinoMicro_Pinout3.png
 */
const int RELAY_PIN = 2;
const int BUTTONPIN = 10;

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(BUTTONPIN, INPUT);
}

void loop() {
 // read the state of the pushbutton value:
 int buttonState;
 buttonState = digitalRead(BUTTONPIN);

  if (buttonState == HIGH) {
    // turn the light off
    digitalWrite(RELAY_PIN, HIGH);
  } else {
    // Turn on the light on
    digitalWrite(RELAY_PIN, LOW);
    // Wait for 10 seconds
    delay(10000);
  }

}
