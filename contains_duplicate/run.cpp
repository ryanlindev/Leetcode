class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        int current;
        
        if (size <= 1)
            return false;
            
        sort(nums.begin(), nums.end());
        current = nums[0];
        
        for (int c = 1; c < size; c++) {
            if (nums[c] == current)
                return true;
            else current = nums[c];
        }
        return false;
    }
};
