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
    void inor(TreeNode* node,vector<int>& v){
        if(node==NULL){
            return;
        }
        
        inor(node->left,v);
        v.push_back(node->val);
        inor(node->right,v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inor(root,v);
        return v;
        
    }
};