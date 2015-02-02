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
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode *p = root;
        while(p!=NULL || !s.empty()){
            while(p!=NULL){
                s.push(p);
                result.push_back(p->val);
                p = p->left;
            }
            if(!s.empty()){
                p = s.top();
                s.pop();
                p = p->right;
            }
        }
        return result;
    }
};