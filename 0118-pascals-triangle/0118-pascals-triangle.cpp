class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans = {{1}};
        for(int i = 1; i < numRows; i++)
        {
            vector<int> out;
            out.push_back(1);
            for(int j = 1; j < ans[i-1].size(); j++)
            {
                int x = ans[i-1][j] + ans[i-1][j-1];
                out.push_back(x);
            }
            out.push_back(1);
            ans.push_back(out);
        }

        return ans;
    }    
};