class Solution {
  public:
  // a>b
    int GCD(int a, int b){
        //base case
        if(b==0)
        return a;
    
        return GCD(b,a%b);
    }
    int gcd(int a, int b) {
        // code here
        if(a>b)
        return GCD(a,b);
        else
        return GCD(b,a);
    }
};
