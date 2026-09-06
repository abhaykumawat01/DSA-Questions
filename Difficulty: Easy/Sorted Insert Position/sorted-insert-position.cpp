class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        if(arr.size()==1){
            if(arr[0]>=k)
            return 0;
            else
            return 1;
        }
        int start = 0 , end = arr.size()-1;
        int ans = 0;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]==k)
            return mid;
            else if(arr[mid]>k)
            end = mid-1;
            else
            start = mid+1;
            ans = mid;
        }
        if(arr[ans]>k)
        return ans;
        else
        return ans+1;
    }
};