/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
    var asciiSum = function(x) {
        return x.split("").map(function(c) { return c.charCodeAt(0); }).reduce(function(sum, value) { return sum + value; }, 0);
    };
    return String.fromCharCode(asciiSum(t) - asciiSum(s));
};