class Solution {
    public int mySqrt(int x) {
        int result = 0;
        //result =(int) Math.sqrt(x);
        //return result;
        int tmp = 1;
        //long y = 0;
        while(true){
            //y = tmp * tmp;
            if((long)tmp * tmp > x )
                break;
            result ++;
            tmp ++;
        }
        return result;
    }
}