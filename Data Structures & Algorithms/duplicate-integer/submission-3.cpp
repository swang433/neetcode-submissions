#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std; 
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() == 0) return false; 
        unordered_map<int, int> hmap;
        for (int i = 0; i < nums.size(); i++)
        {
            int curr = nums[i]; 
            hmap.insert({count(nums.begin(), nums.end(), curr), curr}); 
        }
        if (hmap.size() > 1) return true; //for sure has dupes  
        else return !hmap.contains(1); 
    }
};