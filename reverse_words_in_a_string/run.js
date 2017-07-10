/**
 * @param {string} str
 * @returns {string}
 */
var reverseWords = function(str) {
    return str.trim().split(" ").filter(function(s) { return s.trim().length > 0; }).reverse().join(" ");
};