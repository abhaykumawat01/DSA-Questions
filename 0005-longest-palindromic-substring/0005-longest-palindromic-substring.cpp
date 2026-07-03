// MANACHER ALGORITHM
class Solution {
public:
    string longestPalindrome(string s) {
        string temp = "#";
        for(int i=0;i<s.size();i++){
            temp += s[i];
            temp += "#";
        }
        int center = 0, maxlen = INT_MIN; // center is the index value in given string crossponding to the maxlen substring center
        int size = temp.size();
        vector<int>p(size,0); // p contain the maximum palindrom stirng at the ith index
        p[0] = 0;
        int l = 0, r = 0; // l is the maxlen string left most index and r is the right most index
        for(int i=1;i<size;i++){
            int k; // numbers of step at right or left side from the i
            if(i>r)
            k = 0;
            else{
                int j = l + (r-i);//j is the mirror image of the i taking mirror at the maxlen substring index
                if(j-p[j]>l){
                    p[i] = p[j];
                    continue;
                }
                else
                k = r-i;//mean at those number of step the string is plaindromic taking center is i
            }
            // checking the more char right and left are equal or not mean is this possible to increase the size of maxlen 
            while(i-k>=0 && i+k<size && temp[i-k]==temp[i+k]){
                k++;
            }
            k--;
            p[i] = k;
            //update the maxlen and the center from where we find the maximum length palindrom substring
            if(p[i]>maxlen){
                maxlen = p[i];
                center = i/2;
            }
            //update l and r
            if(i+k>r){
                l = i-k;
                r = i+k;
            }
        }
        return s.substr(center - (maxlen/2), maxlen);
    }
};
