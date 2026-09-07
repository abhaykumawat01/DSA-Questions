class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int>ans;
        int start = 0, end = arr.size()-1;
        int lowerindex = -1, rightindex = -1;
        //lower bound
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]==x){
                lowerindex = mid;
                end = mid-1;
            }
            else if(arr[mid]>x)
            end = mid-1;
            else
            start = mid+1;
        }
        start = 0, end = arr.size()-1;
        //upper bound
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]==x){
                rightindex = mid;
                start = mid+1;
            }
            else if(arr[mid]>x)
            end = mid-1;
            else
            start = mid+1;
        }
        ans.push_back(lowerindex);
        ans.push_back(rightindex);
        return ans;
    }
};