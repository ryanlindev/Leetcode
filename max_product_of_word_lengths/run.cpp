class Solution {
private:
    int hasCommonLetters(string& a, string& b) {
        vector<bool> letters(26, false);
        
        for (char c : a) {
            letters[c - 'a'] = true;
        }
        for (char c : b) {
            if (letters[c - 'a'])
                return true;
        }
        return false;
    }
    
public:
    int maxProduct(vector<string>& words) {
        int size = words.size();
        int max = 0;
        
        for (int c = 0; c < size - 1; c++) {
            for (int d = c+1; d < size; d++) {
         		if (!hasCommonLetters(words[c], words[d])) {
                    int length = words[c].length() * words[d].length();
                    max = (length > max) ? length : max;
                }       
            }
        }
        return max;
    }
};