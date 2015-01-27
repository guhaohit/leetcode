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
    int maxDepth(TreeNode *root) {
        if(root==NULL)
            return 0;
        if(root->left == NULL && root->right == NULL)
            return 1;
        else if(root->left == NULL)
            return maxDepth(root->right)+1;
        else if(root->right == NULL)
            return maxDepth(root->left)+1;
        else
            return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
    int max(int a,int b){
        if(a<b)
            return b;
        else
            return a;
    }
};