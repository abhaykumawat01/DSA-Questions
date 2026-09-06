class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        if(n==0 || n==1){
            return n;
        }
        int start = 0, end = n;
        int ans = 0;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(mid == n/mid)
            return mid;
            else if(mid > n/mid)
            end = mid-1;
            else
            start = mid+1;
            ans = mid;
        }
        if(ans <= n/ans)
        return ans;
        else
        return ans-1;
    }
};