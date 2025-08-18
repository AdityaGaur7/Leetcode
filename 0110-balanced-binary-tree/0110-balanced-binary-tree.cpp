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
    int getheight(TreeNode* root){
        if(root==nullptr)return 0;

        return 1 + max(getheight(root->left),getheight(root->right));
    }
    bool isBalanced(TreeNode* root) { 

        if(root==nullptr)return 1;

        int left = getheight(root->left);
        int right = getheight(root->right);

        if(abs(left-right)<=1 
        && isBalanced(root->left)
        && isBalanced(root->right))return 1;
        
        return 0;
    }
};