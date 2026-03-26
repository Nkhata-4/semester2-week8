
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    new.x=x;
    new.y=y;
    // implementation
    return new;
}

Line makeLine( Point p1, Point p2 ) {
    Line newLine;
    newLine.l[0]=p1;
    newLine.l[1]=p2;
    return newLine;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 ) {
    Triangle newTriangle;
    newTriangle.t[0]=p1;
    newTriangle.t[1]=p2;
    newTriangle.t[2]=p3;
    return newTriangle;
}

float lineLength( Line l) {
    float sub_x = l.p[1].x - l.p[0].x;
    float sub_y = l.p[1].y - l.p[0].y;
    float lineLength = hypot(sub_x, sub_y);
    return lineLength;
}

float triangleArea ( Triangle t) {
    float dist_1 = lineLength(t.p[0], t.p[1]);
    float dist_2 = lineLength(t.p[1], t.p[2]);
    float dist_3 = lineLength(t.p[0], t.p[2]);
    float semi_p = 0.5 * (dist_1 + dist_2 + dist_3)
    float prod = (semi_p-dist_1)(semi_p-dist_2)(semi_p-dist_3); 
    float area = sqrt(semi_p * prod);
    return area;
}

bool samePoint( Point p1, Point p2 ) {
    return fabs(p1.x - p2.x) < 1.0e-6 && fabs(p1.y - p2.y) < 1.0e-6;
}

bool pointInLine( Point p, Line l) {
    return samePoint(p, l.p[0]) || samePoint(p, l.p[1]);
}

bool pointInTriangle( Point p, Triangle t) {
    return samePoint(p, t.p[0]) || samePoint (p, t.p[1]) || samePoint(p, t.p[2]);
}
// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
