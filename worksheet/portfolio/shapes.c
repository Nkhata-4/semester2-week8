
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point p;
    p.x=x;
    p.y=y;
    // implementation
    return p;
}

Line makeLine( Point p1, Point p2 ) {
    Line l;
    l.p[0]=p1;
    l.p[1]=p2;
    return l;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 ) {
    Triangle t;
    t.p[0]=p1;
    t.p[1]=p2;
    t.p[2]=p3;
    return t;
}

float lineLength( Line l) {
    float sub_x = l.p[1].x - l.p[0].x;
    float sub_y = l.p[1].y - l.p[0].y;
    float lineLength = hypot(sub_x, sub_y);
    return lineLength;
}

float triangleArea ( Triangle t) {
    float x1 = t.p[0].x; 
    float x2 = t.p[1].x;
    float x3 = t.p[2].x;
    float y1 = t.p[0].y;
    float y2 = t.p[1].y;
    float y3 = t.p[2].y;
    
    float sub1 = y1 - y2;
    float sub2 = y2 - y3;
    float sub3 = y1 - y3;
    float area = fabs(x1 * sub2 + x2 * sub3 + x3 * sub1) / 2;
    return area;
}

bool samePoint( Point p1, Point p2 ) {
    if (fabs(p1.x - p2.x) < 1.0e-6 && fabs(p1.y - p2.y) < 1.0e-6) {
        return true;
    } else {
        return false;
    }
}

bool pointInLine( Point p, Line l) {
    if (samePoint(p, l.p[0]) || samePoint(p, l.p[1])) {
        return true;
    } else {
        return false;
    }
}

bool pointInTriangle( Point p, Triangle t) {
    if (samePoint(p, t.p[0]) || samePoint (p, t.p[1]) || samePoint(p, t.p[2])) {
        return true;
    } else {
        return false;
    }
}
// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
