class Solution {
private:
    int normalize(char c) {
        return (c >= 'A' && c <= 'Z') ? c : c - 32;
    }

public:
    vector<string> findWords(vector<string>& words) {
        vector<string> results;     // Result vector
        char keymap[91];            // We only use indices 65-90 (inclusive), better to be time efficient than space efficient
        int size = words.size();
        
        // Initialize key map
        keymap['Q'] = keymap['W'] = keymap['E'] = keymap['R'] = keymap['T'] = keymap['Y'] = keymap['U'] = keymap['I'] = keymap['O'] = keymap['P'] = 0;
        
        keymap['A'] = keymap['S'] = keymap['D'] = keymap['F'] = keymap['G'] = keymap['H'] = keymap['J'] = keymap['K'] = keymap['L'] = 1;
        
        keymap['Z'] = keymap['X'] = keymap['C'] = keymap['V'] = keymap['B'] = keymap['N'] = keymap['M'] = 2;
        
        
        // Process
        for (int c = 0; c < size; c++) {
            bool add = true;
            int length = words[c].size();
            int first = keymap[normalize(words[c][0])];
            
            for (int d = 1; d < length; d++) {
                if (keymap[normalize(words[c][d])] != first) {
                    add = false;
                    break;
                }
            }
            
            if (add) {
                results.push_back(words[c]);
            }
        }
        return results;
    }
};
