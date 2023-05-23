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
    private:

        string name;


        Point location;


        int lives;

        bool inTeam= false;

    public:

        Character(string name, Point location, int lives);

        Character(const Character& other) = default;

        Character& operator=(const Character& other) = default;

        Character(Character&& other) = default;

        Character& operator=(Character&& other) = default;

        virtual bool isAlive()const;

        virtual double distance( Character *c);

        virtual void hit(int);

        virtual string getName() const;

        virtual Point getLocation() const;

        virtual std::string print() const = 0;

        int getlive(){
            return lives;
        }

        int  get_lives_point() const;


        virtual ~Character()=default;

        bool in_team(){
            return this->inTeam;
        }
        void set_in_team(bool boo){
             this->inTeam=boo;
        }
        void setLocation(Point other){
            location= other;
        }

    };

};
#endif //SP_EX4_CHARACTER_HPP
