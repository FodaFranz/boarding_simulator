#include <SFML/Graphics.hpp>
#include <string>
#include "graphics_object.h"

using std::string;
namespace Graphics {
    class Path : public Graphics_Object {
    public:
        Path(float x, float y, sf::Color fill_color, float height, float width);

        sf::Shape *get_shape();
        string get_string();
        string get_type() { return "Path"; }

    private:
        sf::RectangleShape rect_shape;
    };
}