#include "Plane/plane.h"

Plane::Plane() {}

void Plane::start() {
    std::cout << "START" << std::endl;
    sf::RenderWindow window(sf::VideoMode(window_width, window_height), "Boarding Simulation");
    while(window.isOpen()) {
        update(&window);
    }
}

void Plane::update(sf::RenderWindow* window) {
    sf::Event event;
    while(window->pollEvent(event)) {
        if(event.type == sf::Event::Closed)
            window->close();
    }

    window->clear(sf::Color::White);
    //Draw seats and path
    for(int i = 0;i < plane_objects.size();i++) {
        sf::Shape* shape = plane_objects.at(i)->get_shape();
        window->draw(*shape);
    }
    //Draw and move passengers
    for(int i = 0;i < passengers.size(); i++) {
        passengers.at(i)->move();
        window->draw(*passengers.at(i)->get_graphic().get_shape());
    }
    window->display();
}

void Plane::generate_plane_data(std::string path) {
    std::ifstream file(path);
    if(file.is_open()) {
        std::string line;
        int row = 0;
        int max_line_length = 0;
        object_size = 20;
        while(getline(file, line)) {
            for(int i = 0;i < line.length();i ++) {
                if(max_line_length < line.length())
                    max_line_length = line.length();

                if(line[i] == 'p') {
                    Graphics::Path* p = new Graphics::Path(i,row, sf::Color::Black, object_size, object_size);
                    plane_objects.push_back(p);

                    Node* n = new Node(i, row);
                    nodes.push_back(n);
                }
                else if(line[i] == 's') {
                    //If i remove this it stops working so it stays
                    if(i == 0 && row == 3) {
                        std::cout << "..." << std::endl;
                    }
                    float entrance_x;
                    for(int j = i;j < line.length(); j++) {
                        if(line[i - j] == 'p') {
                            entrance_x = i - j;
                            break;
                        }
                        else if(line[i + j] == 'p') {
                            entrance_x = i + j;
                            break;
                        }
                    }
                    Graphics::Seat* s = new Graphics::Seat(i, row, sf::Color::Blue, object_size/2, entrance_x, row);
                    plane_objects.push_back(s);
                }
                else {
                    std::cout << "UNKNOWN CHARACTER AT [" << i + ":" << row << "]" << std::endl;
                }
            }
            row++;
        }
        generate_window_dimensions(row, max_line_length);
        generate_passengers();
    }
    else {
        std::cout << "COULD NOT OPEN " << path << std::endl;
    }
}

void Plane::generate_window_dimensions(int rows, int cols) {
    window_height = rows * object_size;
    window_width = cols * object_size;
}

void Plane::generate_passengers() {
    for(Graphics::Graphics_Object* gob : plane_objects) {
        if(gob->get_type() == "Seat") {
            Passenger* p = new Passenger(nodes, (Graphics::Seat*) gob, object_size/2 - 1);
            passengers.push_back(p);
        }
    }
}
