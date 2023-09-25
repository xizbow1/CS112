#include <cstdlib>
#include <string>
#include <iostream>
#include "GraphPoint.h"

using namespace std;

GraphPoint::GraphPoint(){
    xCoord = X_DEFAULT;
    yCoord = Y_DEFAULT;
}

GraphPoint::GraphPoint(double x, double y){
    xCoord = x;
    yCoord = y;
}

double GraphPoint::getX() const{
    return xCoord;
}

double GraphPoint::getY() const{
    return yCoord;
}

void GraphPoint::setX(double x){
    xCoord = x;
}

void GraphPoint::setY(double y){
    yCoord = y;
}

void GraphPoint::display() const{
    cout << "(" << xCoord << ", " << yCoord << ")" << endl;
}

string GraphPoint::toString() const{
    return "(" + to_string(xCoord) + ", " + to_string(yCoord) + ")";
}

bool GraphPoint::operator==(const GraphPoint& other) const{
    return (xCoord == other.xCoord) && (yCoord == other.yCoord);
}

GraphPoint& GraphPoint::operator=(const GraphPoint& other){
    xCoord = other.xCoord;
    yCoord = other.yCoord;
}