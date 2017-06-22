class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int currentIndex = 0;
        int numZeroes = 0;
        int size = nums.size();
        
        for (int c = 0; c < size; c++) {
            if (nums[c] == 0)
                numZeroes++;
            else
                nums[currentIndex++] = nums[c];
        }
        
        for (int c = 0, x = size - 1; c < numZeroes; c++, x--) {
            nums[x] = 0;
        }
    }
};
