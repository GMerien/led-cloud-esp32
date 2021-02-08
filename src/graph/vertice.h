#ifndef VERTICE_H
#define VERTICE_H

#include <stdint.h>

#include "cloud_values.h"


// Implements a very specialized vertice class 
class Vertice {
    private:

        // Using static tabs to make the code as simple and as fast as possible
        // make the value as small as possible depending on your led pattern
        Vertice* neighbors[MAX_NEIGHBORS];
        uint8_t neighbors_number;

    public:

        Vertice();
        ~Vertice();
        void setNeighborhood(Vertice** vertices_ptr, uint8_t len);
        uint8_t getNeighborhoodLen();
        Vertice** getNeighborhood();
};

#endif
