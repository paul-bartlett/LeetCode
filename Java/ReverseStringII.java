/**
 * Given a string and an integer k, you need to reverse the first k 
 * characters for every 2k characters counting from the start of the 
 * string. If there are less than k characters left, reverse all of 
 * them. If there are less than 2k but greater than or equal to k 
 * characters, then reverse the first k characters and left the other 
 * as original.
 */
class Solution {
    public String reverseStr(String s, int k) {
        StringBuilder reverse = new StringBuilder();
        int len = s.length();
        for(int i = 0; i < len; i+=(2*k)) {
            // Reverse the rest when less than k characters
            if(i+k > len) {
                reverse.append(reverse(s.substring(i, len)));
            } else {
                reverse.append(reverse(s.substring(i, i+k)));
                // Append rest of non-reversed characters
                if(i+(2*k) < len) {
                    reverse.append(s.substring(i+k, i+(2*k)));
                } else {
                    reverse.append(s.substring(i+k, len));
                }
            }
        }
        return reverse.toString();
    }
    // Reverses a string 
    public String reverse(String s) {
        String reversed = new StringBuilder(s).reverse().toString();
        return reversed;
    }
}