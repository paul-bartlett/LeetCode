class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();
		// Push close bracket to compare when poping from stack
        for(char c : s.toCharArray()) {
            if(c == '(') {
                stack.push(')');
            } else if(c == '[') {
                stack.push(']');
            } else if(c == '{') {
                stack.push('}');
            } else if(stack.empty() || stack.pop() != c) {
                return false;
            }
        }
        return stack.empty();
    }
}