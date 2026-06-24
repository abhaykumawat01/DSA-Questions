class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
        for(int i=0;i<mat.size()-1;i++){
            for(int j=i+1;j<mat.size();j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        return mat;
    }
};