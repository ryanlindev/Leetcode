class Solution {
public:
    int titleToNumber(string s) {
        int sum = 0;
        for (int c = s.length() - 1, base = 1; c >= 0; c--, base *= 26) {
            sum += (s[c] - 'A' + 1) * base;
        }
        return sum;
    }
};