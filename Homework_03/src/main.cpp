//
//  main.cpp
//  Homework #3
//
//  Created by Mario Personal on 2/14/17.
//  Copyright © 2017 Mario's Tech. All rights reserved.
//

#include <iostream>
#include "SLinkedLists.cpp"

using namespace std;

class IntVectArray {
public:
    IntVectArray(int vsize = 10);
    IntVectArray(int elemlist[], int arraySize);
    IntVectArray(const IntVectArray& intvect);
    IntVectArray& operator = (const IntVectArray& intvect);
    ~IntVectArray();
    void printElements();
private:
    int *vector;
    int vectorSize;
};

IntVectArray::IntVectArray(int vsize) {
    // Default constructor
    vector = new int[vsize];
    vectorSize = vsize;
}

IntVectArray::IntVectArray(int elemlist[], int arraysize) {
    vector = new int[arraysize];

    for (int i = 0; i < arraysize; i++) {
        vector[i] = elemlist[i];
    }

    vectorSize = arraysize;
}

IntVectArray& IntVectArray::operator=(const IntVectArray &intvect) {
    if (this == &intvect) return *this;
    delete[] this->vector;

    vector = new int[intvect.vectorSize];
    vectorSize = intvect.vectorSize;

    memcpy(vector, intvect.vector, sizeof(int) * vectorSize);

    return *this;
}

IntVectArray::IntVectArray(const IntVectArray& intvect) {
    vectorSize = intvect.vectorSize;
    vector = new int [vectorSize];
    memcpy(vector, intvect.vector, sizeof(int) * vectorSize);
}

IntVectArray::~IntVectArray() {
    delete[] vector;
}

void IntVectArray::printElements() {
    for (int i = 0; i < vectorSize; i++) {
        cout << vector[i] << endl;
    }
}

// Run this for Part 1
/*
int main(int argc, const char * argv[]) {
    // implementation of an integer vector using array

    // try vector a
    int IntArraya[10] = { 2, 7, 3, 6, 11, 43, 72, 119, 339, 711 };
    IntVectArray aVect(IntArraya, 10);
    cout << "Printing all elements in aVect:" << endl;
    aVect.printElements();

    // try vector b
    int IntArrayb[10] = { 1, 21, 57, 63, 13, 71, 92, 179, 923, 421 };
    IntVectArray bVect(IntArrayb, 10);
    cout << "Printing all elements in bVect:" << endl;
    bVect.printElements();

    // try the assigment constructor
    bVect = aVect;
    cout << "Assigned bVect = aVect. Printing all elements in bVect after assignment operation:" << endl;
    bVect.printElements();

    // try the copy constructor
    IntVectArray cVect = aVect;
    cout << "cVect was created to be a copy of aVect. Printing all elements in cVect:" << endl;
    cVect.printElements();

    return 0;
}
*/

int main(int argc, const char * argv[]) {

    // Creating initial Array

    int arraySize = 10;
    int array[arraySize];
    for (int i = 0; i < arraySize; i++) {
        array[i] = i;
    }

    SLinkedList<int> linkedList(array, arraySize);

    linkedList.printElements();

    return 0;
}