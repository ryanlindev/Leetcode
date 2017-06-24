class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int size = nums.size();
        
        for (int c = 0; c < size; c++) {
            sum += nums[c];
        }
        
        return (size * (size + 1) / 2) - sum;
    }
};