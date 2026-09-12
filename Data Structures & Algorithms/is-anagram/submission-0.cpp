class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s_map;
        unordered_map<char,int> t_map;

        for(char sstring : s) {
            s_map[sstring]++;
        }
        for(char tstring : t) {
            t_map[tstring]++;
        }

        if (s_map == t_map) {
            return true;
        }
        return false;
    }
};
