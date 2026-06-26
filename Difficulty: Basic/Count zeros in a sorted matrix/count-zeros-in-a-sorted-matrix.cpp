//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>>& mat) {
        // code here
        int count = 0;
        int row = 0, col = mat.size()-1; // here we forced to stay int type insta
        while(row<mat.size() && col>=0){     // instead of size_t
            if(mat[row][col]==0){
            count += col+1;
                row++;
            }
            else
            col--;
        }
        return count;
    }
};