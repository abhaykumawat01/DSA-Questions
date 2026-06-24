class Solution {
public:
    vector<int> EqualSum(vector<int> arr) {
        vector<int> ans;
        int mini = INT_MAX;
        int flag = 0;
        int position = -1;
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
            sum += arr[i];

        int prefix_sum = 0;
        for (int i = 0; i < (int)arr.size() - 1; i++) {
            prefix_sum += arr[i];
            int suffix_sum = sum - prefix_sum;
            int diff = abs(suffix_sum - prefix_sum);

            if (diff < mini) {
                mini = diff;
                position = i + 2;
                flag = (suffix_sum >= prefix_sum) ? 0 : 1;
            }
        }

        ans.push_back(mini);
        ans.push_back(position);
        ans.push_back(flag);
        return ans;
    }
};