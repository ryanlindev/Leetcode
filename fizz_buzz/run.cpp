
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int c = 1; c <= n; c++) {
            if (!(c % 3) && !(c % 5))
                result.push_back("FizzBuzz");
            else if (!(c % 3))
                result.push_back("Fizz");
            else if (!(c % 5))
                result.push_back("Buzz");
            else
                result.push_back(to_string(c));
        }
        return result;
    }
};