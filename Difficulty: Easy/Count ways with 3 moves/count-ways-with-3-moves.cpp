
class Solution {
  public:
  // here a pattern is form 1,2,4,7,13... next is the sum of last three
    int countWays(int n) {
        // base case
        if(n==1)
        return 1;
        if(n==2)
        return 2;
        if(n==3)
        return 4;
        return countWays(n-1) + countWays(n-2) + countWays(n-3);
        
    }
};
