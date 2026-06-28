class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int maxi = INT_MIN;
        int current_sum = 0;
        for(int i=0;i<k;i++){
            current_sum += arr[i];
        }
        maxi = max(current_sum,maxi);
        for(int i=k;i<arr.size();i++){
            current_sum += arr[i] - arr[i-k];
            maxi = max(maxi,current_sum);
        }
        return maxi;
    }
};