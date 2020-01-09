class Solution {
public:
    int strStr(string haystack, string needle) {
        string::iterator h_pos = haystack.begin();
        string::iterator e_pos = needle.begin();
        if(needle.empty())
            return 0;
        while(h_pos != haystack.end()){			//BF算法实现，效率较低；更高可采用KMP,BM等算法
            for(int i = 0; i < needle.size(); ++i){
                if(*(h_pos+i) != *e_pos){
                    e_pos = needle.begin();
                    break;
                }else{
                    ++ e_pos;
                }
                if(e_pos == needle.end())
                    return h_pos - haystack.begin();
            }
            ++ h_pos;
        }
        return -1;
    }
};