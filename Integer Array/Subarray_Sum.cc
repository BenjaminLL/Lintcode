// Given an integer array, find a subarray where the sum of numbers is zero. 
// Your code should return the index of the first number and the index of the last number.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> subarraySum(vector<int> &nums) {
        // write your code here
        
        unordered_map<int,int> hash;
        hash[0] = -1;
        int sum = 0;
        
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            
            sum += nums[i];
            unordered_map<int,int>::iterator it = hash.find(sum);
            
            if (it != hash.end()) {
                vector<int> result;
                result.push_back(it->second + 1);
                result.push_back(i);
                return result;
            }
        
            hash[sum] = i;    
        }
        
        vector<int> result;
        return result;
        
        
}
