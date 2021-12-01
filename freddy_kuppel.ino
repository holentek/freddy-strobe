// HOLENTEK MADS HOLEN
// Nordre Vei 342
// +47 986 41 537
// www.holentek.no
#include <FastLED.h>
#define LED_PIN     8
#define NUM_LEDS    72
const int buttonPin = 2;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status

CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.clear ();
  pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input:
}
void loop() {
    // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    fill_solid( leds, NUM_LEDS, CRGB(255,255,255));
    FastLED.show();
    delay(40);
    FastLED.clear ();
    FastLED.show();

    delay(200);

    fill_solid( leds, NUM_LEDS, CRGB(255,255,255));
    FastLED.show();
    delay(40);
    FastLED.clear ();
    FastLED.show();

    delay(500);

    fill_solid( leds, NUM_LEDS, CRGB(255,255,255));
    FastLED.show();
    delay(1000);
    FastLED.clear ();
    FastLED.show();

    delay(400);

    fill_solid( leds, NUM_LEDS, CRGB(255,255,255));
    FastLED.show();
    delay(50);
    FastLED.clear ();
    FastLED.show();

    delay(200);

    fill_solid( leds, NUM_LEDS, CRGB(255,255,255));
    FastLED.show();
    delay(40);
    FastLED.clear ();
    FastLED.show();

    delay(200);

    fill_solid( leds, NUM_LEDS, CRGB(255,255,255));
    FastLED.show();
    delay(50);
    FastLED.clear ();
    FastLED.show();
    
    delay(200);

    fill_solid( leds, NUM_LEDS, CRGB(255,255,255));
    FastLED.show();
    delay(350);
    FastLED.clear ();
    FastLED.show();
    
    delay(200);

    fill_solid( leds, NUM_LEDS, CRGB(255,255,255));
    FastLED.show();
    delay(35);
    FastLED.clear ();
    FastLED.show();

    delay(200);

    fill_solid( leds, NUM_LEDS, CRGB(255,255,255));
    FastLED.show();
    delay(50);
    FastLED.clear ();
    FastLED.show();
    
    delay(500);
  }

}