class Solution {
public:
    bool canWinNim(int n) {
        return n > 0 && n % 4;
    }
};