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
    void getAllValues(TreeNode* root, vector<int>& values) {
        if (root == NULL)
            return;
        
       	values.push_back(root->val);
        getAllValues(root->left, values);
        getAllValues(root->right, values);
    }
    
    void convertNode(TreeNode* root, vector<int>& values) {
        if (root == NULL)
            return;
        
        int rootValue = root->val;
        int size = values.size();
        
        for (int c = 0; c < size; c++) {
            if (rootValue < values[c])
                root->val += values[c];
        }
        
        convertNode(root->left, values);
        convertNode(root->right, values);
    }
    
public:
    TreeNode* convertBST(TreeNode* root) {
        if (root == NULL)
            return NULL;
        
       	vector<int> values;
        getAllValues(root, values);
        convertNode(root, values);
        
        return root;
    }
};