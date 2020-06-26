#ifndef SEAT_OBJECT_H
#define SEAT_OBJECT_H

#include <SFML/Graphics.hpp>
#include <string>
#include <tuple>
#include "graphics_object.h"

using std::string;

namespace Graphics {
    class Seat : public Graphics_Object{
    public:
        Seat(float x, float y, sf::Color fill_color, float radius, float entrance_x, float entrance_y);
        Seat(float x, float y, sf::Color fill_color, float radius);

        sf::Shape* get_shape();
        string get_string();
        virtual string get_type() { return "Seat"; }
        std::tuple<float, float> get_entrance();

    private:
        sf::CircleShape circle_shape;

        float entrance_x, entrance_y;
    };
}
#endif