#include "Plane/plane.h"

Plane::Plane() {}

void Plane::generate_plane_data(std::string path) {
    std::ifstream file(path);
    if(file.is_open()) {
        std::string line;
        int row = 0;
        while(getline(file, line)) {
            for(int i = 0;i < line.length();i ++) {
                if(line[i] == 'p') {
                    Path* p = new Path(i,row, sf::Color::Black, 10, 10);
                    plane_objects.push_back(p); 
                }
                else if(line[i] == 's') {
                    Seat* s = new Seat(i, row, sf::Color::Blue, 5);
                    plane_objects.push_back(s);
                }
                else {
                  std::cout << "UNKNOWN CHARACTER AT [" << i + ":" << row << "]" << std::endl;
                }
            }
            row++;
        }
    }
    else {
        std::cout << "COULD NOT OPEN " << path << std::endl;
    }
}

void Plane::start() {
    window = new sf::RenderWindow(sf::VideoMode(800,600), "Boarding Simulation");
    while(window->isOpen()) {
        update();
    }
}

void Plane::update() {
    sf::Event event;
    while(window->pollEvent(event)) {
        if(event.type == sf::Event::Closed)
            window->close();

    }
    window->clear(sf::Color::White);
    for(Graphics_Object* gob : plane_objects) {
        sf::Drawable* draw_object = gob->get_shape();
        window->draw(*draw_object);
    }
    window->display();
}

Plane::~Plane() {
    delete window;
}