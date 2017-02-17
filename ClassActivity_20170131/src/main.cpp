//
//  main.cpp
//  Class Activity 20170131
//
//  Created by Mario Personal on 1/31/17.
//  Copyright © 2017 Mario's Tech. All rights reserved.
//

#include <string>
#include <iostream>

using namespace std;

string func(const string &s) {
    string s2 = "Hello " + s;
    return s2;
}

int main() {
    string name;
    cout << "Enter name: ";
    cin >> name;
    string greeting = func(name);
    cout << greeting << endl;
    cout << "Bye " << name << endl;
    return 0;
}