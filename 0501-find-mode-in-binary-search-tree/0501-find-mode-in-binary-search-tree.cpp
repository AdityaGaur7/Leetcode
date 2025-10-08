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
int curr = 0;
int freq=0;
int maxfreq=0;
vector<int>v;
   void solve(TreeNode* root){
    if(root==nullptr)return ;

    solve(root->left);
     
     if(root->val==curr){
        freq++;
     }else{
        curr=root->val;
        freq=1;
     }
     
     if(maxfreq<freq){
        v={};
        maxfreq=freq;
     }
     if(freq==maxfreq){
        v.push_back(root->val);
     }




    solve(root->right);
   }
    vector<int> findMode(TreeNode* root) {
        solve(root);

        return v; 
    }
};