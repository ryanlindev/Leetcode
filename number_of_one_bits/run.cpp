class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bits = 0;
        for (int c = 0, b = 1; c < 32; c++, b *= 2) {
            if ((n & b) > 0)
                bits++;
        }
        return bits;
    }
};
