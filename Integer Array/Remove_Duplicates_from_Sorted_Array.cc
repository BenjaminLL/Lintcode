// Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums) {
        // write your code here
        
        if (nums.size() == 0) return 0;
        
        int prev = nums[0];
        
        for (vector<int>::iterator it = nums.begin() + 1; it != nums.end(); ++it) {
            int c = *it;
            if (prev == c) {
                nums.erase(it);
                --it;
            }
            prev = c;
        }
        
        int new_size = nums.size();
        
        return new_size;
}
