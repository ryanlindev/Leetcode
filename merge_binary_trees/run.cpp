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
    void sumTrees(TreeNode* sum, TreeNode* t1, TreeNode* t2)
    {
        t1 = (t1 != NULL) ? t1 : new TreeNode(0);
        t2 = (t2 != NULL) ? t2 : new TreeNode(0);
        sum->val = t1->val + t2->val;
        
        if (t1->left || t2->left)
        {
            sum->left = new TreeNode(0);
            sumTrees(sum->left, t1->left, t2->left);
        }
        if (t1->right || t2->right)
        {
            sum->right = new TreeNode(0);
            sumTrees(sum->right, t1->right, t2->right);
        }
    }
    
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2)
    {
        if (t1 == NULL && t2 == NULL)
            return NULL;
        else if (t1 != NULL && t2 == NULL)
            return t1;
        else if (t2 != NULL && t1 == NULL)
            return t2;
            
        TreeNode* sum = new TreeNode(0);
        sumTrees(sum, t1, t2);
        return sum;
    }
};
