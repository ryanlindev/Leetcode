class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> left(size, 1);
        vector<int> right(size, 1);
        vector<int> result(size, 1);
        
        left[0] = 1;
        right[size - 1] = 1;
        
        for (int c = 1; c < size; c++) {
            left[c] = (left[c-1] * nums[c-1]);
        }
        
        for (int c = size - 2; c >= 0; c--) {
            right[c] = (right[c+1] * nums[c+1]);
        }
        
        for (int c = 0; c < size; c++) {
            result[c] = (left[c] * right[c]);
        }
        return result;
    }
};
