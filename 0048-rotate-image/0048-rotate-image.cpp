class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int row=0;row<matrix.size()-1;row++){
            for(int col=row+1;col<matrix.size();col++)
              swap(matrix[row][col],matrix[col][row]);
        }
            for(int row=0;row<matrix.size();row++){
                int first = 0, last = matrix.size()-1;
                while(first<last){
                    swap(matrix[row][first],matrix[row][last]);
                    first++,last--;
                }
            }
    }
};