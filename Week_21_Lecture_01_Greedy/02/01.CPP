// Sliding Window Maximum (leetcode 239)

#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {

    deque<int> dq;          // stores indices
    vector<int> ans;

    // 🔹 Process first k elements
    for (int i = 0; i < k; i++) {

        // Remove smaller elements
        while (!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }

        dq.push_back(i);
    }

    // 🔹 Store answer for first window
    ans.push_back(nums[dq.front()]);

    // 🔹 Process remaining windows
    for (int i = k; i < nums.size(); i++) {

        // 🔸 Removal: out of window
        if (!dq.empty() && i - dq.front() >= k) {
            dq.pop_front();
        }

        // 🔸 Addition: remove smaller elements
        while (!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        // 🔸 Store current window answer
        ans.push_back(nums[dq.front()]);
    }

    return ans;
}