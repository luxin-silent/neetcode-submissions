class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> sub;
        for (int i=0;i<nums.size();i++) {
            int comp = target - nums[i];
            if(sub.contains(comp)) {
                return {sub[comp],i};
            }
            sub[nums[i]] = i;
        }
        return {};
    }
};
