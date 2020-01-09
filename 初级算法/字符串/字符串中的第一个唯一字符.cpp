class Solution {
public:
    int firstUniqChar(string s) {
        string::iterator pos = s.begin();
        int count = 0;
        while(pos != s.end()){
            for(int i = 0;i < s.size(); ++ i){
                if(*pos == s.at(i))
                    ++ count;
                if(count > 1)     //查至存在两个就是重复，不用全部遍历，提高效率
                    break;
            }
            if(count == 1)
                return pos-s.begin();
            ++ pos;
            count = 0;
        }
        return -1;
    }
};