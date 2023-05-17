//
// Created by eliya on 07/05/2023.
//



#ifndef SP_EX4_COWBOY_HPP
#define SP_EX4_COWBOY_HPP

#include "string"
#include <iostream>
#include "point.hpp"
#include "character.hpp"
using namespace std;
namespace ariel {

    class Cowboy : public Character {
    private:

        int balls_left;

    public:
        Cowboy(string name, Point location): Character(name,location,110),balls_left(6){}

        void shoot(Character *c);

        bool has_boolets(){
            return balls_left>0;
        }

        void reload(){
            balls_left=6;
        }

        string print ();



    };
};
#endif //SP_EX4_COWBOY_HPP
