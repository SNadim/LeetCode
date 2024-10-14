class Solution {
public:
    int trap(vector<int>& height) {
    int n = height.size();
    int leftMax[n];
    int rightMax[n];
    leftMax[0] = 0;
    rightMax[n-1] = 0;
    int preMax = height[0];
    int postMax = height[n-1];
    for(int i = 1, j = n-2; i < n, j >= 0; i++, j--)
    {
        preMax = max(height[i], preMax);
        postMax = max(height[j], postMax);
        leftMax[i] = preMax;
        rightMax[j] = postMax;
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int x = min(leftMax[i], rightMax[i]) - height[i];
        if(x > 0) ans+=x;
    }
    return ans;
}
};