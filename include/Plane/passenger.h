#include <vector>
#include <cmath>
#include "Pathfinding/node.h"
#include "Graphics/seat.h"
#include "Graphics/passenger.h"
#include "Graphics/movement.h"

using std::vector;

class Passenger {
public:
    Passenger(vector<Node*> nodes, Graphics::Seat* seat, float radius);
    Graphics::Passenger get_graphic() { return *passenger_graphics; }
    void move();
    ~Passenger();
private:
    vector<Node*> nodes;
    Graphics::Seat* seat;
    Graphics::Passenger* passenger_graphics;
};

