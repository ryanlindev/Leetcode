/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var inorderTraversal = function(root) {
    var helper = function(root, path) {
        if (root == null)
            return;
        
        helper(root.left, path);
        path.push(root.val);
        helper(root.right, path);
    };
    
    var path = [];
    helper(root, path);
    return path;
};