class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    priority_queue<
    pair<double, pair<int, int>>,
    vector<pair<double, pair<int,int>>>,
    greater<pair<double, pair<int, int>>>
    > pq;
    
    for(auto i : points)
    {
        int x = i[0];
        int y = i[1];
        double dis = distanceCal(x, y);
        pq.push({dis, {x,y}});
    }
    vector<vector<int>> ans;
    int x  = 0;
    while(!pq.empty() &&  x < k)
    {
        pair<double, pair<int, int>> topPair = pq.top();
        pq.pop();
        ans.push_back({topPair.second.first, topPair.second.second});
        x++;
    }
    return ans;
}

private:
    double distanceCal(int x, int y)
{
    return sqrt(pow(x, 2) + pow(y, 2));
}
};