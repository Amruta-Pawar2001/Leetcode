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
// public:
    // int rangeSumBST(TreeNode* root, int low, int high) {
    //     int sum=0;        
    //     if(high<=root->val)
    //     {
    //         sum+=rangeSumBST(root->left,low,high);
    //     }
    //     if(low<=root->val&&high>=root->val)
    //     {
    //         sum = root->val+high+low;
    //     }
    //     if(low>=root->val)
    //     {
    //         sum+=rangeSumBST(root->right,low,high);
    //     }
    //     return sum;
    // }
    
//      void solve(TreeNode*root,int low,int high,int &sum)
//     {
//         if(root==NULL)
//         {
//             return;
//         }
//         if(root->val>=low && root->val<=high)
//         {
//             sum+=root->val;
//         }
//         solve(root->left,low,high,sum);
//         solve(root->right,low,high,sum);
//     }
// public:
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         int sum=0;
//         solve(root,low,high,sum);
//         return sum;
//     }
    
    public:
        int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        if(root==NULL)
            return 0;
        if(root->val>=low && root->val<=high)
             sum+=root->val;
        sum+=rangeSumBST(root->left,low,high);
        sum+=rangeSumBST(root->right,low,high);
        // solve(root,low,high,sum);
        return sum;
    }
};