class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
    unordered_map<int, int> mp;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto i : arr) mp[i]++;
    
    for(auto i : mp)
    {
        pq.push(i.second);
    }
    
    while(!pq.empty())
    {
        int topEle = pq.top();
        if(topEle <= k)
        {
            k-=topEle;
            pq.pop();
        }
        else break;
    }
    
    return pq.size();
}
};