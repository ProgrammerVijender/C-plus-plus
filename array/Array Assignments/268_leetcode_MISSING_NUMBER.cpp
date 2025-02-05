// MY SOLUTION :- sum of ap wala formula = ( (first term + last term ) * n ) / 2 
/*
class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length , sum=0;
        int Totaln = n+1;
        int Totalsum = ( (n+1)*(n) ) /2;
        for(int i=0; i<n; i++)
        {
            sum += nums[i];
        }
        Totalsum = Totalsum - sum ;
        return Totalsum;
    }
}

*/


// Lakshay bhaiya ke solutions :-

// Approach 1 :-
/*
int sortingmethod(vector<int>& nums)
{   int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i] != i)
        {
            return i;
        }
    }
    
    return n;       
}
    
*/


// Approach 2 :-
/* 
int xorr(vector<int>&nums){
    int ans = 0;
    
    // 1. xor all values of array
    for(int i=0;i<nums.size();++i){
    ans ^= nums [i];
    }

    // 2. xor all range items [0, N]
    int n = nums. size();
    for (int i=0; i<=n;i++){
    ans ^= i;
    }
    
    return ans;
}

*/