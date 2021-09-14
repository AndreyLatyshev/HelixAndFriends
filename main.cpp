#include <math.h>
#define _USE_MATH_DEFINES
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>
#include <vector>
#include "Circle.h"
#include "Ellipse.h"
#include "Helix.h"

int rndV(int seed) 
{
    return 1 + rand() % seed;
}

Point SetRandomPoint()
{
    return Point (rndV (10), rndV (10), rndV (10));
}

int main() {
    srand ((unsigned) time (0));

    std::vector<Curve*> aVector;

    Point aP = SetRandomPoint();
    Circle aCirc(aP, 1 + (rand() % 10));
    aVector.push_back (&aCirc); 

    int R = rndV (10);
    aP = SetRandomPoint();
    Ellipse anEl(aP, R + rndV(10), R);
    aVector.push_back (&anEl);

    aP = SetRandomPoint();
    Helix aHel (aP, rndV (10), rndV (3));
    aVector.push_back (&aHel);

    Point aPointA = Point (1, 1, 1);
    Point aPointB = Point (-1, 1, -1);
    Point aPointC = Point (0, 4, 9);

    Circle aCircle = Circle (aPointA, 12);
    aVector.push_back (&aCircle);
    
    Circle aCircle2 = Circle (aPointB, 7);
    aVector.push_back (&aCircle2);

    Helix aHelix = Helix (aPointB, 2, 1);
    aVector.push_back (&aHelix);

    Ellipse anEllipse = Ellipse (aPointC, 2, 1);
    aVector.push_back (&anEllipse);
    
    std::vector<Curve*> anEulerVec;

    double aParam = M_PI / 4.;

    for (auto i = aVector.begin(); i != aVector.end(); ++i)
    {
        Point aCurvePoint = (*i)->GetPoint (aParam);
        Vector aCurveDerivative = (*i)->GetDerivative (aParam);
        std::cout << "Point is: "<< aCurvePoint.GetX() << ", " << aCurvePoint.GetY() << ", " << aCurvePoint.GetZ() << std::endl;
        aCurveDerivative.PrintVector();
        auto aCastResult = dynamic_cast<Circle*> (*i);
        if (aCastResult) {
            anEulerVec.push_back (aCastResult);
            std::cout << "Circle succesfully added!" << std::endl;
        }    
    }
    std::sort (anEulerVec.begin (), anEulerVec.end (), 
    [] (const Curve* aC1, const Curve* aC2)
    { 
        return aC1->GetRad() < aC2->GetRad();
    });


    double aSum = 0.0;
    for (auto k = anEulerVec.begin(); k != anEulerVec.end(); ++k )
    {
        double aRad = (*k)->GetRad();
        std::cout << aRad << std::endl;
        aSum += aRad;
    }
    double var;
    std::cin >> var;
    int a = rndV(5);
    return 0;
}
