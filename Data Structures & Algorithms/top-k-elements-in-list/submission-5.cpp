class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> hashCount;

        vector<vector<int>> freq(nums.size()+1);

        for (int num : nums) {
            hashCount[num]++;
        }
        for (auto entry : hashCount) {
            freq[entry.second].push_back(entry.first);
        }
        for(int i=freq.size()-1;i>0;i--) {
            for(int element : freq[i]) { // elements having same freq
                result.push_back(element);
                if(result.size()==k) {
                    return result;
                }
            }
        }
        return result;
    }
};
