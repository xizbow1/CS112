// CS 112 Fall 2023 Week06-1 Lecture
// Blake Culbertson

#ifndef GRAPHPOINT_H
#define GRAPHPOINT_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>


using namespace std;

// Named constants

const double X_DEFAULT = 0.0;
const double Y_DEFAULT = 0.0;

class GraphPoint {
    public:

        // CONSTRUCTORS

        // zero-argument constructor
        // STYLE RULE: Always include a zero-argument constructor
        GraphPoint();
        GraphPoint(double x, double y);

        // ACCESSORS
        double getX() const;
        double getY() const;
        string getName() const;

        // MUTATORS
        void setX(double);
        void setY(double);
        void setName(string);
        void setCoords(double, double);
        void flipCoords();
        void resetToOrigin();

        

        // OPERATOR METHODS
        bool operator ==(const GraphPoint& other) const;
        GraphPoint& operator =(const GraphPoint& other);
        GraphPoint operator+(const GraphPoint &other);
        ~GraphPoint();

        // OTHER METHODS
        void display() const;


        // STYLE RULE - toString() method
        string to_String() const;

        double distance(GraphPoint);

    private:

        double xCoord;
        double yCoord;
        
};

#endif 