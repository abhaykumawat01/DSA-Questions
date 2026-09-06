class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        int start = 2, end = x;
        int ans = 0;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(mid == x/mid)
            return mid;
            else if(mid>x/mid)
            end = mid-1;
            else
            start = mid+1;
            ans = mid;
        }
        if(ans<=x/ans)
        return ans;
        else
        return ans-1;
    }
};