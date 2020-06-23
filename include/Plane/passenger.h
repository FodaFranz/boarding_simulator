#include <vector>
#include "Pathfinding/node.h"

using std::vector;

class Passenger {
public:
    Passenger(vector<Node*> nodes, int start_x, int start_y, float goal_x, float goal_y);
private:
    vector<Node*> nodes;
    float start_x, start_y;
    float goal_x, goal_y;
};