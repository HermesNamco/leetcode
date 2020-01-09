class Solution {
    public String countAndSay(int n) {
        ArrayList<Integer> result = solve(n);
        //int[] d = new int[result.size()];  
        String s = "";
        for(int i = 0;i < result.size();i++){   //ArrayList×ªString
            s = s  + result.get(i);  
        }
        //String s = Arrays.toString(d);
        return s;
    }
    public ArrayList<Integer> solve(int n){
        ArrayList<Integer> a = new ArrayList<Integer>();
        ArrayList<Integer> result = new ArrayList<Integer>();
        int res = 0;
        int count = 1;
        int temp = 0;
        if(n == 1){
            result.add(1);
            return result;
        }else{
            a = solve( n - 1 );  //µÝ¹é
            for(int i = 0 ; i < a.size() ; i ++){
                if( i == 0 && a.size() == 1){
                    temp = a.get(0);
                    res = temp;
                    result.add(count);
                    result.add(res);
                    continue;
                }
                if( i == 0){
                    temp = a.get(0);
                    res = temp;
                    continue;
                }
                temp = a.get(i);
                if( res == temp )
                    count ++;
                else{
                    result.add(count);
                    result.add(res);
                    count = 1;
                    res = temp;
                }
                if( i == a.size() - 1){
                    result.add(count);
                    result.add(temp);
                }
            }
            return result;    
        }
        
    }
    
    
}