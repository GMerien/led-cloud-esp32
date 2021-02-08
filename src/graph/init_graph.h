#ifndef INIT_GRAPH_H
#define INIT_GRAPH_H

#include <stdint.h>

#include "graph.h"

void init_graphe(Graph& graph) {
    uint8_t i;

    for(i = 0; i < SK6812_COUNT; i ++) {
        graph.addVertice();
    }

    graph.setNeighborhood(0, (uint8_t[]){1, 2, 3, 4}, 4);
    graph.setNeighborhood(1, (uint8_t[]){0, 2, 4, 31, 32}, 5);
    graph.setNeighborhood(2, (uint8_t[]){0, 1, 3, 32, 33}, 5);
    graph.setNeighborhood(3, (uint8_t[]){0, 2, 4, 19, 33}, 5);
    graph.setNeighborhood(4, (uint8_t[]){0, 1, 3, 19, 5, 31}, 6);
    graph.setNeighborhood(5, (uint8_t[]){4, 19, 20, 6, 29}, 5);
    graph.setNeighborhood(6, (uint8_t[]){5, 20, 21, 28, 29}, 5);
    graph.setNeighborhood(7, (uint8_t[]){21, 22, 15, 28, 46}, 5);
    graph.setNeighborhood(8, (uint8_t[]){9, 13, 14, 15}, 4);
    graph.setNeighborhood(9, (uint8_t[]){8, 9, 10, 19, 43}, 5);
    graph.setNeighborhood(10, (uint8_t[]){9, 11, 12, 13, 42}, 5);
    graph.setNeighborhood(11, (uint8_t[]){10, 12, 40, 41, 42}, 5);
    graph.setNeighborhood(12, (uint8_t[]){10, 11, 13, 40}, 4);
    graph.setNeighborhood(13, (uint8_t[]){8, 10, 12, 14, 39}, 5);
    graph.setNeighborhood(14, (uint8_t[]){8, 13, 15, 39, 44}, 5);
    graph.setNeighborhood(15, (uint8_t[]){8, 14, 7, 22, 16, 44}, 6);
    graph.setNeighborhood(16, (uint8_t[]){15, 23, 17, 37}, 4);
    graph.setNeighborhood(17, (uint8_t[]){16, 23, 24, 18, 36}, 5);
    graph.setNeighborhood(18, (uint8_t[]){17, 19, 24, 35, 36}, 5);
    graph.setNeighborhood(19, (uint8_t[]){3, 4, 5, 25, 18, 34}, 6);
    graph.setNeighborhood(20, (uint8_t[]){5, 19, 21, 26, 25}, 5);
    graph.setNeighborhood(21, (uint8_t[]){6, 7, 22, 26, 20}, 5);
    graph.setNeighborhood(22, (uint8_t[]){7, 15, 23, 26, 21}, 5);
    graph.setNeighborhood(23, (uint8_t[]){22, 27, 24, 16, 15, 17}, 6);
    graph.setNeighborhood(24, (uint8_t[]){17, 23, 27, 18, 25}, 5);
    graph.setNeighborhood(25, (uint8_t[]){20, 26, 27, 24, 18, 19}, 6);
    graph.setNeighborhood(26, (uint8_t[]){20, 21, 22, 27, 25}, 5);
    graph.setNeighborhood(27, (uint8_t[]){25, 26, 23, 24}, 4);
    graph.setNeighborhood(28, (uint8_t[]){6, 7, 46, 47, 29}, 5);
    graph.setNeighborhood(29, (uint8_t[]){5, 6, 28, 47, 31}, 5);
    graph.setNeighborhood(30, (uint8_t[]){31, 32, 33, 34, 48}, 5);
    graph.setNeighborhood(31, (uint8_t[]){30, 32, 1, 4, 9}, 5);
    graph.setNeighborhood(32, (uint8_t[]){31, 30, 33, 2, 1}, 5);
    graph.setNeighborhood(33, (uint8_t[]){2, 30, 32, 34, 3}, 5);
    graph.setNeighborhood(34, (uint8_t[]){33, 49, 35, 19, 48}, 5);
    graph.setNeighborhood(35, (uint8_t[]){34, 19, 36, 49, 50}, 5);
    graph.setNeighborhood(36, (uint8_t[]){35, 37, 50, 17, 18}, 5);
    graph.setNeighborhood(37, (uint8_t[]){16, 17, 36, 51, 44}, 5);
    graph.setNeighborhood(38, (uint8_t[]){44, 39, 43}, 3);
    graph.setNeighborhood(39, (uint8_t[]){13, 14, 40, 38, 44}, 5);
    graph.setNeighborhood(40, (uint8_t[]){12, 39, 41, 42, 11}, );
    graph.setNeighborhood(41, (uint8_t[]){40, 11, 42, 10}, 4);
    graph.setNeighborhood(42, (uint8_t[]){40, 41, 43, 10}, 4);
    graph.setNeighborhood(43, (uint8_t[]){28, 44, 42, 9}, 4);
    graph.setNeighborhood(44, (uint8_t[]){38, 45, 37, 16, 44}, 5);
    graph.setNeighborhood(45, (uint8_t[]){44, 46, 52, 51, 7}, 5);
    graph.setNeighborhood(46, (uint8_t[]){52, 45, 28, 47, 53, 7}, 6);
    graph.setNeighborhood(47, (uint8_t[]){29, 28, 48, 53, 46}, 5);
    graph.setNeighborhood(48, (uint8_t[]){29, 30, 34, 49, 54, 53, 47}, 7);
    graph.setNeighborhood(49, (uint8_t[]){34, 35, 50, 54, 48}, 5);
    graph.setNeighborhood(50, (uint8_t[]){35, 36, 37, 51, 55, 49}, 6);
    graph.setNeighborhood(51, (uint8_t[]){50, 37, 44, 45, 52, 55}, 6);
    graph.setNeighborhood(52, (uint8_t[]){45, 51, 55, 53, 46}, 5);
    graph.setNeighborhood(53, (uint8_t[]){47, 54, 55, 52, 46, 48}, 6);
    graph.setNeighborhood(54, (uint8_t[]){53, 55, 48, 49, 50}, 5);
    graph.setNeighborhood(55, (uint8_t[]){54, 53, 52, 51, 50}, 5);
    
}

#endif