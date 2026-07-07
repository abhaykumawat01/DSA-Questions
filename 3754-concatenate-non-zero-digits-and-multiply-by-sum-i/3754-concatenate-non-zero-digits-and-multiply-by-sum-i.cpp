class Solution {
public:
    long long sumAndMultiply(int n) {
        int rem;
        int mul = 1;
        int ans = 0;
        int sum = 0;
        while(n){
            rem = n%10;
            if(rem!=0){
                sum += rem;
                ans += rem*mul;
                mul *= 10;
            }
            n /= 10;
        }
        long long v1 = ans;
        v1 *= sum;
        return v1;
    }
};