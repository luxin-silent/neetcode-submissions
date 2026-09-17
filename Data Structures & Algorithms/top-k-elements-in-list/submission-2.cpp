class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> hashMap;

        for(int num : nums) {
            hashMap[num]++;
        }
        vector<pair<int,int>> vec(hashMap.begin(),hashMap.end());
        sort(vec.begin(),vec.end(),[](const auto a,const auto b) {
            return a.second > b.second;
        });
        for(int i=0;i<k;i++) {
            result.push_back(vec[i].first);
        }
        return result;
    }
};
