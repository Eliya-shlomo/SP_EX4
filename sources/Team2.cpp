//
// Created by eliya on 18/05/2023.
//

#include "Team2.hpp"

using namespace std;
using namespace ariel;

    void Team2::attack(Team *other_team) {
        if(other_team== nullptr){
            throw invalid_argument("invalid argument");
        }
        if (other_team->stillAlive() == 0) {
            throw runtime_error("Attacking a dead team");
        }
        if (this->stillAlive() == 0) return;

        if (this->getleader() == other_team->getleader()) {
            throw runtime_error("self attacked");
        }
        if (!this->getleader()->isAlive()) {
            this->setLeader(this->getNewLeader());
        }

        Character* victim = this->getClosest(other_team);

        for (Character* character : this->getTeamMembers()) {
            if (!victim->isAlive()) {
                if (other_team->stillAlive() == 0) return;
                victim = this->getClosest(other_team);
            } else if (character->isAlive()) {
                auto* cowboy = dynamic_cast<Cowboy*>(character);
                if (cowboy != nullptr) {
                    if (cowboy->hasboolets()) {
                        cowboy->shoot(victim);
                    } else {
                        cowboy->reload();
                    }
                }
                auto* ninja = dynamic_cast<Ninja*>(character);
                if (ninja != nullptr) {
                    if (ninja->distance(victim) <= 1) {
                        ninja->slash(victim);
                    } else {
                        ninja->move(victim);
                    }
                }
            }
        }
    }

    void Team2::print() {
        size_t team_size = this->getTeamMembers().size();
        for (size_t i = 0; i < team_size; ++i) {
            cout<<this->getTeamMembers().at(i)->print()<<endl;
        }
    }

    Character *Team2::getClosest(Team *other) {
        double minDistance = numeric_limits<double>::max();
        size_t j = 0;
        size_t team_size = other->getTeamMembers().size();

        for (size_t i = 0; i < team_size; ++i) {
            double tempDistance = other->getTeamMembers().at(i)->distance(this->getleader());
            if (other->getTeamMembers().at(i)->isAlive() && tempDistance < minDistance) {
                minDistance = tempDistance;
                j = i;
            }
        }
        return other->getTeamMembers().at(j);
    }



