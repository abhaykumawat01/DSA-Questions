class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            return findMedianSortedArrays(nums2,nums1);
        }
        int n = nums1.size();
        int m = nums2.size();
        int low = 0, high = n;
        while(low<=high){
            int i = low + (high-low)/2;
            int j = (m+n+1)/2 - i;
            //nums1 left max and right min are
             int max_left1 = (i == 0) ? INT_MIN : nums1[i - 1];
            int min_right1 = (i == n) ? INT_MAX : nums1[i];
            
            //nums2 left max and right min are
            int max_left2 = (j == 0) ? INT_MIN : nums2[j - 1];
            int min_right2 = (j == m) ? INT_MAX : nums2[j];
            if(max_left1>min_right2)
            high = i-1;
            else if(max_left2>min_right1)
            low = i+1;
            else{
                if((m+n)%2==1)
                return max(max_left1,max_left2);
                else
                return (float)(max(max_left1,max_left2) + min(min_right1,min_right2))/2;
            }
        }
        return -1;
    }
};