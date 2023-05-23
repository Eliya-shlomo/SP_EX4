

#include "Cowboy.hpp"
using namespace ariel;

void Cowboy::shoot(Character *other) {
    if(other== this){
        throw runtime_error("self attacked");
    }
    if(other->isAlive()== false){
        throw runtime_error("enemy is dead");
    }
    if(!this->isAlive()){
        throw runtime_error("shooter is dead");
    }
    if(isAlive()== true && balls_left > 0){
        other->hit(10);
        balls_left=balls_left-1;
    }
}

string Cowboy::print() const {
    {
        if (!isAlive())
            return  " name: " + getName() + ", hit points: "  + to_string(get_lives_point()) +", location: " + getLocation().toString();

        return  " name: (" + getName() + "), location: " + getLocation().toString();
    }
}
;