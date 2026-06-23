class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int ans = INT_MIN;
        int prefix = 0;
        for(int i=0;i<arr.size();i++){
            prefix += arr[i];
            ans = max(ans,prefix);
            if(prefix<0)
            prefix = 0;
        }
        return ans;
    }
};