class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 1;
        if(!s.size())
        return 0;
        int left = 0, right = 1;
        while(right<s.size()){
            for(int i=left;i<right;i++){
                if(s[right]==s[i])
                left = i+1;
            }
            ans = max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};