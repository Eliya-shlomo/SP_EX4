//
// Created by eliya on 07/05/2023.
//

#include "character.hpp"
#ifndef SP_EX4_NINJA_HPP
#define SP_EX4_NINJA_HPP


class Ninja : public Character{
private:
    int speed;
    int lives=11;
public:

    Ninja(const std::string name,const Point location);

    void move(Character character);

    void slash(Character &character);
};
#endif //SP_EX4_NINJA_HPP
