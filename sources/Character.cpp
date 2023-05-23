#include "Character.hpp"
using namespace std;
using namespace ariel;
Character::Character(string name, Point location,int lives): name(name), location(location), lives(lives){

}

int Character:: get_lives_point() const {
    return this->lives;
}

bool Character::isAlive()const {
    return lives>0;
}

double Character::distance( Character *other) {
    if (other == nullptr)
        throw invalid_argument("other character is null");
    return location.distance(other->getLocation());
}

void Character::hit(int hit) {
    if(hit <0) {
        throw invalid_argument("hit must have a positive number");
    }
    if (isAlive()== false) return;
    else{
        lives-=hit;
    }
}

string Character::getName() const {
    return this->name;
}

Point Character::getLocation()const {
    return this->location;
}


