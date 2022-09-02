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
    vector<TreeNode * > vec;
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vec.push_back(root);
        vec.push_back(nullptr);
        for(int i=0; i<vec.size();i++)
        {
            if( vec[i]==nullptr)
                if(i!=vec.size()-1)
                    vec.push_back(nullptr);
                else
                    break;
           else
           {
            if(vec[i]->left)
                vec.push_back(vec[i]->left);
            if(vec[i]->right)
                vec.push_back(vec[i]->right);
           }
        }
        vector<double> res;
        double levelsum=0;
        int nodecount=0;
        for(int i=0; i< vec.size();i++)
        {
            if(vec[i])
                levelsum+= vec[i]->val , nodecount++;
            else
            {
                res.push_back(levelsum/nodecount);
                levelsum=0, nodecount=0;
            }
        }
        return res;
    }
};