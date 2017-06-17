class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int size = nums.size();
        int sum = 0;
        
        for (int c = 0; c < size; c += 2) {
            sum += nums[c];
        }
        return sum;
    }
};
