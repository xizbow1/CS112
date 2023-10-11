#include <cstdlib>
#include <string>
#include <iomanip>
#include <iostream>
#include <cmath>
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

void GraphPoint::setCoords(double x, double y){
    setX(x);
    setY(y);
}

void GraphPoint::flipCoords(){
    swap(xCoord, yCoord);
}

void GraphPoint::display() const{
    cout << "(" << xCoord << ", " << yCoord << ")" << endl;
}

void GraphPoint::resetToOrigin(){
    xCoord = X_DEFAULT;
    yCoord = Y_DEFAULT;
}

string GraphPoint::to_String() const{
    return "(" + std::to_string(xCoord) + ", " + std::to_string(yCoord) + ")";
}

bool GraphPoint::operator==(const GraphPoint& other) const{
    return ((abs(xCoord - other.xCoord) < 0.001) && (abs(yCoord - other.yCoord) < 0.001));
}

GraphPoint& GraphPoint::operator=(const GraphPoint& other){
    xCoord = other.xCoord;
    yCoord = other.yCoord;
    return *this;
}

GraphPoint GraphPoint::operator+(const GraphPoint& other){
    return GraphPoint(xCoord + other.xCoord, yCoord + other.yCoord);
}

double GraphPoint::distance(GraphPoint other){
    return sqrt(pow(xCoord - other.xCoord, 2) + pow(yCoord - other.yCoord, 2));
}