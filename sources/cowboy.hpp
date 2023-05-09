//
// Created by eliya on 07/05/2023.
//
#include "character.hpp"
#include "string"
#include <iostream>

#ifndef SP_EX4_COWBOY_HPP
#define SP_EX4_COWBOY_HPP
using namespace std;



class Cowboy : public Character{
private:
    int num_bul=6;
    int lives=11;
    std::string name;

public:

    Cowboy(const string name,const Point location);

    void shoot(Character &character);

    bool hasboolets();

    void reload();


};
#endif //SP_EX4_COWBOY_HPP
