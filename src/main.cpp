#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#include "cloud_values.h"

#include "cloud.h"
#include "animation.h"
#include "./animations/test_anim.h"

Cloud cloud(20);

unsigned long last_cloud_refresh_time = 0;

void setup() {
  Animation* anim = new TestAnim();

  cloud.setAnimation(anim);
  cloud.setLightOn();
}

void loop() {
  // If the delay since last frame is the required delay, compute the next frame
  if ( (millis() - last_cloud_refresh_time) > FPS_DELAY) {
        last_cloud_refresh_time = millis();

        cloud.nextFrame();
  }

  cloud.showFrame();
}