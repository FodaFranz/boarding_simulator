#include <iostream>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Plane/plane.h"

int main() {
    Plane* pl = new Plane();
    pl->generate_plane_data("./res/plane.txt");
    pl->start();
    return 0;
}