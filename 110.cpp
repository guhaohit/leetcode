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
    bool isBalanced(TreeNode *root) {
        if(root == NULL)
            return true;
        int rightHeight = findHeight(root->right);
        int leftHeight = findHeight(root->left);
        if(abs(rightHeight-leftHeight)>1)
            return false;
        return isBalanced(root->left)&&isBalanced(root->right);
    }
    int findHeight(TreeNode *root){
        if(root == NULL)
            return 0;
        if(root->left == NULL && root->right == NULL)
            return 1;
        return max(findHeight(root->left),findHeight(root->right))+1;
    }
};