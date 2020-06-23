#ifndef NODE_OBJECT_H
#define NODE_OBJECT_H

#include <vector>
#include <string>
#include <iostream>

using std::string;

class Node {
public:
    Node(int x, int y);
    string get_string();
    float get_x() { return static_cast<float>(x); }
    float get_y() { return static_cast<float>(y); }
    ~Node();

private:
    int x,y;
    Node* parent;
    std::vector<Node*> neighbors;
};

#endif