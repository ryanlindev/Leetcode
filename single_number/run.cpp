class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number = 0;
        int size = nums.size();
        
        for (int c = 0; c < size; c++) {
            number ^= nums[c];
        }
        return number;
    }
};
