class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        stack<int>hold;
        int value;
        while(!st.empty()){
            value = st.top();
            hold.push(value);
            st.pop();
        }
        st.push(x);
        while(!hold.empty()){
            value = hold.top();
            st.push(value);
            hold.pop();
        }
        return st;
    }
};