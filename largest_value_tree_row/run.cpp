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
    void largestValuesHelper(TreeNode* root, vector<int>& data, int level = 0) {
        if (root == NULL)
            return;
            
        while (data.size() <= level)
            data.push_back(INT_MIN);
            
        if (root->val > data[level])
            data[level] = root->val;
            
        largestValuesHelper(root->left, data, level + 1);
        largestValuesHelper(root->right, data, level + 1);
    }
    
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
        largestValuesHelper(root, result);
        return result;
    }
};
