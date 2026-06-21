/*
intuition: 
create a unique string key for each anagram possibility
done with counter of each string made of each alphabet frequencies
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> map; 
        vector<vector<string>> result; 

        //loop through every string make a letter frequency counter
        for (const auto &str: strs)
        {   
            vector<int> counter(26, 0); 
            for (char c: str)
            {
                counter[c - 97]++; //A = 65; a = 97
            }
            string key = "";  
            for (int i = 0; i < 26; i++)
            {
                key += "," + to_string(counter[i]); 
            }
            map[key].push_back(str); 
        }
        for (const auto &pair: map)
        {
            result.push_back(pair.second); 
        }
        return result; 
    }
};
