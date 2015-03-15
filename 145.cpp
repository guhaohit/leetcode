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
    vector<int> postorderTraversal(TreeNode *root) {
        stack<TreeNode*> s;
        vector<int> result;
        if(root == NULL){
            return result;
        }
        s.push(root);
        TreeNode *cur = root;
        TreeNode *pre = NULL;
        while(!s.empty()){
            cur = s.top();
            if((cur->right == NULL && cur->left == NULL) || (pre != NULL && (pre == cur->right || pre == cur->left))){
                result.push_back(cur->val);
                s.pop();
                pre = cur;
            }
            else{
                if(cur->right != NULL)
                    s.push(cur->right);
                if(cur->left != NULL)
                    s.push(cur->left);
            }
        }
        return result;
    }
};