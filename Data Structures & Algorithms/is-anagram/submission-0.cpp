#include <unordered_map>
#include <algorithm>
using namespace std; 
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hashs; 
        unordered_map<char, int> hasht;
        for (char c: s)
        {
            hashs.insert({c, count(s.begin(), s.end(), c)}); 
        }   
        for (char c: t)
        {
            hasht.insert({c, count(t.begin(), t.end(), c)}); 
        }
        return hashs == hasht; 
    }
};
