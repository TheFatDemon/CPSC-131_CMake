//
// Created by Mario Personal on 3/2/17.
//

#include <iostream>
#include <string>
#include "../include/DLinkedList.h"

using namespace std;

int main()
{
    DLinkedList<string> lyrics;
    lyrics.addFront("Give");
    lyrics.addFront("To");
    lyrics.addFront("Going");
    lyrics.addFront("Never");
    cout << lyrics.front() << endl;
}