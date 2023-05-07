//
// Created by eliya on 07/05/2023.
//
#include "character.hpp"
#ifndef SP_EX4_COWBOY_HPP
#define SP_EX4_COWBOY_HPP
class Cowboy : public Character{
private:
    int num_bul=6;
    int lives=11;
public:


    void shoot(Character character);

    bool hasboolets();

    void reload();
};
#endif //SP_EX4_COWBOY_HPP
