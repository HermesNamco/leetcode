class Solution {
    public int strStr(String haystack, String needle) {
        int flag = 1;
        if(needle.length() == 0)
            return 0;
        if(haystack.length() == 0)
            return -1;
        for(int i = 0 ; i < haystack.length() - needle.length() + 1; i ++){
            for(int j = 0 ; j < needle.length(); j ++){
                if(needle.charAt(j) == haystack.charAt(i + j)){
                    flag = 1;
                    continue;
                }
                else{
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
                return i;
        }
        return -1;
    }
}