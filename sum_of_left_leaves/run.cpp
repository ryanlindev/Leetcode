/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == NULL)
            return 0;
            
        int sum = (root->left != NULL && root->left->left == NULL && root->left->right == NULL) ? root->left->val : 0;
        return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};