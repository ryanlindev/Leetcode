/**
 * @param {number} num
 * @return {number}
 */
var addDigits = function(num) {
    var sum = num.toString().split("").map(function(c) { return parseInt(c); }).reduce(function(sum, value) { return sum + value; }, 0);
    return (sum >= 10) ? addDigits(sum) : sum;
};