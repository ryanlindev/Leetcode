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
private:
    void inorderTraversalHelper(TreeNode* root, vector<int>& v) {
        if (root == NULL)
            return;
        
        inorderTraversalHelper(root->left, v);
        v.push_back(root->val);
        inorderTraversalHelper(root->right, v);
    }
    
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorderTraversalHelper(root, result);
        return result;
    }
};