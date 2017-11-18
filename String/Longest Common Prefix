// Given k strings, find the longest common prefix (LCP).

string longestCommonPrefix(vector<string> &strs) {
        // write your code here
        
        int size = strs.size();
        if (size == 0) {
            return "";
        }
        
        int length_first_string = strs[0].size();
        string result = "";
        bool error = false;
        
        for (int i = 0; i < length_first_string; ++i) {
            char c = strs[0][i];
            
            for (int j = 1; j < size; ++j) {
                if (i >= strs[j].size()) {
                    error = true;
                    break;
                }
                if (c != strs[j][i]) {
                    error = true;
                }
            }
            
            if (error) {
                break;
            } else {
                result = result + c;
            }
        }
        
        return result;
}

int main() {
  string temp;
  vector<string> strs;
  
  // read in all strings and make it as a vector of strings
  while(1) {
    cin >> temp;
    if (!cin) break;
    
    strs.push_back(temp);
  }
  
  int longest_common_prefix = longestCommonPrefix(strs);
  
  cout << "The longest common prefix is " << longest_common_prefix << end;
  
}
