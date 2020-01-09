class Solution {
    public boolean isValid(String s) {
        Stack<Character> string = new Stack<Character>(); //利用了栈的先入后出特性
        char a;
        for(int i = 0; i < s.length(); i++ ){
            a = s.charAt(i);
            if(string.empty()){
                string.push(a);
                continue;
            }
            if(a == ')' && string.peek() == '(')
                string.pop();
            else if(a == ']' && string.peek() == '[')
                string.pop();
            else if(a == '}' && string.peek() == '{')
                string.pop();
            else
                string.push(a);
        }
        if(string.empty())
            return true;
        return false;
    }
}