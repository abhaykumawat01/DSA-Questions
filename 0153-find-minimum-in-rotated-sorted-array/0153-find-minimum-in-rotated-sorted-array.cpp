class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        int ans = INT_MAX;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[start]<=nums[mid] && nums[mid]<=nums[end]) 
            end = mid-1;
            else if(nums[start]<=nums[mid])
            start = mid+1;
            else if(nums[start]>nums[mid])
            end = mid-1;
            ans = min(ans,nums[mid]);
        }
        return ans;
    }
};