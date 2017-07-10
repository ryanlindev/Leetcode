/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    var reverse = function(s) {
        var x = s.split("");
        x.sort();
        return x.join("");
    };
    return reverse(s) === reverse(t);
};