class Solution {
private:
vector<vector<int>> twoSum(int l, vector<int>& nums, int target)
    {
        int r = nums.size()-1;
    vector<vector<int>> res;
        while( l < r)
        {
            if(nums[l] + nums[r] > target)            
                r--;            
            else if(nums[l] + nums[r] < target)
                l++;
            else  {
                res.push_back({nums[l], nums[r]});
                l++;
                r--;
            }
        }
        
        return res;
    }
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());        
        set<vector<int>> ans;
        int prev = 1e5+1;
        for(int i = 0; i < nums.size()-2; i++)
        {
            if(nums[i] != prev)
            {
                vector<vector<int>> res = twoSum(i+1, nums, nums[i]*-1);            
                for(auto j : res)
                {
                    ans.insert({nums[i], j[0], j[1]});
                } 
                
            }   
            prev = nums[i];
        }
        vector<vector<int>> ress(ans.begin(), ans.end());
        return ress;    
    }
};