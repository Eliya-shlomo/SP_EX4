

#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
using namespace std;

#include "sources/Team.hpp" //no need for other includes

using namespace ariel;

TEST_CASE("Test case 1: Point class")
{
    Point p1(1, 2), p2(3, 4), p3(5, 6);

    CHECK(p1.getx() == 1);
    CHECK(p1.gety() == 2);

    CHECK(p2.getx() == 3);
    CHECK(p2.gety() == 4);

    CHECK(p3.getx() == 5);
    CHECK(p3.gety() == 6);

    CHECK_EQ(p1.distance(p2), p2.distance(p1));
    CHECK_EQ(p1.distance(p2), 2.8284271247461903);
    CHECK_EQ(p1.distance(p3), 5.656854249492381);
    CHECK_EQ(p2.distance(p3), 2.8284271247461903);

    CHECK_NOTHROW(Point::moveTowards(p1, p2, 1));
}



TEST_CASE("Test OldNinja class") {
    Point p1(0, 0);
    OldNinja oldNinja("OldNinja1", p1);

    CHECK_EQ(oldNinja.getName(), "OldNinja1");
    CHECK_EQ(oldNinja.getLocation().getx(), 0);
    CHECK_EQ(oldNinja.getLocation().gety(), 0);
    CHECK_EQ(oldNinja.isAlive(), true);
}

TEST_CASE("Test TrainedNinja class") {
    Point p1(0, 0);
    TrainedNinja trainedNinja("TrainedNinja1", p1);

    CHECK_EQ(trainedNinja.getName(), "TrainedNinja1");
    CHECK_EQ(trainedNinja.getLocation().getx(), 0);
    CHECK_EQ(trainedNinja.getLocation().gety(), 0);
    CHECK_EQ(trainedNinja.isAlive(), true);
}

TEST_CASE("Test YoungNinja class") {
    Point p1(0, 0);
    YoungNinja youngNinja("YoungNinja1", p1);

    CHECK_EQ(youngNinja.getName(), "YoungNinja1");
    CHECK_EQ(youngNinja.getLocation().getx(), 0);
    CHECK_EQ(youngNinja.getLocation().gety(), 0);
    CHECK_EQ(youngNinja.isAlive(), true);
}