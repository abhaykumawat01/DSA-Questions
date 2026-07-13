class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // code here
        stack<string>data;
        for(int i=0;i<arr.size();i++){
            //if stack empty
            if(data.empty())
            data.push(arr[i]);
            //if top string are same
            else if(data.top()==arr[i])
                data.pop();
            else
            data.push(arr[i]);
        }
        return data.size();
    }
};