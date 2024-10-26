class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> ans; 
        int sum = 0;
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1]) ans.push_back(nums[i]);  
            else sum += nums[i];
        }
        sum += nums[n-1];
        int x = n*(n+1)/2;
        cout << x << '\n';
        ans.push_back(x - sum);
        return ans;
    }
};