//
// Created by eliya on 23/05/2023.
//

#include "SmartTeam.hpp"



Character *SmartTeam::getWeakest(Team *other) {
    double min_hp = numeric_limits<double>::max();
    Character* Weakest_enemy = nullptr;
    for (Character* character : other->getTeamMembers()){
        if(character->isAlive()){
            if(character->get_lives_point()<min_hp){
                min_hp = character->get_lives_point();
                Weakest_enemy = character;
            }
        }
    }
    return Weakest_enemy;
}

Character *SmartTeam::getClosestToNinja(Ninja *ninja, Team *other) {
    double min_dis = numeric_limits<double>::max();
    Character* closest_enemy = nullptr;
    for (Character* character : other->getTeamMembers()){
        if(character->isAlive()){
            if(ninja->distance(character)<min_dis){
                min_dis = ninja->distance(character);
                closest_enemy = character;
            }
        }
    }
    return closest_enemy;
}

void SmartTeam::attack(Team *other_team) {
    if(other_team== nullptr){
        throw invalid_argument("invalid argument");
    }
    if (other_team->stillAlive() == 0) {
        throw runtime_error("Attacking a dead team!!!");
    }

    if (this->stillAlive() == 0) return;

    if (this->getleader() == other_team->getleader()) {
        throw runtime_error("You are trying to attack yourself!!!");
    }

    if (!this->getleader()->isAlive()) {
        this->setLeader(this->getNewLeader());
    }

    Character* victim = this->getWeakest(other_team);

    for (Character* character : this->getTeamMembers()) {
        auto* ninja = dynamic_cast<Ninja*>(character);
        auto* cowboy = dynamic_cast<Cowboy*>(character);
        if (!victim->isAlive()) {
            if (other_team->stillAlive() == 0) return;
            victim = this->getWeakest(other_team);
        }
        if (character->isAlive()) {

            if (cowboy != nullptr) {
                if (cowboy->hasboolets()) {
                    cowboy->shoot(victim);
                } else {
                    cowboy->reload();
                }
            }
            if (ninja != nullptr) {
                // Check if the victim is dead
                if (!victim->isAlive()) {
                    if (other_team->stillAlive() == 0) return;
                    victim = SmartTeam::getClosestToNinja(ninja,other_team);
                }
                if (ninja->distance(victim) <= 1) {
                    ninja->slash(victim);
                } else {
                    ninja->move(victim);

                }
            }

        }

    }

    for (Character* character : this->getTeamMembers()) {
        if (character->isAlive()) {
            auto* ninja = dynamic_cast<Ninja*>(character);
            if (ninja != nullptr) {
                // Check if the victim is dead
                if (!victim->isAlive()) {
                    if (other_team->stillAlive() == 0) return;
                    victim = SmartTeam::getClosestToNinja(ninja,other_team);
                }
                if (ninja->distance(victim) <= 1) {
                    ninja->slash(victim);
                } else {
                    ninja->move(victim);

                }
            }
            }
       }

}