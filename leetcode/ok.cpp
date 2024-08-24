#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int runningSum = 0;
        int size = nums.size();

        for (int i = 0; i < size; i++) {
            runningSum += nums[i];
            nums[i] = runningSum;
        }

        return nums;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 1, 1, 1};
    
    vector<int> result = solution.runningSum(nums);

    cout << "Output: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}






















// #include<iostream>
// using namespace std;

// void hello(int arr[], int size)
// {
//     int runningSum = 0;

//     for (int i = 0; i < size; i++)
//     {
//         runningSum += arr[i];
//         arr[i] = runningSum;
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[5] = {1, 1, 1, 1, 1};
//     int size = 5;
//     hello(arr, size);

//     return 0;
// }
