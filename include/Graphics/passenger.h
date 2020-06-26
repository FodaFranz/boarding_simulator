#include "seat.h"

namespace Graphics {
    class Passenger : public Seat {
    public:
        Passenger(float x, float y, sf::Color fill_color, float radius);
        string get_type() { return "Passenger_Graphic"; }
    };
}
