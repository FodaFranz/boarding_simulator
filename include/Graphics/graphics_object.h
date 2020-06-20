#ifndef GRAPHICS_OBJECT_H
#define GRAPHICS_OBJECT_H

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

using std::string;

class Graphics_Object {
public:
    Graphics_Object(float x, float y, sf::Color fill_color);
    virtual string get_string();
    virtual sf::Drawable* get_shape() {
        std::cout << "GOB CLASS" << std::endl;
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