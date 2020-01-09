class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> binX;
        vector<int> binY;
        transToBin(x,binX);
        transToBin(y,binY);
        vector<int>::iterator binXpos = binX.begin();
        vector<int>::iterator binYpos = binY.begin();
        int flag = 0;
        while(binXpos != binX.end() || binYpos != binY.end()){
            if(binXpos == binX.end() && binYpos != binY.end()){
                if(*binYpos == 1)
                    ++ flag;
                ++ binYpos;
            }else if(binXpos != binX.end() && binYpos == binY.end()){
                if(*binXpos == 1)
                    ++ flag;
                ++ binXpos;
            }else{
                if(*binXpos != *binYpos)
                    ++ flag;
                ++ binXpos;
                ++ binYpos;
            }
        }
        return flag;
        
    }
    void transToBin(int num, vector<int> &result){
        while(num != 0){
            int temp = num % 2;
            result.push_back(temp);
            num = num / 2;
        }
    }
};