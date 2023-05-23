//
// Created by eliya on 07/05/2023.
//



#ifndef SP_EX4_COWBOY_HPP
#define SP_EX4_COWBOY_HPP
static const int DEFAULT_HIT_POINTS = 110;
static const int DEFAULT_AMOUNT_BALLS = 6;
#include "string"
#include <iostream>
#include "point.hpp"
#include "Character.hpp"
using namespace std;
namespace ariel {

    class Cowboy : public Character {
    private:

        int balls_left;

    public:
        Cowboy(string name, Point location): Character(name,location,DEFAULT_HIT_POINTS),balls_left(DEFAULT_AMOUNT_BALLS){}

        void shoot(Character *c);

        bool hasboolets(){
            return balls_left>0;
        }

        void reload(){
            if (!isAlive())
                throw runtime_error("Cannot reload while cowboy is dead");
            else{
            this->balls_left = 6;
            }
        }

        string print () const override;



    };
};
#endif //SP_EX4_COWBOY_HPP
;