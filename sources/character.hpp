//
// Created by eliya on 07/05/2023.
//
#include <string.h>
#include <iostream>
#include "point.hpp"

#ifndef SP_EX4_CHARACTER_HPP
#define SP_EX4_CHARACTER_HPP
class Character {
private :
    Point point(double x,double y);
    int lives;
    std::string name;

public:


    bool isAlive();

    double distance(Character character);

    void hit();

    void getName();

    void getLocation();

    void print();





};
#endif //SP_EX4_CHARACTER_HPP
