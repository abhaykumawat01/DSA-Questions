class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>ans;
        vector<int>fans;
        ans.push(arr[0]);
    for(int i=1;i<arr.size();i++){
        //stack is empty
        if(ans.empty()){
            ans.push(arr[i]);
        }
        //upcoming elements is positive 
       else if(arr[i]>=0){
            //top of the stack is non negative
            if(ans.top()>=0){
                ans.push(arr[i]);
            }
            //top of the stack is negative
            else{
                ans.pop();
            }
        }
        //upcoming element is negative
        else{
            //top of the stack is non negative
            if(ans.top()>=0){
                ans.pop();
            }
            //top of the stack is negative
            else{
                ans.push(arr[i]);
            }
        }
    }
    stack<int>newstack;
    while(!ans.empty()){
        newstack.push(ans.top());
        ans.pop();
    }
    while(!newstack.empty()){
        fans.push_back(newstack.top());
        newstack.pop();
    }
    return fans;
    }
};