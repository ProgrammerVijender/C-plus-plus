// leetcode 930 :- Binary Subarrays with sum

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int target) {

        int s = 0;
        int e = 0;
        int sum = 0;
        int prefixZero = 0;
        int ans = 0;

        while (e < nums.size()) {

            sum += nums[e];

            // minimise window
            while (s < e && (sum > target || nums[s] == 0)) {

                if (nums[s] == 1) {
                    prefixZero = 0;
                }
                else {
                    prefixZero += 1;
                }

                sum -= nums[s];
                s++;
            }

            // answer
            if (sum == target) {
                ans += prefixZero + 1;
            }

            e++;
        }

        return ans;
    }
};