class Solution {
    public boolean isPalindrome(int x) {
        int r = 0;
        int a = x;
        if(x < 0)
            return false;
        while( a > 0){
            r = r * 10 + a % 10;
            a = a / 10;
        }
        if( r == x )
            return true;
        return false;
    }
}