#include "test_anim.h"

TestAnim::TestAnim() : Animation() {
    current_index = 0;
}

TestAnim::~TestAnim() {

}

void TestAnim::nextFrame() {
    uint16_t i;

    for (i = 0; i < SK6812_COUNT; i ++) {
        if (i < current_index) {
            R[i] = 150;
            G[i] = 10;
            B[i] = 20 + i*2;
        }
        else {
            R[i] = 0;
            G[i] = 0;
            B[i] = 0;
        }
    }

    current_index ++;

    if (current_index > SK6812_COUNT) {
        current_index = 0;
    }
}