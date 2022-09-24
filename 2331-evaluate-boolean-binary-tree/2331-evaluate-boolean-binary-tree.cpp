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
    bool evaluateTree(TreeNode* root) {
        bool ans;
        if(root->val==0)
            return false;
        if(root->val==1)
            return true;
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);
        if(root->val==2)
        { 
            if(left==1||right==1)
                ans= true;
            else
                ans= false;
        }
        if(root->val==3)
        {
            if(left==0||right==0)
                ans= false;
            else
                ans= true;
        }
        return ans;
    }
};