class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxi = INT_MIN;
        int index = -1;
        int first = 0, second = n-1;
        int water = 0;
        int leftmost = 0, rightmost = 0;
        for(int i=0;i<n;i++){
            if(height[i]>maxi){
                maxi = height[i];
                index = i;
            }
        }
        while(first<index){
            if(leftmost-height[first]>0)
            water+=leftmost-height[first];
            leftmost = max(leftmost,height[first]);
            first++;
        }
        while(second>index){
            if(rightmost-height[second]>0)
            water+=rightmost-height[second];
            rightmost = max(rightmost,height[second]);
            second--;
        }
        return water;

    }
};