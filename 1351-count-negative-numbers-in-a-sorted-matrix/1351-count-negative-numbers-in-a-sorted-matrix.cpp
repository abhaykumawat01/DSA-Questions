class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int ans = 0;
        int i = 0, j = col-1;
        while(i<row && j>=0){
            if(grid[i][j]<0){
                ans += row-i;
                j--;
            }
            else
            i++;
        }
        return ans;
    }
};