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
    void solve(TreeNode* root,vector<int>&inorder){
        if(!root)return ;

        solve(root->left,inorder);
        inorder.push_back(root->val);
        solve(root->right,inorder);

    }
    TreeNode* build(int l , int r, vector<int>ans){
        if(l>r)return nullptr;
        int mid = l + (r-l)/2;
        TreeNode* root = new TreeNode(ans[mid]);
        root->left=build(l,mid-1,ans);
        root->right=build(mid+1,r,ans);

        return root;
    }
   

    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;

        solve(root,ans);
       
     int l=0;
     int r= ans.size()-1;
     
    return build(l,r,ans);


    }
};