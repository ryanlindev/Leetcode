class Solution {
public:
    string addStrings(string num1, string num2) {
        string result;
        int carry = 0;
        
        for (int c = num1.length() - 1, d = num2.length() - 1; c >= 0 || d >= 0; c--, d--) {
            int digit1 = (c >= 0) ? num1[c] - '0' : 0;
            int digit2 = (d >= 0) ? num2[d] - '0' : 0;
            int sum = digit1 + digit2 + carry;
            
            carry = 0;
            
            if (sum >= 10) {
                sum -= 10;
                carry = 1;
            }
            result += to_string(sum);
        }
        
        if (carry > 0) {
            result += to_string(carry);
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};