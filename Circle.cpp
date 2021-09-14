#include "Circle.h"

Circle::Circle() 
{
    Circle (Point(.0, .0, .0), 1.0);
}

Circle::Circle (Point thePoint, double theRadius) 
{
    assert (theRadius > 0);
    SetOrigin (thePoint);
    SetRad (theRadius);
}

Point Circle::GetPoint (double theParameter) const 
{
    double aX = GetOrigin().GetX() + GetRad() * cos (theParameter);
    double aY = GetOrigin().GetY() + GetRad() * sin (theParameter);
    double aZ = GetOrigin().GetZ();
    return Point (aX, aY, aZ);
}

Vector Circle::GetDerivative (double theParameter) const
{
    double aX = -GetRad() * sin(theParameter);
    double aY =  GetRad() * cos(theParameter);
    double aZ = 0.0;
    return Vector (aX, aY, aZ);
}

