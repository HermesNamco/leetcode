class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<char>>::iterator row_pos;
        vector<char>::iterator pos;
        unordered_map<char,int> m;
        for(int i = 0;i < 9;++ i){           //检查每行
            for(int j = 0;j < 9;++ j){
                if(board[i][j] == '.')
                    continue;
                if(m.find(board[i][j]) != m.end())
                    return false;
                else
                    m.insert({board[i][j],0});
            }
            m.clear();
        }
        for(int i = 0;i < 9;++ i){		//检查每列
            for(int j = 0;j < 9;++ j){
                if(board[j][i] == '.')
                    continue;
                if(m.find(board[j][i]) != m.end())
                    return false;
                else
                    m.insert({board[j][i],0});
            }
            m.clear();
        }
        for(int i = 0;i < 3;++ i){		//检查第一块，以下类推
            for(int j = 0;j < 3;++ j){
                if(board[i][j] == '.')
                    continue;
                if(m.find(board[i][j]) != m.end())
                    return false;
                else
                    m.insert({board[i][j],0});
            }
        }
        m.clear();
        for(int i = 0;i < 3;++ i){
            for(int j = 3;j < 6;++ j){
                if(board[i][j] == '.')
                    continue;
                if(m.find(board[i][j]) != m.end())
                    return false;
                else
                    m.insert({board[i][j],0});
            }
        }
        m.clear();
        for(int i = 0;i < 3;++ i){
            for(int j = 6;j < 9;++ j){
                if(board[i][j] == '.')
                    continue;
                if(m.find(board[i][j]) != m.end())
                    return false;
                else
                    m.insert({board[i][j],0});
            }
        }
        m.clear();
        for(int i = 3;i < 6;++ i){
            for(int j = 0;j < 3;++ j){
                if(board[i][j] == '.')
                    continue;
                if(m.find(board[i][j]) != m.end())
                    return false;
                else
                    m.insert({board[i][j],0});
            }
        }
        m.clear();
        for(int i = 3;i < 6;++ i){
            for(int j = 3;j < 6;++ j){
                if(board[i][j] == '.')
                    continue;
                if(m.find(board[i][j]) != m.end())
                    return false;
                else
                    m.insert({board[i][j],0});
            }
        }
        m.clear();
        for(int i = 3;i < 6;++ i){
            for(int j = 6;j < 9;++ j){
                if(board[i][j] == '.')
                    continue;
                if(m.find(board[i][j]) != m.end())
                    return false;
                else
                    m.insert({board[i][j],0});
            }
        }
        m.clear();
        for(int i = 6;i < 9;++ i){
            for(int j = 0;j < 3;++ j){
                if(board[i][j] == '.')
                    continue;
                if(m.find(board[i][j]) != m.end())
                    return false;
                else
                    m.insert({board[i][j],0});
            }
        }
        m.clear();
        for(int i = 6;i < 9;++ i){
            for(int j = 3;j < 6;++ j){
                if(board[i][j] == '.')
                    continue;
                if(m.find(board[i][j]) != m.end())
                    return false;
                else
                    m.insert({board[i][j],0});
            }
        }
        m.clear();
        for(int i = 6;i < 9;++ i){
            for(int j = 6;j < 9;++ j){
                if(board[i][j] == '.')
                    continue;
                if(m.find(board[i][j]) != m.end())
                    return false;
                else
                    m.insert({board[i][j],0});
            }
        }
        m.clear();
        return true;
    }
};