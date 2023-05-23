//
// Created by eliya on 07/05/2023.
//
#ifndef SP_EX4_TEAM_HPP
#define SP_EX4_TEAM_HPP

#include "Character.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "YountNinja.hpp"
#include "TrainedNinja.hpp"
#include "Cowboy.hpp"
#include <vector>
#include <limits>

using namespace std;
namespace ariel {
    class Team {
    private:
        int size;
        Character *leader;
        std::vector<Character *> members;

    public:

        Team(Character *leader){
            if (leader->in_team()) {
                throw runtime_error("Leader is already in a team!");
            }
            members.push_back(leader);
            leader->set_in_team(true);
            size=1;
            this->leader=leader;
        }

        Team(const Team& other);

        Team& operator=(const Team& other);

        Team(Team&& other) noexcept;

        Team& operator=(Team&& other) noexcept;


        void add(Character  *member);

        virtual void attack(Team *other);

        int stillAlive()const;

        virtual Character* getClosest(Team *other);

        virtual void print();

        void setLeader(Character *newLeader){
            leader= newLeader;
        }

        Character* getmember(unsigned i){
            return members[i];
        }

        int getsize(){
            return static_cast<int>(members.size());
        }

        void setsize(int size){
            this->size=size;
        }


        vector<Character*> getTeamMembers() {
            return members;
        }






        ~Team();


        Character* getleader()const;

        Character *getNewLeader();
    };
};
#endif //SP_EX4_TEAM_HPP
