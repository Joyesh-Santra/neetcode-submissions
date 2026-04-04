class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int top = 0;
        int bot = rows - 1;
        while(top<=bot){
            int find = top + (bot-top)/2;
            if(target > matrix[rows][cols-1]){
                top = top + find;
            }
            else if(target < matrix[rows][0]){
                bot = bot - find;
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
            if(target > matrix[rows][mid]){
                l = l + mid;
            }
            else if(target < matrix[rows[mid]]){
                r = r - mid;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
