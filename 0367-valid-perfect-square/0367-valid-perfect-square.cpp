class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0 || num==1)
        return true;
        int start = 2, end = num;
        while(start<=end){
            // int mid = start + (end-start)/2;
            // float value = (float)num/mid;
            // /*A standard 32-bit float in C++ only has 24 bits of precision (about 7 decimal digits). Since a 32-bit signed integer (int) can hold values up to 2,147,483,647 (10 digits), converting a large int to a float can cause a loss of precision.*/
            // if(mid==value)
            // return true;
            // else if(mid>value)
            // end = mid-1;
            // else
            // start = mid+1;
            long long mid = start + (end-start)/2;
            long long sqr = mid*mid;
            if(sqr==num)
            return true;
            else if(sqr>num)
            end = mid-1;
            else
            start = mid+1;
        }
        return false;
    }
};