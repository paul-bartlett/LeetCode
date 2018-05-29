/**
 * Given an integer n, generate the nth term of the count-and-say sequence.
 * Note: Each term of the sequence of integers will be represented as a string. 
 */
class Solution {
public:
    string countAndSay(int n) {
        // Base case
        if(n <= 1) {
            return "1";
        }
        // Recurse to base and progressively count
        string c_and_s = countAndSay(n-1);
        string count_temp = "";
        int len = c_and_s.length();
        char num = c_and_s[0]; 
        int cnt = 1; 
        for(int i = 1; i < len; ++i) {
            // Count repeated numbers, else start next number
            if(c_and_s[i] == num) {
                ++cnt;
            } else {
                count_temp += to_string(cnt) + num;
                num = c_and_s[i];
                cnt = 1;
            }
        }
        // Last pass
        count_temp += to_string(cnt) + num;
        return count_temp;
    }
};