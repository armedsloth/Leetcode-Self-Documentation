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
    void mypre( TreeNode* cur, int &count, int maxyet)  // preorder traversal to recursively keep track of path
    {
        if( !cur )                                      // node doesn't exist
            return;
        if( cur->val>=maxyet)                           // is a good node
            count++;
        maxyet=max(cur->val, maxyet);                   
        mypre(cur->left, count, maxyet);                // branch into left and right sub tree preorder traversal
        mypre(cur->right, count, maxyet);
        
    }
    int goodNodes(TreeNode* root) {
        int count=0;                                    // counter for good nodes
        mypre(root, count, INT_MIN);
        return count;
    }
};