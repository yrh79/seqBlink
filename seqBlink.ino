/*
  Blink in sequence.
  
  Well, this is a toy for my son.
  Please connect LEDs onto pin 2 through 12, then burn this onto the arduino.
 
  Enjoy!
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.

  for (int i=2; i<13; i++)
  {
    pinMode(i, OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {

  //左龙
  for (int i = 2; i < 13; i++) {
    digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(30);                       
  }

  delay (300);

  for (int i = 2; i < 13; i++) {
    digitalWrite(i, LOW);   // turn the LED off (LOW is the voltage level)
    delay(30);                       
  }
  delay(300);

  //#########################

  //右龙
  for (int i = 12; i > 1; i--) {
    digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(30);                       
  }

  delay (300);

  for (int i = 12; i > 1; i--) {
    digitalWrite(i, LOW);   // turn the LED off (LOW is the voltage level)
    delay(30);                       
  }

  delay (300);


  //#########################

  //间闪左龙
  for (int i = 2; i < 13; i++) {
    if (i % 2 == 0) continue;
    digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(30);                       
  }

  delay (300);

  for (int i = 2; i < 13; i++) {
    if (i % 2 == 0) continue;
    digitalWrite(i, LOW);   // turn the LED off (LOW is the voltage level)
    delay(30);                       
  }
  delay(300);

  //间闪右龙
  for (int i = 12; i > 1; i--) {
    if (i % 2 == 0) continue;
    digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(30);                       
  }

  delay (300);

  for (int i = 12; i > 1; i--) {
    if (i % 2 == 0) continue;
    digitalWrite(i, LOW);   // turn the LED off (LOW is the voltage level)
    delay(30);                       
  }


  //#########################

  //间闪左龙
  for (int i = 2; i < 13; i++) {
    if (i % 2 == 1) continue;
    digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(30);                       
  }

  delay (300);

  for (int i = 2; i < 13; i++) {
    if (i % 2 == 1) continue;
    digitalWrite(i, LOW);   // turn the LED off (LOW is the voltage level)
    delay(30);                       
  }
  delay(300);

  //间闪右龙
  for (int i = 12; i > 1; i--) {
    if (i % 2 == 1) continue;
    digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(30);                       
  }

  delay (300);

  for (int i = 12; i > 1; i--) {
    if (i % 2 == 1) continue;
    digitalWrite(i, LOW);   // turn the LED off (LOW is the voltage level)
    delay(30);                       
  }

  //###############


  delay (300);

  //顺闪
  for (int i = 2; i < 13; i++)
  {
    digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(300);                       
    digitalWrite(i, LOW);    // turn the LED off by making the voltage LOW
    delay(300);
  }

}
