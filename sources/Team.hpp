//
// Created by eliya on 07/05/2023.
//
#ifndef SP_EX4_TEAM_HPP
#define SP_EX4_TEAM_HPP
#include <vector>
#include "character.hpp"
#include "ninja.hpp"
#include "OldNinja.hpp"
#include "YountNinja.hpp"
#include "TrainedNinja.hpp"
#include "cowboy.hpp"
#include <vector>
using namespace std;
namespace ariel {
    class Team {
    private:
        Character *leader;
        vector<Ninja> Ninja_TEAM;
        vector<Cowboy> Cowboy_TEAM;
        std::vector<Character *> members;
    public:

        Team(Character *leader);



        void add(Character  *member);

        void attack(Team *other);

        int stillAlive()const;

        void print();

        int getsize(){
            return members.size();
        }
        Character* getmember(unsigned i){
            return members[i];
        }



        ~Team();

    };
};
#endif //SP_EX4_TEAM_HPP
