class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int currMax = -1;
        int ans = 0;

        for(int i = 0; i < arr.size(); i++)
        {
            currMax = max(currMax, arr[i]);
            if(currMax == i) ans++;
        }
        return ans;
    }
};