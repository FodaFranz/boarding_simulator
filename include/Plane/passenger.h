#include <vector>
#include <cmath>
#include "Pathfinding/node.h"
#include "Graphics/seat.h"
#include "Graphics/passenger.h"

using std::vector;

class Passenger {
public:
    Passenger(vector<Node*> nodes, Graphics::Seat* seat);
    ~Passenger();
private:
    vector<Node*> nodes;
    Graphics::Seat* seat;
    Graphics::Passenger* passenger_graphics;
};

