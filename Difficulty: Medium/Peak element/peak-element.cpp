class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int start = 1, end = arr.size()-2;
        if(arr.size()==1)
        return 0;
        else if(arr[start-1]>arr[start])
        return 0;
        else if(arr[end+1]>arr[end])
        return end+1;
        else{
            while(start<=end){
                int mid = start + (end-start)/2;
                if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
                return mid;
                else if(arr[mid]>arr[mid+1])
                end = mid-1;
                else
                start = mid+1;
            }
        }
        return 0;
    }
};