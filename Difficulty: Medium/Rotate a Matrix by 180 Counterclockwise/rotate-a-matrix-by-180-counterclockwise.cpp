class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
            int first = 0, last = mat.size()-1;
            while(first<last){
                for(int col=0;col<mat.size();col++)
                    swap(mat[first][col],mat[last][col]);
                    first++,last--;
            }
            
            for(int row=0;row<mat.size();row++){
                int start = 0, end = mat.size()-1;
                while(start<end){
                swap(mat[row][start],mat[row][end]);
                start++,end--;
                }
            }
    }
};