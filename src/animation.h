#ifndef ANIMATION_H
#define ANIMATION_H

#include <stdint.h>
#include <Adafruit_NeoPixel.h>

#include "cloud_values.h"

class Animation {
    protected:

        uint8_t R[SK6812_COUNT];
        uint8_t G[SK6812_COUNT];
        uint8_t B[SK6812_COUNT];
        uint8_t W[SK6812_COUNT];

    public:

        Animation();
        virtual ~Animation();
        uint8_t getR(int index);
        uint8_t getG(int index);
        uint8_t getB(int index);
        uint8_t getW(int index);
        virtual void nextFrame();
};

#endif