class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int> > result;
        if(numRows == 0)
            return result;
        result.push_back(vector<int>(1,1));
        if(numRows == 1)
            return result;
        result.push_back(vector<int>(2,1));
        if(numRows == 2)
            return result;
        
        int flag = 3;
        while(flag <= numRows){
            vector<int> temp ;
            vector< vector<int> >::iterator pos = result.begin() + flag - 2;
            for(int i = 0; i < flag; ++ i){
                vector<int >::iterator vecPos = (*pos).begin() + i;
                if(i == 0)
                    temp.push_back(1);
                else if(i == flag - 1)
                    temp.push_back(1);
                else{
                    temp.push_back(*vecPos + *(vecPos - 1));
                }
            }
            result.push_back(temp);
            ++ flag;
        }
        return result;
    }
};