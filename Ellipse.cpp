#include "Ellipse.h"

Ellipse::Ellipse() 
{
    Ellipse (Point(.0, .0, .0), 1.0, 1.0);
}

Ellipse::Ellipse (Point thePoint, double theMajRad, double theMinRad) 
{
    assert ((theMajRad > theMinRad) && (theMajRad > 0) && (theMinRad > 0));
    SetOrigin (thePoint);
    SetMajRad (theMajRad);
    SetMinRad (theMinRad);
}

double Ellipse::GetMajRad() const
{
    return GetRad();
}

double Ellipse::GetMinRad () const
{
    return myMinRad;
}

Point Ellipse::GetPoint (double theParameter) const
{
    double aX = GetOrigin().GetX() + GetMajRad() * cos (theParameter);
    double aY = GetOrigin().GetY() + GetMinRad() * sin (theParameter);
    double aZ = GetOrigin().GetZ();
    return Point (aX, aY, aZ);
}

Vector Ellipse::GetDerivative (double theParameter) const
{
    double aX = -GetMajRad() * sin(theParameter);
    double aY =  GetMinRad() * cos(theParameter);
    double aZ = 0.0;
    return Vector (aX, aY, aZ);
}

void Ellipse::SetMajRad (double theMajRad)
{
    SetRad (theMajRad);
}

void Ellipse::SetMinRad (double theMinRad)
{
    myMinRad = theMinRad;
}
