class Solution {
public:
    string reverseVowels(string s) {
        vector<int> vowelIndices;
        int length = s.length();
        int size;
        
        for (int c = 0; c < length; c++) {
            char t = s[c];
            if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u'
                || t == 'A' || t == 'E' || t == 'I' || t == 'O' || t == 'U') {
                vowelIndices.push_back(c);
            }
        }
        
        size = vowelIndices.size();
        for (int c = 0, d = size - 1; c < d; c++, d--) {
            char temp = s[vowelIndices[c]];
            s[vowelIndices[c]] = s[vowelIndices[d]];
            s[vowelIndices[d]] = temp;
        }
        
        return s;
    }
};
