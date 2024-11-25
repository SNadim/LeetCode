class Solution {
public:
int dp[105][105];
int dfs(int m, int n)
{
    if(n == 0 && m == 0) return 0;
    if(m == 0 || n == 0) return 1;
    if(dp[m][n] != -1) return dp[m][n];
    int ans = dfs(m-1, n) + dfs(m, n-1);

    return dp[m][n] = ans;
}
int uniquePaths(int m, int n) {
    if(m == 1 && n == 1) return 1;
    memset(dp, -1, sizeof(dp));
    return dfs(m-1, n-1);
}

};