//
// Created by eliya on 07/05/2023.
//


#ifndef SP_EX4_NINJA_HPP
#define SP_EX4_NINJA_HPP
#include "character.hpp"

namespace ariel {
    class Ninja : public Character {
    private:
    protected:
        int speed;
    public:

        Ninja(string name, Point location,int lives,int speed): Character(name, location, lives), speed(speed)  {}

        void move( Character *c);

        void slash(Character *c);

        string Print();

    };
};
#endif //SP_EX4_NINJA_HPP
