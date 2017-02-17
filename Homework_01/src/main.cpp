//
//  main.cpp
//  Homework #1
//
//  Created by Mario Segura on 2/14/17.
//  Copyright © 2017 Mario's Tech. All rights reserved.
//

int main(int argc, const char * argv[]) {
    float *elements = new float;

    for (int i = 0; i < 100000; i++) {
        elements[i] = 0.0;
    }

    delete[] elements;

    return 0;
}