class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int ans = -1;
        int count = 0;
        int col = arr.size()-1;
        for(int row=0;row<arr.size();row++){
            while(arr[row][col]!=0 && col>=0){
                col--;
            }
            if(count<arr.size()-col-1){
            count = arr.size()-col-1;   
            ans = row;
            }
        }
        return ans;
        
    }
};