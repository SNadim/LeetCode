class Solution {
public:
    int dp[205][205];

int dfs(int i, int j, vector<vector<int>>& grid)
{
    if(i == grid.size() && j == grid[0].size()) return grid[i][j];
    if(dp[i][j] != -1) return dp[i][j];
    int ans =  grid[i][j];
    bool t = false;
    if(i+1 < grid.size())
    {
        ans = dfs(i+1, j, grid) + grid[i][j];
        t = true;
    }
        
    if(j+1 < grid[0].size())
    {
        if(t) ans = min(ans, dfs(i, j+1, grid) + grid[i][j]);
        else ans = dfs(i, j+1, grid) + grid[i][j];
    }
        
    return dp[i][j] = ans;
}

int minPathSum(vector<vector<int>>& grid) {
    memset(dp, -1, sizeof(dp));
    return dfs(0,0, grid);
}
};