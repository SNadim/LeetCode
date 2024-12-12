class Solution {
public:
     int findKthLargest(vector<int>& nums, int k) {
    
    priority_queue<int> pq;
    for(auto i : nums)
    {
        pq.push(i);
    }
    
    int x = 0;
    int ans = -1;
    while(!pq.empty() && x < k)
    {
        ans = pq.top();
        pq.pop();
        x++;
    }
    return ans;
}
};