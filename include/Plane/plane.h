#include <SFML/Graphics.hpp>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include "Graphics/path.h"
#include "Graphics/seat.h"

class Plane {
public:
    Plane();
    ~Plane();

    void generate_plane_data(string path);
    void start();
    void update();

private:
    std::vector<Graphics_Object*> plane_objects;

    sf::RenderWindow* window;
    int window_width, window_height;
    void generate_window_dimensions(int rows, int cols);
};