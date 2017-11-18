//
//  Remove_Elements.cpp
//
//  Created by Zhiyuan Song on 2017-11-18.
//
// Given an array and a value, remove all occurrences of that value in place
//  and return the new length.
// The order of elements can be changed, and the elements after the new length
//  don't matter.

#include <iostream>
#include <vector>
using namespace std;


int removeElement(vector<int> &A, int elem) {
    // write your code here
    
    for (vector<int>::iterator it = A.begin(); it != A.end(); ++it) {
        if (*it == elem) {
            A.erase(it);
            --it;
        }
    }
    
    int new_length = A.size();
    return new_length;
}



