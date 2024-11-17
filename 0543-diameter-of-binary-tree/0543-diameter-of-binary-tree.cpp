/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    int dfs(TreeNode* root)
    {
        if(root == NULL) return 0;        
        int lefttHeight = dfs(root->left);
        int rightHeight = dfs(root->right);        
        if(lefttHeight+rightHeight+1 > ans) ans = lefttHeight+rightHeight;        
        return max(lefttHeight, rightHeight)+1;        
    }
    int diameterOfBinaryTree(TreeNode* root) {     
        dfs(root);
        return ans;
    }
};