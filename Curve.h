#ifndef CURVE_H
#define CURVE_H

#include <cassert>
#include "Point.h"
#include "Vector.h"

class Curve 
{
public:
    Point GetOrigin() const;
    double GetRad() const;
    void SetOrigin (const Point& thePoint);
    void SetRad (double theRad);
    /*bool operator>(const Curve & theCurve) const;
    bool operator<(const Curve & theCurve) const;*/

    virtual Point GetPoint (double theParameter) const = 0;
    virtual Vector GetDerivative (double theParameter) const = 0;

    virtual ~Curve();

private:
    double myRad;
    Point myOrigin;
};

#endif // !CURVE_H
