class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=size(matrix)-1;i>=0;i--){
            if(target>=matrix[i][0]){
                for(int j=0;j<size(matrix[i]);j++){
                    if(target==matrix[i][j]) return true;
                }
            }
        }
        return false;
    }
};
