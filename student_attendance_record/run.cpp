class Solution {
public:
    bool checkRecord(string s) {
        int absentCount = 0;
        bool constantlyLate = false;
        int length = s.length();
        
        for (int c = 0; c < length; c++) {
            if (s[c] == 'A')
                absentCount++;
            else if (s[c] == 'L' && c > 1 && s[c-1] == 'L' && s[c-2] == 'L')
                constantlyLate = true;
        }
        
        return absentCount <= 1 && !constantlyLate;
    }
};