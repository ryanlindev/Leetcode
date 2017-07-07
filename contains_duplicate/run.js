/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    var letters = {};
    for (var c in nums) {
        if (nums[c] in letters)
            return true;
        letters[nums[c]] = true;
    }
    return false;
};