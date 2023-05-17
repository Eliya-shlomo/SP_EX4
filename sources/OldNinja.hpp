//
// Created by eliya on 07/05/2023.
//

#ifndef SP_EX4_OLDNINJA_HPP
#define SP_EX4_OLDNINJA_HPP
#include "ninja.hpp"
namespace ariel {
    class OldNinja : public Ninja {

    public:
        OldNinja(string name, Point location): Ninja(name,location,150,8){}

    };
};
#endif //SP_EX4_OLDNINJA_HPP
