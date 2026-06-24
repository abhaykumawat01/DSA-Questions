class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        // code here
        sort(arr.begin(),arr.end());
        int start = 0 , end = arr.size()-1;
        while(start<end){
            long long value = 1LL*arr[start]*arr[end];
            if(value==target)
            return true;
            else if(value>target)
            end--;
            else
            start++;
        }
        return false;
    }
};