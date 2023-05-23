//
// Created by eliya on 07/05/2023.
//


#ifndef SP_EX4_NINJA_HPP
#define SP_EX4_NINJA_HPP
#include "Character.hpp"

namespace ariel {
    class Ninja : public Character {
    private:
        int speed;
    public:

        Ninja(string name, Point location,int lives,int speed): Character(name, location, lives), speed(speed)  {}

        void move( Character *other);

        void slash(Character *other);

        string print () const override;

    };
};
#endif //SP_EX4_NINJA_HPP
;