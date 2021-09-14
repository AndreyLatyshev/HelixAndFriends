#ifndef ELLIPSE_H 
#define ELLIPSE_H

#include "Point.h"
#include "Curve.h"

class Ellipse : public Curve
{
public:
    Ellipse();
    Ellipse (Point thePoint, double theMajRad, double theMinRad);
    double GetMajRad() const;
    double GetMinRad() const;

    Point GetPoint (double theParameter) const;
    Vector GetDerivative (double theParameter) const;

    void SetMajRad(double theMajRad);
    void SetMinRad(double theMinRad);

private:
    double myMajRad;
    double myMinRad;
};
#endif //!ELLIPSE_H
