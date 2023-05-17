//
// Created by eliya on 07/05/2023.
//

#include "point.hpp"
using namespace ariel;

Point::Point(){

}
Point::Point(double x, double y){
    this->x=x;
    this->y=y;
}
double Point:: distance(const Point one){
    return 1;
}

void Point:: print(Point point){
    return;
}

Point Point:: moveTowords(Point origin, Point distance, double dist){
    return Point(0,0);
}
int Point:: getx(){
    return this->x;
}
int Point:: gety(){
    return this->y;
}

Point Point::moveTowards(Point point, Point point1, double d) {
    return Point();
}
