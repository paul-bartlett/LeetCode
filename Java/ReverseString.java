/**
 * Write a function that takes a string as input and returns the string reversed.
 */
class Solution {
    public String reverseString(String s) {
        String reversed = new StringBuilder(s).reverse().toString();
        return reversed;
    }
}