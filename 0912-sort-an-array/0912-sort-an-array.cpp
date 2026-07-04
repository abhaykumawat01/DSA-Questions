class Solution {

void merge(vector<int>&arr,int start,int mid,int end){
    vector<int>temp(end-start+1);
    int index = 0;
    int left = start, right = mid+1;
    //sort and combined
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index] = arr[left];
            index++,left++;
        }
        else{
            temp[index] = arr[right];
            index++,right++;
        }
    }
    // left part is non empty 
    while(left<=mid){
        temp[index] = arr[left];
        left++,index++;
    }
    //right part is non empty
    while(right<=end){
        temp[index] = arr[right];
        index++,right++;
    }
    // copy temp in the arr
    index = 0;
    while(start<=end){
        arr[start] = temp[index];
        start++,index++;
    }
}

void mergesort(vector<int>&arr,int start,int end){
    //base case
    if(start>=end)
    return;
    int mid = start + (end-start)/2;
    mergesort(arr,start,mid); //left part
    mergesort(arr,mid+1,end); //right part
    merge(arr,start,mid,end); // conqure with sorting
}
public:
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};