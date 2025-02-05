
// approach 1:-

/*

class Solution {
public:
     int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int output = -1; // Initialize output
        
        for(int i = 0; i < n; i++) {
            int num = abs(nums[i]); // Take absolute value to handle negative numbers
            if (nums[num] < 0) {
                output = num;
                break;
            }
            nums[num] = -nums[num];
        }

        return output;
    }
};
*/


// approach 2:- swapping method

/*

class Solution {
public:
     int findDuplicate(vector<int>& nums) {
        
        while(nums[0] != nums[nums[0]])
        {
            swap(nums[0] , nums[nums[0]]);
        }

        return nums[0];
    }
};


*/
