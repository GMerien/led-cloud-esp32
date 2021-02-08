#ifndef TEST_ANIM_H
#define TEST_ANIM_H

#include "../cloud_values.h"
#include "../animation.h"

class TestAnim : public Animation {
    private:

        uint16_t current_index;

    public:

        TestAnim();
        virtual ~TestAnim();
        virtual void nextFrame();    

};

#endif