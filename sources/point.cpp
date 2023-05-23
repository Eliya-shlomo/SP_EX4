//
// Created by eliya on 07/05/2023.
//

#include "math.h"
#include "point.hpp"
#include <stdexcept>
using namespace ariel;
using namespace std;

Point::Point(){

}
int Point:: getx(){
    return this->x;
}
int Point:: gety(){
    return this->y;
}
Point::Point(double x, double y){
    this->x=x;
    this->y=y;
}


void Point:: print(Point other){
    this->x=other.x;
    this->y=other.y;
}



Point Point::moveTowards( Point curr,  Point other, double dist) {

    if (dist < 0) {
        throw std::invalid_argument("Distance cannot be negative!");
    }
    double d = curr.distance(other);

    if (d <= dist) {
        return other;
    }
    return Point((curr.x + (dist * (other.x - curr.x) / d)), (curr.y + (dist * (other.y - curr.y) / d)));
}
std::string Point::toString() {
    return "("+ std::to_string(getx())+","+ std::to_string(gety())+")";
}
double Point:: distance(const Point other){
    return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
}