class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> chars;
        int length = s.length();
        
        for (char &c : s)
            chars[c]++;
            
        for (int c = 0; c < length; c++) {
            if (chars[s[c]] == 1)
                return c;
        }
        return -1;
    }
};
