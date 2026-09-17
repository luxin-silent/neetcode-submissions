class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashMap;
        vector<vector<string>> result;

        for(string str : strs) {
            string sorted = str;
            sort(sorted.begin(),sorted.end());

            hashMap[sorted].push_back(str);
        }
        for(auto pair : hashMap) {
            result.push_back(move(pair.second));
        }
        return result;
    }
};
