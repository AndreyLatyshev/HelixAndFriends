#include "Helix.h"

Helix::Helix()
{
    Helix (Point (.0, .0, .0), 1.0, 1.0);
}

Helix::Helix (Point thePoint, double theRad, double theStep)
{
    assert (theRad > 0);
    SetOrigin (thePoint);
    SetRad (theRad);
    SetStep (theStep);
}

double Helix::GetStep() const
{
    return myStep;
}

void Helix::SetStep (double theStep)
{
    myStep = theStep;
}

Point Helix::GetPoint (double theParameter) const
{
    double aX = GetOrigin().GetX() + GetRad() * cos (theParameter);
    double aY = GetOrigin().GetY() + GetRad() * sin (theParameter);
    double aZ = GetOrigin().GetZ() + GetStep() *  theParameter;
    return Point (aX, aY, aZ);
}

Vector Helix::GetDerivative (double theParameter) const
{
    double aX = -GetRad() * sin (theParameter);
    double aY = GetRad() * cos (theParameter);
    double aZ = GetStep();
    return Vector (aX, aY, aZ);
}

