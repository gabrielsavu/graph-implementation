//
// Created by Savu Liviu Gabriel on 01.03.2019.
//

#ifndef GRAPH_CLASS_GRAPH_H
#define GRAPH_CLASS_GRAPH_H

#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <list>
#include "node.h"

class Graph {
private:
    unsigned number_of_nodes;
    unsigned number_of_links;
    Node *nodes;
public:
    Graph();
    ~Graph();
    explicit Graph(unsigned);
    Graph(const Graph&);
    void allocMemory(unsigned);
    void addLink(unsigned, unsigned);
    void BFSUtil(unsigned, bool[]);
    void DFSUtil(unsigned, bool[]);
    void DFS(unsigned start);
    void BFS(unsigned start);
    void connectedComponents();
    friend std::ostream& operator << (std::ostream&, const Graph&);
    friend std::istream& operator >> (std::istream&, Graph&);
    bool operator == (const Graph&);
    bool operator != (const Graph&);
    bool operator < (const Graph&);
    Graph& operator = (const Graph&);
    Graph operator + (const Graph&);
};


#endif //GRAPH_CLASS_GRAPH_H
