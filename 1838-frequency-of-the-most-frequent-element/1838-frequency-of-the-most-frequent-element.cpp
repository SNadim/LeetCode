class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int l = 0, r = 0, ans = 0;
    long long sum = 0;
    while(r < nums.size())
    {
        while(1LL * nums[r]*(r-l) - sum > 1LL*k)
        {
            sum-=nums[l];
            l++;
        }
        
        ans = max(ans, r-l+1);
        sum+=nums[r];
        r++;
    }
    
    return ans;
}
 
};