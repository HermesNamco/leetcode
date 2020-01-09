class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = 0;
        int column = 0;
        vector<vector<int>>::iterator row_pos = matrix.begin();
        int size = (*row_pos).size();
        vector<vector<int>> result(size , vector<int>(size,0));    
        for(row = 0;row < size;++ row){
            for(column = 0;column < size;++ column){
                result[column][size-1 - row] = matrix[row][column];
            }
        }
        result.swap(matrix);
    }
};