#include "Plane/passenger.h"

Passenger::Passenger(vector<Node*> nodes, Seat* seat) {
    this->nodes = nodes;
    this->seat = seat;
}