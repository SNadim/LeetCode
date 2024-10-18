class Solution {
public:
    int dp[10000];

int dfs(int n, vector<int>& nums)
{
    if(dp[n] != -1) return dp[n];
    if(n == nums.size()-1) return 1;
    int ans = 0;
    for(int i = 1; i <= nums[n]; i++)
    {
        if(n+i == nums.size()) return dp[n] = ans;
        if(n+i < nums.size())
        {
            ans = ans || dfs(n+i, nums);
        }
    }
    
    return dp[n] = ans;
}
bool canJump(vector<int>& nums) {
    memset(dp, -1, sizeof(dp));
    return dfs(0, nums);
}
};