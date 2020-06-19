#ifndef GRAPHICS_OBJECT_H
#define GRAPHICS_OBJECT_H

#include <SFML/Graphics.hpp>
#include <string>

using std::string;

class Graphics_Object {
public:
    Graphics_Object(float x, float y, sf::Color fill_color);
    string get_string();
    sf::Drawable* get_shape() {
        return nullptr;
    }

protected:
    float x;
    float y;

    float graphical_x;
    float graphical_y;

    sf::Color fill_color;
};

#endif /* GRAPHICS_OBJECT_H */