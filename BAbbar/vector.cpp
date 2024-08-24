#include<iostream>
#include<vector>

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


int main(){
    // int nums;
    vector<int> nums = {1,2,3,4};
    
    Solution(); 
}





















// void print(vector <int> v)

// {
//     int count = v.size();
//     cout<<"Elements of vector are : "<<endl;
//     for (int i = 0; i < count; i++)
//     {
//         cout<<v[i]<<endl;
//     }
    
// }





// int main(){
//     vector<int> v;
//     int count = 10;
//    int news =2;
//     for (int i = 0; i < count; i++)
//     {
//         v.push_back(news);
//         news++;
//     }
    
//     print(v); 
// }
