// Given two strings, find the longest common substring.
// Return the length of it.

int longestCommonSubstring(string &A, string &B) {
        int len_a = A.size();
        int len_b = B.size();
        
        // create a matrix of size (len_a + 1) * (len_b + 1) to track the result of each pair of elements
        int chars[len_a+1][len_b+1];
        for (int i = 0; i < len_a+1; ++i) {
            for (int j = 0; j < len_b+1; ++j) {
                chars[i][j] = 0;
            }
        }
        
        
        for (int i = 0; i < len_a; ++i) {
            for (int j = 0; j < len_b; ++j) {
                if (A[i] == B[j]) {
                    chars[i+1][j+1] = 1 + chars[i][j];
                }
            }
        }
        
        // the maximum common substring is the maximum num in the matrix
        int result = 0;
        for (int i = 0; i < len_a; ++i) {
            for (int j = 0; j < len_b; ++j) {
                if (chars[i+1][j+1] > result) 
                    result = chars[i+1][j+1];
            }
        }
        
        return result;
        
}

int main() {
  string A;
  string B;
  cin >> A >> B;
  
  int result = longestCommonSubstring(A,B);
  cout << "The longest common substring with length " << result << endl;
  
}
