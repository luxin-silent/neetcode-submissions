class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for(auto str : strs) {
            encoded_string += to_string(str.size()) + '#' + str;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strings;

        int i = 0;
        while(i < s.size()) {
            int delimiter_pos = s.find('#', i);
            int s_length = stoi(s.substr(i, delimiter_pos - i));
            
            decoded_strings.push_back(s.substr(delimiter_pos + 1, s_length));
            i = delimiter_pos + 1 + s_length;
        }
        return decoded_strings;
    }
};