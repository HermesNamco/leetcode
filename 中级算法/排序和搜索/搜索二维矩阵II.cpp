class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {	//效率低
        int rowPos = 0;
        int colPos = 0;
        
        bool flag = false;
        
        if(matrix.empty())
            return false;
        
        while(rowPos < matrix.size() && colPos < matrix[0].size()){	//先找对角线，缩小搜索范围
            if(target > matrix[rowPos][colPos]){
                ++ rowPos;
                ++ colPos;
            }else if(target == matrix[rowPos][colPos])
                return true;
            else{
                flag = true;
                break;
            }
        }
        if(rowPos >= matrix.size() && colPos < matrix[0].size()){	//处理行列不相等阵的情况
            -- rowPos;
        }else if(rowPos < matrix.size() && colPos >= matrix[0].size()){
            -- colPos;
        }else if(rowPos >= matrix.size() && colPos >= matrix[0].size())
            return false;
        if(flag){
            for(int i = 0;i < colPos; ++ i){
                for(int j = rowPos;j < matrix.size();++ j){
                    if(matrix[j][i] == target)
                        return true;
                }
            }
            for(int i = 0;i < rowPos; ++ i){
                for(int j = colPos;j < matrix[0].size();++ j){
                    if(matrix[i][j] == target)
                        return true;
                }
            }
        }else{
            for(int i = colPos;i < matrix[0].size(); ++ i){
                if(matrix[rowPos][i] == target)
                    return true;
            }
            for(int i = rowPos + 1;i < matrix.size(); ++ i){
                if(matrix[i][colPos] == target)
                    return true;
            }
        }
        
        return false;
    }
};


/*从矩阵右上开始搜索更合理
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix.size();
        if(col < 1) return false;
        int row = matrix[0].size();
        int i = 0, j = row - 1;
        while(i < col && j >= 0)
        {
            if(matrix[i][j] == target)
                return true;
            if(matrix[i][j] < target)
                i++;
            else
                j--;
        }
        return false;
    }
};
*/