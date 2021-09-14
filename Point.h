#ifndef POINT_H 
#define POINT_H

#include <cmath>

class Point {
public:
    Point();
    Point (double theX, double theY, double theZ);
    double GetX() const;
    double GetY() const;
    double GetZ() const;
    //double GetMagnitude ();

    void SetX (double theX);
    void SetY (double theY);
    void SetZ (double theZ);

    //~Point();

private:
    double myX, myY, myZ;
};
#endif // !POINT_H
