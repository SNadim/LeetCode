class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
    unordered_map<char, int> mp;
    priority_queue<int> pq;
    queue<pair<int, int>> q;
    int t = 0;
    for(auto i : tasks)
    {
        mp[i]++;
    }
    
    for(auto i : mp)
    {
        pq.push(i.second);
    }
    
    while(!pq.empty() || !q.empty())
    {
        t++;
        if(!pq.empty())
        {
            int topVal = pq.top();
            pq.pop();
            if(topVal-1 != 0)
                q.push({topVal-1, t+n});
        }
        if(!q.empty() && q.front().second == t)
        {
            pq.push(q.front().first);
            q.pop();
        }
    }
    
    return t;
}
};