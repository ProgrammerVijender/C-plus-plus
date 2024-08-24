#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum = sum + arr[i];
            arr[i] = sum;
        }
        return arr;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {2, 7, 9, 5};

    // Call the runningSum function
    vector<int> result = solution.runningSum(arr);

    // Print the result
    cout << "Running Sum: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
