#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include "Curve.h"

class Circle : public Curve
{
public:
    Circle();
    Circle (Point thePoint, double theRad);
    Point GetPoint (double theParameter) const;
    Vector GetDerivative (double theParameter) const;
};
#endif // !CIRCLE_H
