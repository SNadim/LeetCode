class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> matrix2 = matrix;
        
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                if(matrix2[i][j] == 0)
                {
                    convertZero(i, j, matrix);
                }
            }
        }
    }
    
private:
    void convertZero(int x, int y, vector<vector<int>>& matrix)
    {
        for(int i = 0; i < matrix[x].size(); i++)
        {
            matrix[x][i] = 0;
        }
        
        for(int i = 0; i < matrix.size(); i++)
        {
            matrix[i][y] = 0;
        }
    }
};