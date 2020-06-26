#ifndef MOVEMENT_OBJECT_H
#define MOVEMENT_OBJECT_H

#include <SFML/Graphics.hpp>

namespace Graphics {
    class Movement {
    public:
        static void move(sf::Shape *shape, float new_x, float new_y);
    };
}
#endif
