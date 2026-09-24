class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;

        int max_capacity=0;

        while(left<right) {
            int amt = (right-left)*min(heights[left],heights[right]);
            if(amt>max_capacity) {
                max_capacity=amt;
            }
            if(heights[left]<heights[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return max_capacity;
    }
};
