#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std; 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash; 
        vector<int> result; 
        for (int i = 0; i < nums.size(); i++)
        {
            int curr = nums[i]; 
            int comp = target - curr; 
            if (hash.contains(comp))
            {
                result.push_back(hash[comp]); 
                result.push_back(i);
                // sort(result.begin(), result.end());  
            } 
            else
            {
                hash.insert({curr, i}); 
            }
        }
        return result; 
    }
};
