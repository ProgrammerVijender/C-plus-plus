#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
        int n = nums.size() -1;
        int x = k , z=n;
        int y = k;
        int ans[n];
        
        for(int j=0; j<n-x+1; j++)
        {
            nums[z] = nums[y];
            y--;
            z--;
        }
        for(int i=0; i<k; i++)
        {
             nums[i] = ans[i] ;
        }
        for(int i=0; i<k; i++)
        {   
            ans[i] = nums[y+1];
            y++;
        }
    }

int main(){
    vector<int> nums= { 1,2,3,4,5,6,7}; 
    int k=3;
    rotate(nums ,k);
    for(int i=0; i<nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}















// void hello(int arr[], int size)
// {   int j=0;

//     for(int i =0; i<size; i++)
//     {
//         if( arr[i] < 0)
//         {
//             swap(arr[i] , arr[j]);
//             j++;
//         }
//     }

//     for(int i =0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){ int j=0;
//     int arr[10] = {1,-6,3,5,-5,6,7,-6,10,-4};
//     int size=10;
//     hello(arr , size);

// return 0;
// }