#include <SFML/Graphics.hpp>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include "Graphics/path.h"
#include "Graphics/seat.h"
#include "Pathfinding/node.h"
#include "passenger.h"

class Plane {
public:
    Plane();
    void generate_plane_data(string path);
    void start();

private:
    void update(sf::RenderWindow* window);

    std::vector<Graphics_Object*> plane_objects;
    std::vector<Node*> nodes;
    std::vector<Passenger*> passengers;

    sf::RenderWindow* window;
    int window_width, window_height;
    void generate_window_dimensions(int rows, int cols);
    void generate_passengers();
};