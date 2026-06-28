class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(!s.size())
        return 0;
        int first = 0, second = 1;
        int max_len = 1;
        while(second<s.size()){
            bool p = 0;
            for(int i=first;i<second;i++){
                if(s[i]==s[second])
                p = 1;
            }
            if(p==1)
            first++;
            else{
            max_len = max(max_len,second-first+1);
            second++;
            }
        }
        return max_len;
    }
};