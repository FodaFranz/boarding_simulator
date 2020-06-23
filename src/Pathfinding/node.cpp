#include "Pathfinding/node.h"

Node::Node(int x, int y) {
    this->x = x;
    this->y = y;
}

string Node::get_string() {
    return "Node (" + std::to_string(x) + ":" + std::to_string(y) + ")";
}

Node::~Node() {
    std::cout << "TEST" << std::endl;
    delete parent;
}