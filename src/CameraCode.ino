// 20_Color_Blob_Detector.ino

/**
 * Detect blobs of given color
 */
#define MAX_RESOLUTION_VGA
#define MAX_RECURSION_DEPTH 13

#include "esp32cam.h"
#include "esp32cam/JpegDecoder.h"
#include "esp32cam/apps/ColorBlobDetector.h"

using namespace Eloquent::Esp32cam;

 int a;
 int b;

Cam cam;
JpegDecoder decoder;
Applications::ColorBlobDetector detector(7,134,64); 
Applications::ColorBlobDetector detector2(169,68,58);

void setup() {
  pinMode(33, OUTPUT);
    Serial.begin(115200);
    delay(3000);
    Serial.println("Init");
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
    cam.aithinker();
    cam.highQuality();
    cam.vga();
    cam.highestSaturation();
    cam.disableAutomaticWhiteBalance();
    cam.disableAutomaticExposureControl();
    cam.disableGainControl();

    /**
     * Set detector tollerance
     * The higher, the more shade of colors it will pick
     */
    detector.tollerate(47);
     detector2.tollerate(35);
    /**
     * Skip blob localization (slow) if not enough
     * pixels match color
     */

    while (!cam.begin())
        Serial.println(cam.getErrorMessage());
}


void loop() {
  digitalWrite(33,LOW);
    if (!cam.capture()) {
        Serial.println(cam.getErrorMessage());
        return;
    }

    if (!decoder.decode(cam)) {
        Serial.println(decoder.getErrorMessage());
        return;
    }

    /**
     * Detect blob in frame
     */
    if (detector.detect(decoder)) {
     
    }
    else {
      
    }
    if (detector2.detect(decoder)) {
     
    }
    else {
      
    }

    // while debugging, these may turn out useful
       Serial.print("\n verde ");
    Serial.print(detector.maskCount);
    a = detector.maskCount;

    if(a>100){
digitalWrite(13,HIGH);
Serial.print("a");
delay(100);
    }

       Serial.print("\n rojo ");
    Serial.print(detector2.maskCount);
b = detector2.maskCount;

if(b>100){
  digitalWrite(12,HIGH);
  Serial.print("b");
  delay(100);
}

  digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(33,LOW);
}