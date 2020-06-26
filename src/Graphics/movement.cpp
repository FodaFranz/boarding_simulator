#include "Graphics/movement.h"

using namespace Graphics;

void Movement::move(sf::Shape *shape, float new_x, float new_y) {
    shape->setPosition(sf::Vector2f(new_x, new_y));
}