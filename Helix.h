#ifndef HELIX_H
#define HELIX_H

#include "Point.h"
#include "Curve.h"

class Helix : public Curve
{
public:
    Helix();
    Helix (Point thePoint, double theRad, double theStep);
    double GetStep() const;
    void SetStep (double theStep);
    Point GetPoint (double theParameter) const;
    Vector GetDerivative (double theParameter) const;
private:
    double myStep;
};
#endif  //!HELIX_H
