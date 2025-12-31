// Two sum using Sliding window approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int,int>> temp;

        // store value with original index
        for (int i = 0; i < nums.size(); i++) {
            temp.push_back({nums[i], i});
        }

        // sort basis on value
        sort(temp.begin(), temp.end());

        // logic
        int s = 0;
        int e = nums.size() - 1;
        vector<int> ans;

        while (s < e) {   // FIX: s < e

            int sum = temp[s].first + temp[e].first;

            if (sum == target) {
                // FIX: push original indices
                ans.push_back(temp[s].second);
                ans.push_back(temp[e].second);
                return ans;
            }
            else if (sum > target) {
                e--;    // reduce sum
            }
            else {
                s++;    // increase sum
            }
        }

        return ans;
    }
};