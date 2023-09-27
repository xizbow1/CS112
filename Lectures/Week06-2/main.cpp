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
    // Write tests with assert() to test the following:
    // 1. getX() and getY() return the correct values
    // 2. setX() and setY() set the correct values
    // 3. setCoords() sets the correct values
    // 4. flipCoords() swaps the x and y coordinates
    // 5. resetToOrigin() sets the x and y coordinates to 0.0
    // 6. to_String() returns the correct string
    // 7. operator==() returns true when the x and y coordinates are the same
    // 8. operator==() returns false when the x and y coordinates are different
    // 9. operator+() returns a new GraphPoint with the correct x and y coordinates
    // 10. distance() returns the correct distance between two points
    // 11. operator=() sets the x and y coordinates to the correct values
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
    
    cout << "All tests passed!" << endl;
    return EXIT_SUCCESS;
}


