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

    Cowboy();
    void shoot(Character character);

    bool hasboolets();

    void reload();

    bool isAlive();

    double distance(Character character);

    void hit();

    void getName();

    void getLocation();

    void print();
};
#endif //SP_EX4_COWBOY_HPP
