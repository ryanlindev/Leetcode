class Solution {
public:
    char findTheDifference(string s, string t) {
        int sLength = s.length();
        int tLength = t.length();
        int result = 0;
        
        for (int c = 0; c < tLength; c++)
            result += t[c];
            
        for (int c = 0; c < sLength; c++)
            result -= s[c];
            
        return (char) result;
    }
};