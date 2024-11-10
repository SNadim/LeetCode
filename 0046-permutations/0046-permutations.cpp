class Solution {
public:
    void dfs(int n, vector<int>& nums, vector<int> comb, vector<vector<int>> &ans)
{
    if(n == nums.size())
    {
        ans.push_back(comb);
        return;
    }
    
    for(int i = 0; i < nums.size(); i++)
    {
        if(comb[i] == -11) {
            comb[i] = nums[n];
            dfs(n+1, nums, comb, ans);
            comb[i] = -11;
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) 
{
    vector<int> comb(nums.size(), -11);
    vector<vector<int>> ans;
    dfs(0, nums, comb, ans);
    return ans;
}
};