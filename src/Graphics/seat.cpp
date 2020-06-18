#include "Graphics/seat.h"

Seat::Seat(float x, float y, sf::Color fill_color, float radius) :
    Graphics_Object(x,y,fill_color) 
{
    this->circle_shape.setRadius(radius);
    this->circle_shape.setFillColor(fill_color);
    this->circle_shape.setPosition(sf::Vector2f(x,y));
}

sf::CircleShape Seat::get_circle_shape() {
    return circle_shape;
}

string Seat::get_string() {
    string ret_string = Graphics_Object::get_string();
    ret_string += "Radius: " + std::to_string(circle_shape.getRadius());
    return ret_string;
}