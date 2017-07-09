/**
 * @param {string[]} words
 * @return {string[]}
 */
var findWords = function(words) {
    return words.filter(function(word) { return /^[qwertyuiop]+$|^[asdfghjkl]+$|^[zxcvbnm]+$/.test(word.toLowerCase()); });
};