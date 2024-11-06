class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        double n = nums.size()/3;
        unordered_map<int, int> mp;
        set<int> st;
        for(auto i : nums)
        {
            mp[i]++;
            if(mp[i] > n) st.insert(i);
        }    
        
        vector<int> ans(st.begin(), st.end());
        
        return ans;
    }
};