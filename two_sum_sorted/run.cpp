class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int size = numbers.size();
        bool found = false;
        
        for (int c = 0; c < size - 1 && !found; c++) {
            for (int d = c + 1; d < size; d++) {
                if (numbers[c] + numbers[d] > target) {
                    break;
                }
                
                else if (numbers[c] + numbers[d] == target) {
                    result.push_back(c+1);
                    result.push_back(d+1);
                    found = true;
                    break;
                }
            }
        }
        return result;
    }
};