class Solution {
  public:

    vector<int> bracketNumbers(string &s) {
        // code here
        vector<int>ans;
        int count = 0;
        stack<int>a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
                a.push(count);
                ans.push_back(count);
            }
            else if(s[i]==')'){
                ans.push_back(a.top());
                a.pop();
            }
        }
        return ans;
    }
};