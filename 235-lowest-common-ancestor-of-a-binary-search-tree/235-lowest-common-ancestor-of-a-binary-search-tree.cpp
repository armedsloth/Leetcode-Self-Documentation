/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int less=p->val>q->val?q->val:p->val , more=p->val>q->val?p->val:q->val;
        while(root)
        {
            if((less<=root->val&&more>=root->val)||(less==root->val)||(more==root->val))
                return root;
            else 
            if(less>root->val)
                root=root->right;   
            else
                root=root->left;
        }
        return root;
    }
};