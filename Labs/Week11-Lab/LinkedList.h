//    CS 112 Fall 2023 - Week 11 Lab
//    C++ Container Class LinkedList
//
//    David C. Tuttle
//    Last Modified: 31 Oct 2023

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

class LinkedList {
public:

    // CONSTRUCTORS
    LinkedList();
    LinkedList(int firstValue);

    // DESCTRUCTOR
    ~LinkedList();

    // ACCESSORS
    Node* getHeadPtr() const;

    // MUTATORS
    void addToHead(int newValue);

    // OTHER METHODS
    void display();

    // METHODS TO BE WRITTEN IN LAB

    int listLength() const;
    int getValueAt(int nodePosition) const;
    bool addNodeAfter(int nodePosition, int newValue);
    bool removeNodeAt(int nodePosition);

private:

    Node *headPtr;

};  // <-- remember the semicolon!

#endif /* LINKEDLIST_H */
