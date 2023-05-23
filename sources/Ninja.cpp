//
// Created by eliya on 07/05/2023.
//

#include "Ninja.hpp"
using namespace ariel;



void Ninja::move( Character *other) {
    Point new_location = Point::moveTowards(this->getLocation(),other->getLocation(),speed);
    this->setLocation( new_location);
}

void Ninja::slash( Character *other) {
    if(other== this){
        throw runtime_error("self attacked");
    }
    if(!other->isAlive()){
        throw runtime_error("enemy is dead");
    }
    if(!this->isAlive()){
        throw runtime_error("slasher is dead");
    }
    double distance = this->getLocation().distance(other->getLocation());
    if(distance <=1){
        other->hit(40);
    }

}

string Ninja::print() const  {
    if (isAlive()== true){
        return " name: " + getName() + ", hit points: "  + to_string(get_lives_point()) +", location: " + getLocation().toString();

    }
    return " name: (" + getName() + "), location: " + getLocation().toString();
}