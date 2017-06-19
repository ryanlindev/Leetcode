class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool> numbers;
        vector<int> result;
        int size1 = nums1.size();
        int size2 = nums2.size();
        
        for (int c = 0; c < size1; c++) {
            numbers[nums1[c]] = true;
        }
        
        for (int c = 0; c < size2; c++) {
            map<int, bool>::iterator x = numbers.find(nums2[c]);
            if (x != numbers.end() && x->second) {
                x->second = false;
                result.push_back(nums2[c]);
            }
        }
        
        return result;
    }
};
