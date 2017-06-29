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
    void levelOrderHelper(TreeNode* root, vector<vector<int>>& data, int level = 1) {
        if (root == NULL)
            return;
        
        while (data.size() < level)
            data.push_back(vector<int>());
        
        data[level - 1].push_back(root->val);
        levelOrderHelper(root->left, data, level + 1);
        levelOrderHelper(root->right, data, level + 1);
    }
    
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        levelOrderHelper(root, result);
        return result;
    }
};