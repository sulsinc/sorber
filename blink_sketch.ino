/**
 * Blink
 *
 * The basic Arduino example. Turns on a LED for one second,
 * then turns it off for one second, and so on...
 * On the Sparrow node, we use pin 11 because the green LED
 * is connected to it.
 */

#define ledPin 11               // LED is connected to pin 11


void setup()                    // runs once, when the sketch starts
{
  pinMode(ledPin, OUTPUT);      // set LED pin as digital output
}

void loop()                     // runs over and over again
{
  digitalWrite(ledPin, HIGH);   // LED on
  delay(1000);                  // wait for 1 second
  
  digitalWrite(ledPin, LOW);    // LED off
  delay(1000);                  // wait for 1 second
}
