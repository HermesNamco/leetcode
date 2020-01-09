class Solution {
    public String longestCommonPrefix(String[] strs) {
        String result = "";
        String temp = "";
        if(strs.length == 0)
            return result;
//        if(strs.length == 1)
//            return strs[0];
        for(int i = 1; i < strs[0].length() + 1 ; i++){
            temp = strs[0].substring(0,i);
            for(int j = 0 ; j < strs.length ; j++){
                if(strs[j].startsWith(temp))
                    continue;
                else 
                    return result;
            }
            result = temp;
        }
        return result;
    }
}