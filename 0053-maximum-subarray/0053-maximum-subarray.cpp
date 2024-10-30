class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxLen = nums[0];
        int curSum = 0;
        for(auto i : nums)
        {
            if(curSum < 0) curSum = 0;
            curSum += i;
            maxLen = max(curSum, maxLen);
        }

        return maxLen;
    }
};