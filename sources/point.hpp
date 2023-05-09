//
// Created by eliya on 07/05/2023.
//

#ifndef SP_EX4_POINT_HPP
#define SP_EX4_POINT_HPP


class Point {
private:

    double x;
    double y;

public:

    Point(double x, double y);

    Point();

    double distance(Point one);

    void print(Point point);

    Point moveTowords(Point origin, Point distance, double dist);


};

#endif //SP_EX4_POINT_HPP
