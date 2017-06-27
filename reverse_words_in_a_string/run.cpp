class Solution {
public:
    void reverseWords(string &s) {
        vector<string> words;
        string currentWord = "";
        int length = s.length();
        
        // Parse words from input string and reverse them
        for (int c = 0; c < length; c++) {
            if (s[c] == ' ') {
                if (currentWord.length() > 0) {
                    words.push_back(currentWord);
                    currentWord = "";
                }
            }
            else currentWord += s[c];
        }
        
        // Add in last reversed word
        if (currentWord.length() > 0) {
            words.push_back(currentWord);
        }
        
        // Build reversed string
        s = "";
        int size = words.size();
        
        if (size > 0) {
            for (int c = size - 1; c > 0; c--) {
                s += (words[c] + string(" "));
            }
            s += words[0];
        }
    } 
};
