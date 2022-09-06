class Solution {
public:
    vector <int> preorder(Node* root)
    {
        vector<int> output;
        stack<Node *> stack;
        if(root)
        stack.push(root);
        while(!stack.empty())
        {
            Node* cur=stack.top();
            stack.pop();
            output.push_back(cur->val);
            for( int i=cur->children.size()-1; i>=0; i--)
            {
                stack.push(cur->children[i]);
            }
        } 
        return output;
    }
    
};