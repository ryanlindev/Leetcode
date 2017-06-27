class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastWordLength = 0;
        int wordLength = 0;
        int length = s.length();
        bool lastSpace = false;
        
        for (int c = 0; c < length; c++) {
            if (s[c] == ' ') {
                if (!lastSpace) {
                    lastWordLength = wordLength;
                    wordLength = 0;
                }
                lastSpace = true;
            }
            else {
                wordLength++;
                lastSpace = false;
            }
        }
        
        return (wordLength > 0) ? wordLength : lastWordLength;
    }
};
