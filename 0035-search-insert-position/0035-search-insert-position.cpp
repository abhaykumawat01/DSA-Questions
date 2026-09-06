class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==1){
            if(nums[0]==target)
            return 0;
            else if(nums[0]>target)
            return 0;
            else
            return 1;
        }
        int start = 0, end = nums.size()-1;
        int ans = 0;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
            end = mid-1;
            else
            start = mid+1;
            ans = mid;
        }
        if(nums[ans]>target)
        return ans;
        else
        return ans+1;
    }
};