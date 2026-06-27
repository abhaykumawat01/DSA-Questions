class Solution {
public:
    void lpsfind(vector<int>&lps,string s){
        int first = 0, second = 1;
        while(second<s.size()){
            if(s[first]==s[second]){
                lps[second] = first+1;
                first++,second++;
            }
            else{
                if(first==0){
                lps[second] = 0;
                second++;
                }
                else{
                    first = lps[first-1];
                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        lpsfind(lps,needle);
        int first = 0, second = 0;
        while(second<needle.size() && first<haystack.size()){
            if(needle[second]==haystack[first])
            first++,second++;
            else{
                if(second==0)
                first++;
                else{
                    second = lps[second-1];
                }
            }
        }
        if(second==needle.size())
        return first-second;
        else
        return -1;
        // int ans = -1;
        // for(int i=0;i<=haystack.size();i++){
        //     int second = 0, first = i;
        //     bool pre = 0;
        //     while(second<needle.size()){
        //         if(haystack[first]==needle[second])
        //         first++,second++;
        //         else{
        //             pre = 1;
        //             break;
        //         }
        //     }
        //     if(!pre){
        //         ans = i;
        //         break;
        //     }
        // }
        //  return ans;
    }
};