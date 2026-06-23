class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
         int new_target = target - arr[i];
         if(new_target>0){
           int first = i+1, last = arr.size()-1;
           while(first<last){
               if(arr[first]+arr[last]==new_target)
               return true;
               else if(arr[first]+arr[last]>new_target)
               last--;
               else
               first++;
           }
        }
        
       }
       return false;
        
    }
};