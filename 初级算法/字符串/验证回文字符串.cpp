class Solution {
public:
    bool isPalindrome(string s) {
        string process;
        for(int i = 0; i < s.size(); ++ i){        //�����ַ�����ȥ�������ַ�
            if(s[i] >= '0' && s[i] <= '9')
                process.insert(process.end(), s[i]);
            if(s[i] >= 'A' && s[i] <= 'Z')
                process.insert(process.end(), s[i]+32);  //˳�㽫��дת��Сд
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