class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> replace;
        map<char, char> replaceReverse;
        int sLength = s.length();
        int tLength = t.length();
        
        if (sLength != tLength) {
            return false;
        }
        
        for (int c = 0; c < sLength; c++) {
            map<char, char>::iterator x = replace.find(s[c]);
            map<char, char>::iterator y = replaceReverse.find(t[c]);
            
            if (x == replace.end() && y == replaceReverse.end()) {
                replace[s[c]] = t[c];
                replaceReverse[t[c]] = s[c];
            }
            else {
                if (x->second != t[c] || y->second != s[c])
                    return false;
            }
        }
        return true;
    }
};
