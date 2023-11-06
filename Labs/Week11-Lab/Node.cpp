//    CS 112 Fall 2023 - Week 11 Lab
//    C++ Container Class LinkedList
//
//    David C. Tuttle
//    Last Modified: 31 Oct 2023

#include <cstdlib>
#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

// constructors

Node::Node() {
    nodeData = DEFAULT_NODEDATA;
    nextPtr = NULL;
}

Node::Node(int initVal) {
    nodeData = initVal;
    nextPtr = NULL;
}

Node::Node(int initVal, Node *initNextPtr) {
    nodeData = initVal;
    nextPtr = initNextPtr;
}

// accessors

int Node::getNodeData() const {
    return nodeData;
}

Node *Node::getNextPtr() const {
    return nextPtr;
}

// mutators

void Node::setNodeData(int newNodeData) {
    nodeData = newNodeData;
}

void Node::setNextPtr(Node *newNextPtr) {
    nextPtr = newNextPtr;
}

// other methods

void Node::display() {
    cout << "Node at address " << this << endl;
    cout << "   nodeData: " << nodeData << endl;
    cout << "   nextPtr:  ";
    if (nextPtr == NULL) {
        cout << "NULL";
    }
    else {
        cout << nextPtr;
    }
    cout << endl;
}

