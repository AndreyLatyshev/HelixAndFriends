#include "Point.h"

Point::Point ()
{
    Point (0.0, 0.0, 0.0);
}

Point::Point (double theX, double theY, double theZ)
{
    SetX (theX);
    SetY (theY);
    SetZ (theZ);
}

double Point::GetX () const
{
    return myX;
}

double Point::GetY () const
{
    return myY;
}

double Point::GetZ () const
{
    return myZ;
}

void Point::SetX (double theX)
{
    myX = theX;
}

void Point::SetY (double theY)
{
    myY = theY;
}

void Point::SetZ (double theZ)
{
    myZ = theZ;
}

/*Point::~Point ()
{
}*/
