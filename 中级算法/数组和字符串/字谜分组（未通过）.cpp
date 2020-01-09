class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {	//未通过，sort改变了原字符串的顺序
        
        for(int i = 0; i < strs.size(); ++ i){
            sort(strs[i].begin(),strs[i].end());
        }
        sort(strs.begin(),strs.end());
        
        
        vector< vector<string> > result;
        vector<string> temp;
        if(strs.size() == 0)
            return result;
        
        temp.push_back(strs[0]);
        for(int i = 1; i < strs.size(); ++ i){
            
            if(strs[i] == strs[i - 1])
                temp.push_back(strs[i]);
            else{
                result.push_back(temp);
                temp.clear();
                temp.push_back(strs[i]);
            }    
            
        }
        result.push_back(temp);
        return result;
    }
};