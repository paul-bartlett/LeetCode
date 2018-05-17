/**
 * Determine whether an integer is a palindrome. 
 * An integer is a palindrome when it reads the same backward as forward.
 */
class Solution {
public:
    bool isPalindrome(int x) {
        // Convert to string for comparing char by char
        string palindrome = std::to_string(x);
        for(int i = 0; i < palindrome.length() / 2; i++) {
            // Check if both sides of string match
            if(palindrome[i] != palindrome[palindrome.length() - i - 1]) {
                return false;
            }
        }
        return true;
    }
};