#include "Graphics/seat.h"

using namespace Graphics;

Seat::Seat(float x, float y, sf::Color fill_color, float radius, float entrance_x, float entrance_y) :
    Graphics_Object(x,y,fill_color) 
{
    this->entrance_x = entrance_x;
    this->entrance_y = entrance_y;

    this->circle_shape.setRadius(radius);
    this->circle_shape.setFillColor(fill_color);
    this->circle_shape.setPosition(sf::Vector2f(graphical_x,graphical_y));
}

Seat::Seat(float x, float y, sf::Color fill_color, float radius) :
    Graphics_Object(x,y,fill_color)
{
    this->entrance_x = -1;
    this->entrance_y = -1;

    this->circle_shape.setRadius(radius);
    this->circle_shape.setFillColor(fill_color);
    this->circle_shape.setPosition(sf::Vector2f(graphical_x,graphical_y));
}

sf::Drawable* Seat::get_shape() {
    return &circle_shape;
}

string Seat::get_string() {
    string ret_string = "Seat: " + Graphics_Object::get_string();
    ret_string += "Radius: " + std::to_string(circle_shape.getRadius());
    return ret_string;
}

std::tuple<float, float> Seat::get_entrance() {
    return std::make_tuple(entrance_x, entrance_y);
}