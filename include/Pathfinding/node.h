#include <vector>
#include <string>
#include <iostream>

using std::string;

class Node {
public:
    Node(int x, int y);
    string get_string();
    ~Node();

private:
    int x,y;
    Node* parent;
    std::vector<Node*> neighbors;
};