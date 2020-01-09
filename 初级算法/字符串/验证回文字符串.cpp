class Solution {
public:
    bool isPalindrome(string s) {
        string process;
        for(int i = 0; i < s.size(); ++ i){        //处理字符串，去掉特殊字符
            if(s[i] >= '0' && s[i] <= '9')
                process.insert(process.end(), s[i]);
            if(s[i] >= 'A' && s[i] <= 'Z')
                process.insert(process.end(), s[i]+32);  //顺便将大写转成小写
            if(s[i] >= 'a' && s[i] <= 'z')
                process.insert(process.end(), s[i]);
        }
        cout << process << endl;
        string::iterator pos = process.begin();
        string::iterator rpos = process.end() - 1;
        while(pos < rpos){
            cout << *pos << *rpos <<endl; 
            if(*pos != *rpos)
                return false;
            ++pos;
            --rpos;
        }
        return true;
    }
};