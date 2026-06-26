class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int rotation = k%mat[0].size();
        vector<vector<int>>ans(mat.size(), vector<int>(mat[0].size()));
        if(rotation==0)
        return mat;
        for(int i=rotation;i<mat[0].size();i++){ // i repersent col
            for(int row=0;row<mat.size();row++){ // j repersent row
                ans[row][i-rotation] = mat[row][i];
            }
        }
        for(int col=0;col<rotation;col++){
            for(int row = 0;row<mat.size();row++)
            ans[row][mat[0].size()-rotation+col] = mat[row][col];
        }
        return ans;
    }
};