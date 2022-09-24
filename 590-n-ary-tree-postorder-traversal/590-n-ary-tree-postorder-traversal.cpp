/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void postorderhelp(Node *root, vector<int> &ans)
    {
        // postorderhelp(root->left,ans);
        // postorderhelp(root->right,ans);
        for(auto x : root->children)
        {
            postorderhelp(x,ans);
        }
        ans.push_back(root->val);
    }
    
    vector<int> postorder(Node* root) {        
        vector<int> ans;
        if(root==NULL)
        {
            // ans.push_back(NULL);
            // return ans;
            return {};
        }        
        postorderhelp(root,ans);
        return ans;        
    }
};