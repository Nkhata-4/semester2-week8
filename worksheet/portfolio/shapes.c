
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
    newLine.p1=(x, y);
    newLine.p2=(x, y);
    return newLine;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 ) {
    Triangle newTriangle;
    newTriangle.p=p1;
    newTriangle.p=p2;
    newTriangle.p=p3;
    return newTriangle;
}

float lineLength( Line l) {
    point1=l.p1;
    point2=l.p2;
    
    int exp = 2; 
    float sub_x = point2.x - point1.x;
    float sub_y = point2.y - point1.y;
    float lineLength = hypot(sub_x, sub_y);
    return lineLength;
}

float triangleArea ( Triangle t) {
    Point p1=t.p1;
    Point p2=t.p2;
    Point p3=t.p3;
    float dist_1 = lineLength(p1, p2);
    float dist_2 = lineLength(p2, p3);
    float dist_3 = lineLength(p1, p3);
    float semi_p = 0.5 * (dist_1 + dist_2 + dist_3)
    float prod = (s-dist_1)(semi_p-dist_2)(semi_p-dist_3); 
    float area = sqrt(semi_p * prod);
    return area;
}

bool samePoint( Point p1, Point p2 ) {
    if (abs(lineLength(p1,p2))<1.0e-6) {
        return true;
    } else {
        return false;
    }
}

bool pointInLine( Point p, Line l) {
    p1=l.p1;
    p2=l.p2;
    if(abs(lineLength(p1,p))<1.0e-6) {
        return true;
    } else if (abs(lineLength(p,p2))<1.0e-6) {
        return true;
    } else {
        return false;
    }
}

bool pointInTriangle( Point p, Triangle t) {
    p1=t.p1;
    p2=t.p2;
    p3=t.p3;
    if(abs(lineLength(p1,p))<1.0e-6) {
        return true;
    } else if (abs(lineLength(p,p2))<1.0e-6) {
        return true;
    } else if (abs(lineLength(p,p3))<1.0e-6) {
        return true;
    } else {
        return false;
    }
}
// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
