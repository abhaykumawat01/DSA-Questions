class Solution {
  public:
  
  void merge(vector<int>&arr,int l,int mid,int r){
      vector<int>temp(r-l+1);
      int index = 0;
      int left = l, right = mid+1;
      //sort and conqure
      while(left<=mid && right<=r){
          if(arr[left]<=arr[right]){
              temp[index] = arr[left];
              left++,index++;
          }
          else{
              temp[index] = arr[right];
              right++,index++;
          }
      }
      //if left is non empty
      while(left<=mid){
          temp[index] = arr[left];
          index++,left++;
      }
      //if right is non empty
      while(right<=r){
          temp[index] = arr[right];
          index++,right++;
      }
      //copy in the main array
      index = 0;
      while(l<=r){
          arr[l] = temp[index];
          l++,index++;
      }
  }
  
    void mergeSort(vector<int>& arr, int l, int r) {
        //base case
        if(l>=r)
        return;
        
        int mid = l + (r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};