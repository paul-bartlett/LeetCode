/**
 * Implement atoi which converts a string to an integer.
 * The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. 
 * Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as 
 * possible, and interprets them as a numerical value. The string can contain additional characters after those that form the 
 * integral number, which are ignored and have no effect on the behavior of this function. If the first sequence of non-whitespace 
 * characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains 
 * only whitespace characters, no conversion is performed. If no valid conversion could be performed, a zero value is returned.
 */
class Solution {
public:
    int myAtoi(string str) {
        string str_int = "";
        int result;
        std::string::iterator it;
        // Ignore whitespace at beginning
        for(it = str.begin(); *it == ' '; ++it) {
            // Do nothing
        }
        // Check if signed
        if(*it == '-' || *it == '+') {
            str_int += *it;
            it++;
        }
        // Add all numbers to string
        while(it != str.end() && isdigit(*it)) {
            str_int += *it;
            it++;
        }
        // Check if anything was added
        if(str_int == "") {
            return 0;
        }
        stringstream ss(str_int);
        ss >> result;
        return result;
    }
};