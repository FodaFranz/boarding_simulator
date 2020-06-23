#include "Plane/passenger.h"

Passenger::Passenger(vector<Node*> nodes, int start_x, int start_y, float goal_x, float goal_y) {
    this->nodes = nodes;
    this->start_x = start_x;
    this->start_y = start_y;
    this->goal_x = goal_x;
    this->goal_y = goal_y;
}