//
// Created by eliya on 07/05/2023.
//
#include <string.h>
#include <iostream>
#include "point.hpp"

#ifndef SP_EX4_CHARACTER_HPP
#define SP_EX4_CHARACTER_HPP
using namespace std;

namespace ariel {
    class Character {
    protected:

        string name;


        Point location;


        int lives;



    public:

        Character(string name, Point &location, int lives);

        virtual bool isAlive()const;

        virtual double distance(const Character *c);

        virtual void hit(int);

        virtual string getName();

        virtual Point getLocation() const;

        virtual string print();

        int getlive(){
            return lives;
        }


        virtual ~Character()=default;

    };

};
#endif //SP_EX4_CHARACTER_HPP
