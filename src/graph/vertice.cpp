#include "vertice.h"

Vertice::Vertice() {
    uint16_t i;

    for (i = 0; i < MAX_NEIGHBORS; i ++) {
        neighbors[i] = nullptr;
    }

    neighbors_number = 0;
}

Vertice::~Vertice() {

}

void Vertice::setNeighborhood(Vertice** vertices_ptr, uint8_t len) {
    uint8_t i;

    for (i = 0; i < len; i ++) {
        neighbors[i] = vertices_ptr[i];
    }

    neighbors_number = len;
}

uint8_t Vertice::getNeighborhoodLen() {
    
    return neighbors_number;
}

Vertice** Vertice::getNeighborhood() {

    return neighbors;
}