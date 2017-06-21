class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int current = 0;
        int size = nums.size();
        
        for (int c = 0; c < size; c++) {
            if (nums[c] == 0) {
                max = (current > max) ? current : max;
                current = 0;
            }
            else current += 1;
        }
        
        max = (current > max) ? current : max;
        return max;
    }
};
