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
    
    vector<vector<int>> levelOrder(TreeNode* root) {
         queue<TreeNode*> q;
         vector<vector<int>> ans;
       if(root==NULL){
           return ans;
       }
       
        q.push(root);
        
        while(!q.empty()){
            vector<int> l;
            int k=q.size();

            for(int i=0;i<k;i++){
                    root=q.front();
            q.pop();
            if(root->left!=NULL){
                q.push(root->left);
            }
            if(root->right!=NULL){
                q.push(root->right);
            }
            l.push_back(root->val);
            }
            ans.push_back(l);
        }
        return ans;
    }
};