#include  "graph.h"

Graph::Graph() {
    uint8_t i = 0;

    for (i = 0; i < SK6812_COUNT; i ++) {
        vertices[i] = nullptr;
    }

    len = 0;
}

Graph::~Graph() {
    uint8_t i = 0;

    for (i = 0; i < SK6812_COUNT; i ++) {
        delete(vertices[i]);
    }

    delete vertices;
}

Vertice* Graph::addVertice() {
    Vertice* newVertice = new Vertice();

    vertices[len] = newVertice;

    len ++;

    return newVertice;
}

Vertice* Graph::getVertice(uint8_t index) {

    return vertices[index];
}

void Graph::setNeighborhood(uint8_t index, uint8_t* neighbors_indexes, uint8_t len) {
    uint8_t i;

    Vertice* vertice = vertices[index];
    Vertice* neighbors[MAX_NEIGHBORS];

    for (i = 0; i < len; i ++) {
        neighbors[i] = getVertice(neighbors_indexes[i]);
    }

    vertice->setNeighborhood(neighbors, len);
}

