#include <SFML/Graphics.hpp>
#include <string>
#include "graphics_object.h"

using std::string;

class Seat : public Graphics_Object{
public:
    Seat(float x, float y, sf::Color fill_color, float radius);

    sf::Drawable* get_shape();
    string get_string();

private:
    sf::CircleShape circle_shape;
};