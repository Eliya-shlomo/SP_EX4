//
// Created by eliya on 07/05/2023.
//
#include "Ninja.hpp"
#ifndef SP_EX4_YOUNTNINJA_HPP
#define SP_EX4_YOUNTNINJA_HPP
const int young_life=100;
const int young_speed=14;

namespace ariel {
    class YoungNinja : public Ninja {
    public:
        YoungNinja(string name, Point location): Ninja(name,location,young_life,young_speed){}

    };
};
#endif //SP_EX4_YOUNTNINJA_HPP
;