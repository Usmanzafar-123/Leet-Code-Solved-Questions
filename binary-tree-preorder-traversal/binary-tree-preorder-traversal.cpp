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
    void preor(TreeNode* node,vector<int>& v){
        if(node==NULL){
            return;
        }
        
        v.push_back(node->val);
        
        preor(node->left,v);
        preor(node->right,v);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        preor(root,v);
        return v;
        
    }
};