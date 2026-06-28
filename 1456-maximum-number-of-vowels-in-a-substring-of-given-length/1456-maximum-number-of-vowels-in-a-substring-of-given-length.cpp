class Solution {
public:
    int maxVowels(string s, int k) {
        int maxi = INT_MIN;
        int tv = 0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u')
            tv++;
        }
        maxi = max(maxi,tv);
        for(int i=k;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u'){
                if(s[i-k]=='a' || s[i-k]=='e' ||s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u')
                tv = tv;
                else
                tv++;

            }
            else{
                if(s[i-k]=='a' || s[i-k]=='e' ||s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u')
                tv--;
            }
            maxi = max(maxi,tv);
        }
        return maxi;
    }
};