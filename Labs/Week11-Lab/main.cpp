//    CS 112 Fall 2023 - Week 11 Lab
//    C++ Container Class LinkedList
//
//    David C. Tuttle
//    Last Modified: 31 Oct 2023

#include <cstdlib>
#include <iostream>
#include <string>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main() {
    cout << boolalpha;

    cout << "*** DEMONSTRATION OF CONTAINER CLASS LinkedList\n";

    // A CONTAINER CLASS is a class definition written as a
    // collection of other data types

    // Let's make a Linked List containing one value, 300

    LinkedList myList = LinkedList(300);

    // Let's print the LinkedList with only one Node
    cout << endl << "*** LIST WITH ONLY ONE NODE\n";
    myList.display();

    // Let's add node 200 and node 100 to the list, in that
    // order, so we'll have node 100 -> node 200 -> node 300

    myList.addToHead(200);
    myList.addToHead(100);

    cout << endl << "*** LIST WITH THREE NODES\n";
    myList.display();
    cout << endl;

    // ********************************************************
    // WEEK 12 LAB METHOD TESTS
    // ********************************************************

    cout << "************************************************\n";
    cout << "*** WEEK 11 LAB METHODS - TESTING\n";
    cout << "************************************************\n";
    cout << endl;

    cout << "*** listLength test #1 (should print 3): ";
    cout << myList.listLength() << endl << endl;

    cout << "*** getValueAt test #1 (should print 300): ";
    cout << myList.getValueAt(3) << endl << endl;

    cout << "*** getValueAt test #2 (should print -99999): ";
    cout << myList.getValueAt(4) << endl << endl;

    cout << "*** addNodeAfter test #1 (should print true): ";
    cout << myList.addNodeAfter(2, 250) << endl << endl;

    cout << "*** listLength test #2 (should print 4): ";
    cout << myList.listLength() << endl << endl;

    cout << "*** Printing list - should be 100, 200, 250, 300:\n";
    myList.display();
    cout << endl;

    cout << "*** addNodeAfter test #2 (should add to head, print true): ";
    cout << myList.addNodeAfter(0, 50) << endl << endl;

    cout << "*** addNodeAfter test #3 (should not succeed, print false): ";
    cout << myList.addNodeAfter(5, 456) << endl << endl;

    cout << "*** listLength test #3 (should print 5): ";
    cout << myList.listLength() << endl << endl;

    cout << "*** Printing list - should be 50, 100, 200, 250, 300:\n";
    myList.display();
    cout << endl;

    cout << "*** removeNodeAt test #1 (should print true): ";
    cout << myList.removeNodeAt(4) << endl << endl;

    cout << "*** Printing list - should be 50, 100, 200, 300:\n";
    myList.display();
    cout << endl;

    cout << "*** removeNodeAt test #2 (should not succeed, print false): ";
    cout << myList.removeNodeAt(5) << endl << endl;

    cout << "*** removeNodeAt test #3 (should print true): ";
    cout << myList.removeNodeAt(2) << endl << endl;

    cout << "*** listLength test #4 (should print 3): ";
    cout << myList.listLength() << endl << endl;

    cout << "*** Printing list - should be 50, 200, 300:\n";
    myList.display();
    cout << endl;

    cout << "*** removeNodeAt test #4 (should print true): ";
    cout << myList.removeNodeAt(1) << endl << endl;

    cout << "*** removeNodeAt test #5 (should print true): ";
    cout << myList.removeNodeAt(1) << endl << endl;

    cout << "*** Printing list - should be 300 only:\n";
    myList.display();
    cout << endl;

    cout << "*** removeNodeAt test #5 (should print true): ";
    cout << myList.removeNodeAt(1) << endl << endl;

    cout << "*** Printing list - should be empty list:\n";
    myList.display();
    cout << endl;

    // Destructor will be called automatically upon exit of main()
    // and will deallocate the dynamically allocated Nodes

    return EXIT_SUCCESS;
}
