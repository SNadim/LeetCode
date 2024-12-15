class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
    
    priority_queue<int> pq;
    int i = 0;
    for(; i < heights.size()-1; i++)
    {
        int heightDiff = heights[i + 1] - heights[i];
        if(heightDiff > 0)
        {
            if(heightDiff <= bricks)
            {
                bricks = bricks-heightDiff;
                pq.push(heightDiff);
            }
            else if(!pq.empty() && heightDiff < pq.top() && ladders > 0)
            {
                bricks += pq.top();
                pq.pop();
                pq.push(heightDiff);
                bricks -= heightDiff;
                ladders--;
            }
            else if(ladders > 0) ladders--;
            else break;
        }
    }
    if(i >= heights.size()) i = heights.size()-1;
    return i;
}
};