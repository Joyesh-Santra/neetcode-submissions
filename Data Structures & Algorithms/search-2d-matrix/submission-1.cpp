class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int top = 0;
        int bot = rows - 1;
        while(top<=bot){
            int row = top + (bot-top)/2;
            if(target > matrix[row][cols-1]){
                top = top + 1;
            }
            else if(target < matrix[row][0]){
                bot = bot - 1;
            }
            else{
                break;
            }
        }
        if(!(top<=bot)){
            return false;
        }
        int l = 0;
        int r = cols - 1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(target > matrix[row][mid]){
                l = l + 1;
            }
            else if(target < matrix[row][mid]){
                r = r - 1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
