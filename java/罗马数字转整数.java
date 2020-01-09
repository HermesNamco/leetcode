class Solution {
    public int romanToInt(String s) {
        int x = 0;
        int x2 = 0;
        int result = 0;
        char c;
        char c2;
        for(int i = 0; i < s.length() ; i++){
            if(i == 0){
                c = s.charAt(i);
                x = judge(c);
                result = result + x;
                continue;
            }
            c = s.charAt(i);
            c2 = s.charAt(i-1);
            x = judge(c);
            x2 = judge(c2);
            if(x > x2)
                result = result + x - 2 * x2;
            else
                result = result + x;
        }
        return result;
    }
    public int judge(char c){
        int x = 0;
        if(c == 'I'){
            x = 1;
        }
        if(c == 'V'){
            x = 5;
        }
        if(c == 'X'){
            x = 10;
        }
        if(c == 'L'){
            x = 50;
        }
        if(c == 'C'){
            x = 100;
        }
        if(c == 'D'){
            x = 500;
        }
        if(c == 'M'){
            x = 1000;
        }
        return x;
    }
}