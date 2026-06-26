class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0, high = m*n-1; //due to zero base indexing
        while(low<=high){
            int mid = low + (high-low)/2;
            //convert mid in row and col
            int row = mid/n;
            int col = mid%n;
            if(matrix[row][col]==target)
            return true;
            else if(matrix[row][col]>target)
            high = mid-1;
            else
            low = mid+1;
        }
        return false;
        // int col = matrix[0].size()-1, row = 0; // time complexity is O(m+n)
        // while(row<matrix.size() && col>=0){
        //     if(matrix[row][col]==target)
        //     return true;
        //     else if(matrix[row][col]>target) // move left side
        //     col--;
        //     else
        //     row++;
        // }
        // return false;
    }
};