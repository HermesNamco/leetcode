class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        if(x < 0){
            flag = 1;
            x = 0 - x;
        }
        string result = to_string(x);
        std::reverse(result.begin(),result.end());
        try{
            x = stoi(result);
        }catch(exception &e){ //防止int x超出边界
            return 0;
        }
        if(flag == 1)
            x = 0 - x;
        return x;
        
    }
};