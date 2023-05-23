//
// Created by eliya on 18/05/2023.
//

#ifndef SP_EX4_TEAN2_HPP
#define SP_EX4_TEAN2_HPP

#include "Team.hpp"
namespace ariel {
    class Team2 : public Team {

    public:
        Team2(Character *leader):Team(leader){
            setsize(1);
        }

    void attack(Team *);

    void print();

    Character *getClosest(Team *other);

#endif //SP_EX4_TEAN2_HPP
};
};
;