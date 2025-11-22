// #include<iostream>
// #include <vector>
// using namespace std;

// int solveUsingMemoisation(int capacity,int wt[],int profit[],int index,int n , vector<vector<int> > &dp)
// {
//     if(index >= n)
//     {
//         return 0;
//     }

//     if(dp[capacity][index] != -1)
//     {
//         return dp[capacity][index];
//     }

// int inc = 0;
// if(wt[index] <= capacity)
// {
//     inc = solveUsingMemoisation(capacity-wt[index],wt,profit,index+1,n,dp);
// }

// int exc = solveUsingMemoisation(capacity,wt,profit,index+1,n,dp);

//  dp[capacity][index] = max( inc,exc);
// return dp[capacity][index];
// }


// int main()
// {
//     // Test Case 1 :- ans is 220 :- 
//     // int capacity = 50;
//     // int wt[] = {10, 20, 30};

//     // int profit[]  = {60, 100, 120};
//     // int index = 0;
//     // int n = 3;

//      // Test Case 2 :-  ans is 3 :- 
//     // int capacity = 4;
//     // int wt[] = {4,5,1};

//     // int profit[]  = {1,2,3};
//     // int index = 0;
//     // int n = 3;

//     // Test Case 3 :- ans is 65 :-
//     int capacity = 6;
//     int wt[] = {1 ,2, 3};

//     int profit[]  = {10,15,40};
//     int index = 0;
//     int n = 3;

//     // 1. using recursion
//     // int ans = solveUsingRecursion(capacity,wt,profit,index,n);
//     // cout<< "Max Profit : " <<  ans <<endl;

//     // 2. using memoisation
//     // vector < vector < int > > dp(capacity+1,vector<int>(n+1,-1));
//     // 2.2
//     vector<vector<int> > dp(n, vector<int>(capacity+1, -1));
//     int ans = solveUsingMemoisation(capacity,wt,profit,index,n,dp);
//     cout<< "Max Profit : " <<  ans <<endl;




//     // for(auto i : dp)
//     // {
//     //     for(auto j : i)
//     //     {
//     //         cout<<j<<" ";
//     //     }
//     //     cout<<endl;
        
//     // }


//     return 0;
// }





#include <iostream>
#include <vector>
using namespace std;

int solveUsingMemoisation(int capacity, int wt[], int profit[], int index, int n, vector<vector<int>>& dp) {
    // Base Cases
    if (index >= n || capacity <= 0) {
        return 0;
    }

    // Check if already calculated
    if (dp[index][capacity] != -1) {
        return dp[index][capacity];
    }

    // Try including the item
    int include = 0;
    if (wt[index] <= capacity) {
        include = profit[index] + solveUsingMemoisation(capacity - wt[index], wt, profit, index + 1, n, dp);
    }

    // Try excluding the item
    int exclude = solveUsingMemoisation(capacity, wt, profit, index + 1, n, dp);

    // Store the result
    dp[index][capacity] = max(include, exclude);
    return dp[index][capacity];
}

int main() {
    // Test case 3
    int capacity = 6;
    int wt[] = {1, 2, 3};
    int profit[] = {10, 15, 40};
    int n = 3;

    // DP Table: dp[index][capacity]
    vector<vector<int>> dp(n, vector<int>(capacity + 1, -1));

    int ans = solveUsingMemoisation(capacity, wt, profit, 0, n, dp);
    cout << "Max Profit : " << ans << endl;

    return 0;
}