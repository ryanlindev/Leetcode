class Solution {
private:
    bool isLower(char c) {
        return c >= 'a' && c <= 'z';
    }
    
    bool isHigher(char c) {
        return c >= 'A' && c <= 'Z';
    }

public:
    bool detectCapitalUse(string word) {
        int length = word.length();
        bool firstCapital = isHigher(word[0]);
        bool restCapital = true;
        bool restLower = true;
        
        for (int c = 1; c < length; c++) {
            if (isHigher(word[c]))
                restLower = false;
            else
                restCapital = false;
        }
        
        return (firstCapital && restLower) || (firstCapital && restCapital) || (!firstCapital && restLower);
    }
};
