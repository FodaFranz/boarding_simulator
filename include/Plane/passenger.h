#include <vector>
#include <cmath>
#include "Pathfinding/node.h"
#include "Graphics/seat.h"

using std::vector;

class Passenger {
public:
    Passenger(vector<Node*> nodes, Seat* seat);
private:
    vector<Node*> nodes;
    Seat* seat;
};