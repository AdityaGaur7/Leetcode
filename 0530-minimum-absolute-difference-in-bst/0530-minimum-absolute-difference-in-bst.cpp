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
  void solve(TreeNode* root, TreeNode* &prev,int &diff){
    if(root==nullptr){
        return;
    }
   
    solve(root->left,prev,diff);
     if(prev!=nullptr){
        diff = min(diff,abs(root->val-prev->val));
    }
    prev=root;
    solve(root->right,prev,diff);
    
  }
    int getMinimumDifference(TreeNode* root) {
        int diff=INT_MAX;
        TreeNode* prev=nullptr;
       solve(root,prev,diff);
    return diff;
        

    }
};