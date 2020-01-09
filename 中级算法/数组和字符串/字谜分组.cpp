class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector< vector<string> > result;
        unordered_map<string , vector<string>> sortStr;	
		
        for(string s : strs){			//相当于for(int i = 0;i < strs.size();i++){string s = strs[i]}
            string temp = s;
            sort(temp.begin(), temp.end());
            sortStr[temp].push_back(s);	//
        }
        for(auto s : sortStr){			//auto 自动类型，这里相当于pair<string ,vector<string> >
            result.push_back(s.second);
        }
        return result;
    }
};