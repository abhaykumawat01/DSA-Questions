class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;
        for(int i=0;i<=haystack.size();i++){
            int second = 0, first = i;
            bool pre = 0;
            while(second<needle.size()){
                if(haystack[first]==needle[second])
                first++,second++;
                else{
                    pre = 1;
                    break;
                }
            }
            if(!pre){
                ans = i;
                break;
            }
        }
         return ans;
    }
};