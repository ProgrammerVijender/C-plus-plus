// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
        
        
//         int sum = 0;
//         int maxsum;
//         // for(int y=1; y<=j)

//         for(int i=0; i<k; i++)
//         {
//             sum += nums[i];
//         }

//         maxsum = sum;

//         int i=0,j=k;
//         // double ans =0;
//         while(j<nums.size())
//         {
//             sum -= nums[i++];
//             sum += nums[j++];
//             maxsum = max(sum,maxsum);
//         }


//         double ans = maxsum;
//         cout<<ans;
//         ans = ans/k;

//         return ans;
//     }
// };