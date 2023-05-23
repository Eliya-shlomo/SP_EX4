//
// Created by eliya on 07/05/2023.
//
#include "Ninja.hpp"
#ifndef SP_EX4_TRAINEDNINJA_HPP
#define SP_EX4_TRAINEDNINJA_HPP
namespace ariel {
    class TrainedNinja : public Ninja {

    public:
        TrainedNinja(string name, Point location): Ninja(name,location,120,12){}

    };
};
#endif //SP_EX4_TRAINEDNINJA_HPP
;