class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        int length = s.length();
        
        for (int c = 0; c < length; c++) {
            char ch = s[c];
            if (ch == '(' || ch == '{' || ch == '[') {
                x.push(ch);
            }
            else {
                if (!x.empty()) {
                    char top = x.top();
                    if ((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{')) {
                        x.pop();
                    }
                    else return false;
                }
                else return false;
            }
        }
        return x.empty();
    }
};
