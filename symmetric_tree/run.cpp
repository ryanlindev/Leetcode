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
    bool isSymmetric(TreeNode* left, TreeNode* right) {
        if (!left && !right)
            return true;
        else if ((left && !right) || (!left && right))
            return false;
        return left->val == right->val && isSymmetric(left->right, right->left) && isSymmetric(left->left, right->right);
    }
    
    bool isSymmetric(TreeNode* root) {
        return (root == NULL) ? true : isSymmetric(root->left, root->right);
    }
};
