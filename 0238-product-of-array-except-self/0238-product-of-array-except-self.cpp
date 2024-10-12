class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> pref;
        pref.push_back(1);
        
        for(int i = 0; i < nums.size(); i++)
        {
            pref.push_back(pref[i] * nums[i]);
        }
        
        int post = 1;
        vector<int> ans(nums.size());
        
        for(int i = pref.size()-1; i > 0; i--)
        {
            int x = post * pref[i-1];
            ans[i-1] = x;
            post = post * nums[i-1];
        }
        
        return ans;
    }
};