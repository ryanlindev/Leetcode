/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
var levelOrder = function(root) {
    var helper = function(root, level, path) {
        if (root == null)
            return;
        
        while (path.length - 1 < level)
            path.push([]);
        
        path[level].push(root.val);
        helper(root.left, level + 1, path);
        helper(root.right, level + 1, path);
    };
    
    var path = [];
    helper(root, 0, path);
    return path;
};