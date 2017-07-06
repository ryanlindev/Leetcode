/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var addStrings = function(num1, num2) {
    var result = "";
    var carry = 0;
    
    for (var c = num1.length - 1, d = num2.length - 1; d >= 0 || c >= 0; c--, d--) {
        var a = (c >= 0) ? parseInt(num1.charAt(c)) : 0;
        var b = (d >= 0) ? parseInt(num2.charAt(d)) : 0;
        var sum = a + b + carry;
        
        carry = 0;
        if (sum >= 10) {
            sum -= 10;
            carry = 1;
        }
        result += sum.toString();
    }
    
    if (carry > 0) {
        result += "1";
    }
    
    return result.split("").reverse().join("");
};