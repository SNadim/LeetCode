class Solution {
public:
    void dfs(int x, int y, int n, int k, vector<int> &currEle, vector<vector<int>> &ans)
{
    if(y == k)
    {
        ans.push_back(currEle);
        return;
    }
    
    if(x > n) return;
    
    currEle.push_back(x);
    dfs(x+1, y+1, n, k, currEle, ans);
    currEle.pop_back();
    dfs(x+1, y, n, k, currEle, ans);
}

vector<vector<int>> combine(int n, int k) {
    vector<int> currEle;
    vector<vector<int>> ans;
    
    dfs(1, 0, n, k, currEle, ans);
    
    return ans;
}
};