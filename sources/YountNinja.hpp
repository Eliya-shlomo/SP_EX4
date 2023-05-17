//
// Created by eliya on 07/05/2023.
//
#include "ninja.hpp"
#ifndef SP_EX4_YOUNTNINJA_HPP
#define SP_EX4_YOUNTNINJA_HPP
namespace ariel {
    class YoungNinja : public Ninja {
    public:
        YoungNinja(string, Point): Ninja(name,location,100,14){}

    };
};
#endif //SP_EX4_YOUNTNINJA_HPP
