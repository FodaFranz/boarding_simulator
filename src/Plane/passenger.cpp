#include "Plane/passenger.h"

Passenger::Passenger(vector<Node *> nodes, Graphics::Seat *seat) {
    this->nodes = nodes;
    this->seat = seat;

    passenger_graphics = new Graphics::Passenger(0,0,sf::Color::Red,4);
}

Passenger::~Passenger() {
    delete seat;
    delete passenger_graphics;
}