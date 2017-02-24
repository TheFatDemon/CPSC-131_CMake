//
// Created by Mario Personal on 2/16/17.
//

#include <iostream>

#include "../include/SLinkedList.cpp"

using namespace std;

int main() {
    SLinkedList<string> words;
    words.addFront("we");
    words.addFront("are");
    words.removeFront();
    words.addFront("the");
    words.addFront("people");

    words.printEveryOther();

    return 0;
}