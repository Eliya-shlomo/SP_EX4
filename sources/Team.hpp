//
// Created by eliya on 07/05/2023.
//

#include <vector>
#include "character.hpp"
#ifndef SP_EX4_TEAM_HPP
#define SP_EX4_TEAM_HPP
class Team {
private:
    Character* m_leader;
    std::vector<Character*> m_characters;
public:
    Team(Character* leader);
    Team team_A();
    Team team_B();
    Team SmartTeam();
    void add(Character* character);
    void attack(Team* enemy);
    int stillAlive() const;
    void print() const;

};

#endif //SP_EX4_TEAM_HPP
