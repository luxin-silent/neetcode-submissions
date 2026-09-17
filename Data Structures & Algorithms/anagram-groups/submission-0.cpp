class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> hashMap;
        vector<vector<string>> result;

        for(string str : strs) {
            vector<int> freq(26,0);
            for(char sstring : str) {
                freq[sstring - 'a']++;
            }

            hashMap[freq].push_back(str);
        }
        for(auto pair : hashMap) {
            result.push_back(pair.second);
        }
        return result;

    }
};
