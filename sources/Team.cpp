#include "Team.hpp"
using namespace ariel;

Character* Team:: getleader()const{
    return this->leader;
}
void Team:: add(Character *member) {
    if (member == nullptr)
        throw invalid_argument("Member is null");

    else if (member->in_team())
        throw runtime_error("Member is already in a Team");

    else if (members.size() == 10)
        throw runtime_error("Team is full!");

    members.push_back(member);

    member->set_in_team(true);
}

Character* Team::getClosest(Team *other) {
    double min_dis = numeric_limits<double>::max();
    Character* closest_enemy = nullptr;
    for (Character* character : other->getTeamMembers()){
        if(character->isAlive()){
            if(this->leader->distance(character)<min_dis){
                min_dis = this->leader->distance(character);
                closest_enemy = character;
            }
        }
    }
    return closest_enemy;
}


void Team::attack(Team *other) {

    if(other== nullptr){
        throw invalid_argument("invalid argument");
    }

    if (other->stillAlive() == 0) {
        throw runtime_error("dead man is been attacked");
    }


    if (this->stillAlive() == 0) return;


    if (leader == other->leader) {
        throw runtime_error("self attacked");
    }

    if (!leader->isAlive()) {
        leader = this->getNewLeader();
    }

    Character* victim = this->getClosest(other);

    for (Character* character : members) {
        if (!victim->isAlive()) {
            if (other->stillAlive() == 0) return;
            victim = this->getClosest(other);
        }  if (character->isAlive()) {
            auto* cowboy = dynamic_cast<Cowboy*>(character);
            if (cowboy != nullptr) {
                if (cowboy->hasboolets()) {
                    cowboy->shoot(victim);
                } else {
                    cowboy->reload();
                }
            }
        }
    }

    for (Character* character : members) {
        if (!victim->isAlive()) {
            if (other->stillAlive() == 0) return;
            victim = this->getClosest(other);
        }  if (character->isAlive()) {
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




int Team::stillAlive()const {
    int cnt=0;
    for(Character *member : members){
        if(member->isAlive()){
            cnt++;
        }
    }
    return cnt;
}




void Team::print() {
    Ninja* ninjaPtr = nullptr;
    Cowboy* cowboyPtr = nullptr;
    size_t team_size = members.size();
    for (unsigned i = 0; i < team_size; ++i) {
        cowboyPtr = dynamic_cast<Cowboy*>(members.at(i));
        if (cowboyPtr) {
            cout<<members.at(i)->print()<<endl;
        }
    }
    for (unsigned i = 0; i < team_size; ++i) {
        ninjaPtr = dynamic_cast<Ninja*>(members.at(i));
        if (ninjaPtr) {
            cout<<members.at(i)->print()<<endl;
        }
    }

}




Team::~Team() {

    for (Character* character : members) {
        delete character;
    }
}




Character* Team:: getNewLeader(){
    if(this->leader->isAlive()){ return this->leader;
    }
    double minDistance = numeric_limits<double>::max();
    Character* newLeader = nullptr;
    for (Character* character : members) {
        if (character->isAlive()) {
            double distance = character->distance(leader);
            if (distance < minDistance && leader!=character) {
                minDistance = distance;
                newLeader = character;
            }
        }
    }

    return newLeader;
}

Team::Team(const Team &other) {
    members = other.members;
    leader= other.leader;
    size = other.size;
}

Team &Team::operator=(const Team &other) {
    if(this == &other){
        return *this;
    }
    members = other.members;
    leader = other.leader;
    size = other.size;

    return *this;
}

Team::Team(Team &&other) noexcept{
    members = other.members;
    leader = other.leader;
    size=other.size;
}

Team &Team::operator=(Team &&other) noexcept{
    members = other.members;
    leader = other.leader;
    size = other.size;

    return *this;
}
;



