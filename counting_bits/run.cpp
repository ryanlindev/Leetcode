class Solution {
private:
    int bits(int n) {
        int result = 0;
        for (int c = 0, bit = 1; c < 32; c++, bit *= 2) {
            if ((n & bit) > 0)
                result++;
        }
        return result;
    }
    
public:
    vector<int> countBits(int num) {
        vector<int> result;
        for (int c = 0; c <= num; c++) {
            result.push_back(bits(c));
        }
        return result;
    }
};