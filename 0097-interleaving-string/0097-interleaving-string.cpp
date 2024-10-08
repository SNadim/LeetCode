class Solution {
public:
    int dp[105][105];
    bool backtrack(int i, int j, string s1, string s2, string s3)
{
        if(i == s1.size() && j == s2.size() && i+j < s3.size()) 
    {
        return false;
    }
    if(i == s1.size() && j == s2.size()) 
    {
        return true;
    }
    
    if(dp[i][j] != -1) return dp[i][j];
    if(i < s1.size() && s1[i] == s3[i+j] && backtrack(i+1, j, s1, s2, s3))
    {
        return true;
    }
    if(j < s2.size() && s2[j] == s3[i+j] && backtrack(i, j+1, s1, s2, s3))
    {
        return true;
    }
    
    return dp[i][j] = false;
}

bool isInterleave(string s1, string s2, string s3) {
    memset(dp, -1, sizeof(dp));
    return backtrack(0, 0, s1, s2, s3);
}
};