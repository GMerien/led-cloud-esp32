#include "animation.h"

Animation::Animation() {
    uint16_t i;

    for (i = 0; i < SK6812_COUNT; i++) {
        R[i] = 0;
        G[i] = 0;
        B[i] = 0;
        W[i] = 0;
    }
}

Animation::~Animation() {

}

void Animation::nextFrame() {

}

uint8_t Animation::getR(int index) {

    return R[index];
}

uint8_t Animation::getG(int index) {

    return G[index];
}

uint8_t Animation::getB(int index) {

    return B[index];
}

uint8_t Animation::getW(int index) {

    return W[index];
}