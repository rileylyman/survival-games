#ifndef _POINT_H_
#define _POINT_H_

struct Point {
    double x_pos;
    double y_pos;

    Point(double x, double y) : 
        x_pos{x},
        y_pos{y} 
    {}
};

#endif