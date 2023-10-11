#include <cstdlib>
#include <string>
#include <cassert>
#include <iostream>
#include <iomanip>
#include <cmath>
#include "GraphPoint.h"

using namespace std;

int main(){
    cout << boolalpha;
    cout << fixed << setprecision(2);
    GraphPoint newPoint(3, 4);
    assert(newPoint.getX() == 3);
    assert(newPoint.getY() == 4);
    newPoint.setX(5);
    newPoint.setY(6);
    assert(newPoint.getX() == 5);
    assert(newPoint.getY() == 6);
    newPoint.setCoords(7, 8);
    assert(newPoint.getX() == 7);
    assert(newPoint.getY() == 8);
    newPoint.flipCoords();
    assert(newPoint.getX() == 8);
    assert(newPoint.getY() == 7);
    newPoint.resetToOrigin();
    assert(newPoint.getX() == 0);
    assert(newPoint.getY() == 0);
    assert(newPoint.to_String() == "(0.000000, 0.000000)");
    GraphPoint newPoint2(0, 0);
    assert(newPoint == newPoint2);
    assert(!(newPoint == GraphPoint(1, 1)));
    assert(newPoint + GraphPoint(1, 1) == GraphPoint(1, 1));
    newPoint = GraphPoint(4, 3);
    assert(newPoint.distance(GraphPoint(0, 0)) == 5);
    newPoint = GraphPoint(1, 2);
    newPoint2.setX(3);
    newPoint2.setY(4);
    assert(newPoint.getX() == 1);
    assert(newPoint.getY() == 2);
    GraphPoint thirdPoint = newPoint + newPoint2;
    assert(thirdPoint.getX() == 4);
    assert(thirdPoint.getY() == 6);
    GraphPoint *fredPointPtr;
    GraphPoint *barneyPointPtr;
    fredPointPtr = new GraphPoint(1, 2);
    barneyPointPtr = &newPoint;
    assert(fredPointPtr->getX() == 1);
    assert(fredPointPtr->getY() == 2);
    assert(barneyPointPtr->getX() == 1.00);
    assert(barneyPointPtr->getY() == 2.00);
    
    cout << "All tests passed!" << endl;
    return EXIT_SUCCESS;
}


