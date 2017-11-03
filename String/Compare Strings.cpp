//
//  Compare Strings.cpp
//  Created by Zhiyuan Song on 2017-11-03.
//
// Compare two strings A and B, determine whether A contains all of the
//   characters in B.
// The characters in string A and B are all Upper Case letters.

#include <iostream>
using namespace std;

bool compareStrings(string &A, string &B) {
    // write your code here
    map<int, int> collection;
    int size_a = A.size();
    int size_b = B.size();
    
    if (size_b > size_a) return false;
    
    for (int i = 0; i < size_a; ++i) {
        collection[A[i]] += 1;
        if (i < size_b)
            collection[B[i]] -= 1;
    }
    
    for (map<int,int>::iterator it = collection.begin(); it != collection.end(); ++it) {
        if (it->second < 0) return false;
    }
    
    return true;
}

int main() {
    string a;
    string b;
    cin << a << b;
    
    bool result = compareStrings(a,b);
    cout << result << endl;
}
