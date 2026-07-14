class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>ans;
        for(int i=0;i<s.size();i++){
            //stack is empty
            if(ans.empty())
            ans.push(s[i]);
            else if(ans.top()=='('){
                if(s[i]==')')
                ans.pop();
                else
                ans.push(s[i]);
            }
            else
            ans.push(s[i]);
        }
        return ans.size();
    }
};