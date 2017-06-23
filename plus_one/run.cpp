class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int c = digits.size() - 1; c >= 0; c--) {
            digits[c] += carry;
            carry = 0;
            
            if (digits[c] >= 10) {
                digits[c] -= 10;
                carry = 1;
            }
        }
        
        if (carry > 0) {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};
