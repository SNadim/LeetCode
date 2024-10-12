class Solution {
public:
    int dp[305][305];
int maxPoint = 0;

int helper(int i, int j, vector<vector<char>>& matrix)
{
    if(i >= matrix.size() || j >= matrix[0].size())
    {
        return 0;
    }
    
    if(dp[i][j] == -1)
    {
        int right = helper(i, j +1, matrix);
        int left = helper(i + 1, j, matrix);
        int diagonal = helper(i + 1, j + 1, matrix);
        
        dp[i][j] = 0;
        
        if(matrix[i][j] == '1')
        {
            int minVal = min(right, left);
            dp[i][j] = 1 + min(minVal, diagonal);
        }
    }
    maxPoint = max(dp[i][j], maxPoint);
    return dp[i][j];
}

int maximalSquare(vector<vector<char>>& matrix) {
    memset(dp, -1, sizeof(dp));
    helper(0, 0, matrix);
    return maxPoint*maxPoint;
    
}
};