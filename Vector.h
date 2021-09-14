#ifndef VECTOR_H 
#define VECTOR_H

#include "Point.h"
#include <iostream>

class Vector 
{
public:
    Vector();
    Vector (double theX, double theY, double theZ);
    Vector (const Point& theEnd);
    Vector (const Point& theStart, const Point& theEnd);
    double GetMagnitude() const;
    double GetXProjection() const;
    double GetYProjection() const;
    double GetZProjection() const;
    double GetSquaredMagnitude() const;
    void PrintVector() const;

    Point GetStartPoint() const;
    Point GetEndPoint() const;

    void SetStartPoint (const Point& theStart);
    void SetEndPoint (const Point& theEnd);

private:
    Point myStart;
    Point myEnd;
};
#endif //!VECTOR_H
