#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            result[i] = nums[nums[i]];
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> permutation = {0, 2, 1, 5, 3, 4};

    vector<int> result = solution.buildArray(permutation);

    cout << "Output: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
