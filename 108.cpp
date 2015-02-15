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
    TreeNode *sortedArrayToBST(vector<int> &num) {
        return createBST(num,0,num.size()-1);
    }
    TreeNode *createBST(vector<int> &num,int start,int end){
        if(end<start)
            return NULL;
        int mid=(start+end)/2;
        TreeNode *node = new TreeNode(num[mid]);
        node->left = createBST(num,start,mid-1);
        node->right = createBST(num,mid+1,end);
        return node;
    }
};