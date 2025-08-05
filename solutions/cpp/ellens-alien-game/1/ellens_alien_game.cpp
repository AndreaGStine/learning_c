#include <cmath>

namespace targets {
// TODO: Insert the code for the alien class here
    class Alien {
        public:
            Alien(int x, int y) {
                x_coordinate = x;
                y_coordinate = y;
            }
            int get_health() {health = std::max(health, 0); return health;}
            bool hit() {health--; return true;}
            bool is_alive() const {return (health > 0);}
            bool teleport(int x, int y) {x_coordinate = x; y_coordinate = y; return true;}
            bool collision_detection(Alien a) {return (a.x_coordinate == x_coordinate and a.y_coordinate == y_coordinate);}
            int x_coordinate;
            int y_coordinate;

        private:
            int health{3};
    
    };
}  // namespace targets


/*

class Wizard {
public:
    Wizard(std::string name, int damage = 5)
        : name(std::move(name)), damage(damage) {}

    int cast_spell() const { return damage; }

    std::string name;

private:
    int damage;
};


*/