#include <SPI.h>
#include <RA8875.h>

#define DELAY_BETWEEN 500


/*
Teensy3.x and Arduino's
You are using 4 wire SPI here, so:
 MOSI:  11 Arduino UNO (for MEGA refere to arduino site)
 MISO:  12 Arduino UNO (for MEGA refere to arduino site)
 SCK:   13 Arduino UNO (for MEGA refere to arduino site)
 the rest of pin below:
 */
#define RA8875_CS 10
#define RA8875_RESET 9
/*
Arduino's 8 bit: any
*/


RA8875 tft = RA8875(RA8875_CS, RA8875_RESET);

void setup() {
  Serial.begin(38400);
  //long unsigned debug_start = millis ();
  //while (!Serial && ((millis () - debug_start) <= 5000)) ;
  tft.begin(RA8875_800x480);

  Serial.println(F("Benchmark                Time (microseconds)"));
  Serial.print(F("Screen fill              "));
  Serial.println(testFillScreen());
  delay(DELAY_BETWEEN);
  
  Serial.print(F("Test Pixel               "));
  Serial.println(testPixel());
  delay(DELAY_BETWEEN);
  
  Serial.print(F("Test Pixels              "));
  Serial.println(testPixels());
  delay(DELAY_BETWEEN);
  
  Serial.print(F("Text                     "));
  Serial.println(testText());
  delay(DELAY_BETWEEN);

  Serial.print(F("Lines                    "));
  Serial.println(testLines(RA8875_CYAN));
  delay(DELAY_BETWEEN);

  Serial.print(F("Horiz/Vert Lines         "));
  Serial.println(testFastLines(RA8875_RED, RA8875_BLUE));
  delay(DELAY_BETWEEN);

  Serial.print(F("Rectangles (outline)     "));
  Serial.println(testRects(RA8875_GREEN));
  delay(DELAY_BETWEEN);

  Serial.print(F("Rectangles (filled)      "));
  Serial.println(testFilledRects(RA8875_YELLOW,RA8875_MAGENTA));
  delay(DELAY_BETWEEN);

  Serial.print(F("Circles (filled)         "));
  Serial.println(testFilledCircles(10,RA8875_MAGENTA,RA8875_YELLOW));
  delay(DELAY_BETWEEN);
  
  Serial.print(F("Circles (outline)        "));
  Serial.println(testCircles(10,RA8875_WHITE));
  delay(DELAY_BETWEEN);

  Serial.print(F("Triangles (outline)      "));
  Serial.println(testTriangles(RA8875_CYAN));
  delay(DELAY_BETWEEN);

  Serial.print(F("Triangles (filled)       "));
  Serial.println(testFilledTriangles(RA8875_RED,RA8875_CYAN));
  delay(DELAY_BETWEEN);

  Serial.print(F("Rounded rects (outline)  "));
  Serial.println(testRoundRects());
  delay(DELAY_BETWEEN);

  Serial.print(F("Rounded rects (filled)   "));
  Serial.println(testFilledRoundRects());
  delay(DELAY_BETWEEN);


  Serial.println(F("--------------------------------"));
}

void loop(void) {

}

