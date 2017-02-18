//
// Created by Mario Personal on 2/16/17.
//

#include <iostream>

#include "../include/SLinkedList.cpp"

using namespace std;

int main() {
    SLinkedList<string> words;

    words.addFront("1");
    words.addFront("2");
    words.addFront("3");
    words.addFront("4");
    words.addFront("5");
    words.addFront("6");
    words.addFront("7");
    words.addFront("8");
    words.addFront("9");

    words.printEveryOther();

    return 0;
}