class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
                            vector<int>& rightIndex) {
        // code here.
        vector<int>ans;
        for(int i=0;i<leftIndex.size();i++){
            int maxi = INT_MIN;
            int start = leftIndex[i], end = rightIndex[i];
            int perfix_sum = 0;
          for(int j = start;j<=end;j++){
                perfix_sum += arr[j];
                maxi = max(perfix_sum,maxi);
                
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};