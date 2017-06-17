class Solution {
public:
    string reverseString(string s) {
        string result = "";
        for (int c = s.length() - 1; c >= 0; c--) {
            result += s[c];
        }
        return result;
    }
};