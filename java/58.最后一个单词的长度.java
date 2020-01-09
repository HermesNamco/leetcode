class Solution {
    public int lengthOfLastWord(String s) {
        int pos = 0;;
        int count = 0;
        char tmp;
        if(s == "")
            return 0;
        for(int i = 0;i < s.length();i ++){
            tmp = s.charAt(i);
            if(tmp != ' ')
                pos = i;  
        }
        for(int j = 0;j < s.length();j ++){
            if(pos - j == -1)
                break;
            tmp = s.charAt(pos - j);
            if(tmp != ' ')
                count ++;
            else
                break;
        }
        return count;
        
    }
}