#ifndef GRAPH_H
#define GRAPH_H

#include <stdint.h>

#include "vertice.h"

class Graph {
    private:
        Vertice* vertices[SK6812_COUNT];
        uint8_t len;

    public:

        Graph();
        ~Graph();
        Vertice* addVertice();
        Vertice* getVertice(uint8_t index);
        void setNeighborhood(uint8_t index, uint8_t* indexes, uint8_t len);
};

#endif