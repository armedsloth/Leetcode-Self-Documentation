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
    void mydfs( TreeNode* cur, int &count, int maxyet)
    {
        if( !cur )
            return;
        if( cur->val>=maxyet)
            count++;
        maxyet=max(cur->val, maxyet);
        mydfs(cur->left, count, maxyet);
        mydfs(cur->right, count, maxyet);
        
    }
    int goodNodes(TreeNode* root) {
        int count=0;
        mydfs(root, count, INT_MIN);
        return count;
    }
};