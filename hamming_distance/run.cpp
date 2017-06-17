class Solution {
public:
    int hammingDistance(int x, int y) {
        int distance = 0;
        for (int c = 0, bit = 1; c < 32; c += 1, bit *= 2) {
            distance += (int)((x & bit) != (y & bit));
        }
        return distance;
    }
};
