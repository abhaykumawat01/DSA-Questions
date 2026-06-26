class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector<int>ans;
        int missing, duplicate;
        int totalsum = 0;
        int actualsum = 0;
        int actualsquare =0,totalsquare =0;
        for(int i=0;i<arr.size();i++){
            actualsum += arr[i];
            actualsquare += arr[i]*arr[i];
            totalsum += i+1;
            totalsquare += (i+1)*(i+1);
        }
        int value1 = totalsum - actualsum; //value1 = missing-duplicate
        int value2 = totalsquare - actualsquare;//value2 = missing^2 - duplicate^2
        
        int value3 = value2/value1;// value3 = missing+duplicate
        
        missing = (value1+value3)/2;
        duplicate = (value3-value1)/2;
        ans.push_back(duplicate);
        ans.push_back(missing);
        return ans;
    }
};