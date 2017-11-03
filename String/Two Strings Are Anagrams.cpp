//
//  Two Strings Are Anagrams.cpp
//  
//
//  Created by Zhiyuan Song on 2017-11-03.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

bool anagram(string s, string t) {
        // write your code here
        int len1 = s.length();
        int len2 = t.length();
        bool result = true;
        map<char,int> collection;
        
        if (len1 != len2) {
            result = false;
        } else {
            for (int i = 0; i < len1; ++i) {
                collection[s[i]] += 1;
            }
            for (int i = 0 ; i < len2; ++i) {
                if (collection.find(t[i]) == collection.end()) {
                    result = false;
                    return result;
                } else {
                    collection[t[i]] -= 1;
                }
            }

            for (map<char,int>::iterator it = collection.begin(); it != collection.end();++it) {
                if (it->second != 0)  {
                    result = false;
                    break;
                }
            }
        }
        
        return result;
}

int main() {
  string s;
  string t;
  cin >> s >> t;
  
  bool result = anagram(s,t);
  cout << bool << endl;
  
}

