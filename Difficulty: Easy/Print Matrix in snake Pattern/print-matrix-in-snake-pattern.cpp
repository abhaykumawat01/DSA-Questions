class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        // code here
        vector<int>ans;
        int j=0;
        for(int i=0;i<matrix.size();i++){
            if(i%2!=0){
                j = matrix.size()-1;
                while(j>=0){
                    ans.push_back(matrix[i][j]);
                    j--;
                }
            }
            else{
                j = 0;
                while(j<=matrix.size()-1){
                    ans.push_back(matrix[i][j]);
                    j++;
                }
            }
        }
        return ans;
    }
};