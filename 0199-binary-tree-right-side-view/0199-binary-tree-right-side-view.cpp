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
    vector<int> rightSideView(TreeNode* root) {
        if(root==nullptr)return {};

        queue<TreeNode* >q;
        vector<int>v;
        q.push(root);
        while(!q.empty()){
           int s = q.size();

           for(int i=0;i<s;i++){
             auto it = q.front();
            q.pop();
            if(i==s-1)v.push_back(it->val);
            if(it->left)q.push(it->left);
            if(it->right)q.push(it->right);
           }
           
        }
        return v;
    }
};