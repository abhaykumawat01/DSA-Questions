class Solution {
public:
    bool power(int n,long long pow){
        //base case
        if(pow==n)
            return 1;
        if(pow>n)
            return 0;
        pow *= 4;
        return power(n,pow);
    }
    bool isPowerOfFour(int n) {
        return power(n,1);
    }
};