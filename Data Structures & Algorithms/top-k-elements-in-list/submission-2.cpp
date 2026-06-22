class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        vector<pair<int,int>> temp; // {frequency, number}
        for (auto& p : freq) {
            temp.push_back({p.second, p.first});
        }

        sort(temp.begin(), temp.end(), greater<pair<int,int>>());

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(temp[i].second);
        }
        return result;
    }
};