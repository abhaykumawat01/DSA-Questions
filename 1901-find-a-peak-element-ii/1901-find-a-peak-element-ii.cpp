class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        vector<int>ans;
        int mini = INT_MIN;
        int low = 0, high = col-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int maxrow = 0;
            for(int i=1;i<row;i++){
                if(mat[i][mid]>mat[maxrow][mid])
                maxrow = i;
            }
            int left = (mid>0)?mat[maxrow][mid-1]:mini;
            int right = (mid+1<col)?mat[maxrow][mid+1]:mini;
            if(mat[maxrow][mid]>=left && mat[maxrow][mid]>=right){
                ans.push_back(maxrow);
                ans.push_back(mid);
                return ans;
            }
            else if(right>mat[maxrow][mid])
            low = mid+1;
            else
            high = mid-1;
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};