class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        if(arr.size()==1){
            if(arr[0]<=x)
            return 0;
            else
            return -1;
        }
        int start = 0 , end = arr.size()-1;
        int ans = 0;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]<=x)
            start = mid+1;
            else
            end = mid-1;
            ans = mid;
        }
        if(arr[ans]>x)
        return ans-1;
        else
        return ans;
    }
};
