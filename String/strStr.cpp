//
//  strStr.cpp
//
//  Created by Benjamin Song on 2017-11-04.
//
// For a given source string and a target string, you should output the first
//    index(from 0) of target string in source string. If target does not exist in
//    source, just return -1.
//
// KMP Applied

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> get_next(string target) {
    int length = target.length();
    vector<int> next;
    next.push_back(-1);
    int k = -1;
    int j = 0;
    
    while (j < length - 1) {
        if (k == -1 || target[k] == target[j]) {
            ++k;
            ++j;
            if (target[k] != target[j]) {
                next[j] = k;
            } else {
                next[j] = next[k];
            }
        } else {
            k = next[k];
        }
        
    }
    
    return next;
    
}

int main(int argc, const char * argv[]) {
    
    string s;
    string t;
    cin >> s >> t;
    
    int len_s = s.length();
    int len_t = t.length();
    vector<int> next = get_next(t);
    
    int i = 0;
    int j = 0;
    while(i < len_s && j < len_t) {
        
        if (j == -1 || s[i] == t[j]) {
            ++i;
            ++j;
        } else {
            j = next[j];
        }
    }
    
    if (j == len_t) {
        cout << i - j << endl;
    } else {
        cout << -1 << endl;
    }
}
