//
// Created by eliya on 07/05/2023.
//

#ifndef SP_EX4_POINT_HPP
#define SP_EX4_POINT_HPP

#include <string>

namespace ariel {
    class Point {
    private:

        double x;
        double y;

    public:

        Point(double x, double y);

        Point();

        double distance(const Point one);

        void print(Point point);

        static Point moveTowards( Point curr,  Point other, double dist);

        int getx();

        int gety();

        std::string toString();


    };
};
#endif //SP_EX4_POINT_HPP
;