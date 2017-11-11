#include <string>
#include <iostream>
#include <map>
using namespace std;

// sort a string based on the alphabets
string sorted_string(string str) {
        string new_string = "";
        
        // There are totalling 26 alphabets in English
        int list[26];
        for (int i = 0; i < 26; ++i) {
            list[i] = 0;
        }
        
        // Store the number of each alphabet in the string
        for (int i = 0; i < str.length(); ++i) {
            ++list[str[i]-'a'];
        }
        
        // make a sort string
        for (int i = 0; i < 26; ++i) {
            for (int j = 0; j < list[i]; ++j) {
                new_string += (i+'a');
            }
        }
        return new_string;
}

int main() {
        vector<string> strs;
        while (1) {
          string temp;
          cin >> temp;
          if (!cin) break;
          strs.push_back(temp);
        }

        // more efficient than "map" because of fast access to individual elements
        unordered_map<string, int> hash;
        
        // make a pair of <string,int>, string -- sorted string, int -- the number of sorted string exist in strs
        for (int i = 0; i < strs.size(); ++i) {
            string new_string = sorted_string(strs[i]);
            if (hash.find(new_string) != hash.end()) {
                hash[new_string] += 1;
            } else {
                hash[new_string] = 1;
            }
         }
         
         vector<string> result;
         for (int i = 0; i < strs.size(); ++i) {
             string new_string = sorted_string(strs[i]);
            if (hash.find(new_string) != hash.end()) {
                if (hash[new_string] > 1) {
                    result.push_back(strs[i]);
                }
            } else {
                continue;
            }
         }
         
         cout << result << endl;

}
