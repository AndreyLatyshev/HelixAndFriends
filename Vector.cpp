#include "Vector.h"

Vector::Vector()
{
    Vector (1., 0., 0.);
}

Vector::Vector (double theX, double theY, double theZ)
{
    Point aStart = Point (0., 0., 0.);
    Point anEnd = Point (theX, theY, theZ);
    SetStartPoint (aStart);
    SetEndPoint (anEnd);
}

Vector::Vector (const Point& theEnd)
{
    Point aStart = Point (0., 0., 0.);
    SetStartPoint (aStart);
    SetEndPoint (theEnd);
}

Vector::Vector (const Point& theStart, const Point& theEnd)
{
    SetStartPoint(theStart);
    SetEndPoint(theEnd);
}

double Vector::GetMagnitude() const
{
    return sqrt (GetSquaredMagnitude());
}

double Vector::GetXProjection() const
{
    return GetEndPoint().GetX() - GetStartPoint().GetX();
}

double Vector::GetYProjection() const
{
    return GetEndPoint().GetY() - GetStartPoint().GetY();
}

double Vector::GetZProjection() const
{
    return GetEndPoint().GetZ() - GetStartPoint().GetZ();
}

double Vector::GetSquaredMagnitude() const
{
    double dX = GetXProjection();
    double dY = GetYProjection();
    double dZ = GetZProjection();
    return dX * dX + dY * dY + dZ * dZ;
}

void Vector::PrintVector() const
{
    std::cout << "Vector dimensions: " << "(" << GetXProjection() << ", "
        << GetYProjection() << ", " << GetZProjection() << ")" << std::endl;
}

Point Vector::GetStartPoint() const
{
    return myStart;
}

Point Vector::GetEndPoint() const
{
    return myEnd;
}

void Vector::SetStartPoint (const Point& theStart)
{
    myStart = theStart;
}

void Vector::SetEndPoint (const Point& theEnd)
{
    myEnd = theEnd;
}
