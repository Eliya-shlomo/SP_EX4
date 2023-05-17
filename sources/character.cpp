#include "character.hpp"
using namespace std;
using namespace ariel;
Character::Character(string name, Point &location,int lives): name(name), location(location), lives(lives){
    return;
}

bool Character::isAlive()const {
    return true;
}

double Character::distance(const Character *c) {
    return 0.0;
}

void Character::hit(int) {
    return;
}

string Character::getName() {
    return "";
}

Point Character::getLocation()const {
    return Point(0, 0);
}

string Character::print() {
    return "";
}