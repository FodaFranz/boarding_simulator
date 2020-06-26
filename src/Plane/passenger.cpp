#include "Plane/passenger.h"

Passenger::Passenger(vector<Node *> nodes, Graphics::Seat *seat, float radius) {
    this->nodes = nodes;
    this->seat = seat;

    passenger_graphics = new Graphics::Passenger(0,0,sf::Color::Red, radius);
}

void Passenger::move() {
    Graphics::Movement::move(passenger_graphics->get_shape(), 20, 20);
}

Passenger::~Passenger() {
    delete seat;
    delete passenger_graphics;
}