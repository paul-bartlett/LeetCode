/**
 * Given a 32-bit signed integer, reverse digits of an integer.
 * Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. 
 * For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
 */
class Solution {
public:
    int reverse(int x) {
        string reverse = to_string(x);
        int result;
        // Reverse number after sign if negative
        if(x < 0) {
            std::reverse(reverse.begin()+1, reverse.end());
        } else {
            std::reverse(reverse.begin(), reverse.end());
        }
        // Catches integer overflow
        try {
            result = std::stoi(reverse);
        }
        catch (const std::out_of_range& e) {
            result = 0;
        }
        return result;
    }
};