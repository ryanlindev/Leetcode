class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq1;
        unordered_map<int, int> freq2;
       	vector<int> result;
        
        for (int n : nums1)
            freq1[n]++;
        
        for (int n : nums2)
            freq2[n]++;
        
        for (auto x = freq1.begin(); x != freq1.end(); x++) {
            auto y = freq2.find(x->first);
            if (y != freq2.end()) {
                int min = (x->second < y->second) ? x->second : y->second;
                for (int c = 0; c < min; c++) {
                    result.push_back(x->first);
                }
            }
        }
        
        return result;
    }
};