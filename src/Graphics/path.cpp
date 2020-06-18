#include "Graphics/path.h"

Path::Path(float x, float y, sf::Color fill_color, float height, float width) :
    Graphics_Object(x,y,fill_color) 
{
    this->rect_shape.setSize(sf::Vector2f(width, height));
    this->rect_shape.setFillColor(fill_color);
    this->rect_shape.setPosition(sf::Vector2f(x,y));
}

sf::RectangleShape Path::get_rect_shape() {
    return this->rect_shape;
}

string Path::get_string() {
    string ret_string = Graphics_Object::get_string();
    ret_string += "Size: (" + std::to_string(rect_shape.getSize().x) + " x " + std::to_string(rect_shape.getSize().y) + ")";
    return ret_string;
}