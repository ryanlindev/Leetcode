/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDisappearedNumbers = function(nums) {
    var result = [];
    
    for (var c in nums) {
        var v = Math.abs(nums[c]) - 1;
        nums[v] = (nums[v] >= 0) ? -nums[v] : nums[v];
    }
    
    for (var c in nums) {
        if (nums[c] > 0)
            result.push(parseInt(c) + 1);
    }
    return result;
};