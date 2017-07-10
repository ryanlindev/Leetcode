/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    s = s.trim();
    return (s.length > 0) ? (s.split(" ").filter(function(s) { return s.trim().length > 0; }).reverse()[0]).length : 0;
};