class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int row = 0, col = mat[0].size()-1;
        while(row<mat.size() && col >=0){
            if(mat[row][col]==x)
            return true;
            else if(mat[row][col]>x)
            col--;
            else
            row++;
        }
        return false;
    }
};