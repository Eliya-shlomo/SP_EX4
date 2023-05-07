//
// Created by eliya on 07/05/2023.
//
#include "ninja.hpp"
#ifndef SP_EX4_TRAINEDNINJA_HPP
#define SP_EX4_TRAINEDNINJA_HPP
class TrainedNinja: Ninja{
public:
    TrainedNinja();

    bool isAlive();

    double distance(Character character);

    void hit();

    void getName();

    void getLocation();

    void print();

    void move(Character character);

    void slash(Character character);
};
#endif //SP_EX4_TRAINEDNINJA_HPP
