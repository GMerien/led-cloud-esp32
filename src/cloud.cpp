#include "cloud.h"

Cloud::Cloud(uint8_t _brightness) {
    strip = new Adafruit_NeoPixel(SK6812_COUNT, SK6812_PIN, NEO_GRBW + NEO_KHZ800);

    brightness = _brightness;
    current_animation = nullptr;

    strip->setBrightness(brightness);
}

Cloud::~Cloud() {
    delete strip;
    delete current_animation;
}

void Cloud::setLightOn() {  
    isOn = true;
}

void Cloud::setLightOff() {
    isOn = false;
}

bool Cloud::isLightOn() {
    if (isOn) {
        return true;
    }

    return false;
}

void Cloud::setBrightness(uint8_t _brightness) {
    brightness = _brightness;
    strip->setBrightness(brightness);
}

void Cloud::setAnimation(Animation* animation) {
    delete current_animation;
    current_animation = animation;
}

void Cloud::nextFrame() {
    current_animation->nextFrame();
}

void Cloud::showFrame() {
    uint16_t i;
    uint32_t current_color;

    for (i = 0; i < SK6812_COUNT; i ++) {
        current_color = strip->Color(current_animation->getR(i), current_animation->getG(i), current_animation->getB(i), current_animation->getW(i));

        strip->setPixelColor(i, strip->gamma32(current_color));
    }

    strip->show();
}