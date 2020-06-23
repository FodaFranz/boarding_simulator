#ifndef SEAT_OBJECT_H
#define SEAT_OBJECT_H

#include <SFML/Graphics.hpp>
#include <string>
#include <tuple>
#include "graphics_object.h"

using std::string;

class Seat : public Graphics_Object{
public:
    Seat(float x, float y, sf::Color fill_color, float radius, float entrance_x, float entrance_y);

    sf::Drawable* get_shape();
    string get_string();
    string get_type() { return "Seat"; }
    std::tuple<float, float> get_entrance();

private:
    sf::CircleShape circle_shape;

    float entrance_x, entrance_y;
};

#endif