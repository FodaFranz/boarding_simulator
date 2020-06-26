#ifndef GRAPHICS_OBJECT_H
#define GRAPHICS_OBJECT_H

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

using std::string;
namespace Graphics {
    class Graphics_Object {
    public:
        Graphics_Object(float x, float y, sf::Color fill_color);

        float get_x() { return x; }
        float get_y() { return y; }

        virtual string get_string();
        virtual sf::Shape* get_shape() {
            return nullptr;
        }
        virtual string get_type() {
            return "Graphical_Object";
        }

    protected:
        float x;
        float y;

        float graphical_x;
        float graphical_y;

        sf::Color fill_color;
    };
}

#endif /* GRAPHICS_OBJECT_H */