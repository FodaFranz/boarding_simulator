#include "Plane/plane.h"

Plane::Plane() {}

void Plane::generate_plane_data(std::string path) {
    std::ifstream file(path);
    if(file.is_open()) {
        std::string line;
        int row = 0;
        int max_line_length = 0;
        while(getline(file, line)) {
            for(int i = 0;i < line.length();i ++) {
                if(max_line_length < line.length())
                    max_line_length = line.length();

                if(line[i] == 'p') {
                    Path* p = new Path(i,row, sf::Color::Black, 10, 10);
                    plane_objects.push_back(p); 
                }
                else if(line[i] == 's') {
                    //If i remove this it stops working so it stays
                    if(i == 0 && row == 3) {
                        std::cout << "..." << std::endl;
                    }

                    Seat* s = new Seat(i, row, sf::Color::Blue, 5);
                    plane_objects.push_back(s);
                }
                else {
                  std::cout << "UNKNOWN CHARACTER AT [" << i + ":" << row << "]" << std::endl;
                }
            }
            row++;
        }

        generate_window_dimensions(row, max_line_length);
    }
    else {
        std::cout << "COULD NOT OPEN " << path << std::endl;
    }
}

void Plane::generate_window_dimensions(int rows, int cols) {
    std::cout << rows << ":" << cols << std::endl;
    window_height = rows * 10;
    window_width = cols * 10;
}

void Plane::start() {
    window = new sf::RenderWindow(sf::VideoMode(window_width, window_height), "Boarding Simulation");
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
    for(int i = 0;i < plane_objects.size();i++) {
        sf::Drawable* shape = plane_objects[i]->get_shape();
        window->draw(*shape);
    }
    window->display();
}

Plane::~Plane() {
    delete window;
}