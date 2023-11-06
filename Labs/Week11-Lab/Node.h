//    CS 112 Fall 2023 - Week 11 Lab
//    C++ Container Class LinkedList
//
//    David C. Tuttle
//    Last Modified: 31 Oct 2023

#ifndef NODE_H
#define NODE_H

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

// Constant definitions
const int DEFAULT_NODEDATA = 0;

class Node {
    public:
        // constructors

        Node();
        Node(int nodeData);
        Node(int nodeData, Node *nextPtr);

        // accessors

        int getNodeData() const;
        Node *getNextPtr() const;

        // mutators

        void setNodeData(int newNodeData);
        void setNextPtr(Node *newNextPtr);

        // other methods

        void display();

    private:
        int nodeData;
        Node *nextPtr;

};  // <-- remember the semicolon!

#endif /* NODE_H */
