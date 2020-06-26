#include "Graphics/graphics_object.h"

using namespace Graphics;

Graphics_Object::Graphics_Object(float x, float y, sf::Color fill_color) {
    this->x = x;
    this->y = y;
    this->fill_color = fill_color;
}

string Graphics_Object::get_string() {
    string color_str = "(" + std::to_string(fill_color.r) + ";" + 
                             std::to_string(fill_color.g) + ";" + 
                             std::to_string(fill_color.b) + ")";
    return "Position: (" + std::to_string(x) + ":" + std::to_string(y) + ")" + 
        "Color: " + color_str;
}