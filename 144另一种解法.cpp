/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        stack<TreeNode*> s;
        vector<int> result;
        if(root == NULL){
            return result;
        }
        s.push(root);
        TreeNode *cur;
        while(!s.empty()){
            cur = s.top();
            s.pop();
            result.push_back(cur->val);
            if(cur->right != NULL)
                s.push(cur->right);
            if(cur->left != NULL)
                s.push(cur->left);
        }
        return result;
    }
};