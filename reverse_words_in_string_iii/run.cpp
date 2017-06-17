class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        string currentWord = "";
        int length = s.length();
        
        for (int c = 0; c < length + 1; c++) {
            if (s[c] == ' ' || c == length) {
                for (int d = currentWord.length() - 1; d >= 0; d--) {
                    result += currentWord[d];
                }
                
                currentWord = "";
                if (c < length)
                    result += ' ';
            }
            else currentWord += s[c];
        }
        return result;
    }
};
