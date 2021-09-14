#include "Curve.h"

Point Curve::GetOrigin() const
{
    return myOrigin;
}

double Curve::GetRad() const
{
    return myRad;
}

void Curve::SetOrigin (const Point& thePoint)
{
    myOrigin = thePoint;
}

void Curve::SetRad (double theRad)
{
    myRad = theRad;
}

Curve::~Curve()
{
}

//bool Curve::operator>(const Curve& theCurve) const
//{
//    return GetRad() > theCurve.GetRad();
//}
//
//bool Curve::operator<(const Curve& theCurve) const
//{
//    return GetRad() < theCurve.GetRad();
//}
