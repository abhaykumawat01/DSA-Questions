class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>reverse;
        for(int i=0;i<s.size();i++){
            reverse.push(s[i]);
        }
        int index = 0;
        while(!reverse.empty()){
            s[index++] = reverse.top();
            reverse.pop();
        }
    }
};