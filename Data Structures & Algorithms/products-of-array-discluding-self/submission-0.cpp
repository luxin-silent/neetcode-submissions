class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> op;
        int prefix = 1;
        for(auto num : nums) {
            op.push_back(prefix);
            prefix*=num;
        }

        int suffix = 1;
        for(int i=nums.size()-1;i>=0;i--){
            op[i]*=suffix;
            suffix*=nums[i];
        }
        return op;
    }
};

