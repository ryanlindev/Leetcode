class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> result;
        
        for (int c = 0; c < size; c++) {
            int index = abs(nums[c]) - 1;
            nums[index] = (nums[index] > 0) ? -nums[index] : nums[index];
        }
        
        for (int c = 0; c < size; c++) {
            if (nums[c] > 0)
                result.push_back(c+1);
        }
        return result;
    }
};