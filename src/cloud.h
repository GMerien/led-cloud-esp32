#ifndef CLOUD_H
#define CLOUD_H

#include <stdint.h>

#include "cloud_values.h"
#include "animation.h"

class Cloud {
    private:

        unsigned long last_time;
        Adafruit_NeoPixel* strip;
        bool isOn;
        uint8_t brightness;
        Animation* current_animation;

    public:

        Cloud(uint8_t);
        ~Cloud();
        
        void setLightOn();
        void setLightOff();
        bool isLightOn();
        void setBrightness(uint8_t _brightness);
        void setAnimation(Animation* animation);
        void nextFrame();
        void showFrame();
};

#endif