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
     void postor(TreeNode* node,vector<int>& v){
        if(node==NULL){
            return;
        }
        
        postor(node->left,v);
        
        postor(node->right,v);
         v.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        postor(root,v);
        return v;
        
    }
};