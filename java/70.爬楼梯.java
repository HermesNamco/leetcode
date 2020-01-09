class Solution {
    public int climbStairs(int n) {
        if(n == 1)
            return 1;
        if(n == 0)
            return 1;
        int result =(int) (  (1.0/Math.sqrt(5))*Math.pow(0.5,n+1)*(Math.pow(1+Math.sqrt(5),n+1)-Math.pow(1-Math.sqrt(5),n+1)));
        return result;
    }
}

/*
class Solution {
    public int climbStairs(int n) {
        if(n == 1)
            return 1;
        if(n == 0)
            return 1;
        return climbStairs(n - 1) + climbStairs(n - 2);//µ›πÈº∆À„≥¨ ±
    }
}
*/