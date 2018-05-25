/**
 * Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.
 */
class Solution {
public:
    // Convert roman sequence to integer
    int romanToInt(string s) {
        int sum = 0;
        int cur;
        int nex;
        int len = s.length();
        for(int i = 0; i < len - 1; i++) {
            cur = romanToVal(s[i]);
            nex = romanToVal(s[i+1]);
            // Subtract value if smaller letter comes first
            if(cur < nex) {
                sum -= cur;
            } else {
                sum += cur;
            }
        }
        return sum + romanToVal(s[len-1]);
    }
    
    // Convert roman character to integer
    int romanToVal(char c) {
        switch(c) {
            case 'M': 
                return 1000;
            case 'D': 
                return 500;
            case 'C': 
                return 100;
            case 'L': 
                return 50;
            case 'X': 
                return 10;
            case 'V': 
                return 5;
            case 'I': 
                return 1;
        }
    }
};