//
// Created by eliya on 07/05/2023.
//

#ifndef SP_EX4_POINT_HPP
#define SP_EX4_POINT_HPP

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

        Point moveTowords(Point origin, Point distance, double dist);

        int getx();

        int gety();


        static Point moveTowards(Point point, Point point1, double d);
    };
};
#endif //SP_EX4_POINT_HPP
