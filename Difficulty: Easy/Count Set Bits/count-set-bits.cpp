class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int count = 0;
        while(n){ // is already store in binary form so we use bitwise opreation on it
            count += (n&1);
            n >>= 1;
        }
        return count;
    }
};